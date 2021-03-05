#include<stdio.h>
#include<math.h>
int check(int n){
	int i;
	if(n<2){
		return 0;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,i;
	float s1,s2,s3;
	printf("Enter n = "); scanf("%d",&n);
	while (n<=5){
		printf("n must be > 5, please reenter!");
		printf("\nEnter n = "); scanf("%d",&n);
	}
	while(n>5)
	{
	s1=0;s2=1;s3=0;
	for(i=1;i<=n;i++){
		s1=s1+i;
		s2=s2*i;
		s3=s3+(float)1/i;
	}
	printf("s1 = %.0f",s1);
	printf("\ns2 = %.0f",s2);
	printf("\ns3 = %.4f",s3);
	printf("\n");
	printf("\nEnter n = "); scanf("%d",&n);
	if(check(n)==1){
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}}
	return 0;	
	}
	
