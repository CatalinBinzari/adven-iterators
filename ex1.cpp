#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{
	list<int> mylist = {1, 2, 3, 4};

	ostream_iterator<int> out_it (cout,", ");
  	copy ( mylist.begin(), mylist.end(), out_it );


  	cout<<endl;


  	list<int>::iterator it;
  	for (it = mylist.begin(); it != mylist.end(); ++it)
  		cout<<*it<<", ";
  	
  	cout<<endl;


	return 0;
}