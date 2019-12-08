#include <stdio.h>
#include <unistd.h>

int main() {

    if (access("./EXIT_BLOCK.txt", F_OK) != -1) {
        printf("The exit is blocked!\n");
    }
    else {
        FILE *filepointer;
        filepointer = fopen("../notepad.txt", "a");
        fprintf(filepointer, "%d %c\n", 4, 69);
        fclose(filepointer);
        printf("You found another clue!\n");
        printf("Clue printed to notepad!");
    }
	
	return 1;
}
