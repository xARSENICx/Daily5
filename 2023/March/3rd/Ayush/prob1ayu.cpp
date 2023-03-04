#include <bits/stdc++.h>
using namespace std;

//primality test
bool isPrime(int n)
{
    for (int i=2; i*i<=n; i++){
        if (n%i==0) return false;
    }
    
    return true;
}

int main()
{
    //It's easy to deduce that the biggest pandigital number from where the search should begin is 7654321.
    string digits="7654321";
    while (prev_permutation(digits.begin(), digits.end()))
    {
        int n = stoi(digits);
        if(isPrime(n))
        {
            cout<<n;
            break;
        }
    }
    return 0;
}
