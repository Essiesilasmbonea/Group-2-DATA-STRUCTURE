#include<stdio.h>

int array(int *p,int *q);
int main(){
int *p,*q,i;
int A[10],B[10];
array(&A[i],&B[i]);



return 0;
}

int array(int *p,int *q){
	
	int A[10];
	int B[10];
	int i;	
p=&A[i];
q=&B[i];

printf("enter the first array elements\n");
for (i=0; i<10; i++){
	scanf("%d", &A[i]);
}

printf("enter the second array elements \n");
for (i=0; i<10; i++){
	scanf("%d", &B[i]);
}
for (i=0; i<10; i++){
	if(p[i]==q[i]){
	printf("true\n");
	}
	else{ 
	printf("false\n");}
}

 
	
	}
		/*start
	function declaration
	declaration of pointer variable,and array
	function Calling
	Assign elelmenet in the array
	Assign address in the pointer
	loop for decision making
	Test condition if(p[i]==q[i])
	reurn true
	else
	return false
	
     End 
	
	
	)*/
