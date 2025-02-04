#include<stdio.h>
/*
int main(){
	
	unsigned int a =5 , b=9;
	printf("a = %u , b = %u\n", a,b);
	printf("a&b= %u\n",a & b);
	printf("a|b = %u\n",a|b);
	printf("a^b = %u\n", a^b);
	printf("~b = %u\n", b = ~b);
	printf("b<<1 = %u\n",b<<1);
	printf("b>>1 = %u\n",b>>1);
	
	//actual output  would  be in interger becoz we used data type as unsigned int 
	//though  the each operation( and , or,XOR, not , shift left , shift right  results in bits) 
	
	return 0;

}
*/


// left sfht and right shift should not be used for negative numbers

/// find odd occuring element in array   by using biwise XOR ^ operator

/*
int findOdd(int arr[] , int n){
	int ans=0 , i;

	for(i=0 ;i<n;i++){
		ans ^= arr[i];    //performing XOR between arrays	
	}
	return ans;
}
int main(){
	int arr[] = {3  ,12 ,8 ,8 ,12,56,3};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("the ODD occuring elements in the array is %d",findOdd(arr,n));

return 0;
}
*/

///////////////////////////// bitwise operator should not be used in place of logical operators 

// C program to demonstrate  the difference between & and &&
/*
int main(){
	int x = 2, y =5;
	(x & y)? printf("True"): ("False");
	(x && y)? printf("True"): ("False");
	return 0;
	
	//	&: Bitwise operation (compares individual bits of numbers).  like 2 = 0010 and 5 = 101 in binary 
   // &&: Logical operation (evaluates the truth value of entire numbers).    it considers NON zero value as TRUE while 0 as FALSE
}
*/


//////////////////////////// left shift and right ship operator are equivalent to multiplication and division by 2 respectively
/*
int main()
{
	int x = 5;
	printf("x<<1 = %d\n",x<<1);          //10
	printf("x>>1 = %d\n",x>>1);         // 2
	printf("x>>2 = %d\n",x >>2);          //1
	return 0;
}

*/

////////////////////////////  bitwise AND (&) operator can be used to find odd and even numbers quickly rather than  modulus
/*
int main(){
	int x;
/*	printf("enter any number= ");
	scanf("%d",&x);
	(x & 1)? printf("ODD") : printf("EVEN");
	return 0;
} 

*/


////////////////////////// bitwise NOT ~ operation

int main(){
	int x = -5;
	printf("%d",~x);  //For a positive number, applying ~ results in a negative number.
                      //For a negative number, applying ~ results in a positive number.
}


