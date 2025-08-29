//Write a program to calculate compound interest
//Formula A= P( 1 +  r/100)^N -P
/*#include<stdio.h>
#include<math.h>
int main(){
	float R, N;
	int P;
	printf("Enter the value of P : ");
	scanf("%d", &P);
	printf("Enter the value of R : ");
	scanf("%f", &R);
	printf("Enter the value of N : ");
	scanf("%f", &N);
	float A= P*(pow((1 + R/100), N))- P;
	printf("The CI is %f", A);
	return 0;
}*/
//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    
    hours = total_seconds / 3600; 
    total_seconds %= 3600;        
    minutes = total_seconds / 60; 
    seconds = total_seconds % 60; 

 
    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}*/

