#include<iostream>
#include<vector>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }    
    int size=arr.size()-2;
    vector<int> result;
    result.push_back(arr[size]);
    result.push_back(arr[1]);
    return result ;
}

int main(){
    vector<int> arr;
   //size of vector
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
    vector<int> resultantArray=getSecondOrderElements(n, arr) ;
    return 0;
}
