Problem:
```
Example 1:
Input:N = 12345
Output:54321
Explanation: The reverse of 12345 is 54321.

Example 2:
Input:N = 7789
Output: 9877
Explanation: The reverse of number 7789 is 9877
```

Solution:
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int reverse = 0;
    while (x != 0)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }

    cout << reverse << endl;
}
```

Advance Version:
Leetcode: https://leetcode.com/problems/reverse-integer/
```c++
class Solution {
public:
    int reverse(int x) {

        int reverse = 0;
        while (x != 0) {
            int last = x % 10;
            x /= 10;
			// Check for overflow
			
            if (reverse > (INT_MAX / 10) || reverse < (INT_MIN / 10)) {
                return 0;
            }
            reverse = reverse * 10 + last;
        }
        return reverse;
    }
};
```