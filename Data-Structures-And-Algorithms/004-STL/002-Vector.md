```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector is implemented using arrays internally
    vector<int> v;
    // adds 1 to end of vector
    v.push_back(1);
    // adds 2 to end of vector.
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    // pair<int, int> p = {1, 2};
    // vec.push_back(p);
    // Below line is same as the above line
    vec.push_back({1, 2});
    // Difference is emplace_back constructs the object in place instead of copying the object
    vec.emplace_back(1, 2);

    // Creates vector with 5 elements of value 100.
    vector<int> v0(5, 100);

    // Creates vector with 5 elements of value 20.
    vector<int> v1(5, 20);

    // Creates copy of v1 into v2. Changes of v1 won't be reflected in v2.
    vector<int> v2(v1);
    // v1[0] = 10;
    // cout << v1[0] << " " << v2[0] << endl; // 10 20

    // begin is pointer to first element
    vector<int>::iterator vbegin = v.begin();

    vbegin++;
    cout << "*(vbegin): " << *(vbegin) << endl;

    // v only has 2 elements however, there is no check here and we can do any pointer arithmetic
    // Below operation is unsafe
    vbegin = vbegin + 2;
    cout << "*(vbegin): " << *(vbegin) << endl;

    // end is the pointer after the last element and NOT the last element.
    vector<int>::iterator vend = v.end();
    vend--;
    cout << "*(vend): " << *(vend) << endl;

    // rbegin points to the last element of the list and iteration is done reverse
    vector<int>::reverse_iterator vrbegin = v.rbegin();
    cout << "*(vrbegin): " << *(vrbegin) << endl;

    // rend points before the first element and NOT the first element and iteration is done in reverse
    vector<int>::reverse_iterator vrend = v.rend();
    vrend--;
    cout << "*(vrend): " << *(vrend) << endl;

    // Both array and .at method works. But at is better as it checks for bounds
    cout << "v[0]:" << v[0] << endl;
    cout << "v.at(0):" << v.at(0) << endl;
    cout << "v.back():" << v.back() << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using auto for type inference
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Note that it is copy and not pointer
    for (auto it : v)
    {
        // Since this is copy, doing this won't modify the original value
        // it = 1;
        cout << it << " ";
    }
    cout << endl;

    // Deletes the element at specified position
    v.erase(v.begin() + 1);

    // Deletes all elements from 1st index to 4th index. Note that the end index is not included.
    // So below will delete 3 items, index 1, 2 and 3.
    v0.erase(v0.begin() + 1, v0.begin() + 4);

    // 100 100
    vector<int> v3(2, 100);
    // Adds 300 at index 0
    // 300 100 100
    v3.insert(v3.begin(), 300);
    // Adds 2 elements with value 10 at index 1
    // 300 10 10 100 100
    v3.insert(v3.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    // Copys the vector copy from start to end at the first index of v3
    // Changes in copy won't be reflected in v3 and vice versa
    v3.insert(v3.begin(), copy.begin(), copy.end());

    // v3[0] = 10;
    // cout << v3[0] << " " << copy[0] << endl; // 10 50

    cout << v3.size() << endl;

    // Remove the last element, doesn't return anything
    v3.pop_back();

    // Swap two vectors
    v1.swap(v3);

    // Removes all the elements from the vector
    v3.clear();

    // returns first element
    cout << v1.front() << endl;

    // returns last element
    cout << v1.back() << endl;

    // boolalpha prints true false instead of 1 and 0
    // empty returns if vector is empty
    cout << std::boolalpha << v1.empty() << endl;

    // Sorts the original v1 vector
    std::sort(v1.begin(), v1.end());

    // Copies data from v1 into v2 from the end of v2
    std::copy(v1.begin(), v1.end(), std::back_inserter(v2));
}
```

Output:

```
*(vbegin): 2
*(vbegin): 0
*(vend): 2
*(vrbegin): 2
*(vrend): 1
v[0]:1
v.at(0):1
v.back():2
1 2 
1 2 
1 2 
7
50
100
false
```