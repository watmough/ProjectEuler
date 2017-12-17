/*
2520 is the smallest number that can be divided by each of the numbers 
from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of 
the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

int main()
{
    auto i{20u};
    while (i%20||i%19||i%18||i%17||i%16||i%15||i%14||i%13||i%12||i%11)  {
        i+=20;
    }
    cout << i << endl;
}