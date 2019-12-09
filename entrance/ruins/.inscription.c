#include <stdio.h>
#include <unistd.h>

/* Hello, curious traveler! I'm glad you've decided to take a look behind the scenes; the 
 * Wizard of OS fought so hard for inquisitive developers like yourself. Feel free to take
 * a look at the code and see how the magic happens, but don't touch! There's no need to
 * modify the code in this particular area. Thank you!
 */


int main() {

	FILE *filepointer;
	filepointer = fopen("../notepad.txt", "a");
	fprintf(filepointer, "%d %c\n", 5, 68);
	fclose(filepointer);
	printf("You found the inscription with the clue!\n");
	printf("Clue printed to notepad!");

	return 1;
}
