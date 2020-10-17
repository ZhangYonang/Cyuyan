#include<stdio.h>
enum Color
{
	RED,
	YELLOW,
	BLUE,
 };
 int main()
 {
 	enum Color color=BLUE;
 	color=YELLOW;//BLUE可改为YELLOW（枚举常量特点） 
 	return 0;
  } 
