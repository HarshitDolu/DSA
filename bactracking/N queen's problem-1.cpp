// N queen's problem
//concept used is backtracking
//1.choice is fixing a col and traverse row.
//2.constraints are not to have 1 in row,upper diag and lower diagnol
//3 Goal is to fill board .If soln exists

#include<iostream>
using namespace std;
bool issafe(int board[4][4],int row,int col){
	 int i, j; 
	for(i=0;i<col;i++){
		if(board[row][i]==1)
		return false;
	}
	
	for(i=row,j=col;i>=0 && j>=0;i--,j--){
		if(board[i][j]==1)
		return false;
	}
	
	for(i=row,j=col;i<4 && j>=0;i++,j--){
		if(board[i][j]==1)
		return false;
	}
	return true;
}
bool solve(int board[4][4],int col){
	bool res=false;
	if(col==4){
for(int i=0;i<4;i++){
    		for(int j=0;j<4;j++){
			
    		cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	return true;}
	
	for(int i=0;i<4;i++){
		if(issafe(board,i,col)){
			board[i][col]=1;
			//if(solve(board,col+1))
			//return true;
			res=solve(board,col+1)||res;
			board[i][col]=0;
		}
	}
	return res;
}
int main(){
	int N=4;
	//we can use it for speeding up the execution time
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	  int board[4][4]={{ 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }}; 
  bool ans=solve(board,0);
  if(ans)
  cout<<"sol exixts";
  else
  cout<<"no sol";
}
