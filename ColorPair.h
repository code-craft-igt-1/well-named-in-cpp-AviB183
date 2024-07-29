#pragma once

#include "ColorConstants.h"
#include <string>

namespace TelCoColorCoder
{
    class CColorPair
    {
    private:
        MajorColor m_majorColor;
        MinorColor m_minorColor;

    public:
        CColorPair(const MajorColor &major, const MinorColor &minor);

        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };
}
