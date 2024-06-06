//pro method
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

//array reveral method here
void rotate(int mat[n][n])
{
    for(int i = 0; i < n; i++)
    {
		for(int j = i + 1; j < n; j++)
		{
		    int temp=mat[i][j];
		    mat[i][j]=mat[j][i];
		    mat[j][i]=temp;
		}
    }
			
	//reveral		
	for(int i = 0; i < n; i++)
	{
	    int low = 0, high = n - 1;
	    
	    while(low < high)
	    {//you can use swap too
	        int temp=mat[low][i];
		    mat[low][i]=mat[high][i];
		    mat[high][i]=temp;
	        
	        low++;
	        high--;
	    }
	}
}

//normal method
void transpose(int mat[n][n])
{
	int temp[n][n];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			temp[n - j - 1][i] = mat[i][j];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			mat[i][j] = temp[i][j];

}