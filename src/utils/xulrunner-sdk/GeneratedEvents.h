#if defined MOZ_GENERATED_EVENT_LIST
MOZ_GENERATED_EVENT(ProgressEvent)
MOZ_GENERATED_EVENT(StorageEvent)
MOZ_GENERATED_EVENT(DeviceProximityEvent)
MOZ_GENERATED_EVENT(MozSettingsEvent)
MOZ_GENERATED_EVENT(UserProximityEvent)
MOZ_GENERATED_EVENT(CustomEvent)
MOZ_GENERATED_EVENT(PageTransitionEvent)
MOZ_GENERATED_EVENT(DOMTransactionEvent)
MOZ_GENERATED_EVENT(PopStateEvent)
MOZ_GENERATED_EVENT(HashChangeEvent)
MOZ_GENERATED_EVENT(CloseEvent)
MOZ_GENERATED_EVENT(MozContactChangeEvent)
MOZ_GENERATED_EVENT(DeviceOrientationEvent)
MOZ_GENERATED_EVENT(DeviceLightEvent)
MOZ_GENERATED_EVENT(MozApplicationEvent)
MOZ_GENERATED_EVENT(SmartCardEvent)
MOZ_GENERATED_EVENT(MozSmsEvent)
MOZ_GENERATED_EVENT(DeviceStorageChangeEvent)
MOZ_GENERATED_EVENT(PopupBlockedEvent)
MOZ_GENERATED_EVENT(BlobEvent)
#undef MOZ_GENERATED_EVENT

#elif defined MOZ_GENERATED_EVENTS_INCLUDES
#include "nsIDOMProgressEvent.h"
#include "nsIDOMStorageEvent.h"
#include "nsIDOMDeviceProximityEvent.h"
#include "nsIDOMMozSettingsEvent.h"
#include "nsIDOMUserProximityEvent.h"
#include "nsIDOMCustomEvent.h"
#include "nsIDOMPageTransitionEvent.h"
#include "nsIDOMDOMTransactionEvent.h"
#include "nsIDOMPopStateEvent.h"
#include "nsIDOMHashChangeEvent.h"
#include "nsIDOMCloseEvent.h"
#include "nsIDOMMozContactChangeEvent.h"
#include "nsIDOMDeviceOrientationEvent.h"
#include "nsIDOMDeviceLightEvent.h"
#include "nsIDOMMozApplicationEvent.h"
#include "nsIDOMSmartCardEvent.h"
#include "nsIDOMMozSmsEvent.h"
#include "nsIDOMDeviceStorageChangeEvent.h"
#include "nsIDOMPopupBlockedEvent.h"
#include "nsIDOMBlobEvent.h"
#else
#ifndef _gen_mozilla_idl_generated_events_h_
#define _gen_mozilla_idl_generated_events_h_

/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */
#include "nscore.h"
class nsEvent;
class nsIDOMEvent;
class nsPresContext;

nsresult
NS_NewDOMProgressEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMStorageEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceProximityEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozSettingsEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMUserProximityEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMCustomEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMPageTransitionEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDOMTransactionEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMPopStateEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMHashChangeEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMCloseEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozContactChangeEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceOrientationEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceLightEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozApplicationEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMSmartCardEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozSmsEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceStorageChangeEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMPopupBlockedEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMBlobEvent(nsIDOMEvent** aInstance, nsPresContext* aPresContext, nsEvent* aEvent);

#endif
#endif