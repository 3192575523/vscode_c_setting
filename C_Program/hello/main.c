#include <stdio.h>
#include <stdlib.h>
int main()
{
        char ch[6] = "FishC";
        int i;

        printf("请输入你想访问的字符序号(0~5)：");
        scanf("%d", &i);

        if (!(i >= 0 && i <= 5 && printf("%c\n", ch[i])))
        {
                printf("非法访问！\n");
        }

        
        system("pause");
        return 0;

}