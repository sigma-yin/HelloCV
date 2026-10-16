#include "unitlib.h"

extern "C" double celsius_fahrenheit(double c)
{
    return c * 1.8 + 32;
}

extern "C" double fahrenheit_celsius(double f)
{
    return (f - 32) / 1.8;
}

extern "C" double meter_foot(double m)
{
    return m * 3.28084;
}

extern "C" double foot_meter(double ft)
{
    return ft / 3.28084;
}

extern "C" double pound_kilogram(double lb)
{
    return lb * 0.453592;
}

extern "C" double kilogram_pound(double kg)
{
    return kg / 0.453592;
}
