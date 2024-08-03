include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(mymath STATIC mymath.cpp)

# target_include_directories(mymath PUBLIC ${CMAKE_SOURCE_DIR}/include)
