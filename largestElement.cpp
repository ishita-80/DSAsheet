#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int largestElement=INT32_MIN;
   for(int i=0;i<n;i++){
       if(arr[i]>largestElement){
           largestElement=arr[i];
       }
   }
   return largestElement;
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
    int maxElement = largestElement(arr, n);
    cout<<maxElement;
    return 0;
}
