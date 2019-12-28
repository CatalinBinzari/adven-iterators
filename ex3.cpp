//test with:
//g++ -o ex3 ex3.cpp &&./ex3
//then insert 1 2 3
//then try Ctrl+D or Ctrl+Z or a char for EOF
#include <iostream>     
#include <iterator>  
#include <bits/stdc++.h> 
using namespace std;

int main () {
  std::cout << "Please, insert some values: ";
  std::istream_iterator<int> iit (std::cin);   // stdin iterator
  std::istream_iterator<int> eos;              // end-of-stream iterator
   

  vector<int> vect;

  
  for( ; iit!=eos;++iit)
  {
    vect.push_back(*iit); 
  }

  auto print = [](int value){cout<<value<<", ";};
  for_each(vect.begin(), vect.end(), print);

  cout<<endl;


  return 0;
}