#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

                time_t t;

                srand((unsigned)time(&t));

                int randomnumber=rand()%21;
                int i=0;
                printf("This is a guessing game\n\n");
                printf("Enter number of tries you want: ");
                scanf("%d",&i);
        for(;i>0;i--)
         {
             int playerguess;
            printf("you have %d tries left\nEnter your guess:",i);
            scanf("%d",&playerguess);

            if(playerguess<randomnumber)
{

             printf("Sorry, %d is wrong. My number is more than that\n" , playerguess);
}

             else if (playerguess>randomnumber)
{

             printf("Sorry, %d is wrong. My number is less than that\n" , playerguess);
}
              else if (playerguess=randomnumber)
{

             printf("congratulations your guess is correct you won\n");
             break;
}

         }
}
