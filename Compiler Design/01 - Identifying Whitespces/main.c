// Program to identify white spaces in a sentence

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int count = 0;

    printf("Enter a sentence: ");
    gets(ch);

    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] == ' ')
        {
            count++;
        }
        i++;
    }

    printf("Number of white spaces: %d\n", count);

    return 0;
}