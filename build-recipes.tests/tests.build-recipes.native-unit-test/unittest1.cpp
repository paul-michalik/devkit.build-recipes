#include "stdafx.h"
#include "CppUnitTest.h"
#include <build-recipes.tests/tests.build-recipes.library/header.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests {
    namespace buildrecipesnativeunittest {
        TEST_CLASS(UnitTest1)
        {
        public:

            TEST_METHOD(TestMethod1)
            {
                tests::foo_bar_declaration();
            }

        };
    }
}