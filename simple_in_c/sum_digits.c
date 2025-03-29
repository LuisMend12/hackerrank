#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int digits = 0, sum = 0;
    
    while (n) {
        sum += (n % 10); n /= 10;
    }
    
    printf("%d", sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}