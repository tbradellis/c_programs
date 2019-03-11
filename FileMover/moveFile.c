
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_MAX 100

int main(){

/*
Ask user for file name (full path)input file name (take args?)

  Write prompt to screen
  Accept input as char array
  Write prompt for output file
  Accept input as char array

  Set up *fp and read current file
  Make sure it's not null


*/
    FILE *fp;
    char ch, file_name[BUFFER_MAX], output_file[BUFFER_MAX];


    printf("Enter the filename to be copied: \n");
    fgets(file_name, BUFFER_MAX, stdin );
    printf("Enter filename for new file: ");
    fgets(output_file, BUFFER_MAX, stdin);

    fp = fopen(file_name, "r");
    if(fp == NULL){
        perror("Error reading this file. Failed fp null check!\n");
        exit(0);
    }
    printf("Contents of %s: ", file_name);
    while((ch = fgetc(fp)) != EOF){

        printf("%c", ch);

    }
    fclose(fp);
    return 0;
}