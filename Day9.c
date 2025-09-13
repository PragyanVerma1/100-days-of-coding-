//Write a program to find the roots of a quadratic equation and categorize them.
/*#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;   
    float d; 
	  printf("Name- Pragyan Verma\nSAP ID - 590028276\nCourse- BCA\nBatch- B5");
    printf("\n-----------------\n");          
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);     
    d = b*b - 4*a*c;
    printf("Roots are for positive : %f",(-b + sqrt(d))/(2*a));
	  printf("\n Roots are for negative : %f",(-b - sqrt(d))/(2*a));
    return 0;
}*/




/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/

#include<stdio.h>
int main(){
	float per;
	printf("Enter the percentage : ");
	scanf("%f", &per);
	if (per>=90 && per<=100){
		printf("Grade A");
	}
	else if (per>=80 && per<=89){
		printf("Grade B");
	}
	else if (per>=70 && per<=79){
		printf("Grade C");
	}
	else if (per>=60 && per<=69){
		printf("Grade D");
	}
	else if (per<60){
		printf("Grade F");
	}
	else{
		printf("Invalid percentage");
	}
	
	
}
