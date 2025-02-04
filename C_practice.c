#include<stdio.h>

	
/*	
	//calculating factorial using iterative method
	void factorial(int n){
		
		unsigned  long long int  factorial_value =1;
		int i;
		for(i=1;i<=n;i++){
			factorial_value = factorial_value*i;
		}
		printf("FACTORIAL of number %d = %lld\n",n,factorial_value);
	}
	
	//calculating factorial using recursive method
	int factorial_recursive(int N){
		if(N==0)
		return 1;
		
		return N*factorial_recursive(N-1);   //recursive call
	}
	int main(){
		int n,N;
		printf("enter 2 value:\n");
		scanf("%d",&n);
		scanf("%d",&N);
		factorial(n);
		
		printf("factorial of %d = %d\n",N,factorial_recursive(N));
		
		return 0;
	}
	
*/


////armstrong number
int main(){
int a ,sum=0;
long int n;
printf("enter any number:");
scanf("%ld",&n);

int t =n;  //storing in t variable
while(n>0){
	a =n%10;
	sum = sum +(a*a*a);
	n= n/10;
}	

if(t==sum){
	printf("yes it is armstrong number");
}
else{
	printf("not an armstriong number");
}
return 0;
}
