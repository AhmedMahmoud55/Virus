#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
    int n = strlen(argv[1]);
    // check there is only 1 arguments and it is a number else returns instructions
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (n != 26)
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }

    for (int i = 0 ; i < n ; i++)
    {
        if (!(isalpha(argv[1][i])))
        {
            printf("All Key must be an Alphabeth\n\n");
            return 1;

        }
        for (int j = i + 1; j < n; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Key must not contain repeated alphabeth\n");
                return 1;
            }
        }

    }
    string s = get_string("plaintext: "); //get text
    printf("ciphertext: "); // print out cipher
    for (int k = 0, l = strlen(s); k < l; k++)
    {

        //check if it is an uppercase letter
        if (isupper(s[k]))
        {
            printf("%c", toupper(argv[1][s[k] - 65]));
        }
        else if (islower(s[k]))
        {
            printf("%c", tolower(argv[1][s[k] - 97]));
        }
        else
        {
            printf("%c", s[k]);
        }
    }
    printf("\n");
}
