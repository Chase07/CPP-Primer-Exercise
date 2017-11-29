#include<iostream>
#include<forward_list>
#include<iterator>

using namespace::std;

int main()
{
	forward_list<int> fli{ 1, 2, 3, 4, 5, 6 };
	for (auto pre = fli.before_begin(), cur = fli.begin(); cur != fli.cend(); )
	{
		if (*cur % 2 != 0)
		{
			cur = fli.erase_after(pre);
		}
		else
		{
			pre = cur++;
			/*pre = cur;
			++cur;*/
		}
	}
	for (auto& i : fli)
		cout << i << " ";
	cout << endl;
	return 0;
}