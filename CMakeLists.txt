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
option(BUILD_CURLY_BRACES_AND_INDENTED_CODE "Build the curly_braces_and_indented_code executable" OFF)
option(BUILD_MARCO_DEFINE_SCOPE "Build the marco define across multi files and see scope" OFF)
option(BUILD_ADD_TWO_NUM "Build add two num" OFF)
option(BUILD_PLOGD "Build the plogd executable" OFF)
option(BUILD_SUPPOSED_ADD_TWO_NUMS "Build the supposed_add_two_nums executable" OFF)
option(BUILD_CALL_STACK "Build the call stack executable" OFF)
option(BUILD_ARTHIMATIC_OVERFLOW "Build the arthematic overflow" OFF)
option(BUILD_SCOPE_OF_SIGNED_VARIABLE "Build the scope of signed variable executable" OFF)
option(BUILD_INTEGER_DIVISION_ALWAYS_SIMPLY_DROP_FRACTIONAL_PROTION "Build integer division always simply drop factional protion" OFF)
option(BUILD_AVOID_USING_UNSIGNED_NUMBERS "Build the avoid using unsigned numbers executable" OFF)
option(BUILD_FIXED_WIDTH_INTEGERS "Build the fixed width integers executable" OFF)
option(BUILD_FAST_AND_LEAST_INTEGRAL_TYPES "Build the fast and least integral types executable" OFF)
option(BUILD_SIZE_T_TYPE "Build the size_t type executable" OFF)
option(BUILD_CHECK_FLOATING_POINT_TYPES_ARE_IEEE754 "Build the check floating point types are ieee754 executable" OFF)
option(BUILD_BE_CARE_OF_FLOATING_POINT_NUMBERS "Build the be care of floating point numbers executable" OFF)
option(BUILD_INTEGER_TO_BOOLEAN_CONVERSION "Build the integer to boolean conversion executable" OFF)
option(BUILD_IF_STATEMENT "Build the if statement executable" OFF)
option(BUILD_IF_STATEMENT_AND_EARLY_RETURNS "Build the if statement and early returns executable" OFF)
option(BUILD_CHAR_IN_CIN_BUFFER "Build the char in cin buffer executable" OFF)
option(BUILD_STATIC_CAST "Build the static_cast executable" OFF)
option(BUILD_SIMPLE_CACULATOR "Build the simple caculator executable" OFF)
option(BUILD_BALLS_FALLING_DOWN "Build the balls falling down executable" ON)


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

if(BUILD_MARCO_DEFINE_SCOPE)
  add_executable(marco_define_scope 
    apps/ch2/marco_define_scope/function.cpp
    apps/ch2/marco_define_scope/main.cpp
    )
endif()

if(BUILD_ADD_TWO_NUM)
  add_executable( add_two_num
    apps/ch2/add_two_nums/main.cpp
    apps/ch2/add_two_nums/io.cpp
    apps/ch2/add_two_nums/readNumber.cpp
    apps/ch2/add_two_nums/writeAnswer.cpp
  )
endif()

if(BUILD_PLOGD)
  include(FetchContent)
  set(CMAKE_POLICY_VERSION_MINIMUM 3.5)
  FetchContent_Declare(
    plog
    GIT_REPOSITORY https://github.com/SergiusTheBest/plog.git
    GIT_TAG 1.1.10
    GIT_SHALLOW TRUE
  )
  FetchContent_MakeAvailable(plog)

  add_executable(plogd apps/ch3/plogd.cpp)
  target_link_libraries(plogd PRIVATE plog::plog)
endif()

if(BUILD_SUPPOSED_ADD_TWO_NUMS)
  add_executable(supposed_add_two_nums apps/ch3/supposed_add_two_nums.cpp)
endif()

if(BUILD_CALL_STACK)
  add_executable(call_stack apps/ch3/call_stack.cpp)
endif()

if(BUILD_ARTHIMATIC_OVERFLOW)
  add_executable(arthemetic_overflow apps/ch4/arthimetic_overflow.cpp)
endif()

if(BUILD_SCOPE_OF_SIGNED_VARIABLE)
  add_executable(scope_of_signed_variable apps/ch4/scope_of_signed_variable.cpp)
endif()

if(BUILD_INTEGER_DIVISION_ALWAYS_SIMPLY_DROP_FRACTIONAL_PROTION)
  add_executable(integer_division_always_simply_drop_fractional_protion apps/ch4/integer_division_always_simply_drop_fractional_portion.cpp)
endif()

if(BUILD_AVOID_USING_UNSIGNED_NUMBERS)
  add_executable(avoid_using_unsigned_numbers apps/ch4/avoid_using_unsigned_numbers.cpp)
endif()

if(BUILD_FIXED_WIDTH_INTEGERS)
  add_executable(fixed_width_integers apps/ch4/fixed_width_integers.cpp)
endif()

if(BUILD_FAST_AND_LEAST_INTEGRAL_TYPES)
  add_executable(fast_and_least_integral_types apps/ch4/fast_and_least_integral_types.cpp)
endif()

if(BUILD_SIZE_T_TYPE)
  add_executable(size_t_type apps/ch4/size_t_type.cpp)
endif()

if(BUILD_CHECK_FLOATING_POINT_TYPES_ARE_IEEE754)
  add_executable(check_floating_point_types_are_ieee754 apps/ch4/check_floating_point_types_are_ieee754.cpp)
endif()

if(BUILD_BE_CARE_OF_FLOATING_POINT_NUMBERS)
  add_executable(be_care_of_floating_point_numbers apps/ch4/be_care_of_floating_point_numbers.cpp)
endif()

if(BUILD_INTEGER_TO_BOOLEAN_CONVERSION)
  add_executable(integer_to_boolean_conversion apps/ch4/integer_to_boolean_conversion.cpp)
endif()

if(BUILD_IF_STATEMENT)
  add_executable(if_statement apps/ch4/if_statement.cpp)
endif()

if(BUILD_IF_STATEMENT_AND_EARLY_RETURNS)
  add_executable(if_statement_and_early_returns apps/ch4/if_statement_and_early_returns.cpp)
endif()

if(BUILD_CHAR_IN_CIN_BUFFER)
  add_executable(char_in_cin_buffer apps/ch4/char_in_cin_buffer.cpp)
endif()

if(BUILD_STATIC_CAST)
  add_executable(static_cast apps/ch4/static_cast.cpp)
endif()

if(BUILD_SIMPLE_CACULATOR)
  add_executable(simple_caculator apps/ch4/simple_caculator.cpp)
endif()

if(BUILD_BALLS_FALLING_DOWN)
  add_executable(balls_falling_down apps/ch4/balls_falling_down.cpp)
endif()