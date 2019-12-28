#include <iostream>
#include <iterator>
#include <list>
#include <experimental/iterator>

using namespace std;

int main()
{
	list<int> v1 = {1, 2, 3, 6};
	list<int> v2 = {5, 4};
	ostream_iterator<int> out_it (cout,", ");
	copy(v1.begin(), v1.end(), out_it);
	copy(v2.begin(),v2.end(),experimental::make_ostream_joiner(cout, ", "));//Cpp17 solution
	cout<<endl;
	return 0;

}