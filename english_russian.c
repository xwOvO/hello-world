#include <stdio.h>
int main(void){
	int home,R,E,no,both;
	printf("Travel Agency");
	scanf("%d",&home);
	printf("English");
	scanf("%d",&E);
	printf("Russian");
	scanf("%d",&R);
	printf("Neither");
	scanf("%d",&no);
	both=(R+E)-(home-no);
	if(home<=0||(E+no)>home||(R+no)>home||E<0||R<0||no<0){
		printf("date error");
	}
	else{
		printf("both can speak:%d",both);
		
	}
}
