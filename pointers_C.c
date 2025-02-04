#include<stdio.h>



/*	
	int a = 10;
	int *y = &a;
	printf("%d\n",a);     //value stored in variable 
	printf("%u\n",&a);    //address of stored value in variable
	printf("%u\n",y);      // pointer ne jo value store ki hai  --> basically adress of variable 
	printf("%d\n",*y);    // gives stored value in variable 
	printf("%u\n",&y);    //address of pointer 
	
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////    basic arithmetic operation 
/*
int x[5] = {10,20,30,40,50};
int *p ;                         // wild pointer
p = &x[1];                       // normal poninter

printf("%d\n",x[0]);
printf("%d\n",*p);
printf("%d\n",*p++);
	printf("%d\n",++*p);
	printf("%d\n",*++p);
	printf("%d\n",*(p+3));
	
p = &x[2];
printf("%d\n",*(p-2));	
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////   Accesing array elements thrugh pointers
/*
char arr[5]= {'a','b','c','d','e'};
char *ptr = arr;         //by default vo first element ko point krega 
int i;

for(i=0;i<5;i++){
	printf("%c\n",*(ptr+i));
}

//changing the value of first and third element of array 
*ptr = 'z';                        // a -> z
*(ptr + 2) = 'x';                     

for(i=0;i<5;i++){
	printf("%c\n",*(ptr+i));
}

*/
////////////////////////////////////////////////////////////////////////////////  NULL pointers
/*
int a = 400;
int *ptr = NULL;
printf("%p",ptr)
*/


////////////////////////////////////////////////////////////////////////////////// pointers in function
/*
void swap(int *a , int *b);   //declaring the function prototype
int main(){
	int m = 20;             // passing the arguments 
	int n = 10;
	swap(&m ,&n);          //calling th efunction by reference
	printf("%d %d",m,n);
}

void swap(int *a , int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
*/

//////////////////////////////////////////////////////////////////////////////////  array of pointers

#include<string.h>
int main()
{
	//lets take charachter array
	//remember each string elements in array has memory location and each charachter in each string element as memory address as well.
	char *ptr[] = {"prerna","agarwal","ishika","tejas"};
	
  
	printf("string = %s\n",*ptr);
	printf("%u\n",&ptr);
	printf("string = %s\n",*ptr +1);    //moves ahead by 1 charachter ;output - rerna    
	printf("%s\n",*ptr + 2);
	printf("string = %s\n",*(ptr+2));

return 0;	
}












