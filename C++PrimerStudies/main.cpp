#include "Ivec.h"
#include "Vector.h"

int main()
{
	//Ivec ivec;
	//ivec.PrintIvecData();
	//ivec.SizeOfTest();
	//ivec.LoopTest();

	/*LiteralConversions lversions;
	lversions.Print_cval();*/

	cout << "swapping vector tests" << endl;
	
	Vector vecTests;
	vecTests.SetVectors();
	vecTests.PrintVectSwap();


	cout << "Please press any key to exit... ";
	getchar();
	return 0;
}