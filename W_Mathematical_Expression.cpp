#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    char s;
    int b;
    char q;
    int c;

    cin >> a >> s >> b >> q >> c;

    if(s == '+')
    {
        if(a+b == c)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << a+b << endl;
        }
    }
    else if(s == '-')
    {
        if(a-b == c)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << a-b << endl;
        }
    }
    else if(s == '*')
    {
        if(a*b == c)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << a*b << endl;
        }
    }

    
    return 0;
}
