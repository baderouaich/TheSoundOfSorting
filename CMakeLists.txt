cmake_minimum_required(VERSION 3.5)
project(sound_of_sorting)

add_executable(${PROJECT_NAME} main.cpp)

if(NOT WIN32)
    target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
    target_compile_options(${PROJECT_NAME} PUBLIC -Ofast -march=native)
    target_link_libraries(${PROJECT_NAME} 
        X11 
        GL 
        pthread
        png 
        stdc++fs
        asound
    )
endif()

# Copy swap.wav sound to build folder
file(COPY ${CMAKE_SOURCE_DIR}/swap.wav DESTINATION ${CMAKE_BINARY_DIR}/)