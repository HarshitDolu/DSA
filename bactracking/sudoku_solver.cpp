
// sudoku using backtracking

//concept used is backtracking 
// 3 key elements are: 1.choice  2. constraints  3.goal

// 1. choices are to fill board with number from 1 to 9
// 2. constraints are not to have same no in row,col and grid
// 3. goal is to find the solution
#include<iostream>
using namespace std;
  
 bool issafe(int row,int col,int n,int board[9][9]){
 	for(int i=0;i<9;i++){
	 
 	if(board[row][i]==n||board[i][col]==n)
 	return false;
 }
 	int rs=row-row%3;
 	int cs=col-col%3;
 	for(int r=rs;r<rs+3;r++){
 		for(int c=cs;c<cs+3;c++){
 			if(board[r][c]==n)
 			return false;
		 }
	 }
	 return true;
 }
 bool solve(int board[9][9]){
 
 	int row,col;
 	int k=0;
 	for(int i=0;i<9;i++){
	 
	 
	 for(int j=0;j<9;j++){
	 
	 
	
	 if(board[i][j]==0){
	 
	 	row=i;
	 	col=j;
	 	k=1;
		 break;
	
		 }
}
if(k==1)
break;
}



  if(row==9&&col==9)
	 return true;
	

	 for(int n=1;n<=9;n++){
	 	if(issafe(row,col,n,board)){
	 		board[row][col]=n;
	 		if(solve(board))
	 		return true;
	 		board[row][col]=0;
		 }
	 }
	 return false;
 }

int main(){
 int board[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},  
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},  
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},  
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},  
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},  
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},  
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},  
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},  
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}}; 
    
   
    if(solve(board)){
    
    	for(int i=0;i<9;i++){
    		for(int j=0;j<9;j++){
    			cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
	cout<<"no solution exists";
	
	return 0;
}
