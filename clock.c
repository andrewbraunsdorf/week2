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
int cyclesReturned;

int main(void)
{

    do
    {
       time = get_int("time 1-12: ");
    }
    while (time <= 0 || time > 12);
    // (time <= 12 && time> 0)

    hours = get_int("hours: ");

    moveHourHand = hours % 12;
    cyclesReturned = hours / 12;
    time += moveHourHand;

    if (time == 0)
    {
        time = 12;
    }

    printf("Move hour hand %i times\n", moveHourHand);
    printf("Number of Clock Cycles is %i\n", cyclesReturned);
    printf("Time is %i o'clock\n", time);
}