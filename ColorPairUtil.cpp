#include "ColorPair.h"
#include "ColorPairUtil.h"

namespace TelCoColorCoder
{
	CColorPair CColorPairUtil::GetColorFromPairNumber(const int &pairNumber)
	{
		int zeroBasedPairNumber = pairNumber - 1;
		MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / MAX_MINOR_COLOR);
		MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % MAX_MINOR_COLOR);
		return CColorPair(majorColor, minorColor);
	}

	int CColorPairUtil::GetPairNumberFromColor(const MajorColor &major, const MinorColor &minor)
	{
		return major * MAX_MINOR_COLOR + minor + 1;
	}
}
