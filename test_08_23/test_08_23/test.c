#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <errno.h>

//void GetMemory(char** p)
//{
//    *p = (char*)malloc(100);
//    
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);//需传地址
//    if (str == NULL)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    strcpy(str, "Hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}
//返回栈空间地址问题
char* GetMemory(void)
{
    char p[] = "hello world";
    return p;//返回p所指向的地址，但是此函数结束，p数组所在空间会释放,那么p将会变成野指针
}
void Test(void)
{
    char* str = NULL;
    str = GetMemory();
       printf(str);
}

int main()
{
    Test();

    return 0;
}