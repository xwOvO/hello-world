#include <stdio.h>

int main(void)
{	
	int x = 6;
	int y = 12;
	int i = 0;
	int j;
	for(j = 0;i == 0 ;j++)
	{
		if(j % x == 0 && j % y == 0)
		{
			i = j;
		}
	}
	printf("%d��%d����С������Ϊ��%d",x,y,i);
	return 0;
}
