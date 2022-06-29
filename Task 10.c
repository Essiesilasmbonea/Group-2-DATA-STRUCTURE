#include<stdio.h>
#include<string.h>
int main(){
	char str1[50], str2[50], temp[50];
	printf("Enter the first string:\n ");
	scanf("%s",&str1);
	
	printf("Enter the second string:\n ");
	scanf("%s",&str2);
	
	printf("\nString before swap:\n");
	printf("First string = %s\nSecond String = %ss", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	
	printf("\nString after swap:\n");
	printf("First string = %s\nSecond String = %s", str1, str2);
	return 0;
	
}

