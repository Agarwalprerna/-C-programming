#include<stdio.h>
#include<math.h>
#include<stdlib.h>
	
	//function to calculate x raised to power y
/*	
int power(int x, unsigned int y){
		if (y==0){
		return 1;}
		if(y%2==0){

		return power(x,y/2)*power(x,y/2);
    }
	 return x*power(x,y/2)*power(x,y/2);
}

//function to calculate order of number
int order(int n){
	int res =0;
	while(n){
		n=n/10;
	}
	return res;
}

int Armstrong(int x){
	int n = order(x);
	int temp = x , sum =0;
	while(temp){
		int r = temp%10;
		sum+= power(r,n);
		temp= temp/10;
	}
	
	if(sum==x)
	return 1;
	
	else 
	return 0;
}

int main(){
	int x;
	printf("enter any number:\n");
	scanf("%d",&x);

if (Armstrong(x)==1){
	printf("True\n");
}
else{
	printf("FALSE\n");
}
return 0;
}
*///

////////////////////////// roots of quadratic equation
/*
void quadratic_roots(int a, int b,int c){
	if(a==0){
		printf("its linear equation\n");
	}
	int d = (b*b)- (4*a*c);
	double sqrt_d = sqrt(abs(d));
	
	if(d>0){
		printf("roots are real\n");
		printf("%f , %f\n ", (double)(-b + sqrt_d)/(2*a), (double)(-b-sqrt_d)/(2*a));
	}
	else if(d==0){
		printf("roots are equal");
		printf("%f",(double)(-b/(2*a)));
	}
	else if (d<0){
		printf("roots are complex\n");
		printf(" %f + i%f  , %f - i%f\n",(double)(-b/ (2*a)), (sqrt_d/(2*a)), (double)(-b/(2*a)) , (sqrt_d/(2*a));
	}
	else{
		printf("INvalid");
	}
}

int main(){
	int a,b,c;
	printf("enter constants of equation\n");
	scanf("%d %d %d", &a,&b,&c);
	
	 quadratic_roots(a,b,c);
	 return 0;
}

*/////

/// reverse a number
/*
int main(){
	int N, ans=0;
	printf("enter a number: ");
	scanf("%d",&N);
	int temp =N;
	while(N!=0){
		ans = ans * 10 + (N%10);
		N = N/10;
	}
	printf("reverse of %d number = %d\n",temp,ans);
	if (N==0)
	  printf("again reverse of this number= %d",ans);
	return 0;
}
*/

////////////////////////////////////////////////////////// palindrome umber
/*
void check_palindrome(int N){
	int ans=0;
	int temp=N;
	while(N!=0){
		ans = ans*10 + (N%10);
		N=N/10;
	
	}
		int rev = ans;   //storing reversed number in rev 
		
		if(rev == temp){
			printf("%d is plaindrome number\n",temp);
		}
		else{
			printf("not a palindrome number\n");
		}
}

int main(){
	int N;
	printf("enter any number: ");
	scanf("%d",&N);
	
	//calling function
	check_palindrome(N);
	return 0;
}
*/

///////////////////////// two numbers are equalor not
int main(){
	int n1 ,n2;
	printf("enter two numbers: ");
	scanf("%d  %d",&n1,&n2);
	
	//using XOR - logic would be low or 0 if two numbers are same
	if(!(n1^n2)){
		printf("%d is equal to %d",n1,n2);
	}
	else{
		printf("these numbers are not equal\n");
	}
	return 0;
}















