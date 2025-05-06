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

Advanced Version:
Leetcode: https://leetcode.com/problems/palindrome-number/
```c++
class Solution {
  public: bool isPalindrome(int x) {
    if (
      // Negative numbers
      x < 0 ||
      // Case for numbers ending with 0
      (x % 10 == 0 && x != 0)
    ) {
      return false;
    }

    int reversed_half = 0;
    // We only reverse half number to avoid overflow and avoid unnecessary computation
    while (x > reversed_half) {
      // Extract the last digit and build the reversed number
      reversed_half = reversed_half * 10 + x % 10;
      x /= 10;
    }

    // Compare the two halves (discard the middle digit for odd-length numbers)
    return x == reversed_half || x == reversed_half / 10;
  }
};
```