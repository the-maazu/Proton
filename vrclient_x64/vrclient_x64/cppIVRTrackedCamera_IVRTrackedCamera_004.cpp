#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.17/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_004.h"
#ifdef __cplusplus
extern "C" {
#endif
const char * cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum(void *linux_side, EVRTrackedCameraError eCameraError)
{
    const char *_ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)eCameraError);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_HasCamera(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->HasCamera((vr::TrackedDeviceIndex_t)nDeviceIndex, (bool *)pHasCamera);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (uint32_t *)pnWidth, (uint32_t *)pnHeight, (uint32_t *)pnFrameBufferSize);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraIntrinsics((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::HmdVector2_t *)pFocalLength, (vr::HmdVector2_t *)pCenter);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (float)flZNear, (float)flZFar, (vr::HmdMatrix44_t *)pProjection);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::TrackedCameraHandle_t *)pHandle);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService(void *linux_side, TrackedCameraHandle_t hTrackedCamera)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)hTrackedCamera);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, winCameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    CameraVideoStreamFrameHeader_t lin;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1017_win_to_lin(pFrameHeader, &lin);
    uint32_t lin_nFrameHeaderSize = nFrameHeaderSize ? sizeof(lin) : 0;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pFrameBuffer, (uint32_t)nFrameBufferSize, pFrameHeader ? &lin : nullptr, lin_nFrameHeaderSize);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1017_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::VRTextureBounds_t *)pTextureBounds, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, winCameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    CameraVideoStreamFrameHeader_t lin;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1017_win_to_lin(pFrameHeader, &lin);
    uint32_t lin_nFrameHeaderSize = nFrameHeaderSize ? sizeof(lin) : 0;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureD3D11((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView, pFrameHeader ? &lin : nullptr, lin_nFrameHeaderSize);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1017_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t *pglTextureId, winCameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    CameraVideoStreamFrameHeader_t lin;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1017_win_to_lin(pFrameHeader, &lin);
    uint32_t lin_nFrameHeaderSize = nFrameHeaderSize ? sizeof(lin) : 0;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureGL((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::glUInt_t *)pglTextureId, pFrameHeader ? &lin : nullptr, lin_nFrameHeaderSize);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1017_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL(void *linux_side, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamTextureGL((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::glUInt_t)glTextureId);
    return _ret;
}

#ifdef __cplusplus
}
#endif
