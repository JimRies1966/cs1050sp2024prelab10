/*
 * CS1050
 * Spring 2024
 * Prelab 10 Starter File
 * main.c
 *
 * by Jim Ries
 */

// includes
#include <stdio.h>
#include "prelab10.h"

// Main
int main(void)
{
    char s[STRINGCOUNT][256]=
    {
        S1,S2,S3,S4
    };

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings without whitespace ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,KillWhiteSpace(s[i]));
    }
}
