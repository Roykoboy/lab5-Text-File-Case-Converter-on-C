#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	FILE* inputFile, * outputFile;
	char ch;


	inputFile = fopen("input.txt", "r");
	if (inputFile == NULL) {
		printf("Ошибка открытия файла.\n");
		return 1;
	}


	outputFile = fopen("output.txt", "w");
	if (outputFile == NULL) {
		printf("Ошибка открытия файла.\n");
		return 1;
	}


	while ((ch = fgetc(inputFile)) != EOF) {
		ch = toupper(ch);
		fputc(ch, outputFile);
		printf("%c", ch);
	}


	fclose(inputFile);
	fclose(outputFile);

	return 0;
}