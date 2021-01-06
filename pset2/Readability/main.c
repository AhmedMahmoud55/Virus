#include <stdio.h>
#include <string.h>
#include<cs50.h>
#include<ctype.h>

int main()
{

    string s = get_string("Text: ");

    int letters =0,words=0,sentences=0;

    for(int i =0 ;i<strlen(s);i++)
    {
        if(islower (s[i])|| isupper(s[i]))
        {
            letters++;
        }
        else if(s[i]==32)
        {
            words++;
        }
        else if (s[i]==33||s[i]==46||s[i]==63)
        {
            sentences++;
        }
    }
    words+=1;
    float letter_count=   0.0588 *(float) letters / words *100;
    float sentence_count= 0.296 *(float) sentences / words *100;
    float index = letter_count - sentence_count - 15.8;
    float grade = index;

    //printf("letters : %i\nwords : %i\nsentences : %i\n",letters,words,sentences);
    if(grade<1)
    {
        printf("Before Grade 1");
    }
    else if (grade>=16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade : %i", (int) round(grade));
    }

}
