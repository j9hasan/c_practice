#include <stdio.h>
/*
    A union in programming is a data structure that allows you to store different data types in the same memory location.
    Unlike a struct, where each member has its own separate memory space,
    members of a union share the same memory location. The size of a
    union is determined by the size of its largest member.
    Here's a simple explanation with an example in C:

*/

// Define a union
union MyUnion
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    // Declare a union variable
    union MyUnion myUnion;

    // Assign values to different members
    myUnion.intValue = 42;
    printf("Int value: %d\n", myUnion.intValue);

    myUnion.floatValue = 3.14;
    printf("Float value: %f\n", myUnion.floatValue);

    myUnion.charValue = 'A';
    printf("Char value: %c\n", myUnion.charValue);

    // Accessing different members may result in unexpected values due to sharing the same memory location
    printf("Unexpected value: %d\n", myUnion.intValue);

    return 0;
}

/*
    The MyUnion union has three members: an integer (intValue), a float (floatValue), and a character (charValue).
    The program declares a variable myUnion of type MyUnion.
    It assigns values to each member and prints them.
    Note that since all members share the same memory, changing the value of one member
    may affect the values of the others. In the last printf statement, the program prints the integer value,
    but it's actually interpreting the bits of the float or char, resulting in an unexpected value.
    Unions are useful in scenarios where you need to represent a single value in different ways, depending on the context,
    or when you want to save memory by sharing storage for different types of data. However,
    caution is required when using unions, as improper usage can lead to unintended
    consequences due to the shared memory space.

*/