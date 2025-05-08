Parameterized Recursion (Data passed as parameter)
```c++
#include <bits/stdc++.h>

using namespace std;

int sum(int n, int total)
{
    if (n <= 0)
        return total;
    return sum(n - 1, total + n);
}

int main()
{
    int t;
    cin >> t;

    while (t-- != 0)
    {
        int n, total = 0;
        cin >> n;
        cout << sum(n, total) << endl;
    }
}
```

Input:
```
2
6
5
```

Output:
```
21
15
```

Functional Recursion
```c++
#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    if (n <= 0)
        return 0;
    return n + sum(n - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t-- != 0)
    {
        int n;
        cin >> n;
        cout << sum(n) << endl;
    }
}
```

Input:
```
2
6
5
```

Output:
```
21
15
```