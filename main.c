#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int a,b,sum;
	printf("請輸入第一個數字\n");
	scanf("%d",&a);
	printf("請輸入第二個數字\n");
	scanf("%d",&b);
	
	sum=a+b;
	printf("總和為%d\n",sum);
	return 0;
}
