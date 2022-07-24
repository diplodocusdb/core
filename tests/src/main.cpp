/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/diplodocusdb/core/blob/main/LICENSE.txt
*/

#include <Ishiko/TestFramework.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("DiplodocusDBCore Library Tests");

    TestSequence& theTests = theTestHarness.tests();

    return theTestHarness.run();
}
