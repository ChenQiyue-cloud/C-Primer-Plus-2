/*6.编写一个程序，创建一个整型变量toes,并将toes设置为10.程序中还要
计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。*/
#include<stdio.h>
int main()
{
    const int toes = 10;
    printf("toes = %d\n",toes);
    printf("toes * 2 = %d\n",toes*toes);
    printf("toes ^ 2 = %d\n",toes*toes);

    return 0;
}
