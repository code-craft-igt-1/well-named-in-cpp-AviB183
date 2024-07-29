#pragma once

#include "ColorConstants.h"
using namespace TelCoColorCoder;

void testNumberToPair(const int &pairNumber, const MajorColor &expectedMajor, const MinorColor &expectedMinor);
void testPairToNumber(const MajorColor &major, const MinorColor &minor, const int &expectedPairNumber);
