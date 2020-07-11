include(GenerateExportHeader)

set(_srcs src/version.cpp)
add_library(kernel ${_srcs})
generate_export_header(kernel)
target_include_directories(kernel PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
set_property(
  TARGET kernel
  APPEND
  PROPERTY INTERFACE_INCLUDE_DIRECTORIES
           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../>
)
