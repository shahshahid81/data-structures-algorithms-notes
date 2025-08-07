```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxElement(const vector<int> &vec)
    {
        int result = INT_MIN;
        for (auto el : vec)
        {
            result = max(result, el);
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

        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            vec.push_back(val);
        }

        Solution s;
        int result = s.maxElement(vec);
        cout << "Maximum: " << result << endl;
    }
}
```

Input:
```
2
5
2 5 1 3 0
5
8 10 5 7 9
```

Output:
```
Maximum: 5
Maximum: 10
```