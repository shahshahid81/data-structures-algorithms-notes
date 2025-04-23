```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // multimap stores keys in sorted order but allows duplicate keys
    multimap<int, int> m;
    multimap<int, pair<int, int>> mp;
    multimap<pair<int, int>, int> mp2;

    // key: 1, value: 2
    m.insert({1, 2});

    // key: 3, value: 1
    m.emplace(3, 1);

    // key: 2, value: 4
    m.insert({2, 4});
    m.insert({7, 10});
    m.insert({3, 99}); // duplicate key

    mp2.insert({{3, 1}, 2});

    cout << "Elements in multimap:\n";
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    // ❌ No operator[] in multimap
    // cout << m[1] << endl;  // Not allowed

    // To check if a key exists:
    auto it = m.find(3);
    if (it != m.end())
    {
        cout << "First occurrence of key 3: " << it->second << endl;
    }

    // Find all values for key 3
    auto [start, end] = m.equal_range(3);
    cout << "All values for key 3: ";
    for (auto it = start; it != end; ++it)
    {
        cout << it->second << " ";
    }
    cout << endl;

    // Check if key 5 exists
    auto it2 = m.find(5);
    cout << std::boolalpha << (it2 == m.end()) << endl;

    auto lower = m.lower_bound(2);
    cout << "lower: (" << lower->first << " : " << lower->second << ")" << endl;

    auto upper = m.upper_bound(3);
    cout << "upper: (" << upper->first << " : " << upper->second << ")" << endl;

    // Removes all elements with key == 2
    m.erase(2);

    // Removes range from first 3 to first 7 (exclusive)
    m.erase(m.find(3), m.find(7));

    cout << "Size after erase: " << m.size() << endl;
    cout << "Is multimap empty? " << m.empty() << endl;

    multimap<int, int> m1, m2;
    m1.insert({1, 100});
    m2.insert({2, 200});
    m1.swap(m2);

    cout << "After swap, m1 contains:\n";
    for (auto &[k, v] : m1)
        cout << k << ": " << v << '\n';

    return 0;
}
```

Output:
```
Elements in multimap:
1 2
2 4
3 1
3 99
7 10
First occurrence of key 3: 1
All values for key 3: 1 99 
true
lower: (2 : 4)
upper: (7 : 10)
Size after erase: 2
Is multimap empty? false
After swap, m1 contains:
2: 200
```
