/*
Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái, chữ số và kí tự đặc biệt(Các kí tự không phải là chữ cái và chữ số).

Input Format

Xâu kí tự S.

Constraints

1≤len(S)≤1000.

Output Format

In ra số lượng chữ cái, chữ số, và kì tự đặc biệt xuất hiện trong xâu

Sample Input 0

abcd123 $%^ a
Sample Output 0

5 3 5
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=====================================================
int main ()
{
    FAST_IO;
    string s;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    getline(cin, s);
    for ( int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
            ++cnt1;
        else if (isdigit(s[i]))
            ++cnt2;
        else ++cnt3; 
    }
    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3;
    return 0;
}