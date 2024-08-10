/*
第1关：开学第一考

任务描述
本关任务：编写一个代码程序解决开学第一考问题。

相关知识
开学的第一个周末，像往届一样，新生都会参加英语分级考试。所谓英语分级考试就是为了测试一下新生的英语水平，并将他们分成1～4，4个等级。分级规则如下：

95分（含95 分）以上为level4，只需修一个学期的大学英语；

85分（含85分）至95分为level3，需修大学英语两个学期；

75分（含75分）至85分为level2，需修3个学期的大学英语；

剩下的为level1，对不起，就只能修4个学期的大学英语了。

小明是刚18级计算机系的新生，他不小心知道了自己的分级考试成绩，于是乎他就迫切的想知道自己会被分在哪一个level，这不，就麻烦一下新生中大神小强，写一个小程序来判定一下小明会被分在哪一个level吧！

输入描述
输入一个整数 x 代表小明的分数

输出描述
输出小明被分在哪一个英语等级，level1、level2、level3、level4，如果分数不在[0,100]区间内，输出"Error!"（注意：不输出引号）

编程要求
根据提示，在右侧编辑器补充代码，编写一个代码程序解决开学第一考问题。

测试用例
平台会对你编写的代码进行测试：

测试输入：60；
预期输出：level1

测试输入：101；
预期输出：Error
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    //if (a>=95&&a<=100)
    if(a>=95&&a<=100)
        printf("level4");
    //else if (a>=85)
    else if(a>=85)
        printf("level3");
    //else if (a>=75)
    else if(a>=75)
        printf("level2");
    //else if (a>=0)
    else if(a>=0)
        printf("level1");
    //else printf("Error!");
    else
        printf("Error!");
    return 0;
}