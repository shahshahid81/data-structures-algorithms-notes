```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void reverse(vector<int> &nums, int start, int end)
    {
        while (start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
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
        s.rotate(vec, k);
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
7 3
1 2 3 4 5 6 7
4 2
-1 -100 3 99
```

Output:
```
5 6 7 1 2 3 4 
3 99 -1 -100 
```
