#include<stdio.h>
#include<string.h>
/*
    <string.h> adds :

    strlen  (length figure out)
    strat   (attaching 2 strings)
    strcpy  (copy)
    strncpy (specific parts copy)
    strcmp  (comparing to check if both strings are exactly same or not.)


 string is an array
 strings size +1 because the last element of-
- a string is null.

\0 = null
0= 48 (ASCII value)

*/


int main()
{
    /*
    char course[]={'E','E','E','1','0','3','\0'};

    // to print the whole sentence, use %s (s = string)
    printf("%s\n", course);

    // to print a specific element , use %c (c = character)
    printf("%c\n", course[2]);

    // to print a specific element using pointer:
    printf("%c\n", *(course+5));


    // Another way to write string:
    char course1[]="EEE101";

    int i=0;
    while(course1[i])
    {
        printf("%c", course[i]);
        i+=1;
    }
    */

    char sentence[50];
    printf("Please enter a sentence.\n");
    //scanf("%s",&sentence);
    //scanf has a problem, it can only scan one word,
    //a space makes it stop scanning

    // so we use fgets

    // to take a sentence string input:
    fgets(sentence,sizeof(sentence),stdin);
    printf("%s", sentence);


    printf("%s", sentence);


    return 0;
}
