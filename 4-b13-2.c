#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void hanoi(int n, char src, char tmp, char dst)
{
    static int i = 1;
    if (n == 1)
    {
        printf("%5d%3d", i++, n); printf("# "); printf("%c", src); printf("-->"); printf("%c\n", dst);
    }
    else
    {
        hanoi(n - 1, src, dst, tmp);//前n-1层搬到中间柱子上
        printf("%5d%3d", i++, n); printf("# "); printf("%c", src); printf("-->"); printf("%c\n", dst);
        hanoi(n - 1, tmp, src, dst);
    }
}

int main()
{

    char src, tmp, dst;
    int layer;
    while (1)
    {
        printf("请输入汉诺塔的层数(1-16)\n");
        scanf("%d",&layer);
        if (!(layer <= 16 && layer >= 1))
        {
            while (getchar()!= '\n')
                ;
            continue;
        }
        else
        {
            while (getchar() != '\n')
                ;
            break;
        }
    }
    
    while (1) 
    {
        printf("请输入起始柱(A-C)\n");
       scanf("%c",&src);
        if (!(src == 'a' || src == 'A' ||
            src == 'B' || src == 'b' ||
            src == 'C' || src == 'c'))
        {
            while(getchar()!= '\n')
                ;
            continue;
        }
        else
        {
            while (getchar() != '\n')
                ;
            break;
        } 
    }
    
    while (1)
    {
        printf( "请输入目标柱\n");
        scanf("%c",&dst);
        if (!(dst == 'a' || dst == 'A' ||
            dst == 'B' || dst == 'b' ||
            dst == 'C' || dst == 'c'))
        {
            continue;
        }
        else
        {
            if (dst == src)
            {
                printf("目标柱("); printf("%c", dst); printf(")不能与起始柱("); printf("%c", src); printf(")相同\n");
                while (getchar() != '\n')
                    ;
                continue;
            }
            else
            {
                while (getchar() != '\n')
                    ;
                break;
            }
        }

    }
    if (src == 'A' || src == 'a')
        src = 'A';
    if (src == 'B' || src == 'b')
        src = 'B';
    if (src == 'C' || src == 'c')
        src = 'C';
    if (dst == 'A' || dst == 'a')
        dst = 'A';
    if (dst == 'B' || dst == 'b')
        dst = 'B';
    if (dst == 'C' || dst == 'c')
        dst = 'C';
    for (int i = 0; i < 3; i++)
    {
        if ('A' + i == src || 'A' + i == dst)
            ;
        else
        {
            tmp = 'A' + i;
            break;
        }
    }
    printf("移动步骤为:\n");
    hanoi(layer, src, tmp, dst);
    return 0;
}