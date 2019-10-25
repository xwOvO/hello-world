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
