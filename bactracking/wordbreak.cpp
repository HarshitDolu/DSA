// word break using bactracking
#include<iostream>
using namespace std;
#include<string>
bool contains(string s){
	string dictionary[] = {"lr","m","lrm","hcdar","wk"}; 
    int n = sizeof(dictionary)/sizeof(dictionary[0]); 
    for (int i = 0; i < n; i++) 
        if (dictionary[i].compare(s) == 0) 
            return true; 
    return false; 
}
void wordbreak(string s,int n,string res){
	for(int i=1;i<=n;i++){
	
	string pre=s.substr(0,i);
	if(contains(pre)){
		if(i==n){
			res=res+pre;
			cout<<res<<" ";
			return;
		}
		wordbreak(s.substr(i,n-i),n-i,res+pre+" ");
	}
}
}

int main(){
	cout << "First Test:\n";
	string s="hcdarlrm";
    wordbreak(s,s.size()," ");
	return 0; 
}
