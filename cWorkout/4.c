#include <stdio.h>
#include <string.h>

int main()
{
    int count, i;
    char sentence[50];
    printf("Enter a sentence: ");
    gets(sentence);

    if (sentence[0] != NULL) // joe
    {
        // count = 1; // 68949

        for (i = 0; sentence[i] != '\0'; i++)
        {
            if (sentence[i] == ' ')
            {
                count++; //
            }
        }
    }
    printf("The number of words in the given sentence is %d", count);
    return 0;
}