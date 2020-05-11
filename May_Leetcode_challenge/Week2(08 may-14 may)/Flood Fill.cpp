class Solution {
public:
    bool isSafe(vector<vector<int>>& image,int row,int col,vector<vector<bool>> &visited,int rows,int cols,int myColor){
        if(row>=0 && row<rows && col>=0 && col<cols && !visited[row][col] && image[row][col]==myColor)
            return true;
        else
            return false;
    }
    void dfs(vector<vector<int>>& image,int row,int col,vector<vector<bool>> &visited,int rows,int cols,int newColor){
        visited[row][col]=true;
        int myColor=image[row][col];
        image[row][col]=newColor;
        int krow[]={-1,0,1,0};
        int kcol[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            if(isSafe(image,row+krow[k],col+kcol[k],visited,rows,cols,myColor))
                dfs(image,row+krow[k],col+kcol[k],visited,rows,cols,newColor);
        }
    }
        
                                                                                      
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int rows=image.size();
        int cols=image[0].size();
        vector<vector<bool> > visited(rows,vector<bool>(cols,false));   
        dfs(image,sr,sc,visited,rows,cols,newColor);
        return image;
    }
};
