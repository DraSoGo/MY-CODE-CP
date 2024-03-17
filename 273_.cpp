#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n,m,i,j,k;
	cin >> n >> m;
	
	memset(arr, 0, sizeof(arr));
	for(i=0;i<m;i++){
		cin >> j >> k;
		arr[k]=j;
	}
	vector<int> vec;
	
	char ch;
	int in;
	vector<char> x;
	vector<int> y;
	do
	{
		cin >> ch;
		x.push_back(ch);
		if(ch=='E'){
			cin >> in;
			y.push_back(in);
		}
	}
	while(ch!='X');
	
	j=0;
	for(i=0;i<x.size();i++){
		if(x[i]=='E'){
			if(vec.size()==0){
				vec.push_back(y[j]);
			}
			else{
				for(k=0;k<vec.size();k++){
					if(k==vec.size()-1){
						vec.push_back(y[j]);
						break;
					}
					if((arr[vec[k]]==arr[y[j]])&&(arr[vec[k+1]]!=arr[y[j]])){
						vec.insert(vec.begin()+(k+1),y[j]);
						break;
					}
				}
			}
			j++;
		}
		
		else if(x[i]=='D'){
			cout << vec[0] << endl;
			vec.erase(vec.begin());
		}
		else if(x[i]=='X'){
			cout << 0;
		}
	}
}
