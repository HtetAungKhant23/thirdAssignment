// Htet Aung Khant
// htetaung23.ha@gmial.com

#include<stdio.h>
#define NAME 20
#define ROOM 15
#define DATE 13

int goldRoomFun(int goldRoomAge, int goldRoomType);
int platinumRoomFun(int platinumRoomAge, int platinumRoomType);
int silverRoomFun(int silverRoomAge, int silverRoomType);

int roomArr[ROOM];
char nameArr[NAME];
char dateArr[DATE];

int *roomPtr;

int numRoom=0;
int age=0;
char moreBooking;
char roomType;

int nrcNum=0;
int bill=0;
char confirmBooking=0;

int len = sizeof(roomArr) / sizeof(roomArr[0]);

int main()
{
    printf("\n\t\t  --WELCOME From OUR HOTEL BOOKING SERVICE--\n");

    printf("\n We have 3types of rooms\n");
    printf("\n1.GOLD room >> Price is 5000$\n");
    printf("2.PLATINUM room >> Price is 3000$\n");
    printf("3.SILVER room >> Price is 2000$\n");
    printf("\nWe have 15 rooms available\n");
    printf("\nRoom number (101 to 105) is gold\n");
    printf("Room number (106 to 110) is platinum\n");
    printf("Room number (111 to 115) is silver\n");

    printf("\nEnter your age : ");
    scanf("%d",&age);

    if(age>17)
    {
        printf("\nPlease choose type of room\n");
        printf("Enter g for gold room\n");
        printf("Enter p for platinum room\n");
        printf("Enter s for silver room : ");
        scanf(" %c",&roomType);

        switch(roomType)
        {

        case 'g':
            printf("\nStart booking for gold room from here\n");

            goldRoomFun(age,roomType);

            break;

        case 'p':
            printf("\nStart booking for platinum room from here\n");

            platinumRoomFun(age,roomType);
            break;

        case 's':
            printf("\nStart booking for silver room from here\n");

            silverRoomFun(age,roomType);
            break;

        default:
            printf("\nInvalid input\n");
            break;

        }

    }
    else
    {
        printf("\nSorry! You can't book in our hotel at your current age\n");
    }

    return 0;
}


int goldRoomFun(int goldRoomAge, int goldRoomType)
{
    while(goldRoomAge>17 & goldRoomType=='g')
    {
        printf("\nEnter your name : ");
        scanf(" %[^\n]",&nameArr);

        printf("Enter your NRC number : ");
        scanf("%d",&nrcNum);

        printf("Enter booking date : ");
        scanf(" %[^\n]",&dateArr);

        printf("\nEnter amount of rooms you want to book : ");
        scanf("%d",&numRoom);

        int leftRoomArr[numRoom];

        if(numRoom>1)
        {

            printf("Please choose your gold room number(101 to 105)\n");

            for(int i=0; i<numRoom; i++)
            {

                scanf("%d",&roomArr[i]);

            }


            roomPtr = &roomArr;

            int deposit = 166*numRoom;

            printf("\nPlease deposit 30 percent of gold room's price (166$) for each: \n");
            printf("You need to pay (166$ * %d = %d$) >>  ",numRoom,deposit);
            scanf("%d",&bill);

            printf("\nPlease enter 'y' to confirm this booking : ");
            scanf(" %c",&confirmBooking);

            if(confirmBooking=='y')
            {
                printf("\nName = %s , Booking date = %s , Deposit bill = %d$ ",nameArr,dateArr,deposit);

                for(int ii=0; ii<numRoom; ii++)
                {
                    printf(", Booking room number : %d ",*(roomPtr + ii));

                }

            }
            else
            {
                printf("\nSorry! please book again\n");
                break;
            }

        }
        else
        {
            printf("Please choose your gold room number(101 to 105): ");
            scanf("%d",&roomArr[0]);

            roomPtr = &roomArr[0];

            printf("\nPlease deposit 30 percent of gold room's price (166$) for each >>  ");
            scanf("%d",&bill);

            printf("\nName = %s , Booking date = %s , Deposit bill = %d$ , Booking room number = %d ",nameArr,dateArr,bill,*roomPtr);

        }

        int leftRoomlen = sizeof(leftRoomArr) / sizeof(leftRoomArr[0]);
        int leftLen = len - leftRoomlen;

        printf("\n\nWe have (%d) rooms left to book from now\n",leftLen);

// room left ko pyan htae tr
        len = leftLen;


        printf("\nDo you wanna book more?\n");
        printf("\nEnter 'y' to book more : ");
        scanf(" %c",&moreBooking);

        if(moreBooking!='y')
        {
            printf("\nThank for booking with us...\n");
            break;
        }

        if(len < 1)
        {

            printf("\nSorry! Out of room to book...\n");
            break;

        }

    }

    return 0;
}

