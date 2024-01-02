#ifndef XMLNODEITERATOR_H
#define XMLNODEITERATOR_H

#include <QDomNode>


class XmlNodeIterator
{
public:
    XmlNodeIterator();
    XmlNodeIterator(QDomNode root);
    bool hasNext();
    QDomNode next();

private:
    QDomNode root, current;
    bool isHasNext;
};

#endif // XMLNODEITERATOR_H
