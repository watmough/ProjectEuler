/*
Each new term in the Fibonacci sequence is generated by adding the
 previous two terms. By starting with 1 and 2, the first 10 terms 
 will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do
not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>
using namespace std;

int main()
{
    auto a{1},b{2};
    auto sum{2ll};
    while (a<4000000 && b<4000000) {
        auto next = a+b;
        a=b;
        b=next;
        if ((b%2)==0)
            sum+=b;
    }
    cout << "Sum: " << sum << endl;
}
