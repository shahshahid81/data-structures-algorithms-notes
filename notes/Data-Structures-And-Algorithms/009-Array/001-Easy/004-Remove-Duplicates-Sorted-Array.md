```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0, j = 1, n = nums.size(), k = 0;
        while (i < n)
        {
            while (j < n && nums.at(j) <= nums.at(i))
            {
                j++;
            }
            if (j < n)
            {
                nums.at(i + 1) = nums.at(j);
                k = i + 1;
            }
            i++;
        }

        return k + 1;
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
        auto result = s.removeDuplicates(vec);
        cout << boolalpha << "K: " << result << endl;
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
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }

        int i = 1, n = nums.size();
        for (int j = 1; j < n; j++)
        {
            if (nums[j] != nums[j - 1])
            {
                nums[i++] = nums[j];
            }
        }
        return i;
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
        auto result = s.removeDuplicates(vec);
        cout << boolalpha << "K: " << result << endl;
    }

    return 0;
}
```

Input:
```
3
7
1 1 2 2 2 3 3
11
1 1 1 2 2 3 3 3 3 4 4
3
1 2 3
```

Output:
```
K: 3
K: 4
K: 3
```