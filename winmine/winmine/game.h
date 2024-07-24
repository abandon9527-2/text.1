#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void nume();
void binboard(char board[ROW][COL], int row, int col);
void display(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
//void win(char board[ROW][COL], int row, int col);
//char tf(char board[ROW][COL]);
//char win(char board[ROW][COL]);