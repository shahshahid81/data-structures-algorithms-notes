```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &vec)
    {
        int i = 0, n = vec.size();
        while (i + 1 < n && vec.at(i) <= vec.at(i + 1))
        {
            i++;
        }
        if (i + 1 < n)
        {
            int j = i + 1;
            while (j + 1 < n && vec.at(j) <= vec.at(j + 1))
            {
                j++;
            }
            if (j + 1 != n)
            {
                return false;
            }
            return vec.at(j) <= vec.at(0);
        }
        return true;
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
        auto result = s.check(vec);
        cout << boolalpha << "Is Sorted: " << result << endl;
    }

    return 0;
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &vec)
    {
        int n = vec.size(), count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (vec.at(i) > vec.at(i + 1))
            {
                count++;
            }
        }
        if (n > 0 && vec.at(n - 1) > vec.at(0))
        {
            count++;
        }
        return count <= 1;
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
        auto result = s.check(vec);
        cout << boolalpha << "Is Sorted: " << result << endl;
    }

    return 0;
}
```

Input:
```
4
5
1 2 3 4 5
5
5 4 6 7 8
2
7 7
1
1
```

Output:
```
Is Sorted: true
Is Sorted: false
Is Sorted: true
Is Sorted: true
```