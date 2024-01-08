#ifndef CODEGENERATECONTEXT_H
#define CODEGENERATECONTEXT_H

#include <QList>
#include <string>
class CodeGenerateContext
{
private:
    QList<std::string> imports;
    QList<std::string> tmpStatements;
public:
    CodeGenerateContext();
    ~CodeGenerateContext(){

    }

    void addImport(std::string import){
        imports.append(import);
    }
    void addTmpStatement(std::string statement){
        tmpStatements.append(statement);
    }

    QList<std::string> getImports(){
        return imports;
    }
    QList<std::string> getTmpStatements(){
        return tmpStatements;
    }
};

#endif // CODEGENERATECONTEXT_H
