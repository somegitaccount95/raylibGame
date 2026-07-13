cmake_minimum_required(VERSION 4.3)

set(CMAKE_CXX_STANDARD 20)

project(raylibGame)

find_package(raylib QUIET)

if(NOT raylib_FOUND)
    message(STATUS "Local raylib not found. Fetching from GitHub...")
    
    include(FetchContent)

    FetchContent_Declare(
      raylib
      URL "https://github.com/raysan5/raylib/archive/refs/heads/master.zip"
    )

    set(BUILD_EXAMPLES OFF CACHE INTERNAL "") 
    FetchContent_MakeAvailable(raylib)

endif()

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)