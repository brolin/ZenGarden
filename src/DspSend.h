/*
 *  Copyright 2010 Reality Jockey, Ltd.
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

#ifndef _DSP_SEND_H_
#define _DSP_SEND_H_

#include "DspObject.h"

/** [send~ symbol], [s~ symbol] */
class DspSend : public DspObject {
  
  public:
    DspSend(PdMessage *initMessage, PdGraph *graph);
    ~DspSend();
    
    /**
     * Returns a double pointer to the local input buffer of this object.
     * A double-pointer is returned because the local input buffer may change depending on
     * how many connecting object that this object has at the given moment.
     */
    float **getBuffer();
    char *getName();
    const char *getObjectLabel();
    ObjectType getObjectType();
    
  private:
    char *name;
};

#endif // _DSP_SEND_H_
