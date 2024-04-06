#include <bits/stdc++.h>
using namespace std;
void square(int n)
{
    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < n; j++) // columns
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void increasingtriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // just change n to i
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void Decreasingtriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) // just change n to i
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void righttriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void hill(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) // change <= to < to print 1 less row
        {
            cout << "* ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void reversehill(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        for (int j = i + 1; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void diamond(int n)
{
    
   for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) // change <= to < to print 1 less row
        {
            cout << "* ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        for (int j = i + 1; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{ 
    cout<<"square"<<endl;
    square(5);
    cout<<"increasing triangle"<<endl;
    increasingtriangle(5);
    cout<<"decreasing triangle"<<endl;
    Decreasingtriangle(5);
    cout<<"right side traingle"<<endl;
    righttriangle(5);
    cout<<"hill"<<endl;
    hill(5);
    cout<<"reverse hill"<<endl;
    reversehill(5);
    cout<<"diamond"<<endl;
    diamond(5);
}