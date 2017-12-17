/*
A palindromic number reads the same both ways. The largest palindrome 
made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindromic(int p)
{
    auto s = to_string(p);
    for (auto is{begin(s)},il{end(s)-1}; is<il; ++is,--il) {
        if ((*is)!=(*il))
            return false;
    }
    return true;
}

int main() 
{
    int largest{0};
    for (auto i{999};i>=100;--i) {
        for (auto j{999};j>=i-1 && i*j>largest;--j) {
            if (is_palindromic(i*j)) {
                largest = max(i*j,largest);
            }
        }
    }
    cout << largest << endl;
}
