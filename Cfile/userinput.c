#include<stdio.h>
#include<string.h>


int main(){

    unsigned char age;
    char name[25];

    printf("What's your name?\n");
    fgets(name, 25, stdin);             //fgets nếu muốn lấy chuỗi string
    name[strlen(name) - 1] = '\0';     //quan trọng ko là bị cách
    

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);

    return 0;
}