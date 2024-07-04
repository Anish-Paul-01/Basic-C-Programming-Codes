#include <stdio.h>
#include <string.h>

// Create  Structure representing a bank Account of a Customer. What field did you use and why?

struct bankAccount
{
    int AccNum;
    char First_Name[15];
    char Last_Name[15];
    float balance;
} customer[999999];

int main()
{
    int i;
    char condition;
    int SL;
    int p;

    for (i = 0;; i++)
    {
        printf("Enter the Account Number : ");
        scanf("%d", &customer[i].AccNum);
        printf("Enter the First Name of the Customer : ");
        scanf("%s", &customer[i].First_Name);
        printf("Enter the Last Name of the Customer : ");
        scanf("%s", &customer[i].Last_Name);
        printf("Enter the balance : ");
        scanf("%f", &customer[i].balance);
        printf("\n\n");

        printf("Want to add mote Customer's Details (Y/N) : ");
        scanf(" %c", &condition);
        if (condition == 'N'||condition == 'n')
        {
            break;
        }
    }

    printf("The Record of the Customer is..........\n");
    printf("\n\n");
    printf("Enter the SL No. of the Customer : ");
    scanf("%d",&SL );
    
    p= (SL-1) ;

    printf("Account Number : %d\n", customer[p].AccNum);
    printf("Customer Name : %s %s \n", customer[p].First_Name, customer[p].Last_Name);
    printf("Account Balance : %.2f\n", customer[p].balance);

    return 0;
}