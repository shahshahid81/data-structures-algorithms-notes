---
title: C++
updated: 2024-09-30 18:04:21Z
created: 2024-09-30 18:03:32Z
---

## Sample starting program

```c++
#include<bits/stdc++.h>
using namespace std;

int main() {
	return 0;
}
```

`#include<bits/stdc++.h>`  -> This header file has all the header files. So including this will allow to use all the libraries. Ideally, we shouldn't include all the headers and use only the ones our program needs but for DSA, it is fine.

`using namespace std;` -> Ideally, we should use individual members like `using std::cout; using std::cin;` instead of directly using the namespace to avoid certain issues. However, for DSA it is fine. 

## Input and Output
To take a single input, use `cin >> variable_name;`. However, to take the whole line as input, use `std::string line; std::getline(cin, line);`. Please note that we should clear the string first properly `std::cin.clear(); std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');` to clear old input before using getline() so that any old buffered data won't be read.

To output data, use `cout << "Name: " << name;`.

## Array
We have two versions, raw array and std::array. Ideally, we should use std::array as much as possible, however, if it won't work, it's good to know raw arrays too.

#### Raw Array
```c++
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'}; // auto size detection
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;

    // Array bounds are not checked, ensure to use correct indexs
    // cin >> vowels[5];
    // cout << "Out of Bounds " << vowels[5] << endl;

    // Output:
    // The first vowel is a
    // The last vowel is u
    // 1
    // Out of Bounds 1
    // *** stack smashing detected ***: terminated
    // [1]    6761 IOT instruction (core dumped)  /home/shahid-shah/Projects/programming-languages/build/arrays

    double hi_temps[]{98.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "The first high temperature is: " << hi_temps[0] << endl;

    // Arrays need to be initialized, same as variables or it will contain garbage values.
    int test_scores_uninitialized[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Score at index " << i << ": " << test_scores_uninitialized[i] << endl;
    }

    // Output:
    // Score at index 0: 1401034320
    // Score at index 1: 32767
    // Score at index 2: -1303717918
    // Score at index 3: 28999
    // Score at index 4: -1297641784

    // Using list initialization operator gives initial value. We can pass initial values. Rest will be zero. If nothing passed, all will be zero.
    int test_scores[5]{100};
    for (int i = 0; i < 5; i++)
    {
        cout << "Score at index " << i << ": " << test_scores[i] << endl;
    }
    // Output:
    // Score at index 0: 100
    // Score at index 1: 0
    // Score at index 2: 0
    // Score at index 3: 0
    // Score at index 4: 0

    for (int i = 0; i < 5; i++)
    {
        cout << "Score " << i << ": ";
        cin >> test_scores[i];
    }

    cout << "Updated Scores:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Score at index " << i << ": " << test_scores[i] << endl;
    }

    // Using array names print the address
    cout << "test_scores " << test_scores << endl;
    // Output:
    // test_scores 0x7ffc2870baf0

    int matrix[3][4]{{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    for (int i = 0; i < 3; i++)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 4; j++)
        {
            cout << " " << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
```

#### std::array

```c++
std::array<int, 5> arr1{1, 2, 3, 4, 5}; // double {{ }} if C++ 11
std::array<int, 5> arr2;
arr2 = {10, 20, 30, 40, 50};
arr1[0] = 1000;
arr1.at(1) = 2000; // better to use this version as it checks for bounds too.

arr1.fill(0); // Fills array with some value

int *ptr = arr1.data(); // get internal raw array for use
std::cout << ptr << std::endl;
*ptr = 10000;

std::sort(arr1.begin(), arr1.end());

std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
auto max_num = std::max_element(arr1.begin(), arr1.end());
std::cout << "min: " << *min_num << " , max: " << *max_num << std::endl;

int count = std::count(arr1.begin(), arr1.end(), 3);
std::cout << "Found 3 : " << count << " times" << std::endl;

std::array<int, 10> arr1{1, 2, 3, 50, 60, 70, 80, 200, 300, 400};
int count = std::count_if(arr1.begin(), arr1.end(),[](int x){ return x > 10 && x < 200; });
std::cout << "Found  " << count << " matches" << std::endl;

int X[8] = {0,1,2,3,4,5,6,7};
std::array<int,8> Y;
std::copy(std::begin(X), std::end(X), std::begin(Y));

// C++20
int X[8];
std::array<int, 8> Y = std::to_array(X);
```

