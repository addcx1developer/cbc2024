#include <stdio.h>

int main() {
    // variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            But we need to declare what type of data we are storing.

    int x; // declaration
    x = 123; // initialization
    int y = 321; // declaration + initialization

    int age = 25; // integer
    float gpa = 1.75; // floating point number
    char grade = 'A'; // single character
    char name[] = "Alexis"; // array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}