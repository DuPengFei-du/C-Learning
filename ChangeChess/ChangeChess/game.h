#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void RowPrint(int tmp_row);
char IsWin(char board[ROW][COL], int row, int col);
int* PlayerMove(char board[ROW][COL], int row, int col);
void ComputerRandomMove(char board[ROW][COL], int row, int col);
void ComputerNearMove(char board[ROW][COL], int row, int col, int index[]);
