#include<stdio.h>
#include<math.h>
int main (){
int a,b,tong;
printf("nhap so A: "); scanf("%d", &a);
printf("\nnhap so B: "); scanf("%d", &b);
int q[b+1];
for(int i=2;i<=b;i++)
q[i]=1;
for(int p=2;p*p<=b;p++){
	if(q[p]==1){
		for(int j=p*p;j<=b;j+=p){	
		q[j]=0;
	}
	}
}
for(int i=a;i<=b;i++){
	if(q[i]==1 && i>1){
		printf(" %d ", i);
		tong+=i;
	}
}
printf("\ntong la %d ", tong );
}
