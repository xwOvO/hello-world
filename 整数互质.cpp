#include <stdio.h>

int main(void)
{
	int x = 21;
	int y = 15;
	int j;
	int i = 0;
	for(j = 1;j < 10;j++)
	{
		if(x%j==0 && y%j==0)
		{
			i++;	
		}
	}
	if(i == 1)
	{
		printf("%d和%d互质",x,y);	
	}
	else
	{
		printf("%d和%d不互质",x,y);	
	}

	return 0;
}
