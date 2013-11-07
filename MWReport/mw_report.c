#include <stdio.h>
#include <stdlib.h>
#include <libxml/tree.h>
#include <libxml/parser.h>

void checkArgs(int argc, char *argv[]);

int main(int argc, char *argv[]){
	checkArgs(argc, argv);
	printf("media walk report\n-----------------\n");
}

void checkArgs(int argc, char *argv[]){
	if(argc != 2){
		printf("print the usage warning\n");
		exit(EXIT_FAILURE);
	}

	const char *filename = argv[1];

	FILE *istream;
	if ( (istream = fopen ( filename, "r" ) ) == NULL ){
		printf ( "File %s does not exist\n", filename);
		exit(EXIT_FAILURE);
	}
	else{
		fclose ( istream );
	}
}