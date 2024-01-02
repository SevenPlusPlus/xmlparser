#include "xmlnodeiterator.h"

XmlNodeIterator::XmlNodeIterator() {}


XmlNodeIterator::XmlNodeIterator(QDomNode root){
    this->root = root;
    current = root;
}

bool XmlNodeIterator::hasNext(){
    if(!root.isNull()){
        if(!current.isNull() && current.hasChildNodes() && current.firstChildElement().isElement()){
            current = current.firstChildElement();
            isHasNext = true;
        } else if(!current.isNull() && !current.nextSiblingElement().isNull()){
            current = current.nextSiblingElement();
            isHasNext = true;
        } else if(!current.isNull()){
            while(!current.isNull() && current != root && current.nextSiblingElement().isNull()){
                current = current.parentNode();
            }
            if(!current.isNull() && current != root){
                current = current.nextSiblingElement();
                isHasNext = true;
            } else {
                isHasNext = false;
            }
        } else {
            isHasNext = false;
        }

    }else {
        isHasNext = false;
    }
    return isHasNext;

}


QDomNode XmlNodeIterator::next(){
    return current;
}
