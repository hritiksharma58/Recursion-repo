#include<iostream>
using namespace std;

void printPermutationWithSpaces(string input,int currIndex,string output){
	if(currIndex == input.length()-1){
		output+=input[currIndex];
		cout<<output<<endl;
		return;
	}
	
	printPermutationWithSpaces(input,currIndex+1,output+input[currIndex]);
	printPermutationWithSpaces(input,currIndex+1,output+input[currIndex]+"_");
}

int main(){
	string input="ABC";
	string output="";
	
	int currIndex=0;
	
	printPermutationWithSpaces(input,currIndex,output);
}