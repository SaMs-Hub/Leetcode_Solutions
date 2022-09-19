// App 1 - 

#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> const &mat)
{
    for (auto &row : mat)
    {
        for (auto &i : row)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void changeRowColumn(vector<vector<int>>  &mat, int x, int y)
{
    // store the size of matrix and the 1st element
    int m = mat.size();
    int n = mat[0].size();


    // traverse over the and replace nonZero with static(-999);
    for (int j = 0; j < n; j++){
        if(mat[x][j] != 0){
            mat[x][j] = -999;
        }
    }

    for (int i = 0; i < m; i++){
        if (mat[i][y] != 0){
            mat[i][y] = -999;
        }
    }

   
}

void convert(vector<vector<int>>  &mat)
{
    // base case
    if (mat.size() == 0)
    {
        return;
    }

    // take two vars to store size of 1st element and entire matrix
    int m = mat.size();
    int n = mat[0].size();

    // traverse through them and check if mat[i][j] is 0 if yes replace nonZero with static 
    // by calling changeFuncion

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                changeRowColumn(mat, i, j);
            }
        }
    }

    // once u get static change back to 0 by traversing over m,n
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == -999){
                mat[i][j] = 0;
            }
        }
    }
}

int main()
{

    vector<vector<int>> mat =
        {
            {1, 1, 0, 1, 1},
            {1, 1, 1, 1, 1},
            {1, 1, 0, 1, 1},
            {1, 1, 1, 1, 1},
            {0, 1, 1, 1, 1}};

    // convert the matrix
     convert(mat);

    // print matrix
    printMatrix(mat);

    return 0;
}



// App 2 - 
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        if (mat.size() == 0){
        return;
    }

    int row = mat.size();
    int col = mat[0].size();

    bool rowFlag =  false;
    bool colFlag = false;

    for (int j = 0; j < col; j++){
        if (!mat[0][j]){
            rowFlag = true;
            break;
        }
    }

    for (int i = 0; i < row; i++){
        if (!mat[i][0]){
            colFlag = true;
            break;
        }
    }

    for (int i = 1; i < row; i++){
        for (int j = 1; j < col; j++){
            if (!mat[i][j]){
                mat[0][j] = mat[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < row; i++){
        for (int j = 1; j < col; j++){
            if (!mat[i][0] or !mat[0][j]){
                mat[i][j] = 0;
            }
        }
    }

    for (int m = 0; rowFlag && m < col; m++){
        mat[0][m] = 0;
    }

    for (int n = 0; colFlag && n < row; n++){
        mat[n][0] = 0;
    }
        
    }
};
