/*1.编写一个程序，调用一次printf()函数，把你的名和姓打印在一行。
再调用一次printf()函数，把你的名和姓分别打印在两行。然后，再调
用两次printf()函数，把你的名和姓打印在一行。输出应如下所示（当然
要把示例的内容换成你的名字）：*/
#include<stdio.h>
int main()
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler");

    return 0;
}
