#include <stdio.h>
#include <stdbool.h>


int main(){
    int x;
    x = 111;
    int y = 333;

    int age = 21;  //%d
    float gpa = 2.5; //%f  4 byte 6-7 digits
    double gpaa; //%lf     8 byte 14-16 digits
    char grade = 'C'; //%c
    char name[] = "bro"; //%s

    bool e = true;  //%d

    char f = 100; //(-128 127) %d hoặc %c 1 byte
    unsigned char g = 255; // 1 byte (0 255) %d hoặc %c

    short int h;  // 2 bytes () %d
    unsigned short i; //2bytes %u

    int j; //4bytes %d


    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %f\n",gpa);


    printf("0.15%f \n", gpa);
    printf("0.15%lf \n", gpaa);
}