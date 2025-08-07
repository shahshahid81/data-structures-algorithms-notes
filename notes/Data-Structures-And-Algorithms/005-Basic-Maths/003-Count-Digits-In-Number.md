Problem:
```
Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
                        
Example 2:
Input:N = 7789
Output: 4
Explanation: The number 7789 has 4 digits.
```

Solution:
* Brute Force (O(n))
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;
    while (x > 0)
    {
        x /= 10;
        count++;
    }

    cout << count << endl;
}
```

* Optimal Solution (O(1))
```
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    // Log 10 returns how many times a number must be raised by 10 to get the value.
    // So using log10 here will gives us the number of times we need to raise by 10. We are adding 1 since the value will be less than 1.
    // For example, log10(10) will return 1. log10(20) will return ~= 1.3010. Adding 1 and then casting will return the number of digits
    int count = static_cast<int>(log10(x) + 1);
    cout << count << endl;
}

```