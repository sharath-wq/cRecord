#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[100];
    int count = 0;
    printf("Enter the sentence : ");
    gets(sentence);
    if (sentence[0] != NULL)
    {
        count++;
        for (int i = 0; sentence[i] != '\0'; ++i)
        {
            if (sentence[i] == ' ')
                count++;
        }
    }
    printf("Number of words in given string is %d", count);
    getch();
    return 0;
}