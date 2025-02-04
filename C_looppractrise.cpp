#include<stdio.h>
int main(){

//sum of series 1+4-9+16-25+36........n^2	
/*	int n , i ,sum=1;
	printf("enter value of n: ");
	scanf("%d",&n);
	
	
	for(i=1;i<=n ;i++){
		if(i%2==0){
			printf("+%d",i*i);
			sum = sum + i*i;
		}
		else if(i==1){
			printf("%d",i*i);
			sum =1;
		}
		else{
			printf("-%d",i*i);
			sum = sum-i*i;
		}
    		
	}
	printf(" \n%d" ,sum);
	return 0;
	*/
	
	
//	x-x^3/3! + x^5/5! -x^7/7! ......

/* int x ,n,i,a,k,l,j;
float sum=0;
int factorial = 1;
int pow =1;

printf("enter value of x and n (no. of terms )");
scanf("%d" "%d",&x,&n);

for(i=1 ;i<=n;i++){
	a = (2*i)-1;
	
	for(j=1 ;j<=a;j++){
		factorial = factorial*j;
	}
	
	
	for(k=1;k<=a;k++){
		pow = pow *x;  
	} 
	
	if(i%2==0){
		 l =-1;
	}
    else{
    	 l =1;
	}
	
	sum = sum + (l*pow)/factorial;
	}
	printf("sum of sseries is %f", sum);
}
*/


// srong number or no
 /* nt n,sum=0 ,t,i,factorial=1,a;
printf("enter any number: ");
scanf("%d",&n);
t =n;

while(n>0){
	a =n%10;
	
	for(i=1;i<=a ;i++){
		factorial = factorial*i;
	}
	
	sum = sum + factorial;
	n = n/10;
}

if(sum==t){
	printf("this is strong number");
}
else{
	printf("this is not strong number");
}

return 0;

*/

//pattern printing 
                            //12345
                            //1234
                            //123
                           //12
                           //1
/*int n ,i ,j;

printf("enter the value of n ");
scanf("%d",&n);

for(i=1 ; i<=n;i++){
	for(j=1;j<=n-i+1 ;j++){
		printf("%d",j);
	}
	printf("\n");
}
return 0;
}
*/

                                //    *
                                //   * *
                            //      * * *
/*int i ,j,n;
printf("enter the value of n");
scanf("%d",&n);

for (i=1;i<=n;i++){
	
	for(j=1;j<=n-i;j++){
		printf(" ",j);
	}
	for(j=1;j<=i;j++){
		printf(" *",j);
	}
	printf("\n");
}
return 0;
}
*/

/////////////////////////
/*int n,i,j;
printf("enter the value of n: ");
scanf("%d",&n);

for(i=1 ;i<=n;i++){
	for(j=1;j<=i;j++){
		printf(" %d",j);
	}
	printf("\n");
}
for(i=n-1;i>=1;i--){
	for(j=1;j<=i;j++){
		printf(" %d",j);
	}
	printf("\n");
}
return 0;
}
*/

////////////////////////////////////////////
int n,i,j;
printf("enter the value of n");
scanf("%d",&n);

for(i=1;i<=n;i++){
	
	for(j=1;j<=n;j++){
		if(j<=i){
			printf("%d",j);
		}
		else{
			printf(" ");
		}
	}
	for(j=n;j>=1;j--){
		if(j<=i){
			printf("%d",j);
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
return 0;
}

