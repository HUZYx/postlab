#include <stdio.h>
int main()
{
    int arr[100] = { 0 };
    int seat, menu, end, eseat, bseat, pass, book = 1;
    printf("Enter 1 to see Menu : ");
    scanf("%d", &menu);
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
        {
            printf("\n");
        }
        printf("%d\t", arr[i]);
    }
    while (menu != 0)
    {

        printf("\nEnter 1 for Bussiness Class\nEnter 2 for Economy Class\n");
        scanf("%d", &seat);
        if (seat == 1)
        {
            printf("Enter seat number from 1 to 30 : ");
            scanf("%d", &bseat);
            while (bseat > 30)
            {
                printf("Choose a Valid Seat Please : ");
                scanf("%d", &bseat);
            }
                arr[bseat - 1] = book;
        }
        if (seat == 2)
        {
            printf("Enter seat number from 31 to 100 : ");
            scanf("%d", &eseat);
            while (eseat < 30 || eseat > 100)
            {
                printf("Choose a Valid Seat Please : ");
                scanf("%d", &eseat);

            }
                arr[eseat - 1] = book;
        }