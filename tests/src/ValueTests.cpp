/*
    Copyright (c) 2019-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#include "ValueTests.hpp"
#include "DiplodocusDB/Core/Value.hpp"
#include <boost/date_time.hpp>

using namespace DiplodocusDB;
using namespace Ishiko;

ValueTests::ValueTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "ValueTests tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Int8 test 1", Int8Test1);
    append<HeapAllocationErrorsTest>("Int32 test 1", Int32Test1);
    append<HeapAllocationErrorsTest>("UnsignedInt64 test 1", UnsignedInt64Test1);
    append<HeapAllocationErrorsTest>("Double test 1", DoubleTest1);
    append<HeapAllocationErrorsTest>("UTF8String test 1", UTF8StringTest1);
    append<HeapAllocationErrorsTest>("Date test 1", DateTest1);
    append<HeapAllocationErrorsTest>("setInt8 test 1", SetInt8Test1);
    append<HeapAllocationErrorsTest>("setInt32 test 1", SetInt32Test1);
    append<HeapAllocationErrorsTest>("setUnsignedInt64 test 1", SetUnsignedInt64Test1);
    append<HeapAllocationErrorsTest>("setDouble test 1", SetDoubleTest1);
    append<HeapAllocationErrorsTest>("setUTF8String test 1", SetUTF8StringTest1);
    append<HeapAllocationErrorsTest>("setDate test 1", SetDateTest1);
}

void ValueTests::ConstructorTest1(Test& test)
{
    Value value;

    ISHIKO_TEST_FAIL_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::null);
    ISHIKO_TEST_FAIL_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_PASS();
}

void ValueTests::Int8Test1(Test& test)
{
    Value value = Value::Int8(123);

    ISHIKO_TEST_ABORT_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::int8bit);
    ISHIKO_TEST_ABORT_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_FAIL_IF_NEQ(value.asInt8(), 123);
    ISHIKO_TEST_PASS();
}

void ValueTests::Int32Test1(Test& test)
{
    Value value = Value::Int32(123);

    ISHIKO_TEST_ABORT_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::int32bit);
    ISHIKO_TEST_ABORT_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_FAIL_IF_NEQ(value.asInt32(), 123);
    ISHIKO_TEST_PASS();
}

void ValueTests::UnsignedInt64Test1(Test& test)
{
    Value value = Value::UnsignedInt64(123);

    ISHIKO_TEST_ABORT_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::unsignedInt64bit);
    ISHIKO_TEST_ABORT_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_FAIL_IF_NEQ(value.asUnsignedInt64(), 123);
    ISHIKO_TEST_PASS();
}

void ValueTests::DoubleTest1(Test& test)
{
    Value value = Value::Double(123.45);

    ISHIKO_TEST_ABORT_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::IEEE754Binary64);
    ISHIKO_TEST_ABORT_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_FAIL_IF_NEQ(value.asDouble(), 123.45);
    ISHIKO_TEST_PASS();
}

void ValueTests::UTF8StringTest1(Test& test)
{
    Value value = Value::UTF8String("string1");

    ISHIKO_TEST_ABORT_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::unicodeString);
    ISHIKO_TEST_ABORT_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_FAIL_IF_NEQ(value.asUTF8String(), "string1");
    ISHIKO_TEST_PASS();
}

void ValueTests::DateTest1(Test& test)
{
    Value value = Value::Date(boost::gregorian::date(2021, 12, 25));

    ISHIKO_TEST_ABORT_IF_NEQ(value.type().primitiveType(), PrimitiveDataType::date);
    ISHIKO_TEST_ABORT_IF_NEQ(value.type().modifier(), DataTypeModifier::none);
    ISHIKO_TEST_FAIL_IF_NEQ(value.asDate(), boost::gregorian::date(2021, 12, 25));
    ISHIKO_TEST_PASS();
}

void ValueTests::SetInt8Test1(Test& test)
{
    Value value;
    value.setInt8(123);

    ISHIKO_TEST_FAIL_IF_NEQ(value.asInt8(), 123);
    ISHIKO_TEST_PASS();
}

void ValueTests::SetInt32Test1(Test& test)
{
    Value value;
    value.setInt32(123);

    ISHIKO_TEST_FAIL_IF_NEQ(value.asInt32(), 123);
    ISHIKO_TEST_PASS();
}

void ValueTests::SetUnsignedInt64Test1(Test& test)
{
    Value value;
    value.setUnsignedInt64(123);

    ISHIKO_TEST_FAIL_IF_NEQ(value.asUnsignedInt64(), 123);
    ISHIKO_TEST_PASS();
}

void ValueTests::SetDoubleTest1(Test& test)
{
    Value value;
    value.setDouble(123.45);

    ISHIKO_TEST_FAIL_IF_NEQ(value.asDouble(), 123.45);
    ISHIKO_TEST_PASS();
}

void ValueTests::SetUTF8StringTest1(Test& test)
{
    Value value;
    value.setUTF8String("text");

    ISHIKO_TEST_FAIL_IF_NEQ(value.asUTF8String(), "text");
    ISHIKO_TEST_PASS();
}

void ValueTests::SetDateTest1(Test& test)
{
    Value value;
    value.setDate(boost::gregorian::date(2021, 12, 15));

    ISHIKO_TEST_FAIL_IF_NEQ(value.asDate(), boost::gregorian::date(2021, 12, 15));
    ISHIKO_TEST_PASS();
}
