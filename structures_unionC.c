#include<stdio.h>

/*
//structure declaration 
struct person{
		char name[30];
		int age;
		int salary;
		
	} var;   //declaration of variable with structure tmeplate
	
	//driver code
int main(){
	// initializing variable with intializer list 
	struct person var ={ "prerna agarwal", 21, 2000000};
	
	printf("details of person 1:\n ");
	printf("%s\n  age = %d\n salary = %d\n", var.name, var.age , var.salary);
	
	return 0;
	
}
*/

/////////////////////////////////////////////////////////////////// using typedef keyword 
/*
typedef struct {
          int x;
		  float y;	
} str1;

int main(){
	//creating structures variables using new names
	str1 var1 ={ 30,56.9};
	
	printf("var1.x = %d\n\t var1.y = %f\n",var1.x , var1.y);
	return 0;
}
*/

//////////////////////////////////////////////// nested structures 

//child structure declaration 
/*
struct child{
	char name[30];
	int age;
};

//parent structure declaration 
struct parent{
	char surname[30];
	struct child b;    //member structure inside the parent structure
};

int main(){
	struct parent var1 = { "goswami", "ram", 9	};
	
	//accessing the nested members
	printf("var1.surname = %s\n",var1.surname);
	printf("child name : %s\n",var1.b.name);
	printf("age %d\n",var1.b.age);
	
	return 0;
}
*/

///////////////////////////////////////////////////////////////// structure pointers 
/*
//structure declaration 
struct family{
	int members;
	char surname[30];
	int kids;
}var;

int main(){
	struct family var = { 5,"agarwal",3};
	
	//pointer declaration
	struct family *ptr = &var;
	
	//accessing structure members using structure pointers  using arrow operator ->
	printf("%s\n ", ptr->surname);
	printf("total family mebers = %d\n",ptr->members);
	
	return 0;
}
*/
//////////////////////////////////////////////////////////////// structure padding and packing

//declaring two strcutures with equal members for understanding the concept

struct str1{
	int x;
	int y;
};

struct str2{
	int a;
	
}  __attribute((packed))__ ;

int main(){
	printf("size of str1 : %d\n",sizeof(struct str1));
	printf("size of str2 : %d\n",sizeof(struct str2));
	
	return 0;
}
//////bi fields 











