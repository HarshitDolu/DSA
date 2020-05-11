//Rat maze puzzle rat is restricted to have two moves(x,y+1) and (x+1,y)
#include<iostream>
using namespace std;
bool issafe(int maze[4][4],int x,int y){
	if(x<4&&y<4&&maze[x][y]==1)
	return true;
	return false;
}

bool solve(int maze[4][4],int x,int y,int sol[4][4]){
	if(x==3&&y==3){
		sol[3][3]=1;
		return true;
	}
	
	if(issafe(maze,x,y)==true){
		sol[x][y]=1;
		if(solve(maze,x+1,y,sol)==true) return true;
		else if(solve(maze,x,y+1,sol)==true) return true;
		sol[x][y]=0;
	
	}
	
	return false;
	
}
int main(){
	int maze[4][4] = { { 1, 0, 0, 0 }, 
                       { 1, 1, 0, 1 }, 
                       { 0, 1, 0, 0 }, 
                       { 1, 1, 1, 1 } }; 
  int sol[4][4];
  for(int i=0;i<4;i++){
  	for(int j=0;j<4;j++){
  		sol[i][j]=0;
	  }
  }
  
  if(solve(maze,0,0,sol)){
  	  for(int i=0;i<4;i++){
  	for(int j=0;j<4;j++){
  		cout<<sol[i][j]<<" ";
	  }
	  cout<<endl;
  }
  	
  }
  else
  cout<<"no solution";
}
