#include<stdio.h>

int main(){
	int n,m,min,max,i,GCD,LCM;
	printf("Enter m = "); scanf("%d",&m);
	printf("Enter n = "); scanf("%d",&n);
	while(m<0||n<0){
		printf("m va n phai la so nguyen duong");
		printf("Enter m = "); scanf("%d",&m);
		printf("Enter n = "); scanf("%d",&n);
	}
		if (m<n){
		min=m;
		max=n;
	}
	else{
		min=n;
		max=m;
	}
	for(i=1;i<=max;i++){
		if (m%i==0&&n%i==0){
			printf("%d ",i);
		}
	}
	
	
	
	if(m==0&&n==0){
		printf("khong co GCD");
	}
	else if(m==0&&n!=0){
		printf("\nUoc chung cua m va n la ");
		printf("GCD = %d",n);
	}
	else if(m!=0&&n==0){
		printf("\nUoc chung cua m va n la ");
		printf("GCD = %d",m);
	}
	else{
		GCD = 1;
		for(i=1;i<=min;i++){
		if (m%i==0&&n%i==0){
			GCD = i;
		}	
	}
		printf("\nUoc chung cua m va n la ");
		printf("%d",GCD);
		}
		LCM = m*n/GCD;
		printf("\nLCM = %d",LCM);
		return 0;
}
	
	
	
