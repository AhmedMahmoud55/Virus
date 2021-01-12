#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int main()
{

    string s = get_string("Text: ");

    int letters = 0, words = 0, sentences = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]) || isupper(s[i]))
        {
            letters++;
        }
        else if (s[i] == 32)
        {
            words++;
        }
        else if (s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
            sentences++;
        }
    }
    words += 1;
    float index = (0.0588 * (float) letters / words * 100) - (0.296 * (float) sentences / words * 100) - 15.8;
    float grade = index;

    //printf("letters : %i\nwords : %i\nsentences : %i\n",letters,words,sentences);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(grade));
    }

}