#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    // check there is only 1 arguments and it is a number else returns instructions
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
         
    }
    for (int i = 0, n = strlen(argv[1]) ; i < n ; i++)
    {
        if (!(isdigit(argv[1][i])))
        {
            printf("Usage: ./caesar key\n");
            return 1;
            
        }
    }
    // The atoi function converts a string to an integer
    int k = atoi(argv[1]);
    int ci;
    string s = get_string("plaintext: "); //get text
    printf("ciphertext: "); // print out cipher
    for (int j = 0, l = strlen(s); j < l; j++)
    {
        if (isalpha(s[j])) //check if text not char
        {
            //check if it is an uppercase letter
            if (isupper(s[j]))
            {
                s[j] -= 65;
                ci = (s[j] + k) % 26;
                printf("%c", ci + 65);
            }
            //check if it is an lower letter
            else if (islower(s[j]))
            {
                s[j] -= 97;
                ci = (s[j] + k) % 26;
                printf("%c", ci + 97); 
            }
             
        }
        else
        {
            printf("%c", s[j]);
        }
         
    }
    printf("\n");

}