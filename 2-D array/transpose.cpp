
//pro method
#include <bits/stdc++.h> 
using namespace std; 

void print(vector<vector<int>> arr) {
    // Print the original matrix
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // Transpose the matrix
    int rows = arr.size();
    int cols = arr[0].size();
    vector<vector<int>> transposed(cols, vector<int>(rows));
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
    
    // Print the transposed matrix
    for(int i = 0; i < transposed.size(); i++) {
        for(int j = 0; j < transposed[i].size(); j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {    
    int m, n;
    cin >> m >> n; // m is the row size and n is the column size
    vector<vector<int>> arr;
    for(int i = 0; i < m; i++) {
        vector<int> v;
        for(int j = 0; j < n; j++) {
            v.push_back(i * n + j); // Initialize with unique values
        }
        arr.push_back(v);
    }
    print(arr);
    return 0;
}
//uneven matrix
#include <bits/stdc++.h> 
using namespace std;

void print(vector<vector<int>> &arr) {
    // Print the original matrix
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Transpose the matrix in place
    int rows = arr.size();
    int cols = arr[0].size();

    // Check if the matrix is square
    if(rows == cols) {
        // In-place transpose for square matrix
        for(int i = 0; i < rows; i++) {
            for(int j = i + 1; j < cols; j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }
    } else {
        // Transpose for non-square matrix
        vector<vector<int>> transposed(cols, vector<int>(rows));
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                transposed[j][i] = arr[i][j];
            }
        }
        arr = transposed;
    }

    // Print the transposed matrix
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {    
    int m, n;
    cin >> m >> n; // m is the row size and n is the column size
    vector<vector<int>> arr;
    for(int i = 0; i < m; i++) {
        vector<int> v;
        for(int j = 0; j < n; j++) {
            v.push_back(i * n + j); // Initialize with unique values
        }
        arr.push_back(v);
    }
    print(arr);
    return 0;
}
//using swap method
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        // For non-square matrices, create a new transposed matrix
        if (rows != columns) {
            vector<vector<int>> transposed(columns, vector<int>(rows));
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    transposed[j][i] = matrix[i][j];
                }
            }
            return transposed;
        } else {
            // For square matrices, transpose in place
            for (int i = 0; i < rows; i++) {
                for (int j = i + 1; j < columns; j++) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            return matrix;
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> transposedMatrix = sol.transpose(matrix);

    // Print the transposed matrix
    for (const auto& row : transposedMatrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}

