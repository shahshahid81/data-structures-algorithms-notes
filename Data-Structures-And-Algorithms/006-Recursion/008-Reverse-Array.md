Modify Original Array (Functional Approach):
```c++
#include <bits/stdc++.h>

using namespace std;

void swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

void reverse_array(int arr[], int start, int end)
{
    if (start > end)
        return;
    swap(arr, start, end);
    reverse_array(arr, start + 1, end - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t-- != 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        reverse_array(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

```

Input:
```
2
3
1 2 3
5
10 20 30 40 50
```

Output:
```
3 2 1 
50 40 30 20 10
```

