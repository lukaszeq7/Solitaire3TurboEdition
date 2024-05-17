cmake_minimum_required(VERSION 3.16)

project(Solitaire3TurboEdition VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appSolitaire3TurboEdition
    main.cpp
)

qt_add_qml_module(appSolitaire3TurboEdition
    URI Solitaire3TurboEdition
    VERSION 1.0
    QML_FILES Main.qml
)

target_link_libraries(appSolitaire3TurboEdition
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appSolitaire3TurboEdition
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
