/*
    Copyright (c) 2017-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#ifndef _DIPLODOCUSDB_CORE_PRIMITIVEDATATYPE_HPP_
#define _DIPLODOCUSDB_CORE_PRIMITIVEDATATYPE_HPP_

namespace DiplodocusDB
{

enum class PrimitiveDataType
{
    null = 0x0,
    binary = 0x01,
    boolean = 0x02,

    int8bit = 0x20,
    int16bit = 0x21,
    int32bit = 0x22,
    int64bit = 0x23,
    intInfinite = 0x3F,

    unsignedInt8bit = 0x40,
    unsignedInt16bit = 0x41,
    unsignedInt32bit = 0x42,
    unsignedInt64bit = 0x43,
    unsignedIntInfinite = 0x5F,

    IEEE754Binary16 = 0x60,
    IEEE754Binary32 = 0x61,
    IEEE754Binary64 = 0x62,
    IEEE754Binary128 = 0x63,
    IEEE754Binary256 = 0x64,

    unicodeString = 0x80,

    universalDateTime = 0xA0,
    localDateTime = 0xA1,
    date = 0xA2,
    timeOfDay = 0xA3,
};

}

#endif
