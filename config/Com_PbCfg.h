/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-05-30:22-06-30.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)) )
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef COM_PBCFG_H
#define COM_PBCFG_H

#include "Com_Types.h"

extern const Com_ConfigType ComConfiguration;

// PDU group id definitions
#define vCom_IPduGrp0 0

//  COM IPDU Id Defines.
#define vCom_IPdu1_TX 0
#define COM_TX_vEcuC_Pdu_1 0	/* for vCom_IPdu1_TX */
#define vCom_IPdu1_RX 1
#define COM_RX_vEcuC_Pdu_1 1	/* for vCom_IPdu1_RX */
#define vCom_IPdu0_TX 2
#define COM_TX_vEcuC_Pdu_0 2	/* for vCom_IPdu0_TX */
#define vCom_IPdu0_RX 3
#define COM_RX_vEcuC_Pdu_0 3	/* for vCom_IPdu0_RX */

//General Signal (Group) Id defines
#define vCom_IPdu1_TX_Signal0 0
#define vCom_IPdu1_Signal0 1
#define vCom_IPdu0_TX_Signal0 2
#define vCom_IPdu0_RX_Signal0 3

//Group Signal Id defines

// Notifications

// Callouts
#endif /* COM_PBCFG_H */

