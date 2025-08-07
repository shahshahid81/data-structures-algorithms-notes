```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // queue is internally implemented using deque by default but list and vector can be used too
    queue<int> q;
    // adds 1 to front of queue
    q.push(1);
    // adds 2 to front of queue.
    q.emplace(2);

    queue<pair<int, int>> que;
    // pair<int, int> p = {1, 2};
    // que.push(p);
    // Below line is same as the above line
    que.push({1, 2});
    // Difference is emplace constructs the object in place instead of copying the object
    que.emplace(1, 2);

    // Returns a reference of front variable which can be overwritten
    cout << q.front() << endl;

    // Returns a reference of back variable which can be overwritten
    cout << q.back() << endl;

    q.pop(); // Removes the front element, doesn't return anything

    cout << q.size() << endl; // Returns the size

    // boolalpha prints true false instead of 1 and 0
    // empty returns if queue is empty
    cout << std::boolalpha << q.empty() << endl;

    queue<int> que1, que2;
    // Swap two queues
    que1.swap(que2);
}
```

Output:
```
1
2
1
false
```
