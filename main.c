#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char getInputYN(char * Message)
{
    //While loop in case we have to get input multiple times
    while(1) {

        //Print the message given to the function
        printf("%s", Message);

        //Get a character (hopefully y or n)
        char Input = getchar();

        //Print a new line after the message, otherwise it looks odd
        printf("\n");

        //Clear the input buffer, otherwise things get printed twice
        while ((getchar()) != '\n');

        //Check if the Input char is y, Y, n, or N, and return it if it is
        if((Input == 'y') || (Input == 'Y')) {
           return Input;
        }
        else if((Input == 'n') || (Input == 'N')) {
            return Input;
        }

        //If the Input char is not what it should be, print a string and retry
        else {
            printf("Please enter Y or N.\n");
        }
    }
}

int main()
{
    //Find out if the user wants to play a game
    char playGame = getInputYN("Would you like to play a game? (Y/N) ");

    //Print if the user chose y, Y, n, or N
    printf("You chose %c.", playGame);

    return 0;
}
