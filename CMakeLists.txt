cmake_minimum_required(VERSION 3.15)
project(CppProject_forClion)

set(CMAKE_CXX_STANDARD 11)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
add_executable(C++Enum src/mySrc/demo03_enum_type.cpp)
add_executable(C++Func src/mySrc/demo04_function.cpp)
add_executable(C++11newFeatures src/mySrc/C++11newFeatures.cpp)
add_executable(C++_string src/mySrc/demo01_vector&string.cpp)
add_executable(C++Basic src/mySrc/demo02_basic.cpp)
add_executable(C++Class src/mySrc/clockTest.cpp)
add_executable(C++Class2 src/mySrc/lineTest.cpp)
# cpp chapter 2
add_executable(cpp_c2_1 src/cpt2_4/c2_1_max_min_sum.cpp)
add_executable(cpp_c2_2 src/cpt2_4/c2_2_exchange.cpp)
add_executable(cpp_c2_3 src/cpt2_4/c2_3_print_graph.cpp)
# cpp chapter 3
add_executable(cpp_c3_1 src/cpt2_4/c3-1_trang_check_func.cpp)
add_executable(cpp_c3_2 src/cpt2_4/c3-2_fabonacci.cpp)
add_executable(cpp_c3_3 src/cpt2_4/c3-3_ulgy_num.cpp)
# cpp chapter 4
add_executable(cpp_c4_1 src/cpt2_4/c4-1_class_max_gcd.cpp)
add_executable(cpp_c4_2 src/cpt2_4/c4-2_inverse_number.cpp)
add_executable(cpp_c4_3 src/cpt2_4/c4-3.cpp)

add_executable(client_test src/mySrc/client_server_test.cpp src/mySrc/client.cpp)




#link_directories(
#        ${CMAKE_CURRENT_SOURCE_DIR}/libs64
##)

#target_link_libraries(demo ${CMAKE_CURRENT_SOURCE_DIR}/lib)
#target_link_libraries(demo ${CMAKE_CURRENT_SOURCE_DIR}/lib)