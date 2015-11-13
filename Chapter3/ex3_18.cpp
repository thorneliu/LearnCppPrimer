#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec(10, 2);
	
	for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); iter++)
	{
		*iter = *iter * 2; //double every element
		cout << *iter << endl;
	}

	return 0;
}
