#include <stdio.h>
#include <unistd.h>

int main() {

    //TODO: CHANGE FILE NAMES TO MATCH STORY
    //'shortcut' command to move file: mv ../AREA_NAME/DIREC_1/file_to_move.txt ../AREA_NAME/DIREC_2


    if (access("./DIREC_2/file_to_move.txt", F_OK) != -1) {
        FILE *filepointer;
        filepointer = fopen("../notepad.txt", "a");
        fprintf(filepointer, "%d %c\n", 5, 68);
        fclose(filepointer);
        printf("You found another clue!\n");
        printf("Clue printed to notepad!");
    }
    else {
         printf("File has not been moved!\n");
    }
	
	return 1;
}
