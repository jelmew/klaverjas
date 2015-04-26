project("Hello World")

add_executable(main test/main.cpp src/kaart.cpp src/speler.cpp src/klaverjas.cpp src/deck.cpp)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

