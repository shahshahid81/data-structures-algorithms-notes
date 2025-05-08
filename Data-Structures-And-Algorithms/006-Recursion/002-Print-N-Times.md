```c++
#include <bits/stdc++.h>

using namespace std;

void print(int n)
{
    if (n <= 0)
        return;
    cout << n << endl;
    print(n - 1);
}

int main()
{
    int n;
    cin >> n;

    print(n);
}

```

Input:
```
10
```

Output:
```
10
9
8
7
6
5
4
3
2
1
```