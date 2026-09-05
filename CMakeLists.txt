cmake_minimum_required(VERSION 3.20)
project(cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ------------------------------------------------------------------------------------------------------
option(BUILD_HELLO_WORLD "Build the hello_world executable" OFF)
option(BUILD_INITIALIZATION_WAY "Build the initialization_way executable" OFF)
option(BUILD_SEE_DIFFERENT_TYPE_CIN "Build the see_different_type_cin executable" OFF)
option(BUILD_UNINITIALIZED_VARIABLE "Build the uninitialized_variable executable" OFF)
option(BUILD_NESTED_FUNCTION_NOT_ALLOWED "Build the nested_functin_not_allowed executable" OFF)
option(BUILD_GET_VALUE_FROM_A_FUNCTION "Build the get_return_value_from_a_function" OFF)
option(BUILD_A_FUNCTION_PRODUCE_UNDEFINED_BEHAVIOR "Build the a_function_produce_undefined_behavior executable" OFF)
option(BUILD_FUNCTION_PARAMETER_NEED_EXIST_BUT_NOT_USED_IN_BODY "Build the function_parameter_need_exist_but_not_used_in_body executable" OFF)
option(BUILD_RETURN_BY_VALUE_RETURNS_A_TEMPORARY_OBJECT "Build the return_by_value_returns_a_temporary_object_that_holds_a_copy_of_the_return_value_to_the_caller executable" OFF)
option(BUILD_WHY_USE_FUNCTIONS "Build the why_use_functions executable" OFF)
option(BUILD_FORWARD_DECLARE "Build the forward_declare executable" OFF)
option(BUILD_ODR_VIOLATE "Build the odr_violate executable" OFF)
option(BUILD_FORWARD_DECLARE_ACROSS_FILES "Build the forward declare acoss files" OFF)
option(BUILD_CURLY_BRACES_AND_INDENTED_CODE "Build the curly_braces_and_indented_code executable" ON)



if(BUILD_HELLO_WORLD)
  add_executable(hello_world apps/hello_world.cpp)
endif()

if(BUILD_INITIALIZATION_WAY)
  add_executable(initialization_way apps/ch1/6_initialization_way.cpp)
endif()

if(BUILD_SEE_DIFFERENT_TYPE_CIN)
  add_executable(see_different_type_cin apps/ch1/iostream_cout_cin_endl.cpp)
endif()

if(BUILD_UNINITIALIZED_VARIABLE)
  add_executable(uninitialized_variable apps/ch1/uninitialized_variable_behavior.cpp)
endif()

if(BUILD_NESTED_FUNCTION_NOT_ALLOWED)
  add_executable(nested_functin_not_allowed apps/ch2/nested_function_are_not_allowed_in_cpp.cpp)
endif()

if(BUILD_GET_VALUE_FROM_A_FUNCTION)
  add_executable(get_return_value_from_a_function apps/ch2/get_return_value_from_a_function.cpp)
endif()

if(BUILD_A_FUNCTION_PRODUCE_UNDEFINED_BEHAVIOR)
  add_executable(a_function_produce_undefined_behavior apps/ch2/a_function_produce_undefined_behavior.cpp)
endif()

if(BUILD_FUNCTION_PARAMETER_NEED_EXIST_BUT_NOT_USED_IN_BODY)
  add_executable(function_parameter_need_exist_but_not_used_in_body apps/ch2/function_parameter_need_exist_but_not_used_in_body.cpp)
endif()

if(BUILD_RETURN_BY_VALUE_RETURNS_A_TEMPORARY_OBJECT)
  add_executable(return_by_value_returns_a_temporary_object_that_holds_a_copy_of_the_return_value_to_the_caller apps/ch2/return_by_value_returns_a_temporary_object_that_holds_a_copy_of_the_return_value_to_the_caller.cpp)
endif()

if (BUILD_WHY_USE_FUNCTIONS)
  add_executable(why_use_functions apps/ch2/why_use_functions.cpp)
endif()

if(BUILD_FORWARD_DECLARE)
  add_executable(forward_declare apps/ch2/forward_declare.cpp)
endif()

if(BUILD_ODR_VIOLATE)
  add_executable(odr_violate apps/ch2/odr_violate.cpp)
endif()

if(BUILD_FORWARD_DECLARE_ACROSS_FILES)
  add_executable(forward_declare_across_files
    apps/ch2/forward_declare_across_files/main.cpp
    apps/ch2/forward_declare_across_files/get_inputs.cpp
  )
endif()

if(BUILD_CURLY_BRACES_AND_INDENTED_CODE)
  add_executable(curly_braces_and_indented_code apps/ch2/curly_braces_and_indented_code.cpp)
endif()