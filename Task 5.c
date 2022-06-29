/* A program to Compute Statistics for a set of numbers
(average, maximum, minimum and Standard deviation)
*/
#include<stdio.h>
#include<math.h>
int main()
{
//variable declaration
int i,n;
int max,min,sum=0,sum1=0;
float average,SD;
printf("Enter number of numbers to process:\n");
scanf("%d",&n);



int randArray[n];
for(i=0;i<n;i++){
randArray[i]= rand() % 100;
}
//displaying auto generated numbers
printf("Numbers entered by the User are:\n");
for(i=0;i<n;i++){
printf("%4d",randArray[i]);
}
//computing Average value
for(i=0;i<n;i++)
{
sum=sum+randArray[i];
}
average=sum/n;
//computing maximum number
max=min=randArray[0];
for(i=0;i<n;i++)
{
if(randArray[i]>max){
max=randArray[i];}
}
//computing minimum number
for(i=0;i<n;i++)
{
if(randArray[i]<min){
min=randArray[i];} 
}
//For computing Standard deviation
for(i=0;i<n;i++){
sum1=sum1+pow((randArray[i]-average),2);
}
SD=sqrt(sum1/n);
//Printing the Output 
printf("\nStatistics Computed are:\n");
printf("Average=%f\n", average);
printf("Maximum number=%d\n",max);
printf("Minimum number=%d\n",min);
printf("Standard deviation=%f",SD);
return 0;
}

            


