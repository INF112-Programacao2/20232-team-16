cmake_minimum_required(VERSION 3.5)

project(Projeto_Final_Qt VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES Projeto_Final_Qt_pt_BR.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Projeto_Final_Qt
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        cadastro.h cadastro.cpp cadastro.ui
        usuario_dados.h usuario_dados.cpp
        feitos/Categoria.cpp feitos/Categoria.h feitos/Conta.cpp feitos/Conta.h feitos/Despesa.cpp feitos/Despesa.h   feitos/Funcionalidade.cpp feitos/Funcionalidade.h   feitos/ObjetivoReceita.cpp feitos/ObjetivoReceita.h feitos/Receita.cpp feitos/Receita.h feitos/Sistema.cpp feitos/Sistema.h feitos/Transacao.cpp feitos/Transacao.h   feitos/Usuario.cpp feitos/Usuario.h
        usuariowindow.h usuariowindow.cpp usuariowindow.ui
        janelaconta.h janelaconta.cpp janelaconta.ui
        contacadastro.h contacadastro.cpp contacadastro.ui
        receitajanela.h receitajanela.cpp receitajanela.ui
        janeladespesa.h janeladespesa.cpp janeladespesa.ui
        janelaobjetivo.h janelaobjetivo.cpp janelaobjetivo.ui
        feitos/Cartao.cpp feitos/Cartao.h feitos/Categoria.cpp feitos/Categoria.h feitos/Emprestimo.cpp feitos/Emprestimo.h feitos/Investimento.cpp feitos/Investimento.h feitos/Transferencia.cpp feitos/Transferencia.h
        feitos/objetivoif.h feitos/objetivoif.cpp
        feitos/objetivodespesa.h feitos/objetivodespesa.cpp


    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Projeto_Final_Qt APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(Projeto_Final_Qt SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Projeto_Final_Qt
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(Projeto_Final_Qt PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Projeto_Final_Qt)
endif()
set_target_properties(Projeto_Final_Qt PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Projeto_Final_Qt
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Projeto_Final_Qt)
endif()
