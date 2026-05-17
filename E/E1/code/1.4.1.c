#include<stdio.h>

int main (void)
{
    int x = 2;
    if(x>0)
    {
        //需要加格式化字符串%，来进行类型转换说明，否则printf只会把x当作一个字符来输出
        printf("%d is positive.\n",x);
        //不加格式化字符串，直接填入x的输出结果如下：
        printf("x is positive.\n");
    }
    return 0;
    //至于剩下具体的请看文档1.4.1
}