#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(void)
{
    string s = get_string("Sentence \n");
    int j = 0;
    int u = 1;
    int r = 0;
    for( int i = 0; i < strlen(s); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') )
        {
            j++;
        }
        else if(s[i] == 32)
        {
            u++;
        }
        else if(s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            r++;
        }


    }


    float f = (float) j / (float) u;
    float g = f*100;
    float index = 0.0588*g - 0.296*(float)r - 15.8;

    if(index < 1)
    {
        printf("Below grade 1\n");
    }
    else if(index > 16 )
    {
        printf("Grade 16+\n");
    }
    else
    {
        int a = round(index);
        printf("Grade %i\n", a);
    }

}