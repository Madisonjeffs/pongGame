#pragma once

#include<string>

struct Dim2Di
{

	int x, y;
};


struct Dim2Df
{
	float x, y;
};



namespace GC
{

	const Dim2Di SCREEN_RES{ 1200,800 };


	const char SPACE{ 32 };
	const char ESCAPE_KEY{ 27 };



}