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

void print_pattern_14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print_pattern_15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + (n + 1 - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

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

        for (char j = 'A' + n - i; j <= 'A' + n - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

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

    cout << "Pattern 1 :" << endl;
    print_pattern_1(4);
    cout << endl;

    cout << "Pattern 2 :" << endl;
    print_pattern_2(5);
    cout << endl;

    cout << "Pattern 3 :" << endl;
    print_pattern_3(5);
    cout << endl;

    cout << "Pattern 4 :" << endl;
    print_pattern_4(5);
    cout << endl;

    cout << "Pattern 5 :" << endl;
    print_pattern_5(5);
    cout << endl;

    cout << "Pattern 6 :" << endl;
    print_pattern_6(5);
    cout << endl;

    cout << "Pattern 7 :" << endl;
    print_pattern_7(5);
    cout << endl;

    cout << "Pattern 8 :" << endl;
    print_pattern_8(5);
    cout << endl;

    cout << "Pattern 9 :" << endl;
    print_pattern_9(5);
    cout << endl;

    cout << "Pattern  10:" << endl;
    print_pattern_10(5);
    cout << endl;

    cout << "Pattern  11:" << endl;
    print_pattern_11(5);
    cout << endl;

    cout << "Pattern  12:" << endl;
    print_pattern_12(4);
    cout << endl;

    cout << "Pattern  13:" << endl;
    print_pattern_13(5);
    cout << endl;

    cout << "Pattern  14:" << endl;
    print_pattern_14(5);
    cout << endl;

    cout << "Pattern  15:" << endl;
    print_pattern_15(5);
    cout << endl;

    cout << "Pattern  16:" << endl;
    print_pattern_16(5);
    cout << endl;

    cout << "Pattern  17:" << endl;
    print_pattern_17(4);
    cout << endl;

    cout << "Pattern  18:" << endl;
    print_pattern_18(5);
    cout << endl;

    cout << "Pattern  19:" << endl;
    print_pattern_19(5);
    cout << endl;

    cout << "Pattern  20:" << endl;
    print_pattern_20(5);
    cout << endl;

    cout << "Pattern  21:" << endl;
    print_pattern_21(4);
    cout << endl;

    cout << "Pattern  22:" << endl;
    print_pattern_22(4);
    cout << endl;

    return 0;
}