int platinumRoomFun(int platinumRoomAge, int platinumRoomType)
{
    while(platinumRoomAge>17 & platinumRoomType=='p')
    {
        printf("\nEnter your name : ");
        scanf(" %[^\n]",&nameArr);

        printf("Enter your NRC number : ");
        scanf("%d",&nrcNum);

        printf("Enter booking date : ");
        scanf(" %[^\n]",&dateArr);

        printf("\nEnter amount of rooms you want to book : ");
        scanf("%d",&numRoom);

        int leftRoomArr[numRoom];

        if(numRoom>1)
        {

            printf("Please choose your platinum room number(106 to 110)\n");

            for(int i=0; i<numRoom; i++)
            {

                scanf("%d",&roomArr[i]);

            }


            roomPtr = &roomArr;

            int deposit = 100*numRoom;

            printf("\nPlease deposit 30 percent of platinum room's price (100$) for each: \n");
            printf("You need to pay (100$ * %d = %d$) >>  ",numRoom,deposit);
            scanf("%d",&bill);

            printf("\nPlease enter 'y' to confirm this booking : ");
            scanf(" %c",&confirmBooking);

            if(confirmBooking=='y')
            {
                printf("\nName = %s , Booking date = %s , Deposit bill = %d$ ",nameArr,dateArr,deposit);

                for(int ii=0; ii<numRoom; ii++)
                {
                    printf(", Booking room number : %d ",*(roomPtr + ii));

                }

            }
            else
            {
                printf("\nSorry! please book again\n");
                break;
            }

        }
        else
        {
            printf("Please choose your platinum room number(106 to 110) : ");
            scanf("%d",&roomArr[0]);

            roomPtr = &roomArr[0];

            printf("\nPlease deposit 30 percent of platinum room's price (100$) for each >>  ");
            scanf("%d",&bill);

            printf("\nName = %s , Booking date = %s , Deposit bill = %d$ , Booking room number = %d ",nameArr,dateArr,bill,*roomPtr);

        }

        int leftRoomlen = sizeof(leftRoomArr) / sizeof(leftRoomArr[0]);
        int leftLen = len - leftRoomlen;

        printf("\n\nWe have (%d) rooms left to book from now\n",leftLen);

// room left ko pyan htae tr
        len = leftLen;


        printf("\nDo you wanna book more?\n");
        printf("\nEnter 'y' to book more : ");
        scanf(" %c",&moreBooking);

        if(moreBooking!='y')
        {
            printf("\nThank for booking with us...\n");
            break;
        }

        if(len < 1)
        {

            printf("\nSorry! Out of room to book...\n");
            break;

        }

    }

    return 0;
}

int silverRoomFun(int silverRoomAge, int silverRoomType)
{
    while(silverRoomAge>17 & silverRoomType=='s')
    {
        printf("\nEnter your name : ");
        scanf(" %[^\n]",&nameArr);

        printf("Enter your NRC number : ");
        scanf("%d",&nrcNum);

        printf("Enter booking date : ");
        scanf(" %[^\n]",&dateArr);

        printf("\nEnter amount of rooms you want to book : ");
        scanf("%d",&numRoom);

        int leftRoomArr[numRoom];

        if(numRoom>1)
        {

            printf("Please choose your silver room number(111 to 115)\n");

            for(int i=0; i<numRoom; i++)
            {

                scanf("%d",&roomArr[i]);

            }


            roomPtr = &roomArr;

            int deposit = 67*numRoom;

            printf("\nPlease deposit 30 percent of silver room's price (67$) for each >>  ");
            printf("You need to pay (67$ * %d = %d$) >>  ",numRoom,deposit);
            scanf("%d",&bill);

            printf("\nPlease enter 'y' to confirm this booking : ");
            scanf(" %c",&confirmBooking);

            if(confirmBooking=='y')
            {
                printf("\nName = %s , Booking date = %s , Deposit bill = %d$ ",nameArr,dateArr,deposit);

                for(int ii=0; ii<numRoom; ii++)
                {
                    printf(", Booking room number : %d ",*(roomPtr + ii));

                }

            }
            else
            {
                printf("\nSorry! please book again\n");
                break;
            }

        }
        else
        {
            printf("Please choose your silver room number(111 to 115) : ");
            scanf("%d",&roomArr[0]);

            roomPtr = &roomArr[0];

            printf("\nPlease deposit 30 percent of silver room's price (67$) for each: \n");
            scanf("%d",&bill);

            printf("\nName = %s , Booking date = %s , Deposit bill = %d$ , Booking room number = %d ",nameArr,dateArr,bill,*roomPtr);

        }

        int leftRoomlen = sizeof(leftRoomArr) / sizeof(leftRoomArr[0]);
        int leftLen = len - leftRoomlen;

        printf("\n\nWe have (%d) rooms left to book from now\n",leftLen);

// room left ko pyan htae tr
        len = leftLen;


        printf("\nDo you wanna book more?\n");
        printf("\nEnter 'y' to book more : ");
        scanf(" %c",&moreBooking);

        if(moreBooking!='y')
        {
            printf("\nThank for booking with us...\n");
            break;
        }

        if(len < 1)
        {

            printf("\nSorry! Out of room to book...\n");
            break;

        }

    }

    return 0;
}
