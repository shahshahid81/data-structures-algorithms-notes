```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // stack is internally implemented using deque by default but list and vector can be used too
    stack<int> s;
    // adds 1 to top of stack
    s.push(1);
    // adds 2 to top of stack.
    s.emplace(2);

    stack<pair<int, int>> stk;
    // pair<int, int> p = {1, 2};
    // stk.push(p);
    // Below line is same as the above line
    stk.push({1, 2});
    // Difference is emplace constructs the object in place instead of copying the object
    stk.emplace(1, 2);

    // Returns a reference of top variable which can be overwritten
    cout << s.top() << endl;

    s.pop(); // Removes the top element, doesn't return anything

    cout << s.size() << endl; // Returns the size

    // boolalpha prints true false instead of 1 and 0
    // empty returns if stack is empty
    cout << std::boolalpha << s.empty() << endl;

    stack<int> stk1, stk2;
    // Swap two stacks
    stk1.swap(stk2);
}
```

Output:
```
2
1
false
```