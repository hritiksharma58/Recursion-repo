#include <iostream>
#include <vector>
 using namespace std;
 void insert(vector<int>&a,int k){
 int n=a.size(); //base case
 if(n==0 || a[n-1]<=k){
 a.push_back(k); 
 return; 
 }
 int val=a[n-1]; //store the last value 
 a.pop_back(); //remove from vector , making the input size smaller
 insert(a,k); //insert k at its correct position
 a.push_back(val); //finally insert the last value that is stored before 
 }
 void sorty(vector<int> &a){
 int n=a.size();
 if(n==1 ||n==0)return;
 int t=a[n-1];//store the last index value
 a.pop_back();//remove it from vector
 sorty(a);//sort for remaining elements
 insert(a,t);//insert the stored value at its correct position
 }
 int main()
 {
 vector<int> a={0,1,5,2,8};
 sorty(a); cout<<"Here is the sorted array :\n";
 for(int i=0;i<5;i++){
 cout<<a[i]<<" ";
 }
 return 0;
 }