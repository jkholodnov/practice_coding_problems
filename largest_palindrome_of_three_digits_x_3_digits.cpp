#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <streambuf>

using namespace std;

int is_Palindrome(string x){
	char y, z;
	int i;
	bool checker = true;
	y = x[0];
	z = x[x.length()-1];


	for(i=0;i<x.length();i++){
		y = x[i];
		z = x[x.length()-(i+1)];
		if(y != z){
			checker = false;
		}
	}
	if(checker == false){
		return 0;
	}
	else{
		return 1;
	}
}
string IntToStr( int n )
  {
  ostringstream result;
  result << n;
  return result.str();
  }

int main(){
	int i, j;
	int product;
	vector<int> products;
	for(i=999;i>0;i--){
		for(j=999;j>0;j--){
			product = j*i;
			string theprod = IntToStr(product);
			int palindrome = is_Palindrome(theprod);
			if(palindrome==1){
				products.push_back(product);
			}
		}
	}
	int max=0;
	for(i=0;i<products.size();i++){
		if(products[i]> max){
			max = products[i];
		}
	}
	cout << max;
	//cout << products.size()<<"~"<<products[0] << endl;
	int result = is_Palindrome("racecar");
}