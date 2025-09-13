//Write a program to print the sum of the first n odd numbers.
/*#include<stdio.h>
int main(){
	int n, i;
	int sum;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%2!=0){
			sum+=i;
		}		
	}
	printf("The sum is %d", sum);
	return 0;
	
}*/



//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i;
    int product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i = i + 2) {
        product = product * i;
    }
    printf("Product is %d\n", product);
    return 0;
}
