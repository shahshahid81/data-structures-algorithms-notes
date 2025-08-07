```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    vector<int> merge(vector<int> &left, vector<int> &right)
    {
        vector<int> result;
        int i = 0, j = 0, m = left.size(), n = right.size();
        while (i < m && j < n)
        {
            if (left.at(i) > right.at(j))
            {
                result.push_back(right.at(j++));
            }
            else
            {
                result.push_back(left.at(i++));
            }
        }

        while (i < m)
        {
            result.push_back(left.at(i++));
        }

        while (j < n)
        {
            result.push_back(right.at(j++));
        }

        return result;
    }

public:
    vector<int> mergeSort(vector<int> &vec, int low, int high)
    {
        if (low >= high)
        {
            vector<int> result;
            result.push_back(vec.at(low));
            return result;
        }

        int mid = low + (high - low) / 2;
        vector<int> left = mergeSort(vec, low, mid);
        vector<int> right = mergeSort(vec, mid + 1, high);
        return merge(left, right);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t-- != 0)
    {
        int n;
        cin >> n;

        vector<int> vec;
        for (int i{0}; i < n; i++)
        {
            int val;
            cin >> val;
            vec.push_back(val);
        }

        Solution s;
        vector<int> result = s.mergeSort(vec, 0, vec.size() - 1);
        for (int elem : result)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}
```

Input:
```
2
6
13 46 24 52 20 9
5
5 4 3 2 1
```

Output:
```
9 13 20 24 46 52 
1 2 3 4 5 
```