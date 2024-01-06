QT = core xml

CONFIG += c++17 cmdline no_keywords

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        addexpr.cpp \
        antlr4/ExprEngineBaseVisitor.cpp \
        antlr4/ExprEngineLexer.cpp \
        antlr4/ExprEngineParser.cpp \
        antlr4/ExprEngineVisitor.cpp \
        assignexpr.cpp \
        assignop.cpp \
        astvisitor.cpp \
        booleanliteral.cpp \
        main.cpp \
        mathoperator.cpp \
        numericliteral.cpp \
        paramexpr.cpp \
        protocalxmlparser.cpp \
        stringliteral.cpp \
        xmlnodeiterator.cpp

TRANSLATIONS += \
    xmlparser_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ExprNode.h \
    addexpr.h \
    antlr4/ExprEngineBaseVisitor.h \
    antlr4/ExprEngineLexer.h \
    antlr4/ExprEngineParser.h \
    antlr4/ExprEngineVisitor.h \
    assignexpr.h \
    assignop.h \
    astvisitor.h \
    booleanliteral.h \
    mathoperator.h \
    numericliteral.h \
    paramexpr.h \
    protocalxmlparser.h \
    stringliteral.h \
    xmlnodeiterator.h

DISTFILES += \
    antlr4/ExprEngine.interp \
    antlr4/ExprEngine.tokens \
    antlr4/ExprEngineLexer.interp \
    antlr4/ExprEngineLexer.tokens

INCLUDEPATH += $$PWD/lib/antlr4-cpp-runtime-4.7.2-source/runtime/src
LIBS += -L$$PWD/lib/antlr4-cpp-runtime-4.7.2-source/dist -lantlr4-runtime


#macx: LIBS += -L$$PWD/../antlr4-cpp-runtime-macos/lib/ -lantlr4-runtime

#INCLUDEPATH += $$PWD/../antlr4-cpp-runtime-macos/antlr4-runtime
#DEPENDPATH += $$PWD/../antlr4-cpp-runtime-macos/antlr4-runtime
