```c++
#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int result = fibonacci(n - 1) + fibonacci(n - 2);
    return result;
}

void print_fibonnaci(int n)
{
    for (int i = 0; i < n; i++)
        cout << fibonacci(i) << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t-- != 0)
    {
        int n;
        cin >> n;
        print_fibonnaci(n);
    }
}
```

Input:
```
2
5
6
```

Output:
```
0 1 1 2 3 
0 1 1 2 3 5 
```