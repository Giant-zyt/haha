#include "base.h""

base::base(int x, int y, int width,int height, int movex, int movey,ACL_Image *img,rect m) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->movex = movex;
	this->movey = movey;
	this->img = img;
	this->m = m;
};
base::base(base &base1) {
	this->x = base1.x;
	this->y = base1.y;
	this->width = base1.width;
	this->height = base1.height;
	this->movex = base1.movex;
	this->movey = base1.movey;
	img = base1.img;
	m = base1.m;
};
base::~base() {};


void base::draw(int width, int height) {
	putImageScale(img, x, y, width, height);
};
void base::draw() {
	putImageScale(img, x, y, width, height)
};
rect base::getrect() {
	rect m = { x,y,width,height };
	return m;
};