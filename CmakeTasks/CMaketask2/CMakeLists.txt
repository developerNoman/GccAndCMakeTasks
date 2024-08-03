# cmake_minimum_required(VERSION 3.30.1)
# project(cmaketask2_2)
# include(ExternalProject)

# ExternalProject_Add(
#     nlohmann_json
#     PREFIX ${CMAKE_BINARY_DIR}/nlohmann_json
#     GIT_REPOSITORY https://github.com/nlohmann/json.git
#     GIT_TAG v3.11.3  
#     BUILD_COMMAND ""
#     INSTALL_COMMAND ""
# )

# ExternalProject_Get_Property(nlohmann_json source_dir)
# set(NLOHMANN_JSON_INCLUDE_DIR ${source_dir}/include)

# add_executable(main src/main.cpp)

# add_dependencies(main nlohmann_json)

# target_include_directories(main PRIVATE ${NLOHMANN_JSON_INCLUDE_DIR})

cmake_minimum_required(VERSION 3.30.1)
project(task2)
include(ExternalProject)

ExternalProject_Add(
    nlohmann_json
    PREFIX ${CMAKE_BINARY_DIR}/nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.3  
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(nlohmann_json source_dir)

add_executable(main src/main.cpp)

target_include_directories(main PRIVATE ${source_dir}/include)
