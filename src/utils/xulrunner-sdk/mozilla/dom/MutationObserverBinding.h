/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_MutationObserverBinding_h__
#define mozilla_dom_MutationObserverBinding_h__

#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class XPCWrappedNativeScope;
class nsDOMMutationObserver;

class nsDOMMutationRecord;

class nsDOMMutationRecord;

class nsDOMMutationObserver;


namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::MutationObserver>
{
  enum
  {
    Depth = 0
  };
  typedef nsDOMMutationObserver NativeType;
};
template <>
struct PrototypeTraits<prototypes::id::MutationRecord>
{
  enum
  {
    Depth = 0
  };
  typedef nsDOMMutationRecord NativeType;
};
template <>
struct PrototypeIDMap<nsDOMMutationObserver>
{
  enum
  {
    PrototypeID = prototypes::id::MutationObserver
  };
};
template <>
struct PrototypeIDMap<nsDOMMutationRecord>
{
  enum
  {
    PrototypeID = prototypes::id::MutationRecord
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

struct MutationObserverInit : public MainThreadDictionaryBase {
  MutationObserverInit() {}
  bool Init(JSContext* cx, JSObject* scopeObj, const JS::Value& val);
  bool ToObject(JSContext* cx, JSObject* parentObject, JS::Value *vp);

  bool Init(const nsAString& aJSON)
  {
    mozilla::Maybe<JSAutoRequest> ar;
    mozilla::Maybe<JSAutoCompartment> ac;
    jsval json = JSVAL_VOID;
    JSContext* cx = ParseJSON(aJSON, ar, ac, json);
    NS_ENSURE_TRUE(cx, false);
    return Init(cx, nullptr, json);
  }

  Optional< Sequence< nsString > > mAttributeFilter;
  bool mAttributeOldValue;
  bool mAttributes;
  bool mCharacterData;
  bool mCharacterDataOldValue;
  bool mChildList;
  bool mSubtree;
private:
  // Disallow copy-construction
  MutationObserverInit(const MutationObserverInit&) MOZ_DELETE;
  static bool InitIds(JSContext* cx);
  static bool initedIds;
  static jsid attributeFilter_id;
  static jsid attributeOldValue_id;
  static jsid attributes_id;
  static jsid characterData_id;
  static jsid characterDataOldValue_id;
  static jsid childList_id;
  static jsid subtree_id;
};
struct MutationObserverInitInitializer : public MutationObserverInit {
  MutationObserverInitInitializer() {
    // Safe to pass a null context if we pass a null value
    Init(nullptr, nullptr, JS::NullValue());
  }
};

class MutationCallback : public CallbackFunction
{
public:
  inline MutationCallback(JSContext* cx, JSObject* aOwner, JSObject* aCallback, bool* aInited)
    : CallbackFunction(cx, aOwner, aCallback, aInited)
  {
  }

  explicit inline MutationCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObj, const Sequence< OwningNonNull<nsDOMMutationRecord> >& mutations, nsDOMMutationObserver& observer, ErrorResult& aRv)
  {
    CallSetup s(mCallback);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JSObject* thisObjJS = WrapCallThisObject(s.GetContext(), mCallback, thisObj);
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return Call(s.GetContext(), thisObjJS, mutations, observer, aRv);
  }

  inline void
  Call(const Sequence< OwningNonNull<nsDOMMutationRecord> >& mutations, nsDOMMutationObserver& observer, ErrorResult& aRv)
  {
    CallSetup s(mCallback);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), nullptr, mutations, observer, aRv);
  }

private:
  void Call(JSContext* cx, JSObject* aThisObj, const Sequence< OwningNonNull<nsDOMMutationRecord> >& mutations, nsDOMMutationObserver& observer, ErrorResult& aRv);
};


namespace MutationObserverBinding {

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
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::MutationObserver];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::MutationObserver];
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
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::MutationObserver];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::MutationObserver];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, nsDOMMutationObserver* aObject, nsWrapperCache* aCache, bool* aTriedToWrap);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject, bool* aTriedToWrap)
  {
    return Wrap(aCx, aScope, aObject, aObject, aTriedToWrap);
  }

} // namespace MutationObserverBinding



namespace MutationRecordBinding {

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
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::MutationRecord];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::MutationRecord];
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
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::MutationRecord];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::MutationRecord];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, nsDOMMutationRecord* aObject, nsWrapperCache* aCache, bool* aTriedToWrap);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject, bool* aTriedToWrap)
  {
    return Wrap(aCx, aScope, aObject, aObject, aTriedToWrap);
  }

} // namespace MutationRecordBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MutationObserverBinding_h__
