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
	printf("�����:> \n");
	
	
	while (1)
	{
		printf("������Ҫ�µ����꣺>\n");
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
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡 \n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
		int x = 0;
		int y = 0;
		printf("�����ߣ�>\n");
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
				printf("���ʤ�ˣ�\n");
				return 1;
			}

			else
			{
				printf("����ʤ����\n");
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
				printf("���ʤ�ˣ�\n");
				return 1;
			}

			else
			{
				printf("����ʤ����\n");
				return 1;
			}
		}
	}
	if (board[1][1] == board[2][2] && board[0][0] == board[1][1] && board[1][1] != ' ')
	{
		if (board[1][1] == '*')
		{
			printf("���ʤ�ˣ�\n");
			return 1;
		}

		else
		{
			printf("����ʤ����\n");
			return 1;
		}
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		if (board[1][1] == '*')
		{
			printf("���ʤ�ˣ�\n");
			return 1;
		}

		else
		{
			printf("����ʤ����\n");
			return 1;
		}
	}
	if (0 != IsFull(board, ROW, COL))
	{
		printf("ƽ�֣�\n");
		return 1;
	}
}