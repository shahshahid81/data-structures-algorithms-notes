```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // priority_queue is internally implemented using heap. By default, descending order.
    priority_queue<int> pq;
    // adds 1 to start of priority_queue.
    pq.push(1);
    // adds 2 to start of priority_queue since 2 is higher than 1 in descending order.
    pq.emplace(2);

    priority_queue<pair<int, int>> prior_queue;
    // pair<int, int> p = {1, 2};
    // stk.push(p);
    // Below line is same as the above line
    prior_queue.push({1, 2});
    // Difference is emplace constructs the object in place instead of copying the object
    prior_queue.emplace(1, 2);

    // Returns a read only reference of top variable
    cout << pq.top() << endl;

    pq.pop(); // Removes the top element, doesn't return anything

    cout << pq.size() << endl; // Returns the size

    // boolalpha prints true false instead of 1 and 0
    // empty returns if priority_queue is empty
    cout << std::boolalpha << pq.empty() << endl;

    priority_queue<int> pq1, pq2;
    // Swap two priority_queues
    pq1.swap(pq2);

    // first type param is type of element, second is container type, third is comparator function
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(5);
    min_heap.push(6);
    min_heap.push(4);
    min_heap.push(10);

    cout << min_heap.top();
}
```

Output:
```
2
1
false
4
```
