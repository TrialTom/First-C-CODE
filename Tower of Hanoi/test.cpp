#include <iostream>
#include <cstdio>
using namespace std;

int cnt;

void move(int id, char from, char to) // 打印移动方式：编号，从哪个盘子移动到哪个盘子
{
    ++cnt; // 记录走过的步数
    printf("step %d: move %d from %c->%c\n", cnt, id, from, to);
}

void hanoi(int n, char x, char y, char z)
{
    if (n == 0)
        return;
    hanoi(n - 1, x, z, y);
    move(n, x, z);
    hanoi(n - 1, y, x, z);
}

//int main()
{
    int n;
    printf("Please enter the number of the plates:");
    while (~scanf("%d", &n) && n)
    {
        cnt = 0;
        printf("The following are the steps for the question\n");
        hanoi(n, '1', '2', '3');
        printf("There are %d steps in all.\nYou have solved the hanoi problems, congratulations!\n", cnt);
        printf("Would you like to continue?(y/n)");
        char ch; scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y')
            printf("Please enter the number of the plates:\n");
        else
        {
            printf("Here comes the end of the program. Bye\n");
            break;
        }
    }
    return 0;
}