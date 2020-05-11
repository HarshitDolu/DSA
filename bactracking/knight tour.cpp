// 8x8 Matrix knight Tour bactracking problem

#include<iostream>
using namespace std;
bool issafe(int x,int y,int sol[8][8]){
	if(x>=0&&x<8&&y>=0&&y<8&&sol[x][y]==-1)
	return true;
	return false;
}
bool solve(int x,int y,int move,int xmove[],int ymove[],int sol[8][8]){
	
	if(move==64)
	return true;
	for(int k=0;k<8;k++){
		int next_x=x+xmove[k];
		int next_y=y+ymove[k];
		if(issafe(next_x,next_y,sol)){
			sol[next_x][next_y]=move;
			
			if(solve(next_x,next_y,move+1,xmove,ymove,sol))
			return true;
			else
				sol[next_x][next_y]=-1;
			
		}
	}
	return false;
	
}
int main(){
	
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int sol[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			sol[i][j]=-1;
		}
	}
	
	int xmove[8]={2,1,-1,-2,-2,-1,1,2};
	int ymove[8]={1,2,2,1,-1,-2,-2,-1};
	sol[0][0]=0;
	if(solve(0,0,1,xmove,ymove,sol)==false)
	cout<<"no solution";
	else{
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
