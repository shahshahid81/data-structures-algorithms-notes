```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums)
    {
        if (nums.size() <= 1)
        {
            return;
        }
        int start = nums.at(0), n = nums.size();
        for (int i = 1; i < n; i++)
        {
            nums.at(i - 1) = nums.at(i);
        }
        nums.at(n - 1) = start;
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
        s.rotate(vec);
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
2
5
1 2 3 4 5
1
3
```

Output:
```
2 3 4 5 1 
3 
```
