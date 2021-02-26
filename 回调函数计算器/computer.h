#include<stdio.h>
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);
int Xor(int x, int y);
void menu();
void Calc(int(*pf)(int,int));
