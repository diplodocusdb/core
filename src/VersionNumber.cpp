/*
    Copyright (c) 2015-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#include "VersionNumber.hpp"
#include <sstream>

namespace DiplodocusDB
{

VersionNumber::VersionNumber(unsigned int major,
                             unsigned int minor,
                             unsigned int build)
{
    m_number.push_back(major);
    m_number.push_back(minor);
    m_number.push_back(build);
}

const std::vector<unsigned int>& VersionNumber::value() const
{
    return m_number;
}

std::string VersionNumber::toString() const
{
    std::stringstream result;
    for (size_t i = 0; i < m_number.size(); ++i)
    {
        if (i != 0)
        {
            result << ".";
        }
        result << m_number[i];
    }
    return result.str();
}

}
