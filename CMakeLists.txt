
cmake_minimum_required(VERSION 3.1)

find_package(Boost 1.40 REQUIRED)

add_executable(boost_example main.cpp)

target_include_directories(boost_example PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(boost_example PRIVATE ${Boost_LIBRARIES})


