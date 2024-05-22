#include <stdio.h>
#include <stdlib.h>
int IsLeapYear(int year) {
    return((year%4==0 && year%100!=0)||year%400==0);
}
int main(int argc, char **argv)
{
    int days = atoi(argv[1]);
    int year = 1980;
    while (days > 365)
    {
        if (IsLeapYear(year))
        {
            if (days > 365)
            {
                days -= 366;
                year += 1;
            }
        }
        else
        {
            days -= 365;
            year += 1;
        }
    }
    printf("%d\n", year);
    return 0;
}

