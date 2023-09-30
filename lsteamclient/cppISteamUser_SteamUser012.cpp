/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser012.h"

void cppISteamUser_SteamUser012_GetHSteamUser( struct cppISteamUser_SteamUser012_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser012_BLoggedOn( struct cppISteamUser_SteamUser012_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser012_GetSteamID( struct cppISteamUser_SteamUser012_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser012_InitiateGameConnection( struct cppISteamUser_SteamUser012_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser012_TerminateGameConnection( struct cppISteamUser_SteamUser012_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser012_TrackAppUsageEvent( struct cppISteamUser_SteamUser012_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser012_GetUserDataFolder( struct cppISteamUser_SteamUser012_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser012_StartVoiceRecording( struct cppISteamUser_SteamUser012_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser012_StopVoiceRecording( struct cppISteamUser_SteamUser012_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser012_GetCompressedVoice( struct cppISteamUser_SteamUser012_GetCompressedVoice_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetCompressedVoice( params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

void cppISteamUser_SteamUser012_DecompressVoice( struct cppISteamUser_SteamUser012_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

void cppISteamUser_SteamUser012_GetAuthSessionTicket( struct cppISteamUser_SteamUser012_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser012_BeginAuthSession( struct cppISteamUser_SteamUser012_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser012_EndAuthSession( struct cppISteamUser_SteamUser012_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser012_CancelAuthTicket( struct cppISteamUser_SteamUser012_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser012_UserHasLicenseForApp( struct cppISteamUser_SteamUser012_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser012 *iface = (struct u_ISteamUser_SteamUser012 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

