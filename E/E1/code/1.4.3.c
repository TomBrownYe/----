#include <stdio.h>

int main(void)
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
if (x<3 && y>3)
	printf("Test OK!\n");

//这里可以注释掉来验证是否正确

else if (x>=3 && y>=3)
	printf("Test OK!\n");
    
///////////////////////////
else if (z>3 && x>=3)
	printf("Test OK!\n");

else if (z<=3 && y>=3)
	printf("Test OK!\n");
else
	printf("Test failed!\n");
    
    return 0;

}