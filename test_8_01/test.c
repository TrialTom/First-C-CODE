
#include <stdio.h>
#include <Windows.h>
#include<stdlib.h>
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("*******1,play 0.exit******\n");
	printf("**************************\n");
}
void game()
{
	int str = 0;
	char board[ROW][COL] = { 0 };

	InitBoard(board, ROW, COL);

	DisplayBoard(board,ROW,COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		str = IsWin(board, ROW, COL);
		if (str == 1)
			break;
		Sleep(1000);
		system("cls");
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		str = IsWin(board, ROW, COL);
		if (str == 1)
			break;
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(1000);
			system("cls");
			printf("三子棋\n");
			game();
			
			break;
		case 0:
			printf("退出游戏！！\n");
			Sleep(1000);
			break;
		default:
			printf("输入错误，请重新输入！！\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}