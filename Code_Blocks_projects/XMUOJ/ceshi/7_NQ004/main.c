/*
求圆球的体积
描述

上一道j简单题轻松搞定，小华给小鲁出了第二道简单题，继续帮助小鲁建立信心。

第二道题题目如下：

给出一组圆球的半径，请计算出不同半径的圆球体积。


输入
首先输入整数N，表示有N组半径。

接着每行输入一个实数，表示半径，一共输入N行。


输出
每行输出一个实数，表示圆球的体积，实数保留三位小数。


输入样例 1

3
2.5
8.4
6.9
输出样例 1

65.450
2482.713
1376.055
来源

5DG在线编程 http://122.51.69.77
*/

#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1415926

int main()
{
    unsigned N=0;
    scanf("%u",&N);
    for(int i=0; i<N; i++)
    {
        double r=0;
        scanf("%lf",&r);
        double V=(4*Pi*r*r*r)/3;
        printf("%.3lf\n",V);
    }
    return 0;
}