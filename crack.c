#include <cs50.h>
#include <stdio.h>
#include <crypt.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }

    //retrieve hash as string
    int hash = atoi(argv[0])*10 + atoi(argv[1]);
    char str_hash[3];
    sprintf(str_hash, "%d", hash);

    //go through all the ones with one character
    for (char i = 65; i < 123; i++)
    {
        char str[2];
        str[0] = i;
        str[1] = '\0';

        if(strcmp(crypt(str, str_hash), argv[1]) == 0)
        {
            printf("%s\n", str);
            return 1;
        }
    }

    //two characters
    for (char i = 65; i < 123; i++)
    {
        for(char j = 65; j < 123; j++)
        {
            char str[3];
            str[0] = i;
            str[1] = j;
            str[2] = '\0';

            if(strcmp(crypt(str, str_hash), argv[1]) == 0)
            {
                printf("%s\n", str);
                return 1;
            }

        }

    }

    //three characters
    for(char i = 65; i < 123; i++)
    {
        for(char j = 65; j < 123; j++)
        {
            for(char k = 65; k < 123; k++)
            {
                char str[4];
                str[0] = i;
                str[1] = j;
                str[2] = k;
                str[3] = '\0';

                if (strcmp(crypt(str, str_hash), argv[1]) == 0)
                {
                    printf("%s\n", str);
                    return 1;
                }
            }
        }
    }

    //four characters
    for(char i = 65; i < 123; i++)
    {
        for(char j = 65; i < 123; i++)
        {
            for(char k = 65; i < 123; i++)
            {
                for(char l = 65; l < 123; l++)
                {
                    char str[5];
                    str[0] = i;
                    str[1] = j;
                    str[2] = k;
                    str[3] = l;
                    str[4] = '\0';

                    if (strcmp(crypt(str, str_hash), argv[1]) == 0)
                    {
                        printf("%s\n", str);
                        return 1;
                    }
                }
            }
        }
    }

    //five characters
    for (int i = 65; i < 123; i++)
    {
        for(int j = 65; j < 123; j++)
        {
            for(int k = 65; k < 123; k++)
            {
                for(int l = 65; l < 123; l++)
                {
                    for (int m = 65; m < 123; m++)
                    {
                        char str[6];
                        str[0] = i;
                        str[1] = j;
                        str[2] = k;
                        str[3] = l;
                        str[4] = m;
                        str[5] = '\0';

                        if (strcmp(crypt(str, str_hash), argv[1]) == 0)
                        {
                            printf("%s\n", str);
                            return 1;
                        }
                    }
                }
            }
        }
    }
}
