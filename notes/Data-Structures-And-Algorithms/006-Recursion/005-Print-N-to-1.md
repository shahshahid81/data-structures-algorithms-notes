```c++
#include <bits/stdc++.h>

using namespace std;

void print(int start, int end)
{
    if (start > end)
        return;
    print(start + 1, end);
    cout << start << endl;
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