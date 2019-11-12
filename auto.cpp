#include "auto.h"

autos::autos(int x, int y, int width, int height, int movex, int movey, ACL_Image *img, rect r, int score): base(x,y,width,height,movex,movey,img,r){
	this->score = score;

};
autos::autos(autos &autos) :base(autos){
	score = autos.score;
};
autos::~autos() {};

void autos::move(rect m)
{
	if (x<m.x || x>(m.x + m.width - width))movex *= -1;
	if (y<m.y || y>(m.y + m.height - height))movey *= -1;
	x += movex;
	y += movey;
};
int autos::getscore() {
	return score;
};