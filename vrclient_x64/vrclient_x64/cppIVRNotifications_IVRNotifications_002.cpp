#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.26.7/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRNotifications_IVRNotifications_002.h"
#ifdef __cplusplus
extern "C" {
#endif
EVRNotificationError cppIVRNotifications_IVRNotifications_002_CreateNotification(void *linux_side, VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, const char *pchText, EVRNotificationStyle style, const NotificationBitmap_t *pImage, VRNotificationId *pNotificationId)
{
    EVRNotificationError _ret;
    _ret = ((IVRNotifications*)linux_side)->CreateNotification((vr::VROverlayHandle_t)ulOverlayHandle, (uint64_t)ulUserValue, (vr::EVRNotificationType)type, (const char *)pchText, (vr::EVRNotificationStyle)style, (const vr::NotificationBitmap_t *)pImage, (vr::VRNotificationId *)pNotificationId);
    return _ret;
}

EVRNotificationError cppIVRNotifications_IVRNotifications_002_RemoveNotification(void *linux_side, VRNotificationId notificationId)
{
    EVRNotificationError _ret;
    _ret = ((IVRNotifications*)linux_side)->RemoveNotification((vr::VRNotificationId)notificationId);
    return _ret;
}

#ifdef __cplusplus
}
#endif
