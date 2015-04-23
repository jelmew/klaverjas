project("Hello World")

add_executable(main main.cpp src/kaart.cpp src/speler.cpp src/klaverjas.cpp)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

