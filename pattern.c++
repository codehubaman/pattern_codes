#include <bits/stdc++.h>
using namespace std;
void printpattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // print star
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // print space

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space -= 2;
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cout << "enter no.of test cases: ";
    cin >> t;
    cout << "enter value of rows: ";
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        // printpattern1(n);
        // printPattern2(n);
        printPattern3(n);
    }
}