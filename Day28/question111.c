#include <stdio.h>
#include <string.h>
struct Ticket
{
    int seatNo;
    char name[50];
    int booked;
};
int main()
{
    struct Ticket t[10];
    int i, choice, seat, found;
    for(i = 0; i < 10; i++)
    {
        t[i].seatNo = i + 1;
        t[i].booked = 0;
        strcpy(t[i].name, "");
    }
    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Tickets\n");
        printf("3. Cancel Ticket\n");
        printf("4. Search Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid Seat Number!\n");
                }
                else if(t[seat-1].booked)
                {
                    printf("Seat Already Booked!\n");
                }
                else
                {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^
]", t[seat-1].name);

                    t[seat-1].booked = 1;
                    printf("Ticket Booked Successfully!\n");
                }
                break;
            case 2:
                printf("\nSeat\tPassenger\tStatus\n");
                for(i = 0; i < 10; i++)
                {
                    printf("%d\t%s\t\t%s\n",
                           t[i].seatNo,
                           t[i].booked ? t[i].name : "-",
                           t[i].booked ? "Booked" : "Available");
                }
                break;
            case 3:
                printf("Enter Seat Number to Cancel: ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid Seat Number!\n");
                }
                else if(!t[seat-1].booked)
                {
                    printf("Seat is Already Available!\n");
                }
                else
                {
                    t[seat-1].booked = 0;
                    strcpy(t[seat-1].name, "");
                    printf("Ticket Cancelled Successfully!\n");
                }
                break;
            case 4:
                printf("Enter Seat Number to Search: ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid Seat Number!\n");
                }
                else
                {
                    if(t[seat-1].booked)
                    {
                        printf("\nSeat Number : %d\n", t[seat-1].seatNo);
                        printf("Passenger   : %s\n", t[seat-1].name);
                        printf("Status      : Booked\n");
                    }
                    else
                    {
                        printf("Seat %d is Available.\n", seat);
                    }
                }
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);
    return 0;
}
