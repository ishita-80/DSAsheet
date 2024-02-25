#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    int size=arr.size();
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    vector<int> arr;
   //size of vector
    int n,element,target;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }
   cin>>target;   
   int resultantArraySize = linearSearch(n,target,arr);
   cout<<resultantArraySize;
    return 0;
}
