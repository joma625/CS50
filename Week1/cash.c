#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //prompt user input; keep prompting if input is negative
    float change;
    do{
        change = get_float("Change owed: ");
    }
    while(change < 0);

    //caculate amount of quarters
    int percent_change = round(change*100);
    int quarters = percent_change/25;
    //calculate amount of dimes
    int to_dime = percent_change%25;
    int dimes = to_dime/10;
    //calculate amount of nickles
    int to_nic = to_dime%10;
    int nic = to_nic/5;
    //calculate amount of pennies
    int penn = to_nic%5;
    //display total coins
    int total = quarters + dimes + nic + penn;
    printf("%i\n", total);

    //printf("%i", dimes);



}
