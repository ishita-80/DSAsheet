#include<iostream>
#include<vector>
using namespace std;
int isSorted(int n, vector<int> arr) {
   for(int i=0;i<n-1;i++){
       if(arr[i]<=arr[i+1]){
           continue;
       }
       else{
           return false;
           break;
       }
   }
   return true;

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
    bool sorted=isSorted (n, arr);
    return 0;
}
