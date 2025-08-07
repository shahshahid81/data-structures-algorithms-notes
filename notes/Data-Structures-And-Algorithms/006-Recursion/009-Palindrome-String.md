```c++
#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string str, int start, int end)
{
    if (start > end)
    {
        return true;
    }
    if (str.at(start) != str.at(end))
    {
        return false;
    }
    return is_palindrome(str, start + 1, end - 1);
}

int main()
{
    int t;
    cin >> t;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (t-- != 0)
    {
        string str;
        getline(cin, str);
        cout << boolalpha << is_palindrome(str, 0, str.length() - 1) << endl;
    }
}
```

Input:
```
2
ABCDCBA
TAKE U FORWARD
```

Output:
```
true
false
```