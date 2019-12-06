#include <stdio.h>
#include <unistd.h>

int main() {

    /* code challenge here*/


    FILE *filepointer;
    filepointer = fopen("../notepad.txt", "a");
    fprintf(filepointer, "%d %c\n", 4, 69);
    fclose(filepointer);
    printf("You found another clue!\n");
    printf("Clue printed to notepad!");
	
	
	return 1;
}