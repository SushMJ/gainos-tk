/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-24:09-38-31.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#include "Nm.h"
#include "CanNm.h"
#include "ComM.h"

const Nm_ChannelType Nm_Channels[] = {
	{//vNm_Channel_0
		/* BusType = */ NM_BUSNM_CANNM,
		/* BusNmNetworkHandle = */ vCanNm_Channel_0,
		/* ComMNetworkHandle = */ vComM_Channel_0,
	},
};

const Nm_ConfigType Nm_Config = 
{
	/* Channels = */ Nm_Channels
};

