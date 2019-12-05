#include <stdio.h>
#include <unistd.h>

int main() {
    if (access("./bridge", R_OK) != -1) {
		FILE *filepointer;
		filepointer = fopen("../notepad.txt", "a");
		fprintf(filepointer, "%d %c\n", 2, 82);
		fclose(filepointer);
		printf("You found another clue in the prisoner note!\n");
		printf("Clue printed to notepad!");
	}

    else {
		printf("You need to change user persmissions to read the note!");
	}
	
	return 1;

}