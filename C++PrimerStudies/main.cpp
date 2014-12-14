
// ---- File includes ----
#include "./Ivec.h"
#include "./Vector.h"
#include "./BitArray.h"

///////////////////////////////////////////////////////

void PrintVectorTests()
{
	cout << "swapping vector tests" << endl;
	
	Vector vecTests;
	vecTests.SetVectors();
	vecTests.PrintVectSwap();
}

void PrintIvecTests()
{
	cout << "Running the IVec tests" << endl;

	Ivec ivec;
	ivec.PrintIvecData();
	ivec.SizeOfTest();
	ivec.LoopTest();
}

void LiteralConversionTests()
{
	LiteralConversions lversions;
	lversions.Print_cval();
}

void PrintBitArrayTests()
{
	BitArray bArray(16);
	bArray.PrintOutput(bArray);
}


///////////////////////////////////////////////////////
int main()
{

	PrintBitArrayTests();

	cout << "Please press any key to exit... ";
	getchar();
	return 0;
}
