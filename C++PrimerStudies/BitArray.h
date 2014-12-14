#include "Includes.h"

#define BYTE_BITS			8
#define MAX_UCHAR			0xff

#define BIT_TO_CHAR(bit)	((bit) / BYTE_BITS)
#define BIT_IN_CHAR(bit)	(1 << (BYTE_BITS - 1 - ((bit) % BYTE_BITS)))
#define MIN_CHARS(bits)		((((bits) - 1) / CHAR_BIT) + 1)

class BitArray
{
public:
	BitArray( unsigned int size );
	~BitArray(){}

	void PrintOutput( BitArray bitArray );

	void ClearAllBits();
	void SetAllBits();
	void SetByte( unsigned int byte, unsigned char val );
	void SetBit( unsigned int bit );
	void ClearBit( unsigned int bit );

	bool operator[]( unsigned int bit ) const;

private:
	unsigned int m_totalBits;
	unsigned int m_totalBytes;
	vector<char32_t> m_bits;
	unsigned int m_arrSize;
};

BitArray::BitArray(unsigned int size)
{
	assert( size > 0 );
	m_totalBits = size;
	m_totalBytes = MIN_CHARS( m_totalBits );
	m_bits.reserve( m_totalBytes );

	for ( unsigned int i = 0; i < m_totalBytes; ++i )
	{
		m_bits.push_back( 0 );
	}
}

void BitArray::ClearAllBits()
{
	m_bits.assign( m_bits.size(), 0 );
}

void BitArray::SetAllBits()
{
	m_bits.assign( m_bits.size(), MAX_UCHAR );
	int bits = m_totalBits % BYTE_BITS;

	if ( bits != 0 )
	{
		unsigned char mask = MAX_UCHAR << (BYTE_BITS - bits);
		m_bits[BIT_TO_CHAR( m_totalBits - 1 )] = mask;
	}
}

void BitArray::SetByte(unsigned int byte, unsigned char val)
{
	assert( m_totalBits > byte );
	m_bits[byte] = val;
}

void BitArray::SetBit( unsigned int bit )
{
	assert( m_totalBits > bit );
	m_bits[BIT_TO_CHAR( bit )] |= BIT_IN_CHAR( bit );
}

void BitArray::ClearBit( unsigned int bit )
{
	assert( m_totalBits > bit );

	unsigned char mask = BIT_IN_CHAR( bit );
	mask = ~mask;

	m_bits[BIT_TO_CHAR( bit )] &= mask;
}

bool BitArray::operator[]( unsigned int bit ) const
{
	assert(m_totalBits > bit);
	return ((m_bits[BIT_TO_CHAR( bit )] & BIT_IN_CHAR( bit )) != 0);
}

void BitArray::PrintOutput(BitArray bitArray)
{
	//BitArray bitArray( m_totalBits );

	cout << "Bit Array Example" << endl
		<< "Data Structures for Game Developers" << endl
		<< "Bit Array algorithm tests" << endl
	     << "Jason Howard" << endl << endl;


	cout << "Initial bit values for 2, 3 and 14." << endl << endl;

	cout << "Bit  2 = " << bitArray[2] << "." << endl;
	cout << "Bit  3 = " << bitArray[3] << "." << endl;
	cout << "Bit 14 = " << bitArray[14] << "." << endl << endl;


	cout << "Set bits 2 and 14." << endl << endl;

	bitArray.SetBit( 2 );
	bitArray.SetBit( 14 );

	cout << "Bit  2 = " << bitArray[2] << "." << endl;
	cout << "Bit  3 = " << bitArray[3] << "." << endl;
	cout << "Bit 14 = " << bitArray[14] << "." << endl << endl;


	cout << "Set all bits" << endl << endl;

	bitArray.SetAllBits( );

	cout << "Bit  2 = " << bitArray[2] << "." << endl;
	cout << "Bit  3 = " << bitArray[3] << "." << endl;
	cout << "Bit 14 = " << bitArray[14] << "." << endl << endl;


	cout << "Clear all bits" << endl << endl;

	bitArray.ClearAllBits( );

	cout << "Bit  2 = " << bitArray[2] << "." << endl;
	cout << "Bit  3 = " << bitArray[3] << "." << endl;
	cout << "Bit 14 = " << bitArray[14] << "." << endl << endl;

}
