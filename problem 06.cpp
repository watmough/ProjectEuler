/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten 
natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one 
hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;

int main()
{
    auto sum_sq{0u},sq_sum{0u};
    for(auto i{1u};i<=10;++i) {
        sum_sq += i*i;
        sq_sum += i;
    }
    cout << (sq_sum*sq_sum)-sum_sq << endl;
    return 0;
}