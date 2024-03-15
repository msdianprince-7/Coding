class Solution {
public:
bool isSafe(int row,int col,vector<string> board,int n)
{ 
    //upward back arrow
    int duprow= row;
    int dupcol= col;

    while(row>=0 && col>=0)
    {
        if(board[row][col]=='Q') return false;
        row--;
        col--;

    }

    // backside arroew

    col=dupcol;
    row=duprow;

    while(col>=0)
    {
        if(board[row][col]=='Q') return false;
        col--;
    }

    // downward back arrow

    col=dupcol;
    row=duprow;

    while(row<n && col>=0)
    {
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }
    return true;
}


void solve(int col,vector<string>& board,vector<vector<string>> &ans,int n){
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++) // har column k liye hum hrr roe mein jaa rahe the traverse kr rahe the aur check kr rahe ki safe hai na rakhna 
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col]='Q';
            solve(col+1,board,ans,n); // recursion call for next col
            board[row][col]='.'; // backtrack  jaate hue khali kr diya waps emty 


        }
    }


}

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.'); // sabko  emty allot kr diya  
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n); // 0 = col
        return ans;
    }
};