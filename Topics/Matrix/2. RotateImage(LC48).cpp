
// App 1 - Without extra 2D matrix
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        if (n == 0){
            return;
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n/2; j++) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
    }
};


// App 2 - With Extra matrix
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > rotateMatrix(vector<vector<int> > &matrix){
    int numRows = matrix.size();
	int numCols = matrix[0].size();
	
	vector<vector<int>> rotatedMatrix(numCols, vector<int> (numRows));
	
	for (int i = 0; i < numRows; i++){
		for (int j = 0; j < numCols; j++){
			rotatedMatrix[j][i] = matrix[i][j];
		}
	}
	
	for (auto &x: rotatedMatrix){
		reverse(x.begin(), x.end());
	}
	
	return rotatedMatrix;
	
}

void printMatrix(vector<vector<int>> &mat)
{
    for (auto &row: mat) {
        for (auto &i: row) {
            cout << setw(3) << i;
        }
        cout << endl;
    }
    cout << endl;
}


int main()
{
    vector<vector<int>> mat =
    {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    vector<vector<int>> var = rotateMatrix(mat);
    printMatrix(var);
    return 0;
}
