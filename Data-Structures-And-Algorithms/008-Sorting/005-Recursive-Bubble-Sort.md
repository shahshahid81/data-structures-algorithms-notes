```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    void bubbleSortHelper(vector<int> &vec, int i)
    {
        int n = vec.size();
        if (i >= n)
        {
            return;
        }

        bool didSwap = false;
        for (int j{0}; j < n - i - 1; j++)
        {
            if (vec.at(j) > vec.at(j + 1))
            {
                // available utility function
                swap(vec.at(j), vec.at(j + 1));
                didSwap = true;
            }
        }
        if (didSwap)
        {
            bubbleSortHelper(vec, i + 1);
        }
    }

public:
    void bubbleSort(vector<int> &vec)
    {
        bubbleSortHelper(vec, 0);
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
        s.bubbleSort(vec);
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