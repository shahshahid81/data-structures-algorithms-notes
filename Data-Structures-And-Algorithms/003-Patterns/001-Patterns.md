#### Steps to print any pattern

1. For the outer loop, count the number of rows (lines).
2. For the inner loop, focus on the columns(character to print) and somehow relate the column to the row.
3. Print the character inside the inner loop.
4. Observe symmetry. (This step is optional).

#### Patterns
1.
![37e2d8412ab283d792269c55ba19225d.png](../../_resources/37e2d8412ab283d792269c55ba19225d.png)

For each row in the above pattern, we are simply printing `*` 4 times. So we are running two nested loops and printing the characters in the loop.

Code:
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_1(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    print_pattern_1(n);
    return 0;
}
```

2.
![3e0842bd71c004a0afcec1ef3a89f8d0.png](../../_resources/3e0842bd71c004a0afcec1ef3a89f8d0.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_2(5);
    return 0;
}
```

3.
![1d12ae890280d6dc5f3f886eced1b7f2.png](../../_resources/1d12ae890280d6dc5f3f886eced1b7f2.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_3(5);
    return 0;
}
```

4.
![9064f00dd3eda9c7c18bd3039b24b3df.png](../../_resources/9064f00dd3eda9c7c18bd3039b24b3df.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_4(5);
    return 0;
}
```

