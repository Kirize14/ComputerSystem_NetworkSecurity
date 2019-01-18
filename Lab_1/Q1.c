#include <stdio.h>

int main()
{
    int number, reverse = 0;
    printf("Enter a number to reverse\n");
    scanf("%d", &number);
    /* %d is save integer in memory */
    while (number != 0)// If answer is not 0
    {
       reverse = reverse * 10;// Answer times by 10
       reverse = reverse + number%10;// Get denominator by from var number by 10
       number = number/10; // Divide answer by 10
    }
    printf("Reverse of entered number is = %d\n" ,reverse);
    return 0;
    //Some code are from https://www.programmingsimplified.com/c/source-code/c-program-reverse-number 
    // Still understand na
}
/* Example
input 1234
cycle 1:
	reverse = 0
	number = 1234
	-> reverse = reverse + number % 10 = 4 ( From 1234 % 10 )
	-> number = number / 10 = 123 ( From 1234/10 )
cycle 2:
        reverse = 4
        number = 123
	-> reverse = reverse * 10 = 40
        -> reverse = reverse + number % 10 = 43
	-> number = number / 10 = 12
cycle 3:
        reverse = 43
        number = 12
        -> reverse = reverse * 10 = 430
        -> reverse = reverse + number % 10 = 432
        -> number = number / 10 = 1
cycle 4:
        reverse = 432
        number = 1
        -> reverse = reverse * 10 = 4320
        -> reverse = reverse + number % 10 = 4321
        -> number = number / 10 = 0
cycle 5:
	reverse = 4321
	number = 0
	out of while loop
	return 0
*/


