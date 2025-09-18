#include<stdio.h>
int main()
{
  int month;

  printf("Enter month number (1-12): ");
  scanf("%d", &month);

  switch (month)
    {case 1: 
       printf("January - 31 days\n");
       break;
     case 2:
       printf("February -28 or 29 days (its an leap year)\n");
       break;
     case 3:
       printf("March - 31 days\n");
       break;
     case 4:
       printf("April - 30 days\n");
       break;
     case 5:
       printf("May - 31 days\n");
       break;
     case 6:
       printf("june - 30 days\n");
       break;
     case 7:
       printf("July - 31 days\n");
       break;
     case 8:
       printf("Auguest - 31 days\n");
       break;
     case 9:
       printf("September - 30 days\n");
       break;
     case 10:
       printf("October - 31 days\n");
       break;
     case 11:
       printf("November - 30 days\n");
       break;
     case 12:
       printf("December - 31 days\n");
       break;
     default:
       printf("Invalid input please enter a number between 1 to 12: \n");
    }
  return 0;
}
