/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(){

    for (auto a{1}; a <= 498;++a)
        for (auto b{a}; b <= 499;++b)
            for (auto c{b}; c <= 500;++c) 
                if (a*a+b*b==c*c && a+b+c==1000) {
                    cout << a << " " << b << " " << c << " " << a*b*c << endl;
                    exit(0);
                }


        return 0;
}
