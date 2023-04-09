/*
    Copyright (c) 2018-2023 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#include "Value.hpp"

using namespace DiplodocusDB;

namespace iko = Ishiko;

Value::Value()
    : m_type(PrimitiveDataType::null)
{
}

Value Value::Boolean(bool data)
{
    Value result;
    result.setBoolean(data);
    return result;
}

Value Value::Int8(int8_t data)
{
    Value result;
    result.setInt8(data);
    return result;
}

Value Value::Int16(int16_t data)
{
    Value result;
    result.setInt16(data);
    return result;
}

Value Value::Int32(int32_t data)
{
    Value result;
    result.setInt32(data);
    return result;
}

Value Value::Int64(int64_t data)
{
    Value result;
    result.setInt64(data);
    return result;
}

Value Value::UnsignedInt64(uint64_t data)
{
    Value result;
    result.setUnsignedInt64(data);
    return result;
}

Value Value::Double(double data)
{
    Value result;
    result.setDouble(data);
    return result;
}

Value Value::UTF8String(const std::string& data)
{
    Value result;
    result.setUTF8String(data);
    return result;
}

Value Value::Binary(const std::string& data)
{
    Value result;
    result.setBinary(data);
    return result;
}

Value Value::Date(iko::Date data)
{
    Value result;
    result.setDate(data);
    return result;
}

Value Value::Date(boost::gregorian::date data)
{
    Value result;
    result.setDate(data);
    return result;
}

Value Value::TimeOfDay(const iko::TimeOfDay& data)
{
    Value result;
    result.setTimeOfDay(data);
    return result;
}

const DataType& Value::type() const
{
    return m_type;
}

bool Value::asBoolean() const
{
    return boost::get<bool>(m_data);
}

int8_t Value::asInt8() const
{
    return boost::get<int8_t>(m_data);
}

int16_t Value::asInt16() const
{
    return boost::get<int16_t>(m_data);
}

int32_t Value::asInt32() const
{
    return boost::get<int32_t>(m_data);
}

int64_t Value::asInt64() const
{
    return boost::get<int64_t>(m_data);
}

uint64_t Value::asUnsignedInt64() const
{
    return boost::get<uint64_t>(m_data);
}

double Value::asDouble() const
{
    return boost::get<double>(m_data);
}

const std::string& Value::asUTF8String() const
{
    return boost::get<std::string>(m_data);
}

const std::string& Value::asBinary() const
{
    return boost::get<std::string>(m_data);
}

Ishiko::Date Value::asDate() const
{
    return boost::get<iko::Date>(m_data);
}

bool Value::operator ==(const Value& other) const
{
    return ((m_type == other.m_type) && (m_data == other.m_data));
}

bool Value::operator !=(const Value& other) const
{
    return !(*this == other);
}

void Value::setBoolean(bool data)
{
    m_type = PrimitiveDataType::boolean;
    m_data = data;
}

void Value::setInt8(int8_t data)
{
    m_type = PrimitiveDataType::int8bit;
    m_data = data;
}

void Value::setInt16(int16_t data)
{
    m_type = PrimitiveDataType::int16bit;
    m_data = data;
}

void Value::setInt32(int32_t data)
{
    m_type = PrimitiveDataType::int32bit;
    m_data = data;
}

void Value::setInt64(int64_t data)
{
    m_type = PrimitiveDataType::int64bit;
    m_data = data;
}

void Value::setUnsignedInt64(uint64_t data)
{
    m_type = PrimitiveDataType::unsignedInt64bit;
    m_data = data;
}

void Value::setDouble(double data)
{
    m_type = PrimitiveDataType::IEEE754Binary64;
    m_data = data;
}

void Value::setUTF8String(const std::string& data)
{
    m_type = PrimitiveDataType::unicodeString;
    m_data = data;
}

void Value::setBinary(const std::string& data)
{
    m_type = PrimitiveDataType::binary;
    m_data = data;
}

void Value::setDate(iko::Date data)
{
    m_type = PrimitiveDataType::date;
    m_data = data;
}

void Value::setTimeOfDay(const iko::TimeOfDay& data)
{
    m_type = PrimitiveDataType::timeOfDay;
    m_data = data;
}
