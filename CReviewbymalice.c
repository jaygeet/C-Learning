/* This is Print program * To Run this command from terminal type at Dekstop$ gcc -o a.out C.c --std=c11 && ./a.out    ; Check out P.py for Python equivalent  */

#include <stdio.h>

#define NUMBER_OF_CHOICES 3

//The preprocessor definitions were removed from here


int main(int argc, char** argv) //main needs to return an int. It's also good idea to always include argc and argv
{
    const int STEP = 20;
    const int LOWER = 0;
    const int UPPER = 100;
    const char* CHOICES[NUMBER_OF_CHOICES] = {"Line/words/charcaters counting", "Count Line/tabs/blanks", "Unit Converter"};
    char choice; // Elect is a bad name for choice.
    printf("Hello, Goody Morning\n"); /* Print comment */
    //Change to 0/1/2
    printf("Available choices:\n");
    for(int i = 0; i < NUMBER_OF_CHOICES; ++i)
    {
        printf("%d: %s\n", i, CHOICES[i]);
    }
    printf("Your choice: ");
    choice=getchar();

    if(choice == '0') //Count line/tabs/blanks
    {
        unsigned int line_count = 0;
        unsigned int character_count = 0;
        unsigned int word_count = 0;
        unsigned int separator = 0;
        char input;

        while( (input=getchar()) != EOF )
        {
            ++character_count;
            if (input=='\n')
            {
                ++line_count;
            }

            if (input==' ' || input=='\n' || input=='\t')
            {
                separator = 1;
            }
            else if (separator) // 0 is false, 1 is true in C.
            {
                separator = 0;
                ++word_count;
            }
        }
        printf("\nLines: %u,Words: %u,Characters: %u\n",line_count, word_count, character_count);
    }
    else if(choice=='1')
    {
        char input;
        unsigned int line_count = 0;
        unsigned int tab_count = 0;
        unsigned int space_count = 0;

        printf("\nEnter any text: ");

        while ( (input=getchar()) != EOF )
        {
            switch(input)
            {
            case '\n':
                ++line_count;
                break;
            case '\t':
                ++tab_count;
                break;
            case ' ':
                ++space_count;
                break;
            default:
                break;
            }
        }
        printf("There are: %u lines, %u tabs and %u blanks\n", line_count, tab_count, space_count);
    }
    else if(choice=='2')
    {
        printf("Degrees in celcius and fahrenheit, from %d to %d with step %d.", LOWER, UPPER, STEP);
        printf("    F       C       C       F\n");
        float degree_celcius=LOWER;
        float degree_fahrenheit=LOWER;
        for (int i=0;i<=UPPER;i++)                /* For Loop*/
        {
            printf ("%5.0f %10.3f",degree_fahrenheit,(5*(degree_fahrenheit-32))/9);
            printf ("%5.0f %10.3f\n",degree_celcius,(9*degree_celcius+32)/5);
            degree_fahrenheit+= STEP;
            degree_celcius+= STEP;
        }
    }
    else
    {
        int a = 100;
        int b = a;
        int sum = a + b;
        printf ("Sum: %d\n",sum);
        float float_sum = 0.0;
        float x = 10.0;
        printf ("x=%3.2f,x=%5.2f \n x=%.5f \n",x,x,x);
        float_sum = a + x;
        printf ("c= %.3f\n",float_sum);
    }

    return 0;
}
