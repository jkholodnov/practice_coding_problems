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

//Find the sum of the squares from 1-100, then the squares of the sums, and find the difference of the two.

int main(int argc, char const *argv[])
{
	int sum_squares = 0;
	int square_sums = 0;
	int i;
	for(i=1;i<101;i++){
		sum_squares += i*i;
		square_sums += i;
	}
	square_sums *= square_sums;
	cout << square_sums - sum_squares << endl;
	return 0;
}
