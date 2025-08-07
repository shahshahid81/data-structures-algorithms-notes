```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto num : nums)
        {
            ans = ans ^ num;
        }
        return ans;
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
        cout << "Single Number: " << s.singleNumber(vec) << endl;
    }

    return 0;
}
```

Input
```
3
3
2 2 1
5
4 1 2 1 2
1
1
```

Output
```
Single Number: 1
Single Number: 4
Single Number: 1
```