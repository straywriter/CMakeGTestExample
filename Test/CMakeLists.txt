# test

option(test "Build all tests." ON) # Makes boolean 'test' available
project(test)


file(GLOB TestSrc . *.cpp)

# enable_testing()

find_package(Threads REQUIRED)
# include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

foreach(TestFile ${TestSrc})
  get_filename_component(TestFileName ${TestFile} NAME_WE)
  add_executable(${TestFileName} ${TestFile})
  target_link_libraries(${TestFileName} gtest gtest_main ExampleDll ${CMAKE_THREAD_LIBS_INIT} )
  add_test(${TestFileName} ${TestFileName})
  set_tests_properties(${TestFileName} PROPERTIES TIMEOUT 5)
endforeach()
