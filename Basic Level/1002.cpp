#include <bits/stdc++.h>

using namespace std;

int main()
{   
    string n;
    int sum = 0;
    cin >> n;
    for (size_t i = 0 ; i < n.size(); ++i)
    {
        sum += n[i] - '0';
    }

    string ans;
    string pyMap[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    ans = to_string(sum);

    for (size_t i = 0; i < ans.size(); ++i)
    {
        if(i > 0) cout << ' ';
        cout << pyMap[ans[i] - '0'];
    }

    return 0;
}
