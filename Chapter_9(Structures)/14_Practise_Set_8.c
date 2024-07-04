#include <stdio.h>

// Write a structure capable of storing dates. Write a fiunction to compare these dates.

typedef struct
{
    int day;
    int month;
    int year;
} date;

void display(date d)
{
    printf("The Date is  %d/%d/%d\n", d.day, d.month, d.year);
}

int DateCmp(date d1, date d2)
{
    //Make Decision on the basis of Year Comparison
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    //Make Decision on the basis of Month Comparison
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    //Make Decision on the basis of day Comparison
    if (d1.day > d2.day)
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int R;
    date d1 = {22, 6, 24};
    date d2 = {13, 2, 28};
    display(d1);
    display(d2);
    R = DateCmp(d1,d2);
    printf("Date Comparision function Returns : %d ",R);

    return 0;
}