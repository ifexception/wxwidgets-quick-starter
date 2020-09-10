cmake_minimum_required (VERSION 3.8)

project ("wxWidgetsQuickStarter")

set (CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
message(STATUS "CMAKE_MODULE_PATH:${CMAKE_MODULE_PATH}")

# Include sub-projects.
add_subdirectory ("src")
