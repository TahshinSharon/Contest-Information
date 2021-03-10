#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i = 0;
    while(cin >> str && str != "*"){
        if("Hajj" == str)cout << "Case " << ++i << ": " <<  "Hajj-e-Akbar" << endl;
        else if("Umrah" == str)cout << "Case " << ++i << ": " <<  "Hajj-e-Asghar" << endl;
    }
    return 0;
}
