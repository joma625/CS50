#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Height: ");
    for(int i = 0; i<height; i++)
    {
        for(int j = 7; j>i; j--)
        {
            printf(" ");
        }
        for(int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_positive_int(string prompt)
{
    int height;
    do{
        height = get_int("%s", prompt);

    }while((height < 1) || (height > 8));

    return height;
}
