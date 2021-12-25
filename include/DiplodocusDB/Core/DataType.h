/*
    Copyright (c) 2018-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#ifndef _DIPLODOCUSDB_CORE_DATATYPE_H_
#define _DIPLODOCUSDB_CORE_DATATYPE_H_

#include "DataTypeModifier.h"
#include "PrimitiveDataType.h"

namespace DiplodocusDB
{

class DataType
{
public:
    DataType(PrimitiveDataType primitiveType);
    DataType(PrimitiveDataType primitiveType, DataTypeModifier modifier);
    ~DataType() = default;

    PrimitiveDataType primitiveType() const;
    DataTypeModifier modifier() const;

    bool operator ==(const DataType& other) const;
    bool operator !=(const DataType& other) const;

private:
    PrimitiveDataType m_primitiveType;
    DataTypeModifier m_modifier;
};

}

#include "linkoptions.h"

#endif
