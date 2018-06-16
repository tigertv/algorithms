#include <iostream>
#include "DisplayVisitor.h"

DisplayVisitor::DisplayVisitor() {

}

void DisplayVisitor::visit(BinaryNode* node) {
	std::cout << node->val << " ";
}
 
