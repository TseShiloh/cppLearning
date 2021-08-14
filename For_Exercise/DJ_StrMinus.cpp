#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <ctype.h>

using namespace std;

void DoMinus(string& str)
{
    int flag = 0, len = str.size();
    vector<char> dic;
    char c;
    unordered_map<char,int> mymap;
    int num = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == '#') {
            flag = i;
            mymap[c] = num;
            break;
        }
        else if (isalpha(str[i])) {
            c = str[i];
            dic.push_back(c);
        }
        else if (isdigit(str[i])) {
            num = num*10 + str[i] - '0';         
        }
        else {
            mymap[c] = num;
            num = 0;
        }
    }
    num = 0;
    for (int i = flag + 1; i < len; i++) {
        if (isalpha(str[i])) {
            c = str[i];
        }
        else if (isdigit(str[i])) {
            num = num*10 + str[i] - '0';
            if (i == len -1)
                mymap[c] -= num;    
        }
        else {
            mymap[c] -= num;
            num = 0;
        }
    }

    bool NoDot = true;
    for (int i = 0; i < dic.size(); i++)
    {
        if (mymap[dic[i]] > 0) {
            if (NoDot) {
                cout << dic[i] << ':' << mymap[dic[i]];
                NoDot = false;
            }
            else
                cout << ',' << dic[i] << ':' << mymap[dic[i]];
        }
    }
    if (flag == len-1)
        cout << '#' << endl;

}

int main()
{
    string s;
    cin >> s;
    DoMinus(s);
    system("pause");
    return 0;
}