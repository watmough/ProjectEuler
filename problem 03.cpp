/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
using namespace std;

bool is_prime(uint64_t p)
{
    for(uint64_t i{2}; i<sqrt(p); ++i) {
        if (p % i==0)
            return false;
    }
    return true;
}

int main()
{
    uint64_t target = 600851475143;
    uint64_t max_so_far = 2;
    for (auto i{3ul}; i<=target/2; i+=2) {
        if (target % i==0 && 
            is_prime(target/i)) {
                cout << "Largest prime factor " << target/i << endl;
                break;
        }
    }
    return 0;
}


