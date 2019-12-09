#include <stdio.h>
#include <unistd.h>

int main() {

    if (access("./OS-Mountain/linux-sphere.txt", F_OK) != -1) {
        FILE *filepointer;
        filepointer = fopen("../notepad.txt", "a");
        fprintf(filepointer, "%d %c\n", 7, 77);
        fclose(filepointer);
        printf("You have successfully delieverd the Linux sphere to the Goblin of OS Mountain");
        printf("You have been rewared with another clue!\n");
        printf("Clue printed to notepad!");
    }
    else {
         printf("Deliver the Linux sphere to the Goblin of OS Mountain!!\n");
    }
	
	return 1;
}
