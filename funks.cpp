#include <stdio.h>
#include "funks.h"

void print_txt_i(int x, char txt[] ){
	for(int y = 0; y<x; y++){
		printf("%s", txt);
	}
}

void print_txt(char txt[] ){
	printf("%s", txt);
}