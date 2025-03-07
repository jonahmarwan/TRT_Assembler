#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>
#include <string.h>
void read(char path[], char keyword[]){
	size_t len = strlen(path);

	if(!(len >= 4 && path[len-4] == '.' && path[len-3] == 'a' && path[len-2] == 's' && path[len-1] == 'm')){
		printf("Not an assembly file, no further execution.");
		return;
	}
	FILE *f;
	f = fopen(path, "r");
	int display;
	char ch;
	while(1){
		display = fgetc(f);
		ch = (char)display;
		if(display == EOF){
			break;
		}	
		printf("%c", ch);
	}
	fclose(f);
}

#endif
