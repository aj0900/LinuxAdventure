#include <stdio.h>
#include <unistd.h>

int main() {

	if (access("./bridge", F_OK) != -1) {
		FILE *filepointer;
		filepointer = fopen("../notepad.txt", "a");
		fprintf(filepointer, "%d %c", 2, 66);
		fclose(filepointer);
		printf("You found another clue in the chest!\n");
		printf("Clue printed to notepad!");
	}
	else {
		printf("You need a bridge to reach the chest!");
	}
	
	return 1;

}
