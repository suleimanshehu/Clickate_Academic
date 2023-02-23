#include <stdio.h>

int main(){
    /*
    Allocated space in memory
    */

    // int x; // declaration
        // x = 123; // initialization

    // int y = 456;
    // Variable 
    int age = 21;// integer
    float gpa = 3.45; // Floating point number

    char grade = 'B'; // Single character

    char name[]= "Suleiman Tijjani shehu"; // Array of character
     
     // % format
    printf("Hello %s\n", name);
    printf("Your fake age is:%d\n", age);
    printf("Your GPA is:%.2f\n",gpa);
    printf("Your fake grade is: %c",grade);


    printf("My name is %s. I am %d years old. I scored %c grade in the exam. My GPA is %f", name, age, grade, gpa);
    return 0;
}