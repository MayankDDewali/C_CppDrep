/*Write a program for a matchstick game being played between the computer and a user. Your program should ensure that 
the computer always wins. Rules for the grame are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.*/
#include<stdio.h>
int main()
{
    int ms = 21, uc, cc;
    printf("Hello there this is the game of matchsticks so please choose the matchstick...\n");
    while(ms>=1)
    {
        printf("Total Match Sticks: %d\n", ms);
        printf("Pick up the match sticks between (1 to 4): ");
        scanf("%d", &uc);

        if(uc>4)
        {
            printf("Invalid Entry");
            break;
        }
        cc = 5 - uc;
        printf("Computer picks up the %d match sticks.\n", cc);
        ms = ms-uc-cc;
        if(ms==1)
        {
            printf("\nYou have been lost via computer.");
            break;
        }
    }return 0;
}
