#pragma once

namespace TelCoColorCoder
{
	class CColorPair;

	class CColorPairUtil
	{
	public:
		static CColorPair GetColorFromPairNumber(const int &pairNumber);
        static int GetPairNumberFromColor(const MajorColor &major, const MinorColor &minor);
		static void PrintAllColorPairs();
	};
}
