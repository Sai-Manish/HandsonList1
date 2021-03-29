#include<stdio.h>

int main(int argc, char* argv[]){
	if(argc > 0){
		printf("Success fully executed and %s is argument given\n", argv[1]);
	}

	else{
		printf("No proper arguments given\n");
	}

	return 0;
	
}
