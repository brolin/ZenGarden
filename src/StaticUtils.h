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

#ifndef _STATIC_UTILS_H_
#define _STATIC_UTILS_H_

class StaticUtils {
  
  public:
    static char *copyString(char *str);
    static bool isNumeric(char *str);
    static float millisecondsToSamples(float delayInMs, float sampleRate);
    static char *joinPaths(const char *path0, const char *path1);
    static float sineApprox(float x);
  
  private:
    StaticUtils(); // a private constructor. No instances of this object should be made.
    ~StaticUtils();
};

#endif // _STATIC_UTILS_H_
