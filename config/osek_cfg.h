/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-07-01:21-54-30.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */


#ifndef _OSEK_CFG_H_
#define _OSEK_CFG_H_
/* =====================  MISC  ========================== */
#define FULL_PREEMPTIVE_SCHEDULE  0
#define MIXED_PREEMPTIVE_SCHEDULE 1
#define NONE_PREEMPTIVE_SCHEDULE  2
#define cfgOS_SCHEDULE_POLICY MIXED_PREEMPTIVE_SCHEDULE
#define cfgOS_CONFORMANCE_CLASS BCC1
#define cfgOSEK_FIFO_QUEUE_PER_PRIORITY STD_OFF
#define cfgOS_STATUS_LEVEL OS_STATUS_EXTENDED
#define cfgOS_TK_EXTEND STD_OFF
#define cfgOS_SYSTEM_STACK_SIZE 512
#define cfgOS_SHARE_SYSTEM_STACK STD_OFF
#define CHIP_MC9S12
#if defined(CHIP_MC9S12) //9s12
#define CPU_FREQUENCY        32000000 /* HZ */
#define OSC_FREQUENCY         8000000 /* HZ */
#elif defined(CHIP_STM32F1)//stm32
#define CPU_FREQUENCY        72000000 /* HZ */
#elif defined(CHIP_AT91SAM3S)
#define CPU_FREQUENCY        64000000 /* HZ */
#elif defined(CHIP_MPC56XX)
#define CPU_FREQUENCY  64000000   /* HZ */
#define OSC_FREQUENCY  8000000    /* Oscillator Clock 8MHZ */
#endif

/* App Mode */
/* =====================  TASK  ========================== */
#define cfgOSEK_MAX_PRIO 13
#define cfgOSEK_TASK_NUM  3
#define Task1 0
#define Task2 1
#define TaskError 2
#define Task1Pri PRIORITY(3)
#define Task2Pri PRIORITY(4)
#define TaskErrorPri PRIORITY(10)
#define Task1StkSz 100
#define Task2StkSz 100
#define TaskErrorStkSz 100
#define Task1MaxAct 0
#define Task2MaxAct 0
#define TaskErrorMaxAct 0
#define Task1Mode ( OSNONEAPPMODE | OSDEFAULTAPPMODE )
#define Task2Mode ( OSNONEAPPMODE )
#define TaskErrorMode ( OSNONEAPPMODE )
#if !defined(MACROS_ONLY)
IMPORT TASK(Task1);
IMPORT TASK(Task2);
IMPORT TASK(TaskError);
#endif
/* =====================  EVENT ========================== */
#define cfgOSEK_EVENTFLAG_NUM 0

/* =====================  ALARM ========================== */
#define cfgOSEK_COUNTER_NUM 1
#define SystemTimer 0
#define cfgOSEK_ALARM_NUM 1
#define AlarmError 0
#define AlarmError_AutoStartTime 100
#define AlarmError_AutoCycleTime 100
#define AlarmErrorMode ( OSNONEAPPMODE )
#if !defined(MACROS_ONLY)
IMPORT ALARM(AlarmError);
#endif
/*  ====================  RESOURCE ======================= */
#define cfgOSEK_RESOURCE_NUM 1
#define RES_SCHEDULER 0
#define RES_SCHEDULERPri PRIORITY(cfgOSEK_MAX_PRIO)
	//it had been assigned to [ ]

/*  ================   INTERNAL RESOURCE ================= */

/*  ====================  HOOKs    ======================= */
#define cfgOS_STACK_USAGE_CHECK STD_OFF
#define cfgOS_SHUT_DOWN_HOOK STD_ON
#define cfgOS_START_UP_HOOK STD_ON
#define cfgOS_ERROR_HOOK STD_OFF
#define cfgOS_PRE_TASK_HOOK STD_OFF
#define cfgOS_POST_TASK_HOOK STD_OFF
#endif /* _OSEK_CFG_H_ */

