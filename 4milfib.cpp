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

//Find the sum of all even fibonacci numbers below 4million

int fib(int n){
	if(n==1 || n==2){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
vector<int> find_all_fib_less_than_n(int n){
	vector<int> results;
	int k=0;
	int i=1;
	while(k < n){
		k=fib(i);
		i++;
		if(k<n){
			results.push_back(k);
		}
	}
	return results;
}
int main(){
	vector<int> all_fibs_less_than_4mil;
	vector<int> evenfibs;
	int result_counter=0;
	all_fibs_less_than_4mil = find_all_fib_less_than_n(4000000);
	for(int i=0;i<all_fibs_less_than_4mil.size();i++){
		if(all_fibs_less_than_4mil[i] % 2 ==0){
			evenfibs.push_back(all_fibs_less_than_4mil[i]);
		}
	}
	for(int i=0;i<evenfibs.size();i++){
		result_counter+= evenfibs[i];
	}
	cout << result_counter;
}