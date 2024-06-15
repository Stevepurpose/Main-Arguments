#include <stdio.h>
int main(int argc, char* argv[]){
    printf("The program name is: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);

    if(argc > 1){
        for(int i=1; i<argc; i++){
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }

//run when argument is only one
    else{
        printf("No additional arguments provided.\n");
    }
    return 0;
}