/*
第2关：单词个数统计

任务描述
本关任务：编写一个代码程序解决单词个数统计问题。

相关知识
做腻了数的题目，小明决定做做字符串处理的题目。这不，小明找到了这样一道题：输入一行字符，统计其中有多少个单词，单词之间用空格，逗号，或句号分隔开。

输入描述
长度不超过100000的一行字符，由空格，逗号，句号和字母组成

输出描述
包含的单词数

编程要求
根据提示，在右侧编辑器补充代码，编写一个代码程序解决单词个数统计问题。

测试用例
平台会对你编写的代码进行测试：

测试输入：Life is a journey, not a destination.；
预期输出：7
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[100001]= {0};
    fgets(A,1E5+1,stdin);
    unsigned int s=0;
    /*
    for(int i=0; i<1E5; i++)
    {
        if(((A[i]!=' ')&&(A[i]!=',')&&(A[i]!='.')&&(A[i]!='\n')&&(A[i]!=0)&&(A[i]!='\n'))&&((A[i+1]==' ')||(A[i+1]==',')||(A[i+1]=='.')||(A[i+1]==0)))
            s++;
    }
    */
    for(int i=0; i<1E5; i++)
    {
        if((((A[i]>='A')&&(A[i]<='Z'))||((A[i]>='a')&&(A[i]<='z')))&&(((A[i+1]<'A')||(A[i+1]>'Z'))&&((A[i+1]<'a')||(A[i+1]>'z'))))
            s++;
    }
    printf("%u\n",s);
    return 0;
}