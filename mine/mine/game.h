#define _CRT_SECURE_NO_WARNINGS
#define ROW 10
#define COL 10
#define ROWS ROW+2
#define COLS COL+2
#define main1 99
//首行得加上，不然不让用scanf
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void initialize(char board[ROWS][COLS], int rows, int cols, char a);
void appear(char board[ROWS][COLS], int rows, int cols);
void Setmine(char board[ROWS][COLS], int row, int col);
void player(char board[ROWS][COLS], int row, int col, char mine[ROWS][COLS]);