#include <stdio.h>
#include <unistd.h>
#define CODE_SUM 1991

/* Welcome to the coding challenge! Don't worry, we aren't expecting you to be an expert
 * in C. These will be light puzzles that require small adjustments/additions to complete.
 * This might seem a lot scarier than the IDE you may be used to using for Java or Python,
 * but a lot of the logic in the code will look familiar.
 *
 * PROBLEM: We need a, b, and c to sum up to a certain value. To get the values for these
 * ints, follow the steps in the instructions file to use the 'grep' command on the prisoner's
 * note. Once you see the numbers, input them here as the values for a, b, and c. 
 *
 * WHEN YOU THINK YOU SOLVED IT: We will use a command 'cc' to compile our code. The format
 * is as follows:
 *	>> cc -o executable source_file
 * In this case, the source file will dungeon.c, and the executable name is up to you!
 * You'll know cc succeeded when no errors pop up. Then, run the executable (with your chosen
 * name) by typing the following:
 * 	>> ./executable
 * If it succeeds, you'll get the confirmation message. Look at your notebook now!
 */

int main() {
    
    int a; 
    int b;
    int c;

    int code_sum = a + b + c;

    // Leave this part as it is. It handles printing to your notepad.
    while(code_sum != CODE_SUM) {
        printf("Wrong code!\n");
        sleep(2);

    }

    FILE *filepointer;
    filepointer = fopen("../notepad.txt", "a");
    fprintf(filepointer, "%d %c\n", 3, 69);
    fclose(filepointer);
    printf("You found another clue!\n");
    printf("Clue printed to notepad!");
	
	
	return 1;

}