#### Strings
```c++
#include <iostream>
#include <iomanip>
#include <string> // important!

using namespace std; // Avoid using whole namespace, better practice is to either not use `using` or include only needed items like `using std::cout;` 

int main()
{

  // https://stackoverflow.com/questions/28442719/are-c-strings-mutable-unlike-java-strings
  // String literals are immutable just like Java. However, String instances are mutable unlike Java.
  string s0;
  string s1{"Apple"};
  string s2{"Banana"};
  string s3{"Kiwi"};
  string s4{"apple"};
  string s5{s1};       // Apple
  string s6{s1, 0, 3}; // App
  string s7(10, 'X');  // XXXXXXXXXX

  cout << s0 << endl;          // No garbage
  cout << s0.length() << endl; // empty string

  // Initialization
  cout << "\nInitialization" << "\n------------------------------------------" << endl;
  cout << "s1 is initialized to: " << s1 << endl;
  cout << "s2 is initialized to: " << s2 << endl;
  cout << "s3 is initialized to: " << s3 << endl;
  cout << "s4 is initialized to: " << s4 << endl;
  cout << "s5 is initialized to: " << s5 << endl;
  cout << "s6 is initialized to: " << s6 << endl;
  cout << "s7 is initialized to: " << s7 << endl;

  // Comparison
  cout << "\nComparison" << "\n------------------------------------------" << endl;
  cout << boolalpha;
  cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;           // True    Apple == Apple
  cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;           // False   Apple != Banana
  cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;           // True    Apple != Banana
  cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;             // True         Apple < Banana
  cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;             // True         Banana > Apple
  cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;             // False        apple >Apple
  cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl; // True Apple == Apple

  // Assignment
  cout << "\nAssignment" << "\n------------------------------------------" << endl;

  s1 = "Watermelon";
  cout << "s1 is now: " << s1 << endl; // Watermelon
  s2 = s1;
  cout << "s2 is now: " << s2 << endl; // Watermelon

  s3 = "Frank";
  cout << "s3 is now: " << s3 << endl; // Frank

  s3[0] = 'C';                                             // Crank
  cout << "s3 change first letter to 'C': " << s3 << endl; // Crank
  s3.at(0) = 'P';
  cout << "s3 change first letter to 'P': " << s3 << endl; // Prank

  // Concatenation

  s3 = "Watermelon";
  cout << "\nConcatenation" << "\n------------------------------------------" << endl;

  s3 = s5 + " and " + s2 + " juice";   // Apple and Banana juice
  cout << "s3 is now: " << s3 << endl; // Apple and Banana Juice

  // s3 = "nice " + " cold " + s5 + "juice"; // Compiler error, because we are using c style strings which is not allowed.

  //  for loop
  cout << "\nLooping" << "\n------------------------------------------" << endl;

  s1 = "Apple";
  for (size_t i{0}; i < s1.length(); ++i)
    cout << s1.at(i); //  or s1[i]    Apple
  cout << endl;

  // Range-based for loop
  for (char c : s1)
    cout << c; // Apple
  cout << endl;

  // Substring
  cout << "\nSubstring" << "\n------------------------------------------" << endl;
  s1 = "This is a test";

  cout << s1.substr(0, 4) << endl;  // This
  cout << s1.substr(5, 2) << endl;  // is
  cout << s1.substr(10, 4) << endl; // test

  // Erase
  cout << "\nErase" << "\n------------------------------------------" << endl;

  s1 = "This is a test";
  s1.erase(0, 5);                      // Erase This from s1 results in "is a test"
  cout << "s1 is now: " << s1 << endl; // is a test

  // getline
  cout << "\ngetline" << "\n------------------------------------------" << endl;

  string full_name{};

  cout << "Enter your full name: ";
  getline(cin, full_name);

  cout << "Your full name is: " << full_name << endl;

  // Find
  cout << "\nfind" << "\n------------------------------------------" << endl;

  s1 = "The secret word is Boo";
  string word{};

  cout << "Enter the word to find: ";
  cin >> word;

  size_t position = s1.find(word);
  if (position != string::npos)
    cout << "Found " << word << " at position: " << position << endl;
  else
    cout << "Sorry, " << word << " not found" << endl;

  cout << endl;
  return 0;
}
```

