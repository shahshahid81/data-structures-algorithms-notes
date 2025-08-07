Problem Statement:
```
Given two integers N1 and N2, find their greatest common divisor.
The Greatest Common Divisor of any two integers is the largest number that divides both integers.

Example 1:
Input:N1 = 9, N2 = 12
Output:3
Explanation:Factors of 9: 1, 3 and 9
Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.

Example 2:
Input:N1 = 20, N2 = 15
Output: 5
Explanation:Factors of 20: 1, 2, 4, 5
Factors of 15: 1, 3, 5
Common Factors: 1, 5 out of which 5 is the greatest hence it is the GCD.
```

Solution:
Brute Force (O(min(a,b))):
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int minAB = min(a, b);
    int gcd = 1;
    for (int i = 1; i <= minAB; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
}
```

A little better approach (Starting from max to get the answer as quick as possible)

```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int minAB = min(a, b);
    int gcd = 1;
    for (int i = minAB; i > 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }

    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
}
```

Optimal Solution (O log min (a,b)):
This solution uses Euclidean Algorithm which states that GCD(a,b) = GCD(a-b,b) if a > b. In the algorithm, we have used mod instead of subtraction to avoid repeated subtraction. For example, if a is 52 and b is 10, we can keep subtracting a by b until a becomes 2 which is a % b.
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    while (a > 0 && b > 0)
    {

        if (a > b)
            a %= b;
        else
            b %= a;
    }

    cout << "GCD of " << x << " and " << y << " is " << (a == 0 ? b : a) << endl;
}
```
