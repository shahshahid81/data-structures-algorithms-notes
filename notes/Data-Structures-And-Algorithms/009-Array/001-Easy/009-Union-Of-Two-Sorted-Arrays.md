```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> unionSortedArray(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0;
        int m = nums1.size(), n = nums2.size();
        vector<int> result;
        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                if (result.empty() || result[result.size() - 1] < nums1[i])
                {
                    result.push_back(nums1[i]);
                }
                i++;
            }
            else
            {
                if (result.empty() || result[result.size() - 1] < nums2[j])
                {
                    result.push_back(nums2[j]);
                }
                j++;
            }
        }

        while (i < m)
        {
            if (result.empty() || result[result.size() - 1] < nums1[i])
            {
                result.push_back(nums1[i]);
            }
            i++;
        }

        while (j < n)
        {
            if (result.empty() || result[result.size() - 1] < nums2[j])
            {
                result.push_back(nums2[j]);
            }
            j++;
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
        int m, n;
        cin >> m >> n;

        vector<int> vec1(m), vec2(n);
        for (int i = 0; i < m; i++)
        {
            cin >> vec1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> vec2[i];
        }

        Solution s;
        auto result = s.unionSortedArray(vec1, vec2);
        for (auto el : result)
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
5 5
1 2 3 4 5
2 3 4 4 5
7 10
2 3 4 4 5 11 12
1 2 3 4 5 6 7 8 9 10
```

Output:
```
1 2 3 4 5 
1 2 3 4 5 6 7 8 9 10 11 12 
```