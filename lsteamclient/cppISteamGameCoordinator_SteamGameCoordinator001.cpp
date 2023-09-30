/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamGameCoordinator_SteamGameCoordinator001.h"

void cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_SendMessage_params *params )
{
    struct u_ISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct u_ISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->SendMessage( params->unMsgType, params->pubData, params->cubData );
}

void cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable( struct cppISteamGameCoordinator_SteamGameCoordinator001_IsMessageAvailable_params *params )
{
    struct u_ISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct u_ISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->IsMessageAvailable( params->pcubMsgSize );
}

void cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage( struct cppISteamGameCoordinator_SteamGameCoordinator001_RetrieveMessage_params *params )
{
    struct u_ISteamGameCoordinator_SteamGameCoordinator001 *iface = (struct u_ISteamGameCoordinator_SteamGameCoordinator001 *)params->linux_side;
    params->_ret = iface->RetrieveMessage( params->punMsgType, params->pubDest, params->cubDest, params->pcubMsgSize );
}

