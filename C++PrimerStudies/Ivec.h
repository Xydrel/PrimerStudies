#include "Includes.h"

class Ivec
{
public:
	//Ivec();
	//~Ivec();
	void PrintIvecData();
	void SizeOfTest();
	void LoopTest();
	
};

void Ivec::PrintIvecData()
{
	vector<int> ivec = {2,4,8,23,25,87,66,54};
	vector<int>::size_type cnt = ivec.size();
	for ( vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt )
	{
		ivec[ix] = cnt;
		cout << "ix value =       " << ix << endl;
		cout << "cnt value =      " << cnt << endl;
		//cout << "ivec[ix] value = " << ivec[ix] << endl;
	}
}

void Ivec::SizeOfTest()
{
	int x[10];
	int *p = x;
	cout << sizeof( x ) / sizeof( *x ) << endl;
	cout << sizeof( p ) / sizeof( *p ) << endl;
}

void Ivec::LoopTest()
{
	const int SIZE = 5;
	int ia[SIZE] = { 1, 2, 3, 4, 5 };
	for ( int *ptr = ia, ix = 0; ix != SIZE && ptr != ia + SIZE; ++ix, ++ptr)
		cout << "*ptr value = " << (*ptr) << endl
		     << "ix value = " << ix << endl
			 << "ia value = " << ia << endl
			 << "ia+SIZE value = " << ia+SIZE << endl;
}



