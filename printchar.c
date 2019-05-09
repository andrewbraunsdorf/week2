#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string name = "arnold";
    printf("%c\n", name[3]);

    for (int line = 0, length = strlen(name); line < length; line++)
    {
        printf("%c\n", name[line]);
    }

    //%d returns the ascii value
}