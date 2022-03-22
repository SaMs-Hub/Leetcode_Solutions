#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector <vector <int>> &mat){
    for (auto &row: mat){
        for (auto &i: row){
            cout << i << " ";
        }cout<< endl;

    }
}

void rotate(vector <vector <int>> &mat){
    // base case if size is 0
    if (mat.size() == 0){
        return;
    }

    // store mat size in var
    int N = mat.size();

    // traverse over mat and swap i,j
    for (int i = 0; i < N; i++){
        for (int j= 0; j < i; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // swap row by traversions over half rows and swapiing N - i - 1 rows
    for (int i = 0; i < N/2; i++){
        for (int j = 0; j < N; j++){
            swap(mat[i][j], mat[N - i - 1][j]);
        }
    }
}

int main()
{
    vector<vector<int>> mat =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};

    rotate(mat);
    printMatrix(mat);

    return 0;
}
