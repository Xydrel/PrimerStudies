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
	int iarray[SIZE] = { 1, 2, 3, 4, 5 };
	for ( int *ptr = iarray, intx = 0; intx != SIZE && ptr != iarray + SIZE; ++intx, ++ptr )
		cout << "*ptr value = " << (*ptr) << endl
			 << "intx value = " << intx << endl
			 << "iarray value = " << iarray << endl
			 << "iarray+SIZE value = " << iarray + SIZE << endl;
}

class LiteralConversions
{
public:
	void Print_cval();
};

void LiteralConversions::Print_cval()
{
	char cval;
	unsigned int ui;
	int ival;
	float fval;
	double dval;

	cval = 'a' + 3;
	cout << "(cval = 'a' + 3) = " << cval << endl;

	fval = ui - ival * 1.0;
	cout << "(fval = ui - ival * 1.0 | = " << fval << endl;
}





