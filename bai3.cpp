#include<stdio.h>
int main(){
	int N;
	int p,s,q,k,t;
	int tong;
	tong =0;
	k=0;
	printf("nhap so N ");
	scanf("%d", &N);
	int a[N];
	for(int i=2;i<=N;i++){
		a[i]=1;
	}
	for(int p=2;p*p<N;p++){
		if(a[p]==1){
			for(int j=p*p;j<=N;j++)
			a[j]=0;
		}
	}
	for(int i=2;i<=N;i++){
		if((a[i]==1) && (N%i==0)){
			q+=i;
			k++;
		}
	}
	printf("q:%d la tong cac uoc ngto cua N, co %d uoc nguyen to", q , k);
	
	for(int i=1;i<=N;i++){
	
	if(N%i==0){
		printf("\n so p =  %d",i);
		p+=i;
		s++;
	}
}
	tong=N+p+s-q-k;
printf("\n Vay ket qua la %d+%d+%d-%d-%d = %d",N,p,s,q,k,tong);
				
}