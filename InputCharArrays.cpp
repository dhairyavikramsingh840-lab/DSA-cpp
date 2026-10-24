#include <bits/stdc++.h>
using namespace std;
int main()
{
    char sentence[50];
    cout << "Enter a sentence : ";
    cin.getline(sentence, 50,',');

    cout << "The sentence is : " << sentence << endl;
    cout << " The length is : " << strlen(sentence) << endl;
}