#include "acllib.h"


rect window;
ACL_Image imgbig, imgsmall, imgheart, imgbomb;
const int maxnum = 20;
int nownum=0;
void timeEvent(int num);
void keyEvent(int key, int event);
void paint(); 
void create();
int Setup()
{
	window.x = DEFAULT;
	window.y = DEFAULT;
	window.width = 600;
	window.height = 480;
	char filename[] = "test";
	initWindow(filename,window.x,window.y,window.width,window.height);
	
	loadImage("大鱼.bmp", &imgbig);
	loadImage("小鱼.bmp", &imgsmall);
	loadImage("水雷.bmp", &imgbomb);
	loadImage("桃心.bmp", &imgheart);

	create();

	registerTimerEvent(timeEvent);
	registerKeyboardEvent(keyEvent);

	
}

void timeEvent(int num)
{
	int i = 0;
	if (num)
	{
		if (nownum < maxnum)
			create();
	}
	else
		for (i = 0; i < nownum; i++)
		{

		}
	paint();
}

void keyEvent(int key, int event) 
{
	if (event!= KEY_DOWN)return;
	if (user);
};

void paint()
{
	beginPaint();
	clearDevice();
	int i = 0;
	endPaint();
}

void create() 
{

};
