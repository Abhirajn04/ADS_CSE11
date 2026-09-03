#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;

    for (char c : str) {
        s.push(c);
    }

    
    for (char c : str) {
        if (c != s.top()) {
            return false;
        }
        s.pop();
    }

    return true;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
