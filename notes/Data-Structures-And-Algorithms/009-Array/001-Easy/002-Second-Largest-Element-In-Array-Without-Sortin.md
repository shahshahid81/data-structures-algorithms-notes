2 Pass Solution:
```cpp
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> secondLargestElement(const vector<int> &vec)
    {
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for (auto el : vec)
        {
            largest = max(largest, el);
            smallest = min(smallest, el);
        }

        int secondLargest = INT_MIN;
        int secondSmallest = INT_MAX;
        for (auto el : vec)
        {
            if (el < largest)
            {
                secondLargest = max(secondLargest, el);
            }
            if (el > smallest)
            {
                secondSmallest = min(secondSmallest, el);
            }
        }

        vector<int> result;
        result.push_back(secondSmallest != INT_MAX ? secondSmallest : -1);
        result.push_back(secondLargest != INT_MIN ? secondLargest : -1);
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
        vector<int> result = s.secondLargestElement(vec);
        cout << "Second Smallest: " << result.at(0) << ". Second Largest: " << result.at(1) << endl;
    }
}
```

Single Pass:
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> secondSmallestLargestElement(const vector<int> &vec)
    {
        int smallest = INT_MAX, secondSmallest = INT_MAX;
        int largest = INT_MIN, secondLargest = INT_MIN;

        for (int el : vec)
        {
            if (el < smallest)
            {
                secondSmallest = smallest;
                smallest = el;
            }
            else if (el > smallest && el < secondSmallest)
            {
                secondSmallest = el;
            }

            if (el > largest)
            {
                secondLargest = largest;
                largest = el;
            }
            else if (el < largest && el > secondLargest)
            {
                secondLargest = el;
            }
        }

        if (secondSmallest == INT_MAX)
        {
            secondSmallest = -1;
        }
        if (secondLargest == INT_MIN)
        {
            secondLargest = -1;
        }

        return {secondSmallest, secondLargest};
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
        vector<int> result = s.secondSmallestLargestElement(vec);
        cout << "Second Smallest: " << result[0] << ". Second Largest: " << result[1] << endl;
    }

    return 0;
}
```


Input:
```
3
6
1 2 4 7 7 5
2
7 7
1
1
```

Output:
```
Second Smallest: 2. Second Largest: 5
Second Smallest: -1. Second Largest: -1
Second Smallest: -1. Second Largest: -1
```