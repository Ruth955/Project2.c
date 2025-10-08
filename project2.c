#include <stdio.h>

int main() {
    char name[20];
    int age;
    char hobby[30];

    
    printf("Enter your name: ");
    scanf("%19s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your favorite hobby: ");
    scanf("%29s", hobby);

    
    printf("Hello, my name is %s, I am %d years old, and my favorite hobby is %s.\n", name, age, hobby);

   
    printf("Hello %s, you are %d years old. Nice to meet you!\n", name, age);

    return 0;
}
