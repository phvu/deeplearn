/* 
 * File:   ProductNode.h
 * Author: hoaivu_pham
 *
 * Created on September 5, 2013, 12:03 PM
 */

#ifndef PRODUCTNODE_H
#define	PRODUCTNODE_H

#include <Node.h>

namespace model
{

class ProductNode : public Node
{
public:
    ProductNode(const NodeData& nodeData);
    virtual ~ProductNode();
    
    virtual void Forward();
    
    virtual void Backward();
    
    virtual void NormalizeIncomingEdges();
    
private:

};

}
#endif	/* PRODUCTNODE_H */

