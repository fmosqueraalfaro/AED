#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

int main()  {
    assert (2 == 1 + 1);
    // bool
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);
    // double
    assert (2.0==1.0+1.0);
    assert (1.0==0.1*10.0);
    assert (1.0!=0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    std::cout << std::setprecision(17);
	assert (-1!=1-1);
	assert (1.5<=1.5);
	assert (7.6>=5.7);
	assert (6/2==3);
	assert (10*5!=49);
	assert ((false or true) == true);
	assert ("abab" != "aab");
}
