#include "user.h"

user::user(int x, int y, int width, int height, int movex,int movey ,ACL_Image *img, rect m, int score):base(x, y, width, height,movex,movey, img, m)
{
	this->score = score;
};
user::user(user &user1) :base(user1)
{
	this->score = user1.score;
};
user::~user() {};

void user::move(int x, int y)
{

};
void move(int key);
void move(rect r);

int collision(rect m);
int getscore();
void setscore(int a);
void addscore(int a);

