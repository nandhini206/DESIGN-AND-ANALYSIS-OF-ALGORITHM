//naive string matching (ask input from the user)

#include <bits/stdc++.h>
using namespace std;

void naive_algorithm(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    int i, j;

    for (i = 0; i <= n - m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m)
            cout << "Found at index " << i << endl;
    }
}

int main()
{
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    naive_algorithm(text, pattern);
    return 0;
}
