/*
    Copyright (c) 2018-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#include "DataType.hpp"

namespace DiplodocusDB
{

DataType::DataType(PrimitiveDataType primitiveType)
    : m_primitiveType(primitiveType), m_modifier(DataTypeModifier::none)
{
}

DataType::DataType(PrimitiveDataType primitiveType, DataTypeModifier modifier)
    : m_primitiveType(primitiveType), m_modifier(modifier)
{
}

PrimitiveDataType DataType::primitiveType() const
{
    return m_primitiveType;
}

DataTypeModifier DataType::modifier() const
{
    return m_modifier;
}

bool DataType::operator ==(const DataType& other) const
{
    return ((m_primitiveType == other.m_primitiveType) &&
        (m_modifier == other.m_modifier));
}

bool DataType::operator !=(const DataType& other) const
{
    return !(*this == other);
}

}
