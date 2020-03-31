/*7.许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出：
Smile!Smile!Smile!
Smile!Smile!
Smile!
该程序要定义一个函数，该函数要被调用一次打印一次“Smile!”,根据程序的需要使用该函数。*/
#include<stdio.h>
void Smile(void)
{
    printf("Smile!");
    return;
}
int main()
{
    Smile();
    Smile();
    Smile();
    putchar('\n');
    Smile();
    Smile();
    putchar('\n');
    Smile();
    putchar('\n');

    return 0;
}
