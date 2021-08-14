#include <iostream>
#include <vector>

using namespace std;

void pwd(int n, vector<int>& myvec)
{
    if (n <= 3)
        return;
    else {
        int times = (n-1)/3;
        for (int i = 1; i <= times; i++) {
            myvec[0] += myvec[1];
            myvec[1] += myvec[2];
            myvec[2] += myvec[0];
        }
    }    
    return;
}

int main()
{
    vector<int> res(3, 1);
    int n = 0;
    cin >> n;
    pwd(n, res);
    cout << res[(n-1)%3] << endl;
    system("pause");
    return 0;
}