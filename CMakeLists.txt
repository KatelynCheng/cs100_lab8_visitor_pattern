CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(unit_test
    preorder_iterator.cpp
    unit_test.cpp
)

TARGET_LINK_LIBRARIES(unit_test gtest)
TARGET_COMPILE_DEFINITIONS(unit_test PRIVATE gtest_disable_pthreads=ON)
