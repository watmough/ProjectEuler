/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can 
see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(uint64_t p)
{
    for(uint64_t i{2}; i<=sqrt(p); ++i) {
        if (p % i==0)
            return false;
    }
    return true;
}

int main()
{
    uint64_t count = 0;
    auto i{1ul};
    while (count!=10001) {
        if (is_prime(++i))
            count++;
    }
    cout << i << endl;
    return 0;
}