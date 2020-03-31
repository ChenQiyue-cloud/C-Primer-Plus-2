/*3.编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。*/
#include<stdio.h>
int main()
{
    int age,live_days;

    printf("Please enter your age:");
    scanf("%d",&age);

    live_days = 365 * age;
    printf("You lived %d days.\n",live_days);

    return 0;
}
