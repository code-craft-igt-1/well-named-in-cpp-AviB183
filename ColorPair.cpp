#include "ColorPair.h"

namespace TelCoColorCoder
{
	const char* MajorColorNames[MAX_MAJOR_COLOR] =
	{
		"White",
		"Red",
		"Black",
		"Yellow",
		"Violet"
	};

	const char* MinorColorNames[MAX_MINOR_COLOR] =
	{
		"Blue",
		"Orange",
		"Green",
		"Brown",
		"Slate"
	};

	CColorPair::CColorPair(const MajorColor &major, const MinorColor &minor) :
		m_majorColor(major),
		m_minorColor(minor)
	{
	}

    MajorColor CColorPair::getMajor()
    {
        return m_majorColor;
    }

    MinorColor CColorPair::getMinor()
    {
        return m_minorColor;
    }

    std::string CColorPair::toString()
    {
		return (std::string(MajorColorNames[m_majorColor]) + std::string(" ") + std::string(MinorColorNames[m_minorColor]));
    }
}
