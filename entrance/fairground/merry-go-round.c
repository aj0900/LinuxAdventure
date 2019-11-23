#include <stdio.h>
#include <unistd.h>

/* Welcome to the first coding challenge! Don't worry, we aren't expecting you to be an expert
 * in C. These will be light puzzles that require small adjustments/additions to complete. 
 * This might seem a lot scarier than the IDE you may be used to using for Java or Python, but
 * a lot of the logic in the code will look familiar.
 *
 * PROBLEM: If you run this program in its original state, it gets caught in an endless loop.
 * This should print a clue to your notepad, but right now it can't happen. Find a way to edit
 * the code so that it no longer gets caught in the loop. Don't just delete or comment out the
 * troublesome area! If you can see where the problem is located, you can certainly add a line
 * to fix it.
 *
 * WHEN YOU THINK YOU SOLVED IT: We will use a new command 'cc'  to compile our code. The format is
 * as follows:
 * 	>> cc -o executable source_file
 * In this case, the source file will be merry-go-round.c, and the executable name is up to you!
 * You'll know cc succeeded when no errors pop up. Then, run the executable (with your chosen name)
 * by typing the following:
 * 	>> ./executable
 * If it succeeds, you'll get the confirmation message. Take a look at your notebook now!
 */


int main() {

	int i = 0;
	printf("And off you go!\n");
	printf("Around...\n");


	while (i == 0) {
		printf("And around...\n");
		sleep(2);
	}
	
	// Leave this part as it is. It handles printing to your notepad.
	FILE *filepointer;
	filepointer = fopen("../notepad.txt", "a");
	fprintf(filepointer, "%d %s", 1, "A");
	fclose(filepointer);
	printf("Clue printed to notepad! Please don't run this file again.");


	return 1;
}
