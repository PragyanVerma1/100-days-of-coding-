//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
/*#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
    return 0;
}*/




//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main(){
	int day;
	printf("Enter the day num of the week : ");
	scanf("%d", &day);
	switch(day){
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tues");
			break;
		case 3:
			printf("Wed");
			break;
		case 4:
			printf("Thrus");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Sat");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid day");
	}	
}
