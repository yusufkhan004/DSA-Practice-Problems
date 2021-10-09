#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column, temp;
    cin >> row >> column;
    vector<vector<int>> matrix;
    for (int i = 0; i < row; i++)
    {
        vector<int> temparr;
        for (int j = 0; j < column; j++)
        {
            cin >> temp;
            temparr.push_back(temp);
        }
        matrix.push_back(temparr);
        temparr.clear();
    }
    // 1 0 1 0 0
    // 1 0 1 1 0
    // 1 1 1 1 1
    // 1 0 0 1 0
    int r = matrix.size();
    int c = matrix[0].size();
    int arr[row][column];
    int ans = 0;

    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            if (i == r - 1 && j == c - 1)
            {
                arr[i][j] = matrix[i][j];
            }
            else if (i == r - 1)
            {
                arr[i][j] = matrix[i][j];
            }
            else if (j == c - 1)
            {
                arr[i][j] = matrix[i][j];
            }
            else
            {
                if (matrix[i][j] == 0)
                {
                    arr[i][j] = 0;
                }
                else
                {
                    int mini = min(arr[i][j + 1], arr[i + 1][j]);
                    mini = min(mini, arr[i + 1][j + 1]);
                    arr[i][j] = mini + 1;

                    ans = max(ans, arr[i][j]);
                }
            }
        }
    }
    cout << "maximum number of square can be formed is " << ans << endl;
    cout << "Maximum no. of boxes having 1 is " << ans * ans << endl;
    return 0;
}