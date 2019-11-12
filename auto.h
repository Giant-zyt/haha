#pragma once
#include "base.h"

class autos :
	public base
{
	int score;
public:
	autos(int x, int y, int width, int height, int movex, int movey,ACL_Image *img,rect r,int score);
	autos(autos &autos);
	~autos();

	void move(rect m);
	int getscore();
};
