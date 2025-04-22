```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // deque is internally implemented using a map of pointers with each pointer having access to a fix sized block of elements.
    // This is done so that the insertion on beginning is quick and we don't need to do any shifting of elements.
    /**
        Structure is something like this. Note that we have a pointer to pointer map and then a pointer start and finish.
        If we need to insert something at the beginning, we check if  the start block has some space at the front, if yes insert it, else create a new block, add element and point front to the new block.
        This helps to keep the insertion at the beginning O(1).

        Also random access is O(1) because we use index to calculate the block and the index within block. Similar to the conversion of row and column index in 2d array to 1d array index

        std::deque<T> {
            T** map;        // pointer to array of block pointers
            size_t map_size;
            size_t block_size; // implementation-defined (often 512 bytes/block)
            T* start;       // pointer to first element
            T* finish;      // pointer to one past last element
        }

        Map (pointer array):
        +--------+--------+--------+--------+
        | ptr →  | ptr →  | ptr →  | ptr →  |
        |Block A |Block B |Block C |Block D |
        +--------+--------+--------+--------+

        Blocks:
        Block A → [ __  __  __  1 ]
        Block B → [ 2   3   4   5 ]
        Block C → [ 6   7   8   9 ]
        Block D → [ 10 11 __  __ ]
     */
    deque<int> dq;

    // adds 2 to end of deque
    // 2
    dq.push_back(2);

    // adds 3 to end of deque.
    // 2 3
    dq.emplace_back(3);

    // adds 1 to start of deque
    // 1 2 3
    dq.push_front(1);

    // adds 0 to start of deque
    // 0 1 2 3
    dq.emplace_front(0);

    deque<pair<int, int>> dque;
    // pair<int, int> p = {1, 2};
    // dque.push_back(p);
    // Below line is same as the above line
    // 2 2
    dque.push_back({2, 2});
    // Difference is emplace_back constructs the object in place instead of copying the object
    /**
     * 2 2
     * 3 3
     */
    dque.emplace_back(3, 3);

    /**
     * 1 1
     * 2 2
     * 3 3
     */
    dque.push_front({1, 1});

    /**
     * 0 0
     * 1 1
     * 2 2
     * 3 3
     */
    dque.emplace_front(0, 0);

    // Creates deque with 5 elements of value 100.
    deque<int> dq0(5, 100);

    // Creates deque with 5 elements of value 20.
    deque<int> dq1(5, 20);

    // Creates copy of dq1 into dq2. Changes of dq1 won't be reflected in dq2.
    deque<int> dq2(dq1);
    dq1[0] = 10;

    // begin is pointer to first element
    deque<int>::iterator dqbegin = dq.begin();

    dqbegin++;
    cout << "*(dqbegin): " << *(dqbegin) << endl;

    dqbegin = dqbegin + 2;
    cout << "*(dqbegin): " << *(dqbegin) << endl;

    // end is the pointer after the last element and NOT the last element.
    deque<int>::iterator dqend = dq.end();
    dqend--;
    cout << "*(dqend): " << *(dqend) << endl;

    // rbegin points to the last element of the deque and iteration is done reverse
    deque<int>::reverse_iterator dqrbegin = dq.rbegin();
    cout << "*(dqrbegin): " << *(dqrbegin) << endl;

    // rend points before the first element and NOT the first element and iteration is done in reverse
    deque<int>::reverse_iterator dqrend = dq.rend();
    dqrend--;
    cout << "*(dqrend): " << *(dqrend) << endl;

    // Both array and .at method works. But at is better as it checks for bounds
    cout << "dq[0]:" << dq[0] << endl;
    cout << "dq.at(0):" << dq.at(0) << endl;
    cout << "dq.back():" << dq.back() << endl;

    for (deque<int>::iterator it = dq.begin(); it != dq.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using auto for type inference
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Note that it is copy and not pointer
    for (auto it : dq)
    {
        // Since this is copy, doing this won't modify the original value
        // it = 1;
        cout << it << " ";
    }
    cout << endl;

    // Deletes the element at specified position
    dq.erase(dq.begin() + 1);

    // Deletes all elements from 1st index to 4th index. Note that the end index is not included.
    // So below will delete 3 items, index 1, 2 and 3.
    dq0.erase(dq0.begin() + 1, dq0.begin() + 4);

    // 100 100
    deque<int> dq3(2, 100);

    // Adds 300 at index 0
    // 300 100 100
    dq3.insert(dq3.begin(), 300);

    // Adds 2 elements with value 10 at index 1
    // 300 10 10 100 100
    dq3.insert(dq3.begin() + 1, 2, 10);

    deque<int> copy(2, 50);
    // Copys the deque copy from start to end at the first index of dq3
    // Changes in copy won't be reflected in dq3 and vice versa
    dq3.insert(dq3.begin(), copy.begin(), copy.end());

    dq3.front() = 10;
    cout << dq3.front() << " " << copy.front() << endl; // 10 50

    cout << dq3.size() << endl;

    // Remove the last element, doesn't return anything
    dq3.pop_back();

    // Swap two lists
    dq1.swap(dq3);

    // Removes all the elements from the deque
    dq3.clear();

    // returns first element
    // Check for empty before calling front else undefined behaviour
    cout << dq1.front() << endl;

    // returns last element
    cout << dq1.back() << endl;

    // boolalpha prints true false instead of 1 and 0
    // empty returns if deque is empty
    cout << std::boolalpha << dq1.empty() << endl;

    // Sorts the original dq1 deque
    std::sort(dq1.begin(), dq1.end());

    // Copies data from dq1 into dq2 from the end of dq2
    std::copy(dq1.begin(), dq1.end(), std::back_inserter(dq2));
}

```

Output
```
*(dqbegin): 1
*(dqbegin): 3
*(dqend): 3
*(dqrbegin): 3
*(dqrend): 0
dq[0]:0
dq.at(0):0
dq.back():3
0 1 2 3 
0 1 2 3 
0 1 2 3 
10 50
7
10
100
false
```
