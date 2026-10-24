#include <bits/stdc++.h>
using namespace std;

void ToUppercase(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int word = arr[i];
        if (word >= 'A' && word <= 'Z')
        {
            continue;
        }
        else
        {
            arr[i] = (word - 'a') + 'A';
        }
    }
}

void PrintArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    char word[] = "dhairya";

    ToUppercase(word, strlen(word));
    PrintArray(word, strlen(word));
}