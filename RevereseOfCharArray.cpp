#include <bits/stdc++.h>
using namespace std;

void Reverse(char arr[], int n)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    char word[] = "AYRIAHD";

    Reverse(word, strlen(word));
    PrintArray(word, strlen(word));
}