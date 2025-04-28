Problem:
```
Given an integer N, return true if it is a palindrome else return false.

Example 1:
Input:N = 4554
Output: true
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
      
Example 2:
Input:N = 7789
Output: false
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
```

Solution:
Leetcode: https://leetcode.com/problems/palindrome-number/
```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x < 0)
    {
        cout << std::boolalpha << false << endl;
        return 0;
    }

    int reverse = 0, n = x;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    cout << std::boolalpha << (reverse == x) << endl;
}

```