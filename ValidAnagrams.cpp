#include <bits/stdc++.h>
using namespace std;

bool ValidAnagrams(string s1, string s2)
{
  if (s1.length() != s2.length())
  {
    cout << "Not a valid anagrams";
    return false;
  }
  int count[26] = {0};

  for (int i = 0; i < s1.length(); i++) // For string s1...
  {
    int idx = s1[i] - 'a';
    count[idx]++;
  }

  for (int i = 0; i < s2.size(); i++) // For string s2...
  {
    int idx = s2[i] - 'a';
    if (count[idx] == 0)
    {
      cout << "Not a valid anagram.";
      return false;
    }

    count[idx]--;
  }

  cout << "It is a valid anagram" << endl;
  return true;
}
int main()
{
  string str1 = "dhiarya";
  string str2 = "Nitya";

  ValidAnagrams(str1, str2);

  return 0;
}