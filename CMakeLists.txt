cmake_minimum_required(VERSION 3.20)
project(SoftEngine)

include(FetchContent)

#GLAD
add_library(glad STATIC
    Engine/vendor/glad/src/glad.c
)
target_include_directories(glad PUBLIC Engine/vendor/glad/include)
set_target_properties(glad PROPERTIES POSITION_INDEPENDENT_CODE ON)

#GLFW
include(FetchContent)
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG        3.4
)
set(GLFW_BUILD_DOCS     OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS    OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(glfw)

# JSON
FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG        v3.11.3
)
FetchContent_MakeAvailable(nlohmann_json)


add_library(SoftEngine SHARED
    Engine/src/Application.cpp
    Engine/src/Window.cpp
)

target_link_libraries(SoftEngine PUBLIC
	glad
	glfw
	nlohmann_json::nlohmann_json
)
