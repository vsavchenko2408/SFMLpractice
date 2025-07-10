cmake_minimum_required(VERSION 3.10)
project(SFMLpractice)

include_directories(SFML/include)
link_directories(SFML/lib)

add_executable(SFMLpractice src/main.cpp)

target_link_libraries(SFMLpractice sfml-graphics sfml-window sfml-system)
