#include<iostream>
#include<string>
#include<vector>
using namespace::std;

int main()
{
	int sought = 5;
	vector<int> text = {1, 2, 3, 4, 5, 6};
	auto beg = text.begin();
	auto end = text.end;
	auto mid = beg + (end - beg) / 2;
	while (mid != end && mid != sought)
	{
		if ( sought < *mid )
		{
			end = mid;
		}
		else
		{
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}


	return 0;
}