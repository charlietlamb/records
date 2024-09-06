#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "records.h"


int main(int argc, char *argv[])
{
    printf("RECORD BOOK\n");
    char input = 'a';
    struct Car *cars = malloc(100*sizeof(Car));
    if(cars == NULL)
        return printf("Memory allocation failed");

    while(input != 'q'){
        input = getInput();
        if(input == 'a') add(cars);
        if(input == 'p') print(cars);
    }
    free(cars);
    return 0;
} 

void add(Car *cars){
    printf("ADDING TO CARS:\n");
    char model[50];
    scanf("What is the model name? %49s",&model);
    printf("Model: %s",model);
}

char getInput(){
    bool cont = true;
    char input = 'n';
    char inputs[] = {'a','p','q'};
    while(cont){
        printf("What would you like to do?\n");
        printf("ADD (a)\n");
        printf("PRINT (p)\n");
        printf("QUIT (q)\n");
        if(scanf(" %c",&input)!=1)
            continue;
        cont = true;
        for(int i=0; i< 3;i++){
            if(inputs[i]==input)
                cont = false;
        }
    }
    if(input == 'q')
        printf("Quitting...\n");
    return input;
}
