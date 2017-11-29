#include<iostream>
#include<vector>
#include<iterator>

using namespace::std;

int main()
{
	vector<int> iv{ 1, 2, 3, 4, 5, 6 };
	vector<int>::iterator mid = iv.begin() + iv.size() / 2;
	iv.insert(mid, 0);
	for(auto& i : iv)
	{
		cout << i << " ";
	}
	cout << endl;
	/*vector<int>::iterator iter = iv.begin();
	while (iter != mid)
		if (*iter == 4)
			iv.insert(iter, 2 * 4);*/

	return 0;
}