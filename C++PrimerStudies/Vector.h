#include "Includes.h"

class Vector
{

// ---- Public Methods ----
////////////////////////////////////////////////////////////////
public:

	void PrintVectSwap();
	void SetVectors();
	void SetVectors( vector<int> vec1, vector<int> vec2 ) { m_iVect1 = vec1, m_iVect2 = vec2; }

	vector<int> GetVec1() { return m_iVect1; }
	vector<int> GetVec2() { return m_iVect2; }

// ---- Private Methods ----
////////////////////////////////////////////////////////////////
private:
	void swapVectors( vector<int>& vec1Ref, vector<int>& vec2Ref );
	void setVec1();
	void setVec2();


// ---- Private Members ----
////////////////////////////////////////////////////////////////
private:
	vector<int> m_iVect1;
	vector<int> m_iVect2;

};

// ---- Setters----
////////////////////////////////////////////////////////////////
void Vector::setVec1()
{
	m_iVect1 = {0,1,2,3,4};
}

void Vector::setVec2()
{
	m_iVect2 = {5,6,7,8,9};
}

void Vector::SetVectors()
{
	setVec1();
	setVec2();
}

// ---- Method Declairations ----
////////////////////////////////////////////////////////////////
void Vector::swapVectors( vector<int>& vec1Ref, vector<int>& vec2Ref )
{
	if ( !m_iVect1.empty() && !m_iVect2.empty() )
	{
		vec1Ref.swap( vec2Ref );
	}
}

void Vector::PrintVectSwap()
{
	if ( !GetVec1().empty()
		&& !GetVec2().empty())
	{
		cout << "Printing initial values of m_iVect1: " << endl;
		vector<int>& vec1Ref = GetVec1();
		vector<int>::iterator vec1Iter = vec1Ref.begin();
		while ( vec1Iter != (vec1Ref.end())) 
		{
			cout << "vec1ITer index value: " << *vec1Iter << endl;
			++vec1Iter;
		}
		cout << "Printing initial values of m_iVect2: " << endl;
		vector<int>& vec2Ref = GetVec2();
		vector<int>::iterator vec2Iter = vec2Ref.begin( );
		while ( vec2Iter != (vec2Ref.end( ))) 
		{
			cout << "vec2ITer index value: " << *vec2Iter << endl;
			++vec2Iter;
		}

		cout << "Swapping vector values now.." << endl;
		swapVectors(vec1Ref, vec2Ref);

		cout << "Printing initial values of m_iVect1: " << endl;
		vec1Iter = vec1Ref.begin( );
		while ( vec1Iter != (vec1Ref.end( ))) 
		{
			cout << "vec1ITer index value: " << *vec1Iter << endl;
			++vec1Iter;
		}
		cout << "Printing initial values of m_iVect2: " << endl;
		vec2Iter = vec2Ref.begin( );
		while ( vec2Iter != (vec2Ref.end( ))) 
		{
			cout << "vec2ITer index value: " << *vec2Iter << endl;
			++vec2Iter;
		}
	}
}

