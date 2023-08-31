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
printf("请输入密码:");
scanf("%s", password);//password是数组名无须取地址

//getcahr();//读取\n
int ch = 0;
while ((ch = getchar()) != '\n')     //清理缓冲区代码至\n
{
    ;
}

printf("请确认密码(Y/N):");
int ret = getchar();
if ('Y' == ret)
{
    printf("Yes\n");
}
else
printf("No\n");
return 0;
}
