#include <stdio.h>
#include <string.h>

#define NUM_ON_LINE 10
struct workers
{
    /* data */
    char name[80];
    int avg_units_ph;
    int avg_err_ph;
};
struct asm_line
{
    /* data */
    int production_code;
    double material_cost;
    struct workers wrkers[NUM_ON_LINE];
} line1, line2;

int main()
{
    /*assign value 12 to avg unit per hour*/
    line1.wrkers[1].avg_units_ph = 12;
    line1.wrkers[1].avg_err_ph = 0.3;
    strcpy(line1.wrkers[2].name, "Rabeya");
}
