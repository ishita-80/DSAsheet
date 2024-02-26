#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    vector<int> temp;
     for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    int j=0;
    for(int i=k;i<arr.size();i++){
        arr[j]=arr[i];
        j++;
    }
    for(int i=0;i<k ;i++){
        arr[j]=temp[i];
        j++;
    }
    return arr;
}
int main(){
    vector<int> arr;
    int n,element,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
   cin>>k;   
   vector<int> resultantArray = rotateArray(arr,k);
   for(int i=0;i<n;i++){
      cout<<resultantArray[i];
   }
    return 0;
}
