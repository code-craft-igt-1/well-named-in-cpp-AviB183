#include <iostream>
#include <assert.h>

#include "TestColorPairs.h"
#include "ColorPair.h"
#include "ColorPairUtil.h"

void testNumberToPair(const int &pairNumber, const MajorColor &expectedMajor, const MinorColor &expectedMinor)
{
	CColorPair colorPair = CColorPairUtil::GetColorFromPairNumber(pairNumber);
	std::cout << "Got pair " << colorPair.ToString() << std::endl;
	assert(colorPair.getMajor() == expectedMajor);
	assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(const MajorColor &major, const MinorColor &minor, const int &expectedPairNumber)
{
	int pairNumber = CColorPairUtil::GetPairNumberFromColor(major, minor);
	std::cout << "Got pair number " << pairNumber << std::endl;
	assert(pairNumber == expectedPairNumber);
}
