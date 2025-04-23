```c++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Stores everything uniquely but NOT in sorted order.
    // It is implemented internally using a hash table
    // Overload the == operator for custom class, also need to implement the hasher method

    // Example:
    /*
    class Point3D {
    public:
        int x, y, z;

        Point3D(int x, int y, int z) : x(x), y(y), z(z) {}

        // Define equality for set
        bool operator==(const Point3D& other) const {
            return x == other.x && y == other.y && z == other.z;
        }

        // Optional: for easy printing
        void print() const {
            std::cout << "(" << x << ", " << y << ", " << z << ")";
        }
    };

    #include <functional> // for std::hash

    class Point3DHasher {
    public:
        std::size_t operator()(const Point3D& p) const {
            std::size_t seed = 0;
            hash_combine(seed, std::hash<int>()(p.x));
            hash_combine(seed, std::hash<int>()(p.y));
            hash_combine(seed, std::hash<int>()(p.z));
            return seed;
        }

    private:
        // Helper function like boost::hash_combine
        static void hash_combine(std::size_t& seed, std::size_t value) {
            seed ^= value + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
    };

    */

    unordered_set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(3);

    // begin is pointer to first element
    unordered_set<int>::iterator sbegin = s.begin();

    sbegin++;
    cout << "*(sbegin): " << *(sbegin) << endl;

    // Below operation is not allowed
    // sbegin = sbegin + 2;

    // We can use advance but it does NOT check for out of bound index
    // Below operation is unsafe
    advance(sbegin, 2);
    cout << "*(sbegin): " << *(sbegin) << endl;

    // end is the pointer after the last element and NOT the last element.
    // Reference is read only since elements are supposed to be immutable. If we make element mutable and let's say we store some class objects which we modify later, they won't be rehashed automatically.
    // If we want to modify any object, we should remove the object first, modify it and then insert it.
    // unordered_set<int>::iterator send = s.end();
    // Not allowed since read only
    // send--;
    // cout << "*(send): " << *(send) << endl;

    // NO REVERSE ITERATORS AVAILABLE since elements are stored in hashmap and are not in any specific order
    // unordered_set<int>::reverse_iterator srbegin = s.rbegin();
    // cout << "*(srbegin): " << *(srbegin) << endl;

    // NO REVERSE ITERATORS AVAILABLE since elements are stored in hashmap and are not in any specific order
    // unordered_set<int>::reverse_iterator srend = s.rend();
    // srend--;
    // cout << "*(srend): " << *(srend) << endl;

    cout << s.size() << endl;

    cout << std::boolalpha << s.empty() << endl;

    // find returns the iterator if found or end of set
    unordered_set<int>::iterator it = s.find(3);
    cout << (it != s.end()) << endl;

    auto it2 = s.find(6);
    cout << (it2 == s.end()) << endl;

    // Remove 5 if found, else nothing. Note that this takes value not index, since this is a hash map internally.
    s.erase(5);

    // in case of set, count can be 0 or 1 since no duplicates are stored
    int cnt = s.count(3);
    cout << "count: " << cnt << endl;

    auto it3 = s.find(2);
    // Also accepts iterator to delete the element, erase takes constant time since element is already found
    s.erase(it3);

    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // Delete all elements within the range 2 and 4 except 4. This is because we don't have index but sorted unique elements stored so we delete by value instead of index
    s.erase(s.find(2), s.find(4));

    unordered_set<int> s1, s2;
    // Swap two sets
    s1.swap(s2);

	// no upper_bound and lower_bound since no sorting is done
}
```

Output:
```
*(sbegin): 4
*(sbegin): 1
4
false
true
true
count: 1
```
