/*
日期计算
描述

学会基本的输入输出、函数调用之后，小鲁对于新的挑战跃跃欲试。小华知道现在是帮助小鲁编程过程需要考虑周全的好时候，他给小鲁出了一道新题:

对于某个日期，请计算该日期是这一年的第几天。（需要考虑是否是闰年）


输入
输入多组数据，每组占一行，数据格式为YYYY/MM/DD组成


输出
输出一个整数，表示日期是本年的第几天。


输入样例 1

2008/06/01
2006/09/10
1920/05/31
2020/12/31
输出样例 1

153
253
152
366
来源

5DG在线编程 http://122.51.69.77
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y=0,m=0,d=0;
    while((scanf("%d/%d/%d",&y,&m,&d))!=EOF)
    {
        int table[11]= {31,28,31,30,31,30,31,31,30,31,30};
        if(m>1)
        {
            for(int i=m-2; i>=0; i--)
                d+=table[i];
            if(m>2)
                if(((!(y%4))&&(y%100))||(!(y%400)))
                    d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