5.
![f428392ea65ce3d454f7ef995592deb9.png](../../_resources/f428392ea65ce3d454f7ef995592deb9.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_5(int n)
{
    // My solution, also returns the same result but doesn't follow the 4 steps.
    // for (int i = n; i > 0; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_5(5);
    return 0;
}

```

6.
![413e7499c1beeb031d985fd50f7571d0.png](../../_resources/413e7499c1beeb031d985fd50f7571d0.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_6(int n)
{
    // My solution, also returns the same result but doesn't follow the 4 steps.
    // for (int i = n; i > 0; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_6(5);
    return 0;
}
```

7.
![5d111b2a03f82c9ccf20606fc5688e6a.png](../../_resources/5d111b2a03f82c9ccf20606fc5688e6a.png)
```c++

#include <bits/stdc++.h>

using namespace std;
void print_pattern_7(int n)
{
    // My Solution
    // int total_columns{n * 2 - 1};
    // for (int i = 1; i <= n; i++)
    // {
    //     int total_space{(total_columns - (((i - 1) * 2) + 1)) / 2};
    //     for (int j = 0; j < total_space; j++)
    //         cout << " ";
    //     for (int j = 0; j < i * 2 - 1; j++)
    //         cout << "*";
    //     for (int j = 0; j < total_space; j++)
    //         cout << " ";
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_7(5);
    return 0;
}
```

8.
![a6a4302cdb3358364a334e572854490d.png](../../_resources/a6a4302cdb3358364a334e572854490d.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_8(int n)
{
    // My solution, also returns the same result but doesn't follow the 4 steps.
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i * 2 + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - (i * 2 + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_8(5);
    return 0;
}
```

9.
![ae72c5fee94fa5399dba77d3b8be89a5.png](../../_resources/ae72c5fee94fa5399dba77d3b8be89a5.png)

```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n * 2 - (i * 2 + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_9(5);
    return 0;
}
```

10.
![83538676b6c262a51c14308d2c2366b7.png](../../_resources/83538676b6c262a51c14308d2c2366b7.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_10(int n)
{

    int total_lines{2 * n - 1};
    for (int i = 1; i <= total_lines; i++)
    {
        int stars = i > n ? total_lines - i + 1 : i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_10(5);
    return 0;
}
```

11.
![ab7f211790e6c4709b341a7f58dab71b.png](../../_resources/ab7f211790e6c4709b341a7f58dab71b.png)

```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start = i % 2 == 0 ? 0 : 1;
        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_11(5);
    return 0;
}
```

12.
![18899e0df17870bfe4992842742df35a.png](../../_resources/18899e0df17870bfe4992842742df35a.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_12(4);
    return 0;
}
```

13.
![8ec0970e39c05fa8fabde00ce49a64d4.png](../../_resources/8ec0970e39c05fa8fabde00ce49a64d4.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_13(int n)
{
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << value++ << " ";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_13(5);
    return 0;
}
```

14.
![f6778020e5f981ccf1a2c6f7a9eef104.png](../../_resources/f6778020e5f981ccf1a2c6f7a9eef104.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_14(int n)
{
    for (int = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_14(5);
    return 0;
}
```

15.
![11ded6b442aa199843c4fbaf2d434400.png](../../_resources/11ded6b442aa199843c4fbaf2d434400.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_15(int n)
{
    for (int = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + (n + 1 - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_15(5);
    return 0;
}
```

16.
![98702987863781c0aa8db321e00b38c2.png](../../_resources/98702987863781c0aa8db321e00b38c2.png)

```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_16(5);
    return 0;
}
```

17.
![066368f23cf602d1724b9921e56ea34f.png](../../_resources/066368f23cf602d1724b9921e56ea34f.png)
```c++
#include <bits/stdc++.h>

using namespace std;

void print_pattern_17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // My Solution
        // for (char j = 'A'; j < 'A' + i; j++)
        // {
        //     cout << j;
        // }

        // for (char j = 'A' + i - 2; j >= 'A'; j--)
        // {
        //     cout << j;
        // }

        char ch = 'A';
        int total_characters = i * 2 - 1;
        for (int j = 1; j <= total_characters; j++)
        {
            cout << ch;
            if (j <= total_characters / 2)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_17(4);
    return 0;
}
```

18.
![7249b0e416eee8695d9bae025c7cb736.png](../../_resources/7249b0e416eee8695d9bae025c7cb736.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // My Solution
        // char ch = 'A' + n - i;
        // for (int j = 1; j <= i; j++)
        // {
        //     cout << ch << " ";
        //     ch++;
        // }

        for(char j = 'A' + n - i; j <= 'A' + n - 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_18(5);
    return 0;
}
```

19.
![574386dd480612b44d1aa1969854a2a3.png](../../_resources/574386dd480612b44d1aa1969854a2a3.png)
```c++
#include <bits/stdc++.h>

using namespace std;

void print_pattern_19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j <= 2 * (n - 1 - i); j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_19(5);
    return 0;
}
```


20.
![7aa8a38a6dd55ccd9b61dad2dc7837b3.png](../../_resources/7aa8a38a6dd55ccd9b61dad2dc7837b3.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_20(int n)
{
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int max_stars = i > n ? (2 * n) - i : i;
        for (int j = 1; j <= max_stars; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * (n - max_stars); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= max_stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    print_pattern_20(5);
    return 0;
}
```

21.
![caa6265503bd4126368b30b57f5b6772.png](../../_resources/caa6265503bd4126368b30b57f5b6772.png)
```c++
#include <bits/stdc++.h>

using namespace std;
void print_pattern_21(int n)
{
    // My Solution
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == 1 || i == n)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     else
    //     {
    //         cout << "*";
    //         for (int j = 1; j <= n - 2; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = ' ';
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                ch = '*';
            }
            cout << ch;
        }
        cout << endl;
    }
}

int main()
{
    print_pattern_21(4);
    return 0;
}

```

22.
![b697da72a59f3510debe0cfa8124426b.png](../../_resources/b697da72a59f3510debe0cfa8124426b.png)
```c++
#include <bits/stdc++.h>

using namespace std;

void print_pattern_22(int n)
{
  // My solution
  // int total_lines{n * 2 - 1};
  // int center {total_lines / 2};
  // for (int i = 0; i < total_lines; i++)
  // {
  //   for (int j = 0; j < total_lines; j++)
  //   {
  //     int abs_x = abs(center - i);
  //     int abs_y = abs(center - j);
  //     int max_abs = max(abs_x, abs_y);
  //     cout << 1 + max_abs << " ";
  //   }
  //   cout << endl;
  // }

  int total_lines{n * 2 - 1};
  for (int i = 0; i < total_lines; i++)
  {
    for (int j = 0; j < total_lines; j++)
    {
      int left_distance = i;
      int top_distance = j;
      int right_distance = total_lines - 1 - j;
      int bottom_distance = total_lines - 1 - i;
      cout << n - min(min(top_distance, bottom_distance), min(left_distance, right_distance)) << " ";
    }
    cout << endl;
  }
}

int main()
{
  print_pattern_22(4);
  return 0;
}
```
