/**
* Chatroom Lab
* CS 241 - Fall 2016
*/
#include "camelCaser_tests.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "camelCaser.h"

/*
* Testing function for various implementations of camelCaser.
*
* @param  camelCaser   A pointer to the target camelCaser function.
* @return              Correctness of the program (0 for wrong, 1 for correct).
*/
int test_camelCaser(char **(*camelCaser)(const char *)) {
	// TODO: Return 1 if the passed in function works properly; 0 if it doesn't.
	// char *input = "ayy lmao. same tbh";
	// char *correct = "ayyLmao";
	// int result = 0;
	// char **res = (*camelCaser)(input);
	// printf("res is supposed to be: %s\n", res[0]);
	// result = !strcmp(correct, res[0]);
	// return result;
	char * inputs[] = {
		" ",
		"ayy lmao",
		"Hello World.",
		"The Heisenbug is an incredible creature. Facenovel servers get their power from its indeterminism. Code smell can be ignored with INCREDIBLE use of air freshener. God objects are the new religion.",
		NULL
	};

	char ** input = inputs;
	while(*input){
		print_input(*input);
		char **output = (*camelCaser)(*input);
		print_output(output);
		input++;
	}
	// use assert
}
