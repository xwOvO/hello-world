#include <stdio.h>
int main(){
	int i,j;//Ñ­»·Êý
	int num[4];
	while(i<5){
		scanf("%d",&num[i]);
		i++;
	} 
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(num[i]<num[j]){
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	int value=10000*num[0]+1000*num[1]+100*num[2]+10*num[3]+1*num[4];
	for(j=2;j<value;j++){
		i=1;
		if(value%j==0){
			value=value-i;
		}else
		{
			printf("%d",value);
			break;
		}
	}
	return 0;
}
