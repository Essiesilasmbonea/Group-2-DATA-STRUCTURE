#include <math.h>
#include <stdio.h>

int MAX(int array[], int N);
int MIN(int array[], int N);
float SD(int array[], int N);
int AVE(int array[], int N);
int main() {
    int i, max, min,N,Ave;
    int array[N];
    float Sd;
    printf("Enter size of array ");
     scanf("%d",&N);
    printf("Enter %d elements:\n",N );
    for (i = 0; i < N; ++i){
        scanf("%d", &array[i]);
    }
    
    printf("The %d elements entered are : \n",N);
     for (i = 0; i < N; ++i){
        printf("  %d \n", array[i]);
    }
    
    max = MAX(array,N);
    min = MIN(array,N); 
    Ave = AVE(array,N);
    Sd = SD(array,N);
    
    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);
    printf("The average of element in array: %d\n",Ave);
    printf("\nStandard Deviation = %.2f", Sd);
    
   
    return 0;
}

float SD(int array[], int N){

    int sum = 0.0, mean ;
    int i; 
    float SD=0.0;
    for (i = 0; i < N; i++) {
        sum += array[i];
    }
    mean = sum / N;
    for (i = 0; i < N; i++) {
        SD += pow(array[i] - mean, 2);
    }
    return sqrt(SD / N);
}

int AVE(int array[], int N) {
    float sum = 0.0, Average =0.0;
    int i;
    for (i = 0; i < N; i++) {
        sum += array[i];
    }
    Average = sum/N;
   return Average;
}

int MAX(int array[], int N)
{
    int i,max=array[0];
    for (i = 0; i < N; ++i) {
		    if(array[i] > max)
		    {
		       max=array[i];
		    }
   }
        return max;
}
 
int MIN(int array[], int N)
{
    int i,min=array[0];
    for (i = 0; i < N; ++i) {
		    if(array[i]< min)
		    {
		       min=array[i];
		    }
   }
        return min;
}

