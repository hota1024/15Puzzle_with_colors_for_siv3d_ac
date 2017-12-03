#pragma once
#include <Siv3D.hpp>
#include "MaterialPalette.h"

class Tile
{
	int32 number;
	Font font{ Size / 2,L"Roboto"};
	Vec2 drawPos;
	Vec2 nowDrawPos;
	Vec2 deltaDrawPos;
	Vec2 pos;

	Color c_start;
	Color c_end;

	double time;
	bool m_isAnimation;
public:
	//TODO コントローラー対応をする
	Tile();
	Tile(int32 number);
	~Tile();

	const static int32 Size;

	void draw(Vec2 start,int index = 0);
	void update(float addtime = 0.1f);
	Rect rect(Vec2 start);

	int32 getNumber();
	Tile &setNumber(int32 number);

	Vec2 getPos();
	Tile &setPos(Vec2 pos, bool changeNowDrawPos = false);
	Tile &setPos(Vec2 pos, Vec2 nowDrawPos);
	Tile &setColor(Color start,Color end);

	bool isEmpty();
	bool isNumber();

	bool isAnimation();
};

