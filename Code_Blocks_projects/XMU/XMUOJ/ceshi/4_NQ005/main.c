/*
实数绝对值
描述

看着小鲁AC后开心的笑，小华也和他一起开心，于是继续出简单题帮助小鲁在微小的长进中建立编程的自信。

简单题第三题：求实数的绝对值。


输入
输入数据有多组，每组占一行，每行包含一个实数。



输出
对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。


输入样例 1

135
-247.00
输出样例 1

135.00
247.00
来源

5DG在线编程 http://122.51.69.77
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a=0;
    while((scanf("%lf",&a))!=EOF)
        printf("%.2lf\n",fabs(a));
    return 0;
}
