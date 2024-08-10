/*

第1关：简单的数列求和

任务描述
本关任务：编写一个代码程序解决简单的数列求和问题。

相关知识
再来，有通项公式：a_n=1/(n+1)+2/(n+1)+⋯+n/(n+1)(n≥1)，求前n项和S_n

输入描述
输入n

输出描述
输出前n项和S_n（保留4位小数）

编程要求
根据提示，在右侧编辑器补充代码，编写一个代码程序解决简单的数列求和问题。

测试用例
平台会对你编写的代码进行测试：

测试输入：5；
预期输出：7.5000
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    double a=0,s=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(double j=1; j<=i; j++)
            a+=j/(i+1);
        s+=a;
        a=0;
    }
    printf("%.4f",s);
    return 0;
}
