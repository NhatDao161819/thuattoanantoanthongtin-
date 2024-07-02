#include<stdio.h>
#include<math.h>
int main(){
    int n,t,p,d;
   printf("nhap n ");
   scanf("%d", &n);
  
   d=pow(10,n-1);
   n=pow(10,n)-1;
   int a[n];
   for(int i=d;i<=n;i++){
   	a[i]=1;
   }
     for( p=2;p<n;p++){
   	t = n/p;
   		for(int i=2;i<=t;i++)
   			a[p*i]=0;
		   
	   }
   for(int i=d;i<n;i++)
    {
        if (a[i]==1)
        {
            printf("%d ",i);
        }
    }
   
}
