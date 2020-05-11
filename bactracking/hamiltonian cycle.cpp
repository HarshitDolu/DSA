#include<iostream>
using namespace std;

bool issafe(bool graph[5][5],int path[],int pos,int v){
	if(graph[path[pos-1]][v]==0)
	return false;
	for(int i=0;i<pos;i++){
	
	if(path[i]==v)
	return false;}
	return true;
}
bool solve(bool graph[5][5],int path[],int pos){
	if(pos==5){
		if(graph[path[pos-1]][path[0]]==1)
		return true;
	}
	
	for(int v=1;v<5;v++){
		if(issafe(graph,path,pos,v)){
			path[pos]=v;
			if(solve(graph,path,pos+1))
			return true;
			else
			path[pos]=-1;
		}
	}
	return false;
}

int main(){
	 bool graph[5][5] = {{0, 1, 0, 1, 0},  
                        {1, 0, 1, 1, 1},  
                        {0, 1, 0, 0, 1},  
                        {1, 1, 0, 0, 1},  
                        {0, 1, 1, 1, 0}};  
                int path[5];
                  for(int i=0;i<5;i++)
				  path[i]=-1;    
		path[0]=0;
    if(solve(graph,path,1)==true){
    	cout<<"path exists";
	}
	else
	cout<<"No path";
}
