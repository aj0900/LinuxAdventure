#include <stdio.h>
#include <unistd.h>

/* Hello, curious traveler! I'm glad you've decided to take a look behind the scenes;
 * the Wizard of OS fought so hard for inquisitive developers like yourself. Feel free
 * to take a look at the code and see how the magic happens, but don't touch! There's
 * no need to modify the code in this particular area. Thank you!
 */

int main() {

	if (access("./bridge", F_OK) != -1) {
		FILE *filepointer;
		filepointer = fopen("../notepad.txt", "a");
		fprintf(filepointer, "%d %c\n", 2, 82);
		fclose(filepointer);
		printf("You found another clue in the chest!\n");
		printf("Clue printed to notepad!");
	}
	else {
		printf("You need a bridge to reach the chest!");
	}
	
	return 1;

}
