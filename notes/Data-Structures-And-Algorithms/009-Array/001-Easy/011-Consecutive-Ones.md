```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int result = 0, sum = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            result = max(result, sum);
            if (nums[i] == 0)
            {
                sum = 0;
            }
        }
        return result;
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
        cout << "Consecutive 1s: " << s.findMaxConsecutiveOnes(vec) << endl;
    }

    return 0;
}
```

Input
```
6
6
1 1 1 1 1 1
6
0 0 0 0 0 0
6
1 1 0 1 1 1
6
1 0 1 1 0 1
1
1
1
0
```

Output
```
Consecutive 1s: 6
Consecutive 1s: 0
Consecutive 1s: 3
Consecutive 1s: 2
Consecutive 1s: 1
Consecutive 1s: 0
```