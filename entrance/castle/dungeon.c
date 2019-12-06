#include <stdio.h>
#include <unistd.h>
#define CODE_SUM 1991

int main() {
    
    int a; 
    int b;
    int c;

    int code_sum = a + b + c;

    while(code_sum != CODE_SUM) {
        printf("Wrong code!\n");
        sleep(2);

    }

    FILE *filepointer;
    filepointer = fopen("../notepad.txt", "a");
    fprintf(filepointer, "%d %c\n", 3, 69);
    fclose(filepointer);
    printf("You found another clue!\n");
    printf("Clue printed to notepad!");
	
	
	return 1;

}
