#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++){
           arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
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
   vector<int> resultantArray=rotateArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<resultantArray[i] << " ";
    }
    return 0;
}
