/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_XMLSerializerBinding_h__
#define mozilla_dom_XMLSerializerBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class XPCWrappedNativeScope;
class nsDOMSerializer;


namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::XMLSerializer>
{
  enum
  {
    Depth = 0
  };
  typedef nsDOMSerializer NativeType;
};
template <>
struct PrototypeIDMap<nsDOMSerializer>
{
  enum
  {
    PrototypeID = prototypes::id::XMLSerializer
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

namespace XMLSerializerBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::XMLSerializer];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::XMLSerializer];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::XMLSerializer];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::XMLSerializer];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, nsDOMSerializer* aObject, nsWrapperCache* aCache, bool* aTriedToWrap);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject, bool* aTriedToWrap)
  {
    return Wrap(aCx, aScope, aObject, aObject, aTriedToWrap);
  }

} // namespace XMLSerializerBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_XMLSerializerBinding_h__
