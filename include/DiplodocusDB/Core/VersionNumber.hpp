/*
    Copyright (c) 2015-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#ifndef _DIPLODOCUSDB_CORE_VERSIONNUMBER_HPP_
#define _DIPLODOCUSDB_CORE_VERSIONNUMBER_HPP_

#include <vector>
#include <string>

namespace DiplodocusDB
{

class VersionNumber
{
public:
    VersionNumber(unsigned int major, unsigned int minor, unsigned int build);
    ~VersionNumber() = default;

    const std::vector<unsigned int>& value() const;

    std::string toString() const;

private:
    std::vector<unsigned int> m_number;
};

}

#endif
