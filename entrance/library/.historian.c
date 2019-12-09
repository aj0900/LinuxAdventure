#include <stdio.h>
#include <string.h>

/* Hello, curious traveler! I'm glad you've decided to take a look behind the scenes;
 * the Wizard of OS fought so hard for inquisitive developers like yourself. Feel
 * free to take a look at the code and see how the magic happens, but don't touch!
 * There's no need to modify the code in this particular area. Thank you!
 */

int main() {

	char str[100];
	
	printf("\nHISTORIAN: Hello, traveler! The Wizard of OS entrusted me with one of his clues,\n");
	printf("\t   but he insisted that I only grant it to the most gifted of those\n");
	printf("\t   that seek it. Thus, you must pass my test:\n");
		
	printf("\n\t   The Wizard of OS gave the world his most valuable gift, Linux, on\n");
	printf("\t   September 17th, 1991. Which day of the week was this?\n");

	printf("\n\t   Do not use any search engine! You must wield the power of Linux if\n");
	printf("\t   you are to truly deserve this clue.\n");

	printf("\nYour answer: ");

	scanf("%s", str);
	
	if (strcasecmp(str, "Tu") == 0) {
		FILE *filepointer;
		filepointer = fopen("../notepad.txt", "a");
		fprintf(filepointer, "%d %c\n", 6, 79);
		fclose(filepointer);
		printf("\nHISTORIAN: Correct! The Wizard would want you to have this.\n");
		printf("\nClue printed to notepad!");
	}

	else {
		printf("\nHISTORIAN: Incorrect! Please, review the instructions before speaking to me again.");
	}

	return 1;
}
