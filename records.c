#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    printf("RECORD BOOK\n");
    bool cont = true;
    while(cont){
        char input = 'n';
        char yesNo[] = {'y','n'};
        printf("Add a new car to the record (y/n): \n");
        if(scanf("%c",&input)!=1)
            continue;
        cont = true;
        for(int i=0; i< 2;i++){
            if(yesNo[i]==input)
                cont = false;
        }
    }
} 
