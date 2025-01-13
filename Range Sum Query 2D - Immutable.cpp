class NumMatrix {
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>>& matrix) {
    //  copy(matrix.begin() , matrix.end() , back_inserter(mat));
    
    int m = matrix.size();
    int n = matrix[0].size();
     mat.resize(m, vector<int>(n, 0)); 
     for(int i = 0 ;i<m ;i++ ){ 
             int sum = 0;
              for(int j = 0 ;j<n ;j++){
                sum += matrix[i][j];
                mat[i][j] = sum;
     }
    }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum =0 ;
        
            for(int i =row1 ; i<= row2 ;i++){
                if (col1 == 0) {
                sum += mat[i][col2];
                } else {
                sum += mat[i][col2] - mat[i][col1 - 1];
            }
            }
        
        return sum;
    }
    
};
