#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    {
        
    }
    int a = atoi(argv[1]);
    int a1 = a%26;

        string s = get_string("plaintext: ");
        printf("ciphertext: ");
        for(int i = 0; i < strlen(s); i++)
        {
        if(s[i] >= 65 && s[i] <= 90)
        {
            if(s[i] + a1 <= 90)
            {
                printf("%c", s[i] + a1);
            }
            else if(s[i] + a1 > 90)
            {
                printf("%c", s[i] + a1 - 26);
            }
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            if(s[i] + a1 <= 122)
            {
                printf("%c", s[i] + a1);
            }
            else if(s[i] + a1 > 122)
            {
                printf("%c", s[i] + a1 - 26);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;

}