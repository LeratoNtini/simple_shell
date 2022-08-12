#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char *buffer = NULL, *copy_buffer = NULL;
	ssize_t num_read;
	size_t n = 0;
	char *token;
	char *delim = " \n";
	int num_tokens = 0, i = 0;
	char **argv;

	printf("$ ");
	getline(&buffer, &n, stdin);
	printf(">>>> %s\n", buffer);
	// printf("ld \n", num_read);

	/* to copy contents that the user typed */
	copy_buffer= malloc(sizeof(char) * num_read);

	/* copy the contents  of buffer to copy_buffer */
	strcpy(copy_buffer, buffer);


	token = strtok(buffer, delim);
	num_tokens = 1;
	while (token != NULL){
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;


	argv = malloc(sizeof(char *) * num_tokens);
	while(token != NULL){
		/* allocate space for each token */
		argv[i] = malloc(sizeof(char) * strlen(token));
		strcpy(argv[i], token);
		printf(">>>>>> %s \n", argv[i]);
		/********************************************/
		i++;
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;


}
