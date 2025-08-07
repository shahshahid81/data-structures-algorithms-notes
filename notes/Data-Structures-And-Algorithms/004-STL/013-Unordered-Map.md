```c++
#include <bits/stdc++.h>

using namespace std;

class PairHash
{
public:
    size_t operator()(const pair<int, int> &p) const
    {
        // Note that hash<int>() is a functor, a class with overloaded() operator
        // Combine the hashes of the two elements of the pair
        size_t hash1 = hash<int>()(p.first);  // hash for the first element
        size_t hash2 = hash<int>()(p.second); // hash for the second element

        return hash1 ^ hash2;
    }
};

int main()
{
    // unordered_map stores keys uniquely, no specific order
    unordered_map<int, int> m;
    unordered_map<int, pair<int, int>> mp;
    unordered_map<pair<int, int>, int, PairHash> mp2; // need custom hasher for pair

    // key: 1, value: 2
    m[1] = 2;

    // key: 3, value: 1
    m.emplace(3, 1);

    // key: 2, value: 4
    m.insert({2, 4});
    m.insert({7, 10});

    unordered_map<pair<int, int>, int, PairHash> mp2b;
    mp2b[{3, 1}] = 2;

    cout << "Contents of unordered_map m:\n";
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << "m[1] = " << m[1] << endl;

    // Returns 0 since key 5 doesn't exist, but also inserts it with value 0
    cout << "m[5] = " << m[5] << " (inserts key 5)" << endl;

    auto it = m.find(3);
    if (it != m.end())
        cout << "m[3] = " << it->second << endl;

    auto it2 = m.find(100);
    cout << "Does key 100 exist? " << std::boolalpha << (it2 == m.end()) << endl;

    // NOTE: No lower_bound / upper_bound in unordered_map

    // Erase key 2
    m.erase(2);

    // Manually erase range from key 3 to 6 (inclusive), but unordered_map is not sorted,
    // so we have to iterate and erase conditionally
    for (int k = 3; k <= 6; ++k)
    {
        m.erase(k);
    }

    cout << "Map size: " << m.size() << endl;
    cout << "Is map empty? " << m.empty() << endl;

    unordered_map<int, int> m1, m2;
    m1[1] = 100;
    m2[2] = 200;

    m1.swap(m2);

    cout << "After swap, m1 contains:\n";
    for (auto &[k, v] : m1)
        cout << k << ": " << v << '\n';

    return 0;
}

```

Output:
```
Contents of unordered_map m:
7 10
2 4
3 1
1 2
m[1] = 2
m[5] = 0 (inserts key 5)
m[3] = 1
Does key 100 exist? true
Map size: 2
Is map empty? false
After swap, m1 contains:
2: 200
```
