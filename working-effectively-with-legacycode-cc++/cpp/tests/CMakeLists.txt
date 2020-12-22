project(tests)

#the following is google-test config
add_subdirectory(gtest_lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../MySharedLib)

#the following is biz test config
add_executable(LegacyCode_Tests_run
        HelloWorld/ConverterTests.cpp HelloWorld/AbsoluteDateTest.cpp
        Counter/CounterTest.cpp
        MySharedLibTest/MySharedLibTest.cpp
        ../biz/test/seam/CAsyncSslRecTest.cpp
        ../biz/test/seam/preprocessing_seams/account_test.cpp
        ../biz/test/seam/linked_seam/CrossPlaneFigureTest.cpp
        ../biz/test/SproutClass/QuarterlyReportGeneratorTest.cpp
        ../biz/test/SproutClass/QuarterlyReportTableHeaderProducerTest.cpp
        ../biz/test/EncapsulateGlobalReferences/AGGControllerTest.cpp
        ../biz/test/EncapsulateGlobalReferences/ColumnModelTest.cpp
        )

target_link_libraries(LegacyCode_Tests_run
        HelloWorld
        Counter
        biz
        /home/uj/CLionProjects/software-craftsman-ship/working-effectively-with-legacycode-cc++/cpp/MySharedLib/libMySharedLib.so
        /home/uj/CLionProjects/software-craftsman-ship/working-effectively-with-legacycode-cc++/cpp/FakeGraphicsLib/libfake-graphics-lib.so
        )

target_link_libraries(LegacyCode_Tests_run gtest gtest_main)

