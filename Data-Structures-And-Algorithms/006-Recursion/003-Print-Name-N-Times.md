```c++
#include <bits/stdc++.h>

using namespace std;

void print(int n)
{
    if (n <= 0)
        return;
    cout << "Test" << endl;
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
Test
Test
Test
Test
Test
Test
Test
Test
Test
Test
```