#pragma once
#include "base.h"

class user :
	public base
{
	int score;
public:
	user(int x,int y,int width,int height,int movex,int movey,ACL_Image *img,rect m,int score);
	user(user &user1);
	~user() ;

	void move(int x, int y);
	void move(int key);
	void move(rect r);

	int collision(rect m);
	int getscore();
	void setscore(int a);
	void addscore(int a);

};
