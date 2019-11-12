#include <stdio.h>
int main(){
 int i;//Ñ­»·Êı
 int n;
 int num=1;
 int m;//´æ´¢n/10
 int k;//´æ´¢n%10
 for(n=2;n>0;n++){
  m=n;
  for(i=0;i>-1;i++){
   k=m%10;
   m=m/10;
   if(k==1){
    num++;
   }
   if(m==0){
    break;
   }
   if(m==1){
    num++;break;
   }
  }
  if(n==num)
   break;
 }
 printf("n=%d\n",n);
 return 0;
}
