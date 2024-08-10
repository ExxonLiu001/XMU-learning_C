/*
求连续整数和
描述

小华立志想要成为未来的数学家，迅速的从数字中找到需要的数字，并且迅速的完成计算是他的必备能力。

小华给自己设计了一个算数测试，想要超越高斯一年级的水平。

一年级的高斯计算的是从1开始连续100个数字的和，小华要计算的是从a开始连续n个数字的和。

输入数据分为两行，第一行是一个整数a，第二行包含若干整数，其中第一个大于0的数是n。

请计算从a开始n个连续整数的和。

数据范围:

1<=a<=10000

1<=n<=10000


输入
输入数据分为两行，第一行是一个整数a，第二行包含若干整数，其中第一个大于0的数是n。


输出
输出一个整数，即从a开始n个连续整数的和。


输入样例 1

1
-3 -4 -13 0 -7 100 208 12 -9
输出样例 1

5050
来源

5DG在线编程 http://122.51.69.77
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    short a=0,b=0;
    scanf("%hd",&a);
    for(; b<=0;)
        scanf("%hd",&b);
    int s=a;
    for(short i=a+1; i-a<b; i++)
        s+=i;
    printf("%d\n",s);
    return 0;
}