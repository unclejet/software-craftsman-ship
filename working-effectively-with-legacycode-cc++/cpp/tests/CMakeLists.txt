project(tests)

#the following is google-test config
add_subdirectory(gtest_lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#the following is biz test config
add_executable(LegacyCode_Tests_run
        HelloWorld/ConverterTests.cpp HelloWorld/AbsoluteDateTest.cpp
        Counter/CounterTest.cpp
        ../biz/test/seam/CAsyncSslRecTest.cpp
        ../biz/test/seam/preprocessing_seams/account_test.cpp
        )

target_link_libraries(LegacyCode_Tests_run
        HelloWorld
        Counter
        biz
        )

target_link_libraries(LegacyCode_Tests_run gtest gtest_main)

