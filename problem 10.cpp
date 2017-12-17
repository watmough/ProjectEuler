/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

constexpr auto is_prime(uint64_t p)
{
    for(uint64_t i{2}; i<=sqrt(p); ++i) {
        if (p % i==0)
            return false;
    }
    return true;
}

int main()
{
    auto total{0ull},i{2000000ull};
    while (i>1) {
        total += (is_prime(i) ? i : 0);
        --i;
    }

    cout << "total: " << total << endl;
}


/*
// Works up to 100,000 but fails at 1,000,000 in g++ 6.3.0 
constexpr auto call_is_prime(int i)
{
    auto total{0ull};
    while (i>1) {
        total += (is_prime(i) ? i : 0);
        --i;
    }
    return total;
}

int main()
{
    cout << "total: " << call_is_prime(1000000) << endl;
}
*/