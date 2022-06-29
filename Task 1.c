// To swap value with call by reference

#include<stdio.h>

void swap(int *,int  *); //Declaration

void main()

{

    int P,Q;

    printf("\nEnter The Value Of P : ");

    scanf("%d",&P);

    printf("\nEnter The Value Of Q : ");

    scanf("%d",&Q);

    printf("\nValues Before Calling Swap : ");

    printf("\nP=%d\tQ=%d",P,Q);

    swap(&P,&Q); //Passing address of variable

    printf("\n********************");

     printf("\nValues After Calling Swap : ");

      printf("\nP=%d\tQ=%d",P,Q);

}

void swap(int *a,int *b) //Collecting address

{

    int t;

    t=*a;

    *a=*b;

    *b=t;

}

 
