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
//    GetMemory(&str);//�贫��ַ
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
//����ջ�ռ��ַ����
char* GetMemory(void)
{
    char p[] = "hello world";
    return p;//����p��ָ��ĵ�ַ�����Ǵ˺���������p�������ڿռ���ͷ�,��ôp������Ұָ��
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