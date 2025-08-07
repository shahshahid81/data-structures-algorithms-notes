Problem:
```
Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Example 1:
Input:N = 2
Output:True
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

Example 2:
Input:N =10
Output: False
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.
```

Solution:
Brute Force (O(n)):
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << n << " is prime.";
    }
    else
    {
        cout << n << " is not prime.";
    }
}
```

Optimal Solution (O(sqrt(n))):
This solution is optimal because the divisors are symmetrical. Check Print All Divisors Problem for more details.
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    int sqrtn = sqrt(n);

    for (int i = 1; i <= sqrtn; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }

    if (count == 2)
    {
        cout << n << " is prime.";
    }
    else
    {
        cout << n << " is not prime.";
    }
}
```