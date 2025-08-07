```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Stores everything in sorted order but NOT uniquely.
    // It is implemented internally using a balanced binary search tree
    // Overload the < operator for custom class
    multiset<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(3);

    // begin is pointer to first element
    multiset<int>::iterator sbegin = s.begin();

    sbegin++;
    cout << "*(sbegin): " << *(sbegin) << endl;

    // Below operation is not allowed
    // sbegin = sbegin + 2;

    // We can use advance but it does NOT check for out of bound index
    // Below operation is unsafe
    advance(sbegin, 2);
    cout << "*(sbegin): " << *(sbegin) << endl;

    // end is the pointer after the last element and NOT the last element.
    multiset<int>::iterator send = s.end();
    send--;
    cout << "*(send): " << *(send) << endl;

    // rbegin points to the last element of the list and iteration is done reverse
    multiset<int>::reverse_iterator srbegin = s.rbegin();
    cout << "*(srbegin): " << *(srbegin) << endl;

    // rend points before the first element and NOT the first element and iteration is done in reverse
    multiset<int>::reverse_iterator srend = s.rend();
    srend--;
    cout << "*(srend): " << *(srend) << endl;

    cout << s.size() << endl;

    cout << std::boolalpha << s.empty() << endl;

    // find returns the iterator if found or end of set
    multiset<int>::iterator it = s.find(3);
    cout << (it != s.end()) << endl;

    auto it2 = s.find(6);
    cout << (it2 == s.end()) << endl;

    // Remove 5 if found, else nothing. Note that this takes value not index, since this is a tree internally. Removes all instances of 5, so even if we have more than one instance of 5, all of them will be removed
    s.erase(5);

    // in case of set, count can be more than 1 since we store duplicates
    int cnt = s.count(3);
    cout << "count: " << cnt << endl;

    auto it3 = s.find(2);
    // Also accepts iterator to delete the element, erase takes constant time since element is already found
    // Note that only one instance of 2 will be deleted since we are deleting by iterator and not value
    s.erase(it3);

    // Delete all elements within the range 2 and 4 except 4. This is because we don't have index but sorted unique elements stored so we delete by value instead of index
    s.erase(s.find(2), s.find(4));

    multiset<int> s1, s2;
    // Swap two sets
    s1.swap(s2);

    auto lb = s.lower_bound(2);
    cout << "lb: " << *lb << endl;

    auto ub = s.upper_bound(3);
    cout << "ub: " << *ub << endl;
    // Definitions:
    // lower_bound(value): Finds the first element ≥ value.
    // upper_bound(value): Finds the first element > value.

    // Sorted Array:
    // [1, 3, 5, 7, 9, 11, 13]

    // lower_bound(5) → 5
    // (The value 5 is present, so the lower bound is 5.)

    // upper_bound(5) → 7
    // (The first element > 5 is 7.)

    // lower_bound(6) → 7
    // (The first element ≥ 6 is 7.)

    // upper_bound(6) → 7
    // (The first element > 6 is 7.)

    // lower_bound(1) → 1 (start)
    // (The first element ≥ 1 is 1.)

    // upper_bound(1) → 3
    // (The first element > 1 is 3.)

    // lower_bound(13) → 13 (end)
    // (The first element ≥ 13 is 13.)

    // upper_bound(13) → end()
    // (There is no element > 13, so it returns end().)
}
```

Output:
```
*(sbegin): 2
*(sbegin): 3
*(send): 4
*(srbegin): 4
*(srend): 1
6
false
true
true
count: 2
lb: 4
ub: 4
```