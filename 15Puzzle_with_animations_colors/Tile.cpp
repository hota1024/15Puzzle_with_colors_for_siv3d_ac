#include "Tile.h"



const int32 Tile::Size = 64 + 16;


Tile::Tile() : Tile(-1)
{
}


Tile::Tile(int32 number) : number(number)
{
	nowDrawPos = Vec2::Zero;
	deltaDrawPos = Vec2::Zero;
	time = 0;
	m_isAnimation = false;
}


Tile::~Tile()
{
}



void Tile::draw(Vec2 start,int index) {
	if (number < 0) return;
	if (number == 0) return;
	Rect((start + nowDrawPos).asPoint(), Size).draw({
		c_start,c_end,
		c_start,c_end
	});

	Vec2 fontpos = start + nowDrawPos + Vec2(Size, Size) / 2;
	font(number).drawAt(start + nowDrawPos + Vec2(Size, Size) / 2, MaterialPalette::White);
}


void Tile::update(float addtime) {
	nowDrawPos = EaseIn(deltaDrawPos, drawPos, Easing::Quad, time);
	if (!isAnimation()) return;
	time += addtime;
	if (time >= 1.0) {
		time = 1;
		m_isAnimation = false;
	}
}



Rect Tile::rect(Vec2 start) {
	return Rect((start + drawPos).asPoint(), Size);
}


int32 Tile::getNumber() {
	return number;
}


Tile &Tile::setNumber(int32 number) {
	this->number = number;
	return *this;
}


Vec2 Tile::getPos() {
	return pos;
}


Tile &Tile::setPos(Vec2 pos, bool changeNowDrawPos) {
	this->pos = pos;
	this->deltaDrawPos = nowDrawPos;
	this->drawPos = pos * Size;
	this->time = 0;
	this->m_isAnimation = true;
	if (changeNowDrawPos) deltaDrawPos =  nowDrawPos = this->drawPos;
	return *this;
}


Tile &Tile::setPos(Vec2 pos, Vec2 nowDrawPos) {
	setPos(pos).nowDrawPos = nowDrawPos;
	deltaDrawPos = nowDrawPos;
	return *this;
}


Tile &Tile::setColor(Color start, Color end) {
	c_start = start;
	c_end = end;
	return *this;
}


bool Tile::isEmpty() {
	return number == 0;
}


bool Tile::isNumber() {
	return number > 0;
}


bool Tile::isAnimation() {
	return m_isAnimation;
}