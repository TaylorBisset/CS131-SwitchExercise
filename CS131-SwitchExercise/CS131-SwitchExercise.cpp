#include <iostream>

using namespace std;

/*
Create 4000 random numbers between 1-4, and build a count for the
total number of each of the 4 numbers were chosen. We would hope
that the frequency would be around 1000 times for each of the
numbers in our selected range.
*/

int main()
{
    int ones;
    int twos;
    int threes;
    int fours;
    int numCount;
    int randomNum;

    while (numCount <= 4000)
    {
        switch (randomNum)
        {
        case 1:
            ones++;
        case 2:
            twos++;
        case 3:
            threes++;
        case 4:
            fours++;
        }
        numCount++;
    }
    
    // final output

}
