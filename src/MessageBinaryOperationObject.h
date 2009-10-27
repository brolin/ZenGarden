/*
 *  Copyright 2009 Reality Jockey, Ltd.
 *                 info@rjdj.me
 *                 http://rjdj.me/
 * 
 *  This file is part of ZenGarden.
 *
 *  ZenGarden is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ZenGarden is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *  
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with ZenGarden.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _MESSAGE_BINARY_OPERATION_OBJECT_H_
#define _MESSAGE_BINARY_OPERATION_OBJECT_H_

#include "MessageInputMessageOutputObject.h"

class MessageBinaryOperationObject : public MessageInputMessageOutputObject {
  
  public:
    MessageBinaryOperationObject(char *initString);
    virtual ~MessageBinaryOperationObject();
  
  protected:
    void processMessage(int inletIndex, PdMessage *message);
    PdMessage *newCanonicalMessage();
    virtual float performBinaryOperation(float left, float right) = 0;
  
    float left;
    float right;
};

#endif // _MESSAGE_BINARY_OPERATION_OBJECT_H_
