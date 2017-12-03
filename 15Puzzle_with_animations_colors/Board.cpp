#include "Board.h"



Vec2 Board::GetDrawStartPos() {
	return {
		Window::Center().x - width * Tile::Size / 2,
		Window::Center().y - height * Tile::Size / 2,
	};
}


Board::Board()
{
	init();
}


Board::~Board()
{
}


Board &Board::init() {
	state = State::Shuffle;
	shuffleCount = 0;
	uint32 number = 1;
	uint32 index = 0;
	for (size_t y = 0; y < height; y++)
	{
		for (size_t x = 0; x < width; x++)
		{
			if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
				tiles[index] = Tile()
					.setNumber(-1)
					.setPos({ x,y }, true);
			}
			else {
				tiles[index] = Tile()
					.setNumber(number == (width - 2) * (height - 2) ? 0 : number)
					.setPos({ x, y }, Vec2(Tile::Size * width / 2, Tile::Size * height / 2))
					.setColor(MaterialPalette::List[Random(0, (int)MaterialPalette::List.size() - 1)][5], MaterialPalette::List[Random(0, (int)MaterialPalette::List.size() - 1)][5]);
				number++;
			}
			index++;
		}
	}
	return *this;
}


Board &Board::shuffle(uint32 count) {
	for (size_t i = 0; i < count; i++) {
		auto before = tiles;
		auto target = emptyTile().getPos();
		switch (Random(0, 3))
		{
		case 0:
			target.x++;
			break;
		case 1:
			target.x--;
			break;
		case 2:
			target.y++;
			break;
		case 3:
			target.y--;
			break;
		default:
			break;
		}
		MoveTile(target);
		if (memcmp(before,tiles,size)) continue;
	}
	return *this;
}


void Board::update() {
	switch (state)
	{
	case Board::State::Shuffle:
		if (shuffleCount == 100) {
			state = State::Game;
			break;
		}
		shuffle(1);
		shuffleCount++;
		for (size_t i = 0; i < size; i++)
		{
			tiles[i].update();
		}
		break;
	case Board::State::Game:
		for (size_t i = 0; i < size; i++)
		{
			tiles[i].update(0.2);
		}
		mouseInput();
		keyInput();
		break;
	default:
		break;
	}
	
}


void Board::draw() {
	int index = 0;
	for (size_t y = 0; y < height; y++)
	{
		for (size_t x = 0; x < width; x++)
		{
			getPointTile({ x, y })
				.draw(GetDrawStartPos(), index);
			index++;
		}
	}
}


void Board::keyInput() {
	if (!(Input::KeyUp | Input::KeyDown | Input::KeyLeft | Input::KeyRight).clicked) return;
	auto target = emptyTile().getPos();
	if (Input::KeyUp.clicked) {
		target.y++;
	}
	if (Input::KeyDown.clicked) {
		target.y--;
	}
	if (Input::KeyLeft.clicked) {
		target.x++;
	}
	if (Input::KeyRight.clicked) {
		target.x--;
	}
	MoveTile(target);
}


void Board::mouseInput() {
	for (size_t y = 0; y < height; y++)
	{
		for (size_t x = 0; x < width; x++)
		{
			if (getPointTile({ x, y }).rect(GetDrawStartPos()).leftClicked) MoveTile({ x,y });
		}
	}
}


Tile &Board::findTile(uint32 number) {
	for (size_t i = 0; i < size; i++)
	{
		if (tiles[i].getNumber() == number) return tiles[i];
	}
}


Tile &Board::getPointTile(Vec2 pos) {
	for (size_t i = 0; i < size; i++)
	{
		if (tiles[i].getPos() == pos) return tiles[i];
	}
}


Tile &Board::emptyTile() {
	return findTile(0);
}


bool Board::MoveTile(Vec2 pos) {
	if (!getPointTile(pos).isNumber()) return false;
	if (
		getPointTile({ pos.x,pos.y - 1 }).isEmpty() ||
		getPointTile({ pos.x,pos.y + 1 }).isEmpty() ||
		getPointTile({ pos.x - 1,pos.y}).isEmpty() ||
		getPointTile({ pos.x + 1,pos.y}).isEmpty()
		) {
		getPointTile(pos).setPos(emptyTile().getPos());
		emptyTile().setPos(pos);
		return true;
	}
	return false;
}