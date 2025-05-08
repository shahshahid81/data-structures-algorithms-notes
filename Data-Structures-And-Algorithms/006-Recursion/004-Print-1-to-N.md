```c++
#include <bits/stdc++.h>

using namespace std;

void print(int start, int end)
{
    if (start > end)
        return;
    cout << start << endl;
    print(start + 1, end);
}

int main()
{
    int end;
    cin >> end;

    print(1, end);
}
```

Input:
```
10
```

Output:
```
1
2
3
4
5
6
7
8
9
10
```