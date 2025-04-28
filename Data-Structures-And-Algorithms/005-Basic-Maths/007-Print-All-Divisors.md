Problem
```
Given an integer N, return all divisors of N.

A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.
```

Solution:
Brute Force (O(n)):

```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;

    for (size_t i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

```

Optimized (O(√n log n)): (Note that log n and not log √n because we take 1/2 of log n and remove constant)


$\log(\sqrt{n}) = \log(n^{1/2}) = \frac{1}{2} \log(n)$

```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sqrtn = sqrt(n);

    vector<int> divisors;

    for (int i = 1; i < sqrtn; i++)
    {

        /**
         * For 36, divisor list is
         * 1 * 36
         * 2 * 18
         * 3 * 12
         * 4 * 9
         * 6 * 6
         * 9 * 4
         * 12 * 3
         * 18 * 2
         * 36 * 1
         *
         * Note that till the square root, we have symmetrical result.
         * That is why we only iterate till the square root and if n % i is 0, then n / i is also 0 provided n / i is not equal to i to avoid duplicates.
         *
         * Example:
         * n = 36
         * i = 2
         *
         * n % i = 36 % 2 = 0
         * 2 is added to the list
         * n / i = 36 / 2 = 18
         * 18 is also added to list since 18 != 2
         *
         * n = 36
         * i = 6
         *
         * n % i = 36 % 6 = 6
         * 6 is added to the list
         * n / i = 36 / 6 = 6
         * since n / i == i, we don't add it again in the list
         */

        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    std::sort(divisors.begin(), divisors.end());

    for (auto it : divisors)
    {
        cout << it << " ";
    }

    cout << endl;
}
```