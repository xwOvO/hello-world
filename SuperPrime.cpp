//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数
#include <stdio.h>
#include <stdlib.h>
int judgePrime(int );
int main(){
	int primeNum[10000];//存放所有素数的数组 
	int superPrimeNum[10000];
	int index_primeNum = 0;      //primeNum的索引 
	int index_superPrimeNum = 0;
	int num;            //num将从100 ~ 10000;
	int i;
	float averager = 0;
	for(num = 100;num <= 10000;num++){
		if(judgePrime(num) == num){
			primeNum[index_primeNum] = num;
			index_primeNum++;
		}
	}
	for(i = 0;i < index_primeNum;i++){
		int prime = primeNum[i];
		int prime_digital_sum = (prime%10)+((prime/10)%10)+((prime/100)%10)+(prime/1000);
		int prime_digital_squarsum = (prime%10)*(prime%10)+((prime/10)%10)*((prime/10)%10)+((prime/100)%10)*((prime/100)%10)+(prime/1000)*(prime/1000);
		if(judgePrime(prime_digital_sum) == prime_digital_sum && judgePrime(prime_digital_squarsum) == prime_digital_squarsum){
			superPrimeNum[index_superPrimeNum] = prime;
			index_superPrimeNum++;
		}
	}
	for(i = 0;i < index_superPrimeNum;i++){
		printf("%d\n",superPrimeNum[i]);
		averager += superPrimeNum[i];
	}
	printf("%f",averager/index_superPrimeNum);
	system("pause");
	return 0;
}
int judgePrime(int num){
	int i;
	int times = 0;
	for(i = 2;i < num;i++){
		if(num % i == 0){
			times++;
		}
	}
	if(times != 0){
		return 0;
	}else{
		return num;
	}
}
