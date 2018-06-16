#ifndef DISPLAY_VISITOR_H 
#define DISPLAY_VISITOR_H 

#include "NodeVisitor.h"

class DisplayVisitor : public NodeVisitor { 
public:
	DisplayVisitor();
	void visit(BinaryNode* node);
}; 

#endif
