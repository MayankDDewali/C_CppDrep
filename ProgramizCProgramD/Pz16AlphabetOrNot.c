/* Pz16- C Program to Check Whether a Character is an Alphabet or not*/

#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        printf("%c is an Alphabet.", c);
    }
    else
    {
        printf("%c is not an Alphabet.", c);
    }
    return 0;
}