#include<stdio.h>
int main(){

/*float n1 , n2 , sum, difference , multiply , division;
char operation ;

printf("enter any two numbers: ");
scanf("%f" "%f",&n1,&n2);

printf("what operation would you lie to perform :\n");
printf(" '+' = sum\n  ' - '= subtraction\n '*' = multiplication\n '/' = division\n");
scanf("%c",&operation);

sum = n1+n2;
difference = n1-n2;
multiply = n1*n2;
division = n1/n2;

switch(operation){
	
	case '+':
		printf("output is %f", sum);
		break;
	case '-':
		printf("output is %f ", difference);
		break;
		
	case '*':
		printf("output is %f", multiply);
		break;
	case '/':
		printf("output is %f ", division);
		break;	
}

return 0;
	*/
/*char x;
printf("enter any alphabet letter: ");
scanf("%c", &x);

if( x>= 'a' && x<= 'z')
printf("it is an alphabet");

else
printf("not");

	
*/	

//divide two floATING NUMBERS and print the result in integer only 
/*float a , b;
printf("enter two floating numbers: ");
scanf("%f" "%f" ,&a ,&b);
int c ;
c=a/b;
printf("result is %d",c);
return 0;     */

// cloth showroom 
// DONT USE IF ELSE IF CONDITION IN SWITCH CASE : CODE WILL NOT PERFORM THE DESIRED TASK

int amnt;
printf("enter the purchaasing amount: ");
scanf("%d",&amnt);

char z;
printf("enter the type of cloth you have purchased'M' = millcloth and 'H'= handloom \n");
scanf("%c" ,&z);

float x;

  switch(z){

	
	case 'M':
		if(amnt>=0 && amnt<=100){
			x = amnt;
			printf("your total amount is %d" , x);
		}
		else if(amnt>=101 && amnt<=200){
			x = amnt - ((amnt*5)/100);
			printf("your total amount after reducting 5% discount is %f", x);
		}
		else if (amnt>=201 && amnt<=300){ 
	        x = amnt -((amnt*7.5)/100);
	        printf("%f" , x);
		}
		
		else if (amnt>300){
			x = amnt - ((amnt*10)/100);
			printf("your total amount fter deducting 10%discount id %f",x);
			}
		else
		printf("enter any amount");

        break;
    
    case 'H':
    	if(amnt>=0 && amnt<=100){
			x = amnt - ((amnt*5)/100);
			printf("your total amount is %d" , x);
		}
		else if(amnt>=101 && amnt<=200){
			x = amnt - ((amnt*7.500));
			printf("your total amount after reducting 5% discount is %f", x);
		}
		else if (amnt>=201 && amnt<=300){ 
	        x = amnt -((amnt*10)/100);
	        printf("%f" , x);
		}
		
		else if(amnt>300){
			x = amnt - ((amnt*15)/100);
			printf("your total amount fter deducting 10%discount id %f",x);
			}
		else
		printf("enter valid amnount");
    	
    default:
    	printf("enter valid item");

}
return 0;
}
