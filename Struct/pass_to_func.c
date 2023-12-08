#include <stdio.h>

// Define a struct
struct Point
{
    int x;
    int y;
};

// Function that takes a struct by value
void printPointByValue(struct Point p)
{
    printf("Point (by value): (%d, %d)\n", p.x, p.y);
}

// Function that takes a struct by reference//cant modify the struct elements.const
void printPointByReference(const struct Point *p)
{

    printf("Point (by reference): (%d, %d)\n", p->x, p->y);
}
// This function can modify the contents of the struct
void modifyPoint(struct Point *p)
{
    p->x = 100;
    p->y = 200;
}
int main()
{
    // Create an instance of the struct
    struct Point myPoint = {10, 20};

    // Call the function passing the struct by value
    printPointByValue(myPoint);

    modifyPoint(&myPoint);
    // Call the function passing the struct by reference
    printPointByReference(&myPoint);

    return 0;
}
