```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[count++] = nums[i];
            }
        }
        for (int i = count; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        Solution s;
        s.moveZeroes(vec);
        for (auto el : vec)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}
```

Leetcode Discuss:
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[count++] = nums[i];
            }
        }
        for (int i = count; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        Solution s;
        s.moveZeroes(vec);
        for (auto el : vec)
        {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}
```

Input:
```
3
5
0 1 0 3 12
1
0
2
2 1
```

Output:
```
1 3 12 0 0
0
2 1
```