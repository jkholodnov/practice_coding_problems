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

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

int main(){
	vector<int> threes_and_fives;
	int i;
	int sum = 0;

	for (i=0;i<1000;i++){
		if (( i%3 == 0) || (i%5 ==0)){
			threes_and_fives.push_back(i);
		}
	}

	for(i=0;i<threes_and_fives.size();i++){
		sum += threes_and_fives[i];
	}
	cout << sum << endl;
}