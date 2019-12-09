#include <stdio.h>
#include <unistd.h>

/* Hello, curious traveler! I'm glad you've decided to take a look behind the scenes;
 * the Wizard of OS fought so hard for inquisitive developers like yourself. Feel free
 * to take a look at the code and see how the magic happens, but don't touch! There's
 * no need to modify the code in this particular area. Thank you!
 */

int main() {

    if (access("./OS-Mountain/linux-sphere.txt", F_OK) != -1) {
        FILE *filepointer;
        filepointer = fopen("../notepad.txt", "a");
        fprintf(filepointer, "%d %c\n", 7, 77);
        fclose(filepointer);
        printf("You have successfully delivered the Linux sphere to the Goblin of OS Mountain!\n");
        printf("You have been rewarded with another clue!\n");
        printf("Clue printed to notepad!");
    }
    else {
         printf("Deliver the Linux sphere to the Goblin of OS Mountain!!\n");
    }
	
	return 1;
}
