```c++
#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string name, int age) : name{name}, age{age}
    {
    }
};

int main()
{
    // Just an example using class to show the syntax of how the data is passed to constructor
    Student s = {"Test", 20};
    cout << s.name << " is " << s.age << " years old" << endl;
    // Test is 20 years old

    // pair is defined insite utility file
    // #include <utility>

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    // 1 3

    pair<int, pair<int, int>>
        p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;
    // 1 4 3

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
    // 5
}

```

Output:
```
Test is 20 years old
1 3
1 4 3
5
```