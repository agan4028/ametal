/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief ϵͳ�δ�������ʱ�������ļ�
 *
 * \internal
 * \par Modification history
 * - 1.00 17-11-20  pea, first implementation
 * \endinternal
 */
#ifndef __AM_HWCONF_SYSTEM_TICK_SOFTIMER_H
#define __AM_HWCONF_SYSTEM_TICK_SOFTIMER_H

#include "ametal.h"
#include "am_timer.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief ϵͳ�δ�ʵ����ʼ��(��ʹ��������ʱ��)
 */
void am_system_tick_inst_init (void);

/**
 * \brief ϵͳ�δ�ʵ����ʼ��(ʹ��������ʱ��)
 */
void am_system_tick_softimer_inst_init (void);

#ifdef __cplusplus
}
#endif

#endif /* __AM_HWCONF_SYSTEM_TICK_SOFTIMER_H */

/* end of file */