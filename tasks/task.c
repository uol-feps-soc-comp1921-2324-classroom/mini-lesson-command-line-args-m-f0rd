#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ## Your task

// Inside the tasks/ folder, you will find task.c.

// This program asks the user for 2 integers, adds them together, and prints the result. At the moment, it uses a console interface.

// - Adapt this program to use command line arguments
// - Add appropriate validation 
// - test your program to make sure it works.

/**
 * argv[0] -> executable name
 * argv[1] -> num1
 * argv[2] -> num2
*/
int main(int argc, char *argv[]) {

    if (argc != 3){
        printf("Usage: ./tt <num1> <num2>\n");
        return 0;
    }
// remember: arguments are ALWAYS strings
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
