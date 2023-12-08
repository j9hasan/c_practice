#include <stdio.h>

// Define a structure without typedef
struct Point
{
    int x;
    int y;
};

// Using typedef to create an alias for the structure
typedef struct Point PointT;

int main()
{
    // struct Point p1;
    PointT p1;
    p1.x = 300;
    printf("Coordinates: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
