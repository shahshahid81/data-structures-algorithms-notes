```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int linearSearch(vector<int> &nums, int n)
    {
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == n)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        Solution s;
        cout << s.linearSearch(vec, k) << endl;
    }

    return 0;
}
```

Input:
```
3
5 3
1 2 3 4 5
5 5
5 4 3 2 1
2 3
2 1
```

Output:
```
2
0
-1
```