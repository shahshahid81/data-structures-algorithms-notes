```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void insertionSort(vector<int> &vec)
    {
        int n = vec.size();
        for (int i{1}; i < n; i++)
        {
            for (int j{i}; j > 0 && vec.at(j) < vec.at(j - 1); j--)
            {
                swap(vec.at(j), vec.at(j - 1));
            }
        }
        for (int elem : vec)
        {
            cout << elem << " ";
        }
        cout << endl;
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
        s.insertionSort(vec);
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