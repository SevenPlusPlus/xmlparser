#include "codegeneratecontext.h"

CodeGenerateContext::CodeGenerateContext() {
    imports = QList<std::string>();
    tmpStatements = QList<std::string>();
}
