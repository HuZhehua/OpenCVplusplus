#include <iostream>

#include "sqrt.hpp"

using namespace std;

int main()
{
	int arr[] = {1, 4, 9, 16, 25};
	for (int i=0; i < (sizeof(arr)/sizeof(arr[0])); ++i) {
		cout<< mysqrt(arr[i]) << "\t";
	}

	cout<<endl;
}