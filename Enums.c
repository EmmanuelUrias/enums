#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
}; // enums are constants. Each const has an associated integer that starts at 0.

int main()
{
    // enum = a user defined type of named integer identifiers helps to make a program more readable

    enum Day today = Sun;

    printf("%d\n", today); // enums are NOT STRINGS, but they can treated as integers

    if (today == Sun || today == Sat)
    {
        printf("It's the weekend :)");
    }
    else
    {
        printf("Work today :)");
    }

    return 0;
}