ToDo
/************************************************************************************************************************************************
leetcode link of this question -> https://leetcode.com/problems/set-matrix-zeroes/
*************************************************************************************************************************************************/


/* CHNAGES REQUIRED ***************

#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == 0) matrix[i][j] = -1;
        }
    }
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == -1){
                for(int x = 0; x < matrix[0].size(); x++) if(matrix[i][x] != -1) matrix[i][x] = 0;
                for(int y = 0; y < matrix.size(); y++) if(matrix[y][j] != -1)  matrix[y][j] = 0;
            }
        }
    }
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == -1) matrix[i][j] = 0;
        }
}
 
int main(){
    vector<vector<int>>matrix;
    matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix);
    for(int i = 0; i < matrix.size(); i++)
        for(int j = 0; j < matrix[0].size(); j++)
            cout << matrix[i][j];

}
*/
