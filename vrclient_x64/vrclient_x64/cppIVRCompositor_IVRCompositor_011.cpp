#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.16/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_011.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRCompositor_IVRCompositor_011_SetTrackingSpace(void *linux_side, ETrackingUniverseOrigin eOrigin)
{
    ((IVRCompositor*)linux_side)->SetTrackingSpace((vr::ETrackingUniverseOrigin)eOrigin);
}

vr::ETrackingUniverseOrigin cppIVRCompositor_IVRCompositor_011_GetTrackingSpace(void *linux_side)
{
    vr::ETrackingUniverseOrigin _ret;
    _ret = ((IVRCompositor*)linux_side)->GetTrackingSpace();
    return _ret;
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_011_WaitGetPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    vr::EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->WaitGetPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_011_GetLastPoses(void *linux_side, TrackedDevicePose_t *pRenderPoseArray, uint32_t unRenderPoseArrayCount, TrackedDevicePose_t *pGamePoseArray, uint32_t unGamePoseArrayCount)
{
    vr::EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastPoses((vr::TrackedDevicePose_t *)pRenderPoseArray, (uint32_t)unRenderPoseArrayCount, (vr::TrackedDevicePose_t *)pGamePoseArray, (uint32_t)unGamePoseArrayCount);
    return _ret;
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_011_Submit(void *linux_side, EVREye eEye, const Texture_t *pTexture, const VRTextureBounds_t *pBounds, EVRSubmitFlags nSubmitFlags)
{
    vr::EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->Submit((vr::EVREye)eEye, (const vr::Texture_t *)pTexture, (const vr::VRTextureBounds_t *)pBounds, (vr::EVRSubmitFlags)nSubmitFlags);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_011_ClearLastSubmittedFrame(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearLastSubmittedFrame();
}

void cppIVRCompositor_IVRCompositor_011_PostPresentHandoff(void *linux_side)
{
    ((IVRCompositor*)linux_side)->PostPresentHandoff();
}

bool cppIVRCompositor_IVRCompositor_011_GetFrameTiming(void *linux_side, Compositor_FrameTiming *pTiming, uint32_t unFramesAgo)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTiming((vr::Compositor_FrameTiming *)pTiming, (uint32_t)unFramesAgo);
    return _ret;
}

float cppIVRCompositor_IVRCompositor_011_GetFrameTimeRemaining(void *linux_side)
{
    float _ret;
    _ret = ((IVRCompositor*)linux_side)->GetFrameTimeRemaining();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_011_FadeToColor(void *linux_side, float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground)
{
    ((IVRCompositor*)linux_side)->FadeToColor((float)fSeconds, (float)fRed, (float)fGreen, (float)fBlue, (float)fAlpha, (bool)bBackground);
}

void cppIVRCompositor_IVRCompositor_011_FadeGrid(void *linux_side, float fSeconds, bool bFadeIn)
{
    ((IVRCompositor*)linux_side)->FadeGrid((float)fSeconds, (bool)bFadeIn);
}

vr::EVRCompositorError cppIVRCompositor_IVRCompositor_011_SetSkyboxOverride(void *linux_side, const Texture_t *pTextures, uint32_t unTextureCount)
{
    vr::EVRCompositorError _ret;
    _ret = ((IVRCompositor*)linux_side)->SetSkyboxOverride((const vr::Texture_t *)pTextures, (uint32_t)unTextureCount);
    return _ret;
}

void cppIVRCompositor_IVRCompositor_011_ClearSkyboxOverride(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ClearSkyboxOverride();
}

void cppIVRCompositor_IVRCompositor_011_CompositorBringToFront(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorBringToFront();
}

void cppIVRCompositor_IVRCompositor_011_CompositorGoToBack(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorGoToBack();
}

void cppIVRCompositor_IVRCompositor_011_CompositorQuit(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorQuit();
}

bool cppIVRCompositor_IVRCompositor_011_IsFullscreen(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsFullscreen();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_011_GetCurrentSceneFocusProcess(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetCurrentSceneFocusProcess();
    return _ret;
}

uint32_t cppIVRCompositor_IVRCompositor_011_GetLastFrameRenderer(void *linux_side)
{
    uint32_t _ret;
    _ret = ((IVRCompositor*)linux_side)->GetLastFrameRenderer();
    return _ret;
}

bool cppIVRCompositor_IVRCompositor_011_CanRenderScene(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->CanRenderScene();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_011_ShowMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->ShowMirrorWindow();
}

void cppIVRCompositor_IVRCompositor_011_HideMirrorWindow(void *linux_side)
{
    ((IVRCompositor*)linux_side)->HideMirrorWindow();
}

bool cppIVRCompositor_IVRCompositor_011_IsMirrorWindowVisible(void *linux_side)
{
    bool _ret;
    _ret = ((IVRCompositor*)linux_side)->IsMirrorWindowVisible();
    return _ret;
}

void cppIVRCompositor_IVRCompositor_011_CompositorDumpImages(void *linux_side)
{
    ((IVRCompositor*)linux_side)->CompositorDumpImages();
}

#ifdef __cplusplus
}
#endif
