#pragma once
#include "acllib.h"
class base 
{
protected:
	int x, y, width, height,movex,movey;
	ACL_Image *img;
	rect m;
public:
	base(int x,int y,int width,int height,int movex,int movey,ACL_Image*img,rect m);
	base(base &base1);
	virtual ~base();

	virtual void move(rect m);
	void draw(int width,int height);
	void draw();
	rect getrect();
};