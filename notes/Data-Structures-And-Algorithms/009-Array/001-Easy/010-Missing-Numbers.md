```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int missing = 0;

        for (int i = 0; i < n; ++i)
        {
            missing ^= (i) ^ nums[i];
        }

        missing ^= n;

        return missing;
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
        cout << "Missing: " << s.missingNumber(vec) << endl;
    }

    return 0;
}
```

Input:
```
4
9
9 6 4 2 3 5 7 0 1
3
3 0 1
2
0 1
2
2 0
```

Output:
```
Missing: 8
Missing: 2
Missing: 2
Missing: 1
```