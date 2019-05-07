//create a function that will take 2 parameters(int, int)
//the first int should be between the range of 1 and 12
//and represents which number the clock hand is pointing at
// the second can be any integer

//MVP
// the second int will be a positive number only
//return the hour that the hand will be poiting at

//hacker 1
//return both the # of clock cycles and the final hour

//hacker 2
//accept negative numbesr in the 2nd int and go back on clock
#include <cs50.h>
#include <stdio.h>

int time;
int hours;
int moveHourHand;

int main(void)
{

    do
    {
       time = get_int("time 1-12: ");
    }
    while ( time <= 0);

    do
    {
        hours = get_int("hours: ");
    }
    while ( hours <= 0);

    moveHourHand = hours % 12;
    printf("move hour hand is %i\n", moveHourHand);
    time += moveHourHand;

    printf("time is %i\n", time);
}