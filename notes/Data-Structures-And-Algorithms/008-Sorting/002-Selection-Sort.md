```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void selectionSort(vector<int> &vec)
    {
        int n = vec.size();
        for (int i{0}; i < n; i++)
        {
            int minIndex = i;
            for (int j{i + 1}; j < n; j++)
            {
                if (vec.at(minIndex) > vec.at(j))
                {
                    minIndex = j;
                }
            }
            swap(vec.at(i), vec.at(minIndex));
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
        s.selectionSort(vec);
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