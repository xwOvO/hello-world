//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
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
