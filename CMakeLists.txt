cmake_minimum_required(VERSION 3.18)
project(dlms_embedded VERSION 1.0)

add_subdirectory(dlms_c)

add_executable(server server/CCM15Server.cpp server/CCM15Server.h server/main.cpp server/settings.h)
target_link_libraries(server dlms)