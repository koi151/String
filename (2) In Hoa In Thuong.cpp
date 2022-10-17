/*
Cho một xâu kí tự, hãy viết hoa và viết thường các kí tự là chữ cái trong xâu, các kí tự không phải là chữ cái thì không thay đổi.

Input Format

Xâu kí tự S.

Constraints

1≤len(S)≤1000.

Output Format

Dòng đầu tiên in ra xâu sau khi thay đổi mọi kí tự thường trong xâu thành ký tự hoa. Dòng thứ 2 in ra xâu sau khi thay đổi mọi kí tự hoa trong xâu thành kí tự thường.

Sample Input 0

abcd ABCD
Sample Output 0

ABCD ABCD
abcd abcd
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

void toUpper(string &s)
{
    for ( int i = 0; i < s.length(); ++i)
    {
        s[i] = toupper(s[i]);
    }
}

void toLower(string &s)
{
    for ( int i = 0; i < s.length(); ++i)
    {
        s[i] = tolower(s[i]);
    }
}

//=================================================
int main ()
{
    FAST_IO;
    string s;
    getline(cin , s);
    toUpper(s);
    cout << s << '\n';
    toLower(s);
    cout << s;

    return 0;
}