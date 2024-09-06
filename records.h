#include <stdio.h>

typedef struct {
    char make[50];
    char model[50];
    int age;
    int miles;
} Car;

char getInput();

void add(Car* cars);
void print(Car* cars);
