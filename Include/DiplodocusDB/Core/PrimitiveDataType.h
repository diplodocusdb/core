/*
    Copyright (c) 2017-2019 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#ifndef _DIPLODOCUSDB_CORE_PRIMITIVEDATATYPE_H_
#define _DIPLODOCUSDB_CORE_PRIMITIVEDATATYPE_H_

namespace DiplodocusDB
{

enum class EPrimitiveDataType
{
    eNULL = 0,
    eBinary = 0x01
    eBoolean = 0x02,
    eUTF8String = 0x03,
    eInt8 = 0x10,
    eInt16 = 0x11,
    eInt32 = 0x12,
    eInt64 = 0x13,
    eInt = 0x17,
    eUnsignedInt8 = 0x18,
    eUnsignedInt16 = 0x19,
    eUnsignedInt32 = 0x1A,
    eUnsignedInt64 = 0x1B,
    eUnsignedInt = 0x1F
    eUTCDateTime = 0x20
};

}

#endif
