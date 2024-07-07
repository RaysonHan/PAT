#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    int digitSum = 0;
    for(char digitChar : n) {
        digitSum += digitChar - '0';
    }

    string sumStr = to_string(digitSum);

    string pinyinMap[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    for (size_t i = 0; i < sumStr.length(); ++i) {
        if (i > 0) cout << " ";
        cout << pinyinMap[sumStr[i] - '0'];
    }

    return 0;
}
