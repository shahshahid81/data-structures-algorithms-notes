Problem:
```
Given an integer N, return true it is an Armstrong number otherwise return false.
An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example 1:
Input:N = 153
Output:True
Explanation: 13+53+33 = 1 + 125 + 27 = 153
            
Example 2:
Input:N = 371
Output: True
Explanation: 33+53+13 = 27 + 343 + 1 = 371
```

Solution:
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int number_of_digits = static_cast<int>(log10(x) + 1);

    int sum = 0,
        n = x;
    while (x != 0)
    {
        sum += pow((x % 10), number_of_digits);
        x /= 10;
    }

    cout << std::boolalpha << (sum == n) << endl;
}
```