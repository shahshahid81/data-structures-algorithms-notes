```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{

private:
    int partition(vector<int> &vec, int lower_bound, int upper_bound)
    {
        int pivot = vec.at(lower_bound);
        int start = lower_bound, end = upper_bound;
        while (start < end)
        {
            while (start <= upper_bound && vec.at(start) <= pivot)
            {
                start++;
            }

            while (end >= lower_bound && vec.at(end) > pivot)
            {
                end--;
            }

            if (start < end)
            {
                swap(vec.at(start), vec.at(end));
            }
        }

        swap(vec.at(lower_bound), vec.at(end));
        return end;
    }

    void quickSortHelper(vector<int> &vec, int lower_bound, int upper_bound)
    {
        if (lower_bound < upper_bound)
        {
            int mid = partition(vec, lower_bound, upper_bound);
            quickSortHelper(vec, lower_bound, mid - 1);
            quickSortHelper(vec, mid + 1, upper_bound);
        }
    }

public:
    void quickSort(vector<int> &vec)
    {
        quickSortHelper(vec, 0, vec.size() - 1);
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
        s.quickSort(vec);
    }
}
```

Input:
```
2
5
5 4 3 2 1
7
13 9 46 24 52 20 9
```

Output:
```
1 2 3 4 5 
9 9 13 20 24 46 52 
```