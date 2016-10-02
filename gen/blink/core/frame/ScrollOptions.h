// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef ScrollOptions_h
#define ScrollOptions_h

#include "core/CoreExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT ScrollOptions {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    ScrollOptions();

    bool hasBehavior() const { return !m_behavior.isNull(); }
    String behavior() const { return m_behavior; }
    void setBehavior(String value) { m_behavior = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_behavior;

    friend class V8ScrollOptions;
};

} // namespace blink

#endif // ScrollOptions_h