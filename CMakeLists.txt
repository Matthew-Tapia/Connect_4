cmake_minimum_required(VERSION 3.14)
project(Connect_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Board.cpp Board.h DPiece.cpp DPiece.h DBoard.cpp DBoard.h DBoardPeg.cpp DBoardPeg.h DBoardColumn.cpp DBoardColumn.h Position.cpp Position.h MouseEvents.cpp MouseEvents.h Constants.h RectangularButton.cpp RectangularButton.h Fonts.cpp Fonts.h FontsEnum.h RectangularRestartButton.cpp RectangularRestartButton.h Stateable.cpp Stateable.h StatesEnum.h DBoardRow.cpp DBoardRow.h Sounds.cpp Sounds.h SoundsEnum.h Application.cpp Application.h Component.h EventHandleable.h C4Project.cpp C4Project.h Piece.cpp Piece.h PieceColorEnum.h)
add_executable(Connect_4 ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Connect_4 sfml-system sfml-window sfml-graphics sfml-audio sfml-network)