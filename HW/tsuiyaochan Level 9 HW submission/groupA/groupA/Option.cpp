//
//  Option.cpp
//  groupA
//
//  Created by Christine on 2019/12/3.
//  Copyright © 2019 Christine. All rights reserved.
//

#include "Option.hpp"
#include "NoImplementationException.hpp"
#include <iostream>
using namespace std;

double Option::CallDelta() const
{ // Delta of call

    throw NoImplementationException("CallDelta()");
}

double Option::PutDelta() const
{ // Delta of put

    throw NoImplementationException("PutDelta()");
}

double Option::CallGamma() const
{ // Gamma of call

    throw NoImplementationException("CallGamma()");
}

double Option::PutGamma() const
{ // Gamma of put

    throw NoImplementationException("PutGamma()");
}

double Option::CallVega() const
{ // Vega of call

    throw NoImplementationException("CallVega()");
}

double Option::PutVega() const
{ // Vega of put

    throw NoImplementationException("PutVega()");
}

double Option::CallTheta() const
{ // Theta of call

    throw NoImplementationException("CallTheta()");
}

double Option::PutTheta() const
{ // Theta of put

    throw NoImplementationException("PutTheta()");
}

// Initialise all default values
void Option::Init()
{
    optionType = Call;
}

// Copy all values
void Option::Copy(const Option& source)
{
    optionType = source.optionType;
}

// Default constructor
Option::Option()
{
    Init();
}

// Copy constructor
Option::Option(const Option& source)
{
    Copy(source);
}

Option::Option(const enum OptionType& newOptionType)
{ // Constructor with option type

    Init();
    optionType = newOptionType;
}

Option::~Option()
{ // Destructor
}

// Member operator overloading
// Assignment operator
Option& Option::operator = (const Option& source)
{
    if (this == &source)
    {
        return *this;
    }

    Copy(source);

    return *this;
}

// Functions that calculate option prices and sensitivities
double Option::Price() const
{
    if (optionType == Call)
    {
        return CallPrice();
    }
    else
    {
        return PutPrice();
    }
}

double Option::Delta() const
{
    if (optionType == Call)
    {
        return CallDelta();
    }
    else
    {
        return PutDelta();
    }
}

double Option::Gamma() const
{
    if (optionType == Call)
    {
        return CallGamma();
    }
    else
    {
        return PutGamma();
    }
}

double Option::Vega() const
{
    if (optionType == Call)
    {
        return CallVega();
    }
    else
    {
        return PutVega();
    }
}

double Option::Theta() const
{
    if (optionType == Call)
    {
        return CallTheta();
    }
    else
    {
        return PutTheta();
    }
}

// Modifier functions
void Option::toggle()
{// Change option type

    optionType = ((optionType == Call) ? Put : Call);
}
