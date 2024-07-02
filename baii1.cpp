//Một số gọi là Q-prime khi nó có đúng 4 ước số nguyên dương. Hãy viết chương trình in ra
//các số Q-Prime nhỏ hơn hoặc bằng một số N cho trước nhập từ bàn phím
#include<stdio.h>
#include<stdbool.h>
bool check(int n){
int d =2 ;
for(int i=2;i<=n/2;i++){
	if(n%i==0)
	d++;
}
return d==4;
}
int main (){
	int n;
	do{
			printf("nhap so N:");
		scanf("%d", &n);
}	while(n<0);

	for(int i=0;i<=n;i++){

			if(check(i))
			printf("%d la so Qprime\n",i);
		}
	return 0;
}