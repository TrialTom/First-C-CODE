#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j == col - 1)
			{
				printf(" %c \n", board[i][j]);
			}
			else
			printf(" %c |", board[i][j]);
			
		}
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j == col - 1)
					printf("---\n");
				else
					printf("---|");
			}
		}
		
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:> \n");
	
	
	while (1)
	{
		printf("请输入要下的坐标：>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！ \n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
		int x = 0;
		int y = 0;
		printf("电脑走：>\n");
		while (1)
		{
			x = rand() % ROW;
			y = rand() % COL;
			if (board[x][y] == ' ')
			{
				board[x][y] = '$';
				break;
			}
		}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
}

int IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ')
		{
			if (board[i][1] == '*')
			{
				printf("你获胜了！\n");
				return 1;
			}

			else
			{
				printf("电脑胜利！\n");
				return 1;
			}
		}
		
	}
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			if (board[1][i] == '*')
			{
				printf("你获胜了！\n");
				return 1;
			}

			else
			{
				printf("电脑胜利！\n");
				return 1;
			}
		}
	}
	if (board[1][1] == board[2][2] && board[0][0] == board[1][1] && board[1][1] != ' ')
	{
		if (board[1][1] == '*')
		{
			printf("你获胜了！\n");
			return 1;
		}

		else
		{
			printf("电脑胜利！\n");
			return 1;
		}
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		if (board[1][1] == '*')
		{
			printf("你获胜了！\n");
			return 1;
		}

		else
		{
			printf("电脑胜利！\n");
			return 1;
		}
	}
	if (0 != IsFull(board, ROW, COL))
	{
		printf("平局！\n");
		return 1;
	}
}