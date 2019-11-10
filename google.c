#include <stdio.h>

int main(){
	int i;//Ñ­»·Êý 
	int n;
	int num=1;
	int m;//´æ´¢n/10
	int k;//´æ´¢n%10 
	for(n=10;n>0;n++){
		m=n;k=n;
		for(i=0;i>-1;i++){
			k=k%10;
			m=m/10;
			if(m==0){
				break;
			}
			if(m==1){
				num++;
			}
			if(k==1){
				num++;
			}
		}
		if(n==num)
			break;
	}
	printf("n=%d\n",n);
	return;
}
