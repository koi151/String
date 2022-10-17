/*
Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

Input Format

Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

Constraints

1≤len(S)≤100000.

Output Format

Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(chú ý mỗi kí tự chỉ in 1 lần)

Sample Input 0

abcdabcdA
Sample Output 0

A 1
a 2
b 2
c 2
d 2

a 2
b 2
c 2
d 2
A 1
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=============================================
int main ()
{
    FAST_IO;
    string s;
    getline(cin, s);
    map <char, int> mp;
    int a[256] ={0};
    memset(a , 0 , sizeof(a));
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]] ++;
        a[s[i]] ++;
    }
    for (auto it : mp) cout << it.first << ' ' << it.second << '\n';
    cout << '\n';
    for ( int i = 0; i < s.length(); i ++)
    {
        if (a[s[i]] != 0){
            cout << s[i] << ' ' << a[s[i]] <<'\n';
            a[s[i]] = 0;
        }
    }
    return 0;
}