//
//  main.c
//  DnD_dice
//
//  Created by Ree on 12/12/16.
//  Copyright © 2016 Ree. All rights reserved.
//
//Simulate a d4, d6, d10, or d20 roll.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int d4();
int d6();
int d10();
int d20();

char input;
char query;

int main()
{
    //srand(time(NULL));
    //printf("d4: %d, d6: %d, d10: %d, d20: %d\n",d4(),d6(),d10(),d20());
    bool run = true;
    while(run == true)
    {
        srand(time(NULL));
        printf("Roll which die? (d4, d6, d10, d20, none): ");
        scanf("%9s",&input);
        if(strcmp(&input,"d4") == 0)
            d4();
        else if(strcmp(&input,"d6") == 0)
            d6();
        else if(strcmp(&input,"d10") == 0)
            d10();
        else if(strcmp(&input,"d20") == 0)
            d20();
        else if(strcmp(&input,"none") == 0)
            run = false;
        else
            printf("ERROR: Retype 'd4', 'd6', 'd10', 'd20', or 'none' please.\n");
    }


}

int d4()
{
    printf("%d\n", (rand()%4) + 1);
    return 0;
}

int d6()
{
    printf("%d\n", (rand()%6) + 1);
    return 0;
}

int d10()
{
    printf("%d\n", (rand()%10) + 1);
    return 0;
}

int d20()
{
    printf("%d\n", (rand()%20) + 1);
    return 0;
}
