#include <bits/stdc++.h>

using namespace std;

int dfs(int i, int j, vector<vector<bool>> &visited)
{
    if (i >= visited.size() || j >= visited[0].size() || visited[i][j])
        return 0;
    visited[i][j] = true;
    return 1 + dfs(i + 1, j, visited) + dfs(i, j + 1, visited) + dfs(i - 1, j, visited) + dfs(i, j - 1, visited);
}

int movingCount(int n, int m, vector<vector<bool>> &visited)
{
    return dfs(n, m, visited);
}

int main()
{
    int n, m;   // 矩阵长和宽
    cin >> n >> m;

    vector<vector<bool>> vec;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            int num;
            cin >> num;
            if (num == 1)   vec[i][j] = true;
        }
    }

    int k;  //部队数目
    cin >> k;
    int res = INT_MAX;
    for (int i = 0; i < k; ++i) {
        int a, b;
        for (int j = 0; j < 2; ++j) {
            cin >> a >> b;
            vec[a-1][b-1] = true;
        }
        res = min(res, movingCount(a-1, b-1, vec));
    }

    return res;
}
