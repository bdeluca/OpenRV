//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QTextCodecType__h__
#define __MuQt5__QTextCodecType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu {

//
//  NOTE: file generated by qt2mu.py
//

class QTextCodecType : public Class
{
  public:
    //
    //  Types
    //

    typedef QTextCodec ValueType;

    struct Struct
    {
        QTextCodec* object;
    };

    //
    //  Constructors
    //

    QTextCodecType(Context* context, const char* name, Class* superClass = 0);
    virtual ~QTextCodecType();

    //
    //  Class API
    //

    virtual void load();
};

} // Mu

#endif // __MuQt5__QTextCodecType__h__