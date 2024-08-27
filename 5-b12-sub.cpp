/* 班级 学号 姓名 */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return 0只是一个示例，可改变 */

/* 不允许定义任何形式的外部全局、静态全局、宏定义、只读变量 */
#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;
/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char str[])
{
    int lenth = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (lenth = 0;; lenth++)
    {
        if (str[lenth] != '\0')
            ;
        else
            break;
   }
    return lenth; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcat(char s1[], const char s2[])
{
    int lenth = tj_strlen(s1);
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i=0;i<tj_strlen(s2);i++)
    {
        s1[i +lenth] = s2[i];
    }
    s1[lenth+tj_strlen(s2)] = '\0';
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncat(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth1 = tj_strlen(s1);
    int lenth2 = tj_strlen(s2);
    if (len >= lenth2)
    {
        tj_strcat(s1, s2);
    }
    else
    {
        for (int i = 0; i <len; i++)
        {
            s1[i + lenth1] = s2[i];
        }
        s1[lenth1 +len] = '\0';
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcpy(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth1 = tj_strlen(s1);
    int lenth2 = tj_strlen(s2);
    for (int i = 0; i <= lenth2; i++)
    {
        if (i < lenth2)
        {
            s1[i] = s2[i];
        }
        else
            s1[i] = '\0';
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncpy(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth = len < tj_strlen(s2) ? len : tj_strlen(s2);
    for (int i = 0; i < lenth; i++)
    {
        s1[i] = s2[i];
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char s1[], const char s2[])
{
    int a = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0; i < (tj_strlen(s1) > tj_strlen(s2) ? tj_strlen(s1) : tj_strlen(s2)); i++)
    {
        if (int(s1[i]) == int(s2[i]))
            ;
        else
        {
            a = (int(s1[i]) - int(s2[i]));
        }
    }
    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasecmp(const char s1[], const char s2[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0; i < (tj_strlen(s1) > tj_strlen(s2) ? tj_strlen(s1) : tj_strlen(s2)); i++)
    {
        if (int(s1[i]) == int(s2[i]))
            ;
        else
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
            {
                b = int(s1[i] )+ 'a' - 'A';
            }
            else
                b = int(s1[i]);
            if (s2[i] >= 'A' && s2[i] <= 'Z')
            {
                c = int(s2[i]) + 'a' - 'A';
            }
            else
                c = int(s2[i]);
            a = b - c;
            if (a != 0)
                break;
            else
                ;
        }
    }
    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char s1[], const char s2[], const int len)
{
    int a = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth1 = tj_strlen(s1);
    int lenth2 = tj_strlen(s2);
    int lower_lenth = lenth1 < lenth2 ? lenth1 : lenth2;
    if (len > lower_lenth)
    {
       a= tj_strcmp(s1, s2);
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (s1[i] == s2[i])
                ;
            else
            {
                a = int(s1[i]) - int(s2[i]);
                break;
            }
        }
    }
    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char s1[], const char s2[], const int len)
{
    int a = 0;
    int b = 0;
    int c = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth1 = tj_strlen(s1);
    int lenth2 = tj_strlen(s2);
    int lower_lenth = lenth1 < lenth2 ? lenth1 : lenth2;
    if (len > lower_lenth)
    {
        a=tj_strcasecmp(s1, s2);
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (s1[i] == s2[i])
                ;
            else 
            {
                if (s1[i] >= 'A' && s1[i] <= 'Z')
                {
                    b = int(s1[i]) + 'a' - 'A';
                }
                else
                    b = int(s1[i]);
                if (s2[i] >= 'A' && s2[i] <= 'Z')
                {
                    c = int(s2[i]) + 'a' - 'A';
                }
                else
                    c = int(s2[i]);
                a = b - c;
                if (a != 0)
                    break;
                else
                    ;
            }
        }
    }
    return a; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strupr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth = tj_strlen(str)
        ;
    for (int i = 0; i < lenth; i++)
    {
        if (int(str[i]) <= 'z' && int(str[i]) >= 'a')
        {
            str[i] = char(int(str[i]) + 'A' - 'a');
        }
        else
            ;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlwr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth = tj_strlen(str)
        ;
    for (int i = 0; i < lenth; i++)
    {
        if (int(str[i]) <= 'Z' && int(str[i]) >= 'A')
        {
            str[i] = char(int(str[i]) + 'a' - 'A');
        }
        else
            ;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char str[], char ch)
{
    int place = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = 0; i < tj_strlen(str); i++)
    {
        if (str[i] == ch)
        {
            place = i+1;
            break;
        }
        else
            ;
    }
    return place; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char str[], const char substr[])
{
    int a = 0;
    int b = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth1 = tj_strlen(str);
    int lenth2 = tj_strlen(substr);
    for (int i = 0; i < lenth1; i++)
    {
        if (str[i] != substr[0])
            ;
        else
        {
            for (int j = 0; j <lenth2; j++)
            {
                if (str[j + i] == substr[j])
                {
                    a = 1;
                }
                else
                {
                    a = 0;
                    break;
                }
            }
            if (a == 1)
            {
                b = i+1;
                break;
            }
            else
                ;
        }
    }
    return b; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char str[], const char ch)
{
    int place = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    for (int i = tj_strlen(str)-1; i >= 0; i--)
    {
        if (str[i] == ch)
        {
            place = i + 1;
            break;
        }
        else
            ;
    }
    return place; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char str[], const char substr[])
{
    int a = 0;
    int b = 0;
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int lenth1 = tj_strlen(str);
    int lenth2 = tj_strlen(substr);
    for (int i = lenth1-1; i>=0; i--)
    {
        if (str[i] != substr[lenth2-1])
            ;
        else
        {
            for (int j = lenth2-1; j>=0; j--)
            {
                if (str[i+j+1-lenth2] == substr[j])
                {
                    a = 1;
                }
                else
                {
                    a = 0;
                    break;
                }
            }
            if (a == 1)
            {
                b = i - lenth2 + 2;
                break;
            }
            else
                ;
        }
    }
    return b; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrev(char str[])
{
    int len = tj_strlen(str);
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
     for (int i = 0; i < len / 2; i++)
      {
          char a = str[i];
          str[i] = str[len - 1 - i];
          str[len - 1 - i] = a;
     }
    return 0; //return值可根据需要修改
}
