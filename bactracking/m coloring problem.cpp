// m-coloring problem

#include<iostream>
using namespace std;
bool issafe(int color[],int v,int i,bool graph[4][4]){
	for(int j=0;j<4;j++){
		if(graph[v][j]&&color[j]==i)
		return false;
	}
	return  true;
}
bool solve(bool graph[4][4],int color[],int m,int v){
	if(v==4)
	return true;
	for(int i=1;i<=m;i++){
		if(issafe(color,v,i,graph)){
			color[v]=i;
			if(solve(graph,color,m,v+1))
			return true;
			else
			color[v]=0;
		}
	}
	return false;
}

int main(){
	 bool graph[4][4] = {{0, 1, 1, 1}, 
        {1, 0, 1, 0}, 
        {1, 1, 0, 1}, 
        {1, 0, 1, 0}, 
    }; 
    int m = 3;
    int color[4];
    for(int i=0;i<4;i++)
    color[i]=0;
    if(solve(graph,color,m,0)){
    	for(int i=0;i<4;i++)
    	cout<<color[i]<<" ";
	}
	else
	cout<<"no solution";
}

