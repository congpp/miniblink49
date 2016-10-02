// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Geolocation.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMActivityLogger.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8PositionCallback.h"
#include "bindings/modules/v8/V8PositionErrorCallback.h"
#include "bindings/modules/v8/V8PositionOptions.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Geolocation::wrapperTypeInfo = { gin::kEmbedderBlink, V8Geolocation::domTemplate, V8Geolocation::refObject, V8Geolocation::derefObject, V8Geolocation::trace, 0, 0, V8Geolocation::preparePrototypeObject, V8Geolocation::installConditionallyEnabledProperties, "Geolocation", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Geolocation.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Geolocation::s_wrapperTypeInfo = V8Geolocation::wrapperTypeInfo;

namespace GeolocationV8Internal {

static void getCurrentPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getCurrentPosition", "Geolocation", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Geolocation* impl = V8Geolocation::toImpl(info.Holder());
    PositionCallback* successCallback;
    PositionErrorCallback* errorCallback;
    PositionOptions options;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        successCallback = V8PositionCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 2 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            errorCallback = V8PositionErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[2]) && !info[2]->IsObject()) {
            exceptionState.throwTypeError("parameter 3 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8PositionOptions::toImpl(info.GetIsolate(), info[2], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->getCurrentPosition(successCallback, errorCallback, options);
}

static void getCurrentPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        ExceptionState exceptionState(ExceptionState::ExecutionContext, "getCurrentPosition", "Geolocation", info.Holder(), info.GetIsolate());
        Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
        contextData->activityLogger()->logMethod("Geolocation.getCurrentPosition", info.Length(), loggerArgs.data());
    }
    GeolocationV8Internal::getCurrentPositionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void watchPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "watchPosition", "Geolocation", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Geolocation* impl = V8Geolocation::toImpl(info.Holder());
    PositionCallback* successCallback;
    PositionErrorCallback* errorCallback;
    PositionOptions options;
    {
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        successCallback = V8PositionCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (!isUndefinedOrNull(info[1])) {
            if (!info[1]->IsFunction()) {
                exceptionState.throwTypeError("The callback provided as parameter 2 is not a function.");
                exceptionState.throwIfNeeded();
                return;
            }
            errorCallback = V8PositionErrorCallback::create(v8::Local<v8::Function>::Cast(info[1]), ScriptState::current(info.GetIsolate()));
        } else {
            errorCallback = nullptr;
        }
        if (!isUndefinedOrNull(info[2]) && !info[2]->IsObject()) {
            exceptionState.throwTypeError("parameter 3 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8PositionOptions::toImpl(info.GetIsolate(), info[2], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValueInt(info, impl->watchPosition(successCallback, errorCallback, options));
}

static void watchPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        ExceptionState exceptionState(ExceptionState::ExecutionContext, "watchPosition", "Geolocation", info.Holder(), info.GetIsolate());
        Vector<v8::Local<v8::Value>> loggerArgs = toImplArguments<Vector<v8::Local<v8::Value>>>(info, 0, exceptionState);
        contextData->activityLogger()->logMethod("Geolocation.watchPosition", info.Length(), loggerArgs.data());
    }
    GeolocationV8Internal::watchPositionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearWatchMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clearWatch", "Geolocation", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Geolocation* impl = V8Geolocation::toImpl(info.Holder());
    int watchID;
    {
        watchID = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->clearWatch(watchID);
}

static void clearWatchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    GeolocationV8Internal::clearWatchMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace GeolocationV8Internal

static const V8DOMConfiguration::MethodConfiguration V8GeolocationMethods[] = {
    {"getCurrentPosition", GeolocationV8Internal::getCurrentPositionMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"watchPosition", GeolocationV8Internal::watchPositionMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
    {"clearWatch", GeolocationV8Internal::clearWatchMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8GeolocationTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "Geolocation", v8::Local<v8::FunctionTemplate>(), V8Geolocation::internalFieldCount,
        0, 0,
        0, 0,
        V8GeolocationMethods, WTF_ARRAY_LENGTH(V8GeolocationMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8Geolocation::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8GeolocationTemplate);
}

bool V8Geolocation::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Geolocation::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Geolocation* V8Geolocation::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Geolocation::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8Geolocation::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink