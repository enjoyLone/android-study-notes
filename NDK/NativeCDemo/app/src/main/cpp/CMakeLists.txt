cmake_minimum_required(VERSION 3.22.1)
project("cryptodemo")

add_library(crypto_key SHARED crypto_key.cpp)
find_library(log-lib log)
target_link_libraries(crypto_key ${log-lib})