```c++
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void findOccurences(int n, vector<int> arr)
    {
        map<int, int> m;
        for (int elem : arr)
        {
            m[elem] = m[elem] + 1;
        }
        int maxFreq = INT_MIN, maxElement = INT_MIN;
        int minFreq = INT_MAX, minElement = INT_MAX;

        for (auto elem : m)
        {
            int element = elem.first, frequency = elem.second;
            if (frequency < minFreq)
            {
                minFreq = frequency;
                minElement = element;
            }
            if (frequency > maxFreq)
            {
                maxFreq = frequency;
                maxElement = element;
            }
        }

        cout << maxElement << " " << minElement;

        cout << endl;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> data;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            data.push_back(val);
        }
        Solution s;
        s.findOccurences(n, data);
    }
}
```

Input:
```
2
6
10 5 10 15 10 5
6
2 2 3 4 4 2
```

Output:
```
10 15
2 3
```