//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。

#include <stdio.h>

int main(void){
	int a[4],temp[4];
	int i,y,x;
	printf("input 5 numbers\n");
	for(i=0;i<=4;i++){
		scanf("%d",&a[i]);	
	}
	for(x=0;x<4;x++){
		for(y=x;y<5;y++){
			if(a[x]<a[y]){
				temp[x]=a[x];
				a[x]=a[y];
				a[y]=temp[x];
			}
		}
	}
	printf("MAX:");
	for(i=0;i<=4;i++){
		printf("%d",a[i]);
	}
}
