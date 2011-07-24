######################################################################
# Automatically generated by qmake (2.01a) sex 26. fev 16:22:32 2010
######################################################################

TEMPLATE = app
TARGET = simulacao
DEPENDPATH += . src qwt ui
INCLUDEPATH += . qwt

CONFIG += release console

unix {
    LIBS += /usr/lib/libqwt5/libqwt.so.5
}
win32 {
    QMAKE_LIBDIR += lib
    LIBS += -lqwt5
}

QT += network svg

UI_DIR = ui
MOC_DIR = moc
OBJECTS_DIR = obj

# Input
FORMS += ui/principal.ui \
         ui/legenda.ui \
         ui/config_parametros.ui \
         ui/config_canais.ui \
         ui/calibrar.ui \
         ui/salvar.ui

HEADERS += src/grafico.h \
           src/principal.h \
           src/simulacao.h \
           src/quanser.h \
           src/excecoes.h \
           src/funcoes.h \
           src/legenda.h \
           src/controle.h \
           src/config_parametros.h \
           src/config_canais.h \
           src/calibrar.h \
           src/salvar.h \
           src/definicoes.h

SOURCES += src/grafico.cpp \
           src/principal.cpp \
           src/simulacao.cpp \
           src/quanser.cpp \
           src/excecoes.cpp \
           src/funcoes.cpp \
           src/legenda.cpp \
           src/controle.cpp \
           src/config_parametros.cpp \
           src/config_canais.cpp \
           src/calibrar.cpp \
           src/salvar.cpp \
           src/main.cpp

RESOURCES += imgs/imgs.qrc