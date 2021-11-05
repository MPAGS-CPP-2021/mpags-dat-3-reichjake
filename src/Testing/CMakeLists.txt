# build sub-script for the MPAGSCipher library unit tests

# most basic test
add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)

# create interface for Catch
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_LIST_DIR})
target_compile_features(Catch INTERFACE cxx_noexcept)

# first Catch-based test
add_executable(testCatch testCatch.cpp)
target_link_libraries(testCatch Catch)
add_test(NAME test-catch COMMAND testCatch)

# test TransformChar
add_executable(testTransformChar testTransformChar.cpp)
target_link_libraries(testTransformChar MPAGSCipher)
add_test(NAME test-transformchar COMMAND testTransformChar)

# test CaesarCipher
add_executable(testCipher testCipher.cpp)
target_link_libraries(testCipher MPAGSCipher)
add_test(NAME test-cipher COMMAND testCipher)
