#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str1[50];
    int i, l = 0;
    cout << "\n\n Find the length of a string:\n";
    cout << "---------------------------------\n";
    cout << " Input a string: ";
    cin >> str1;
      for (i = 0; str1[i] != '\0'; i++) {
        l++;
      }
      cout << "The string contains " << l << " number of characters." << endl;
      cout << "So, the length of the string " << str1 << " is:" << l << endl;

 return 0;
}