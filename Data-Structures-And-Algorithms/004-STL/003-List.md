```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list is implemented using doubly linked list internally.
    list<int> l;

    // adds 2 to end of list
    // 2
    l.push_back(2);

    // adds 3 to end of list.
    // 2 3
    l.emplace_back(3);

    // adds 1 to start of list
    // 1 2 3
    l.push_front(1);

    // adds 0 to start of list
    // 0 1 2 3
    l.emplace_front(0);

    list<pair<int, int>> lst;
    // pair<int, int> p = {1, 2};
    // lst.push_back(p);
    // Below line is same as the above line
    // 2 2
    lst.push_back({2, 2});
    // Difference is emplace_back constructs the object in place instead of copying the object
    /**
     * 2 2
     * 3 3
     */
    lst.emplace_back(3, 3);

    /**
     * 1 1
     * 2 2
     * 3 3
     */
    lst.push_front({1, 1});

    /**
     * 0 0
     * 1 1
     * 2 2
     * 3 3
     */
    lst.emplace_front(0, 0);

    // Creates list with 5 elements of value 100.
    list<int> l0(5, 100);

    // Creates list with 5 elements of value 20.
    list<int> l1(5, 20);

    // Creates copy of l1 into l2. Changes of l1 won't be reflected in l2.
    list<int> l2(l1);
    // This won't work because we can't access elements randomly
    // l1[0] = 10;

    // begin is pointer to first element
    list<int>::iterator lbegin = l.begin();

    // Prefix or postfix add is allowed but + 1 or + 2 or any other value is not allowed since + is overloaded only for data structures that support random access
    lbegin++;
    cout << "*(lbegin): " << *(lbegin) << endl;

    // Below operation is not allowed
    // lbegin = lbegin + 2;

    // We can use advance but it does NOT check for out of bound index
    // Below operation is unsafe
    std::advance(lbegin, 2);
    cout << "*(lbegin): " << *(lbegin) << endl;

    // end is the pointer after the last element and NOT the last element.
    list<int>::iterator lend = l.end();
    lend--;
    cout << "*(lend): " << *(lend) << endl;

    // rbegin points to the last element of the list and iteration is done reverse
    list<int>::reverse_iterator lrbegin = l.rbegin();
    cout << "*(lrbegin): " << *(lrbegin) << endl;

    // rend points before the first element and NOT the first element and iteration is done in reverse
    list<int>::reverse_iterator lrend = l.rend();
    lrend--;
    cout << "*(lrend): " << *(lrend) << endl;

    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using auto for type inference
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Note that it is copy and not pointer
    for (auto it : l)
    {
        // Since this is copy, doing this won't modify the original value
        // it = 1;
        cout << it << " ";
    }
    cout << endl;

    // Deletes the element at specified position
    list<int>::iterator lfirst = std::next(l.begin(), 1);
    l.erase(lfirst);

    list<int>::iterator l0first = std::next(l0.begin(), 1);
    auto l0fourth = std::next(l0.begin(), 4);
    // Deletes all elements from 1st index to 4th index. Note that the end index is not included.
    // So below will delete 3 items, index 1, 2 and 3.
    l0.erase(l0first, l0fourth);

    // 100 100
    list<int> v3(2, 100);

    // Adds 300 at index 0
    // 300 100 100
    v3.insert(v3.begin(), 300);

    // Adds 2 elements with value 10 at index 1
    // 300 10 10 100 100
    auto v3first = std::next(v3.begin(), 1);
    v3.insert(v3first, 2, 10);

    list<int> copy(2, 50);
    // Copys the list copy from start to end at the first index of v3
    // Changes in copy won't be reflected in v3 and vice versa
    v3.insert(v3.begin(), copy.begin(), copy.end());

    // v3.front() = 10;
    // cout << v3.front() << " " << copy.front() << endl; // 10 50

    cout << v3.size() << endl;

    // Remove the last element, doesn't return anything
    v3.pop_back();

    // Swap two lists
    l1.swap(v3);

    // Removes all the elements from the list
    v3.clear();

    // returns first element
    // Check for empty before calling front else undefined behaviour
    cout << l1.front() << endl;

    // returns last element
    cout << l1.back() << endl;

    // boolalpha prints true false instead of 1 and 0
    // empty returns if list is empty
    cout << std::boolalpha << l1.empty() << endl;

    // Sorts the original l1 list
    l1.sort();

    // Copies data from l1 into l2 from the end of l2
    std::copy(l1.begin(), l1.end(), std::back_inserter(l2));
}
```

Output:
```
*(lbegin): 1
*(lbegin): 3
*(lend): 3
*(lrbegin): 3
*(lrend): 0
0 1 2 3 
0 1 2 3 
0 1 2 3 
7
50
100
false
```