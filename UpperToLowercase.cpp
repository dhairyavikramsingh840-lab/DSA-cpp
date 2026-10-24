#include <bits/stdc++.h>
using namespace std;
void UpperToLowerCase(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int word = arr[i];
        if (word >= 'a' && word <= 'z')
        {
            continue;
        }
        else
        {
            arr[i] = ((word - 'A') + 'a');
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
    char word[] = "DHAIRYA";

    UpperToLowerCase(word, strlen(word));
    PrintArray(word, strlen(word));
}