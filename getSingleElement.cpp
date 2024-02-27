#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
#include<vector>
int getSingleElement(vector<int> &arr){
	int result=0;
	
	for(int i=0;i<arr.size();i++){
       result^=arr[i];
	}	
	return result;
}
int main(){
    vector<int> arr;
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
   int resultant = getSingleElement(arr);
      cout<<resultant;
    return 0;
}
