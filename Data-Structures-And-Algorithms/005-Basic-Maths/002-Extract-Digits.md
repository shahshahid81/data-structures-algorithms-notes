Problem:
```
Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
          
Example 2:
Input:N = 7789
Output: 4
Explanation: The number 7789 has 4 digits.
```

Solution:
```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> answer;

    while (x > 0)
    {
        answer.push_back(x % 10);
        x /= 10;
    }

    std::reverse(answer.begin(), answer.end());

    cout << "[";
    for (size_t i = 0; i < answer.size(); i++)
    {
        cout << "'" << answer.at(i) << "'";
        if (i != answer.size() - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
}
```