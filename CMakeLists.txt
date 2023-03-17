cmake_minimum_required(VERSION 3.0.0)
project(testProg VERSION 0.1.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

include(CTest)
enable_testing()

add_executable(testProg 
    main.cpp
    main.h
    textureHolder.h
    textureHolder.cpp
    ./engine/engine.h
    ./engine/engine.cpp
    ./engine/draw.cpp
    ./engine/input.cpp
    ./engine/update.cpp
    ./engine/gameOver/gameOverDraw.cpp
    ./engine/gameOver/gameOverInput.cpp
    ./engine/gameOver/gameOverUpdate.cpp
    ./engine/inventory/inventoryDraw.cpp
    ./engine/inventory/inventoryInput.cpp
    ./engine/inventory/inventoryUpdate.cpp

    ./engine/overWorld/overWorldDraw.cpp
    ./engine/overWorld/overWorldInput.cpp
    ./engine/overWorld/overWorldUpdate.cpp

    ./engine/paused/pausedDraw.cpp
    ./engine/paused/pausedInput.cpp
    ./engine/paused/pausedUpdate.cpp

    ./engine/title/titleDraw.cpp
    ./engine/title/titleInput.cpp
    ./engine/title/titleUpdate.cpp
)

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
