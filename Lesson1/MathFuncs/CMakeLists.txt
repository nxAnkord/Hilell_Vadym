add_library (mathfuncs STATIC math_funcs.cpp)

target_include_directories (mathfuncs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})