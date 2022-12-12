//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QPaintEventType__h__
#define __MuQt5__QPaintEventType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QPaintEventType : public Class
{
  public:
    //
    //  Types
    //

    typedef QPaintEvent ValueType;

    struct Struct
    {
        QPaintEvent* object;
    };

    //
    //  Constructors
    //

    QPaintEventType(Context* context, const char* name, Class* superClass = 0);
    virtual ~QPaintEventType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__QPaintEventType__h__