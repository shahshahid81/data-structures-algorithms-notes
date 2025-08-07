```c++
#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t-- != 0)
    {
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
}
```

Input:
```
2
3
5
```

Output:
```
6
120
```