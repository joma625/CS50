#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    //prompt user input
    long num = get_long("Number: ");
    //calculate size and turn input into an array
    int size = log10(num) + 1;
    int num_arr[size];
    for(int i = size-1; i>-1; i--,num/=10)
    {
        num_arr[i] = num % 10;
    }

    //determine if it follows Luhn's algorithm
    int luhn = 0;
    for(int i=size-2; i>-1; i= i-2)
    {
        luhn = luhn + (num_arr[i]*2)/10 + (num_arr[i]*2)%10;
    }
    for(int i=size-1; i>-1; i=i-2)
    {
        luhn = luhn + num_arr[i];
    }

    //determine what type of card it is
    if( ( luhn % 10 == 0 & num_arr[0] == 3 & num_arr[1] == 4 & size == 15) || ( luhn % 10 == 0 & num_arr[0] == 3 & num_arr[1] == 7 & size == 15) )
    {
        printf("AMEX\n");
    }
    else if(( luhn % 10 == 0 & num_arr[0] == 4 & size == 13) || ( luhn % 10 == 0 & num_arr[0] == 4 & size == 16))
    {
        printf("VISA\n");
    }
    else if( luhn % 10 == 0 & size == 16 & num_arr[0] == 5 & num_arr[1]>0 & num_arr[1]<6)
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

}
