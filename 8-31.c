#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
/* {
    int i = 1;
    while (i < 10)
    {
        if (5 == i)
            continue;


        printf("%d ", i);
        i++;
    }
    }

    return 0;*/;

 int main()
 {
char password[20] = { 0 };
printf("����������:");
scanf("%s", password);//password������������ȡ��ַ

//getcahr();//��ȡ\n
int ch = 0;
while ((ch = getchar()) != '\n')     //��������������\n
{
    ;
}

printf("��ȷ������(Y/N):");
int ret = getchar();
if ('Y' == ret)
{
    printf("Yes\n");
}
else
printf("No\n");
return 0;
}
