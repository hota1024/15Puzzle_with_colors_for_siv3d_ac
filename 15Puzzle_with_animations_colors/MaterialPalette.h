/*
MIT License

Copyright (c) 2017 hota1024

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#pragma once
#include <Siv3D.hpp>
#include <iostream>

namespace MaterialPalette
{
#define rgb(R,G,B) R,G,B
	constexpr auto ColorCount = 19;	//色の種類数
	constexpr auto LevelCount = 11;	//色のレベル数
	constexpr auto ItemCount = ColorCount * LevelCount; 	//色数

	const std::vector<int> Level{	//レベルのリスト
		0,
		50,
		100,
		200,
		300,
		400,
		500,
		600,
		700,
		800,
		900
	};

	//Material Black and White
	constexpr Color Black{ rgb(0,0,0) };
	constexpr Color White{ rgb(255,255,255) };
	
	//Material Red
	constexpr Color Red{ rgb(244,67,54) };
	constexpr Color Red50{ rgb(255,235,238) };
	constexpr Color Red100{ rgb(255,205,210) };
	constexpr Color Red200{ rgb(239,154,154) };
	constexpr Color Red300{ rgb(229,115,115) };
	constexpr Color Red400{ rgb(239,83,80) };
	constexpr Color Red500{ rgb(244,67,54) };
	constexpr Color Red600{ rgb(229,57,53) };
	constexpr Color Red700{ rgb(211,47,47) };
	constexpr Color Red800{ rgb(198,40,40) };
	constexpr Color Red900{ rgb(183,28,28) };
	const std::vector<Color> LRed{
		Red,
		Red50,
		Red100,
		Red200,
		Red300,
		Red400,
		Red500,
		Red600,
		Red700,
		Red800,
		Red900,
	};
	//Material Pink
	constexpr Color Pink{ rgb(233,30,99) };
	constexpr Color Pink50{ rgb(252,228,236) };
	constexpr Color Pink100{ rgb(248,187,208) };
	constexpr Color Pink200{ rgb(244,143,177) };
	constexpr Color Pink300{ rgb(240,98,146) };
	constexpr Color Pink400{ rgb(236,64,122) };
	constexpr Color Pink500{ rgb(233,30,99) };
	constexpr Color Pink600{ rgb(216,27,96) };
	constexpr Color Pink700{ rgb(194,24,91) };
	constexpr Color Pink800{ rgb(173,20,87) };
	constexpr Color Pink900{ rgb(136,14,79) };
	const std::vector<Color> LPink{
		Pink,
		Pink50,
		Pink100,
		Pink200,
		Pink300,
		Pink400,
		Pink500,
		Pink600,
		Pink700,
		Pink800,
		Pink900,
	};
	//Material Purple
	constexpr Color Purple{ rgb(156,39,176) };
	constexpr Color Purple50{ rgb(243,229,245) };
	constexpr Color Purple100{ rgb(225,190,231) };
	constexpr Color Purple200{ rgb(206,147,216) };
	constexpr Color Purple300{ rgb(186,104,200) };
	constexpr Color Purple400{ rgb(171,71,188) };
	constexpr Color Purple500{ rgb(156,39,176) };
	constexpr Color Purple600{ rgb(142,36,170) };
	constexpr Color Purple700{ rgb(123,31,162) };
	constexpr Color Purple800{ rgb(106,27,154) };
	constexpr Color Purple900{ rgb(74,20,140) };
	const std::vector<Color> LPurple{
		Purple,
		Purple50,
		Purple100,
		Purple200,
		Purple300,
		Purple400,
		Purple500,
		Purple600,
		Purple700,
		Purple800,
		Purple900,
	};
	//Material DeepPurple
	constexpr Color DeepPurple{ rgb(103,58,183) };
	constexpr Color DeepPurple50{ rgb(237, 231, 246) };
	constexpr Color DeepPurple100{ rgb(209, 196, 233) };
	constexpr Color DeepPurple200{ rgb(179, 157, 219) };
	constexpr Color DeepPurple300{ rgb(149, 117, 205) };
	constexpr Color DeepPurple400{ rgb(126, 87, 194) };
	constexpr Color DeepPurple500{ rgb(103, 58, 183) };
	constexpr Color DeepPurple600{ rgb(94, 53, 177) };
	constexpr Color DeepPurple700{ rgb(81, 45, 168) };
	constexpr Color DeepPurple800{ rgb(69, 39, 160) };
	constexpr Color DeepPurple900{ rgb(49, 27, 146) };
	const std::vector<Color> LDeepPurple{
		DeepPurple,
		DeepPurple50,
		DeepPurple100,
		DeepPurple200,
		DeepPurple300,
		DeepPurple400,
		DeepPurple500,
		DeepPurple600,
		DeepPurple700,
		DeepPurple800,
		DeepPurple900,
	};
	//Material Indigo
	constexpr Color Indigo{ rgb(63,81,181) };
	constexpr Color Indigo50{ rgb(232, 234, 246) };
	constexpr Color Indigo100{ rgb(197, 202, 233) };
	constexpr Color Indigo200{ rgb(159, 168, 218) };
	constexpr Color Indigo300{ rgb(121, 134, 203) };
	constexpr Color Indigo400{ rgb(92, 107, 192) };
	constexpr Color Indigo500{ rgb(63, 81, 181) };
	constexpr Color Indigo600{ rgb(57, 73, 171) };
	constexpr Color Indigo700{ rgb(48, 63, 159) };
	constexpr Color Indigo800{ rgb(40, 53, 147) };
	constexpr Color Indigo900{ rgb(26, 35, 126) };
	const std::vector<Color> LIndigo{
		Indigo,
		Indigo50,
		Indigo100,
		Indigo200,
		Indigo300,
		Indigo400,
		Indigo500,
		Indigo600,
		Indigo700,
		Indigo800,
		Indigo900,
	};
	//Material Blue
	constexpr Color Blue{ rgb(33,150,243) };
	constexpr Color Blue50{ rgb(227, 242, 253) };
	constexpr Color Blue100{ rgb(187, 222, 251) };
	constexpr Color Blue200{ rgb(144, 202, 249) };
	constexpr Color Blue300{ rgb(100, 181, 246) };
	constexpr Color Blue400{ rgb(66, 165, 245) };
	constexpr Color Blue500{ rgb(33, 150, 243) };
	constexpr Color Blue600{ rgb(30, 136, 229) };
	constexpr Color Blue700{ rgb(25, 118, 210) };
	constexpr Color Blue800{ rgb(21, 101, 192) };
	constexpr Color Blue900{ rgb(13, 71, 161) };
	const std::vector<Color> LBlue{
		Blue,
		Blue50,
		Blue100,
		Blue200,
		Blue300,
		Blue400,
		Blue500,
		Blue600,
		Blue700,
		Blue800,
		Blue900,
	};
	//Material LightBlue
	constexpr Color LightBlue{ rgb(3,169,244) };
	constexpr Color LightBlue50{ rgb(225, 245, 254) };
	constexpr Color LightBlue100{ rgb(179, 229, 252) };
	constexpr Color LightBlue200{ rgb(129, 212, 250) };
	constexpr Color LightBlue300{ rgb(79, 195, 247) };
	constexpr Color LightBlue400{ rgb(41, 182, 246) };
	constexpr Color LightBlue500{ rgb(3, 169, 244) };
	constexpr Color LightBlue600{ rgb(3, 155, 229) };
	constexpr Color LightBlue700{ rgb(2, 136, 209) };
	constexpr Color LightBlue800{ rgb(2, 119, 189) };
	constexpr Color LightBlue900{ rgb(1, 87, 155) };
	const std::vector<Color> LLightBlue{
		LightBlue,
		LightBlue50,
		LightBlue100,
		LightBlue200,
		LightBlue300,
		LightBlue400,
		LightBlue500,
		LightBlue600,
		LightBlue700,
		LightBlue800,
		LightBlue900,
	};
	//Material Cyan
	constexpr Color Cyan{ rgb(0,188,212) };
	constexpr Color Cyan50{ rgb(224, 247, 250) };
	constexpr Color Cyan100{ rgb(178, 235, 242) };
	constexpr Color Cyan200{ rgb(128, 222, 234) };
	constexpr Color Cyan300{ rgb(77, 208, 225) };
	constexpr Color Cyan400{ rgb(38, 198, 218) };
	constexpr Color Cyan500{ rgb(0, 188, 212) };
	constexpr Color Cyan600{ rgb(0, 172, 193) };
	constexpr Color Cyan700{ rgb(0, 151, 167) };
	constexpr Color Cyan800{ rgb(0, 131, 143) };
	constexpr Color Cyan900{ rgb(0, 96, 100) };
	const std::vector<Color> LCyan{
		Cyan,
		Cyan50,
		Cyan100,
		Cyan200,
		Cyan300,
		Cyan400,
		Cyan500,
		Cyan600,
		Cyan700,
		Cyan800,
		Cyan900,
	};
	//Material Teal
	constexpr Color Teal{ rgb(0,150,136) };
	constexpr Color Teal50{ rgb(224, 242, 241) };
	constexpr Color Teal100{ rgb(178, 223, 219) };
	constexpr Color Teal200{ rgb(128, 203, 196) };
	constexpr Color Teal300{ rgb(77, 182, 172) };
	constexpr Color Teal400{ rgb(38, 166, 154) };
	constexpr Color Teal500{ rgb(0, 150, 136) };
	constexpr Color Teal600{ rgb(0, 137, 123) };
	constexpr Color Teal700{ rgb(0, 121, 107) };
	constexpr Color Teal800{ rgb(0, 105, 92) };
	constexpr Color Teal900{ rgb(0, 77, 64) };
	const std::vector<Color> LTeal{
		Teal,
		Teal50,
		Teal100,
		Teal200,
		Teal300,
		Teal400,
		Teal500,
		Teal600,
		Teal700,
		Teal800,
		Teal900,
	};
	//Material Green
	constexpr Color Green{ rgb(76,175,80) };
	constexpr Color Green50{ rgb(232, 245, 233) };
	constexpr Color Green100{ rgb(200, 230, 201) };
	constexpr Color Green200{ rgb(165, 214, 167) };
	constexpr Color Green300{ rgb(129, 199, 132) };
	constexpr Color Green400{ rgb(102, 187, 106) };
	constexpr Color Green500{ rgb(76, 175, 80) };
	constexpr Color Green600{ rgb(67, 160, 71) };
	constexpr Color Green700{ rgb(56, 142, 60) };
	constexpr Color Green800{ rgb(46, 125, 50) };
	constexpr Color Green900{ rgb(27, 94, 32) };
	const std::vector<Color> LGreen{
		Green,
		Green50,
		Green100,
		Green200,
		Green300,
		Green400,
		Green500,
		Green600,
		Green700,
		Green800,
		Green900,
	};
	//Material LightGreen
	constexpr Color LightGreen{ rgb(139,195,74) };
	constexpr Color LightGreen50{ rgb(241, 248, 233) };
	constexpr Color LightGreen100{ rgb(220, 237, 200) };
	constexpr Color LightGreen200{ rgb(197, 225, 165) };
	constexpr Color LightGreen300{ rgb(174, 213, 129) };
	constexpr Color LightGreen400{ rgb(156, 204, 101) };
	constexpr Color LightGreen500{ rgb(139, 195, 74) };
	constexpr Color LightGreen600{ rgb(124, 179, 66) };
	constexpr Color LightGreen700{ rgb(104, 159, 56) };
	constexpr Color LightGreen800{ rgb(85, 139, 47) };
	constexpr Color LightGreen900{ rgb(51, 105, 30) };
	const std::vector<Color> LLightGreen{
		LightGreen,
		LightGreen50,
		LightGreen100,
		LightGreen200,
		LightGreen300,
		LightGreen400,
		LightGreen500,
		LightGreen600,
		LightGreen700,
		LightGreen800,
		LightGreen900,
	};
	//Material Lime
	constexpr Color Lime{ rgb(205,220,57) };
	constexpr Color Lime50{ rgb(249, 251, 231) };
	constexpr Color Lime100{ rgb(240, 244, 195) };
	constexpr Color Lime200{ rgb(230, 238, 156) };
	constexpr Color Lime300{ rgb(220, 231, 117) };
	constexpr Color Lime400{ rgb(212, 225, 87) };
	constexpr Color Lime500{ rgb(205, 220, 57) };
	constexpr Color Lime600{ rgb(192, 202, 51) };
	constexpr Color Lime700{ rgb(175, 180, 43) };
	constexpr Color Lime800{ rgb(158, 157, 36) };
	constexpr Color Lime900{ rgb(130, 119, 23) };
	const std::vector<Color> LLime{
		Lime,
		Lime50,
		Lime100,
		Lime200,
		Lime300,
		Lime400,
		Lime500,
		Lime600,
		Lime700,
		Lime800,
		Lime900,
	};
	//Material Yellow
	constexpr Color Yellow{ rgb(255,235,59) };
	constexpr Color Yellow50{ rgb(255, 253, 231) };
	constexpr Color Yellow100{ rgb(255, 249, 196) };
	constexpr Color Yellow200{ rgb(255, 245, 157) };
	constexpr Color Yellow300{ rgb(255, 241, 118) };
	constexpr Color Yellow400{ rgb(255, 238, 88) };
	constexpr Color Yellow500{ rgb(255, 235, 59) };
	constexpr Color Yellow600{ rgb(253, 216, 53) };
	constexpr Color Yellow700{ rgb(251, 192, 45) };
	constexpr Color Yellow800{ rgb(249, 168, 37) };
	constexpr Color Yellow900{ rgb(245, 127, 23) };
	const std::vector<Color> LYellow{
		Yellow,
		Yellow50,
		Yellow100,
		Yellow200,
		Yellow300,
		Yellow400,
		Yellow500,
		Yellow600,
		Yellow700,
		Yellow800,
		Yellow900,
	};
	//Material Amber
	constexpr Color Amber{ rgb(255,193,7) };
	constexpr Color Amber50{ rgb(255, 248, 225) };
	constexpr Color Amber100{ rgb(255, 236, 179) };
	constexpr Color Amber200{ rgb(255, 224, 130) };
	constexpr Color Amber300{ rgb(255, 213, 79) };
	constexpr Color Amber400{ rgb(255, 202, 40) };
	constexpr Color Amber500{ rgb(255, 193, 7) };
	constexpr Color Amber600{ rgb(255, 179, 0) };
	constexpr Color Amber700{ rgb(255, 160, 0) };
	constexpr Color Amber800{ rgb(255, 143, 0) };
	constexpr Color Amber900{ rgb(255, 111, 0) };
	const std::vector<Color> LAmber{
		Amber,
		Amber50,
		Amber100,
		Amber200,
		Amber300,
		Amber400,
		Amber500,
		Amber600,
		Amber700,
		Amber800,
		Amber900,
	};
	//Material Orange
	constexpr Color Orange{ rgb(255,152,0) };
	constexpr Color Orange50{ rgb(255, 243, 224) };
	constexpr Color Orange100{ rgb(255, 224, 178) };
	constexpr Color Orange200{ rgb(255, 204, 128) };
	constexpr Color Orange300{ rgb(255, 183, 77) };
	constexpr Color Orange400{ rgb(255, 167, 38) };
	constexpr Color Orange500{ rgb(255, 152, 0) };
	constexpr Color Orange600{ rgb(251, 140, 0) };
	constexpr Color Orange700{ rgb(245, 124, 0) };
	constexpr Color Orange800{ rgb(239, 108, 0) };
	constexpr Color Orange900{ rgb(230, 81, 0) };
	const std::vector<Color> LOrange{
		Orange,
		Orange50,
		Orange100,
		Orange200,
		Orange300,
		Orange400,
		Orange500,
		Orange600,
		Orange700,
		Orange800,
		Orange900,
	};
	//Material DeeoOrange
	constexpr Color DeeoOrange{ rgb(255,87,34) };
	constexpr Color DeeoOrange50{ rgb(251, 233, 231) };
	constexpr Color DeeoOrange100{ rgb(255, 204, 188) };
	constexpr Color DeeoOrange200{ rgb(255, 171, 145) };
	constexpr Color DeeoOrange300{ rgb(255, 138, 101) };
	constexpr Color DeeoOrange400{ rgb(255, 112, 67) };
	constexpr Color DeeoOrange500{ rgb(255, 87, 34) };
	constexpr Color DeeoOrange600{ rgb(244, 81, 30) };
	constexpr Color DeeoOrange700{ rgb(230, 74, 25) };
	constexpr Color DeeoOrange800{ rgb(216, 67, 21) };
	constexpr Color DeeoOrange900{ rgb(191, 54, 12) };
	const std::vector<Color> LDeeoOrange{
		DeeoOrange,
		DeeoOrange50,
		DeeoOrange100,
		DeeoOrange200,
		DeeoOrange300,
		DeeoOrange400,
		DeeoOrange500,
		DeeoOrange600,
		DeeoOrange700,
		DeeoOrange800,
		DeeoOrange900,
	};
	//Material Brown
	constexpr Color Brown{ rgb(121,85,72) };
	constexpr Color Brown50{ rgb(239, 235, 233) };
	constexpr Color Brown100{ rgb(215, 204, 200) };
	constexpr Color Brown200{ rgb(188, 170, 164) };
	constexpr Color Brown300{ rgb(161, 136, 127) };
	constexpr Color Brown400{ rgb(141, 110, 99) };
	constexpr Color Brown500{ rgb(121, 85, 72) };
	constexpr Color Brown600{ rgb(109, 76, 65) };
	constexpr Color Brown700{ rgb(93, 64, 55) };
	constexpr Color Brown800{ rgb(78, 52, 46) };
	constexpr Color Brown900{ rgb(62, 39, 35) };
	const std::vector<Color> LBrown{
		Brown,
		Brown50,
		Brown100,
		Brown200,
		Brown300,
		Brown400,
		Brown500,
		Brown600,
		Brown700,
		Brown800,
		Brown900,
	};
	//Material Grey
	constexpr Color Grey{ rgb(158,158,158) };
	constexpr Color Grey50{ rgb(250, 250, 250) };
	constexpr Color Grey100{ rgb(245, 245, 245) };
	constexpr Color Grey200{ rgb(238, 238, 238) };
	constexpr Color Grey300{ rgb(224, 224, 224) };
	constexpr Color Grey400{ rgb(189, 189, 189) };
	constexpr Color Grey500{ rgb(158, 158, 158) };
	constexpr Color Grey600{ rgb(117, 117, 117) };
	constexpr Color Grey700{ rgb(97, 97, 97) };
	constexpr Color Grey800{ rgb(66, 66, 66) };
	constexpr Color Grey900{ rgb(33, 33, 33) };
	const std::vector<Color> LGrey{
		Grey,
		Grey50,
		Grey100,
		Grey200,
		Grey300,
		Grey400,
		Grey500,
		Grey600,
		Grey700,
		Grey800,
		Grey900,
	};
	//Material BlueGrey
	constexpr Color BlueGrey{ rgb(96,125,139) };
	constexpr Color BlueGrey50{ rgb(236, 239, 241) };
	constexpr Color BlueGrey100{ rgb(207, 216, 220) };
	constexpr Color BlueGrey200{ rgb(176, 190, 197) };
	constexpr Color BlueGrey300{ rgb(144, 164, 174) };
	constexpr Color BlueGrey400{ rgb(120, 144, 156) };
	constexpr Color BlueGrey500{ rgb(96, 125, 139) };
	constexpr Color BlueGrey600{ rgb(84, 110, 122) };
	constexpr Color BlueGrey700{ rgb(69, 90, 100) };
	constexpr Color BlueGrey800{ rgb(55, 71, 79) };
	constexpr Color BlueGrey900{ rgb(38, 50, 56) };
	const std::vector<Color> LBlueGrey{
		BlueGrey,
		BlueGrey50,
		BlueGrey100,
		BlueGrey200,
		BlueGrey300,
		BlueGrey400,
		BlueGrey500,
		BlueGrey600,
		BlueGrey700,
		BlueGrey800,
		BlueGrey900,
	};

	const std::vector<std::vector<Color>> List = {	//色の二次元リスト
		LRed,
		LPink,
		LPurple,
		LDeepPurple,
		LIndigo,
		LBlue,
		LLightBlue,
		LCyan,
		LTeal,
		LGreen,
		LLightGreen,
		LLime,
		LYellow,
		LAmber,
		LOrange,
		LDeepPurple,
		LBrown,
		LGrey,
		LBlueGrey
	};
};

