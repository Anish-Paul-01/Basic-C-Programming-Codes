#include <stdio.h>

// Write a structure capable of storing Timestamp. Write a fiunction to compare these timestamp.

typedef struct
{
    int day;
    int month;
    int year;
    int Hour;
    int Minute;
    int Second;
} TimeStamp;

void display(TimeStamp T)
{
    printf("The Date is  %d-%d-%d %d:%d:%d \n", T.day, T.month, T.year, T.Hour, T.Minute, T.Second);
}

int DateCmp(TimeStamp T1, TimeStamp T2)
{
    // Make Decision on the basis of Year Comparison
    if (T1.year > T2.year)
    {
        return 1;
    }
    if (T1.year < T2.year)
    {
        return -1;
    }
    // Make Decision on the basis of Month Comparison
    if (T1.month > T2.month)
    {
        return 1;
    }
    if (T1.month < T2.month)
    {
        return -1;
    }
    // Make Decision on the basis of day Comparison
    if (T1.day > T2.day)
    {
        return 1;
    }
    if (T1.day < T2.day)
    {
        return -1;
    }
    // Make Decision on the basis of Hour Comparison
    if (T1.Hour > T2.Hour)
    {
        return 1;
    }
    if (T1.Hour < T2.Hour)
    {
        return -1;
    }
    // Make Decision on the basis of Minutes Comparison
    if (T1.Minute > T2.Minute)
    {
        return 1;
    }
    if (T1.Minute < T2.Minute)
    {
        return -1;
    }
    // Make Decision on the basis of Second Comparison
    if (T1.Second > T2.Second)
    {
        return 1;
    }
    if (T1.Second < T2.Second)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int day, month, year, hour, minute, second;
    int R;
    TimeStamp T2;
    TimeStamp T1 = {22, 6, 24, 21, 45, 12};
    printf("Enter Time Stamp 2 (DD MM YYYY HH MM SS): ");
    scanf("%d %d %d %d %d %d", &day, &month, &year, &hour, &minute, &second);
    T2 = (TimeStamp){day, month, year, hour, minute, second};
    display(T1);
    display(T2);
    R = DateCmp(T1, T2);
    printf("Date Comparision function Returns : %d \n", R);
    if (R > 0)
        printf("Timestamp 1 is later than Timestamp 2.\n");
    else if (R < 0)
        printf("Timestamp 1 is earlier than Timestamp 2.\n");
    else
        printf("Timestamp 1 is equal to Timestamp 2.\n");

    return 0;
}

