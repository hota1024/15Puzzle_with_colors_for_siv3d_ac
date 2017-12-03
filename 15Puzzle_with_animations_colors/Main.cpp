#include <Siv3D.hpp>
#include "MaterialPalette.h"
#include "Board.h"

void Main() {

	if (!FontManager::Register(L"Roboto-Regular.ttf")) return;

	Board board;

	while (System::Update())
	{
		ClearPrint();
		board.update();
		board.draw();
	}
}
