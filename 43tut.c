#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // variable to track wheather we are inside the tag ;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // Remove the trailing spaces from th front.
    while (string[0] == ' ')
    {

        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
        // shift the string to the left...
    }
    // Remove the trailing spaces from th end.
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char string[] = "<h1>                   This is a HEading2               </h1>";
    parser(string);
    printf("~~%s~~", string);
    return 0;
}
/*
input :
<h1>This is a HEading </h1>
output :
THis is a Heading


input :
<h2>This is a HEading2 </h2>
output :
THis is a Heading2


*/
