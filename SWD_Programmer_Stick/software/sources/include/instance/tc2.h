/**
 * \file
 *
 * \brief Instance description for TC2
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMD11_TC2_INSTANCE_
#define _SAMD11_TC2_INSTANCE_

/* ========== Register definition for TC2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC2_CTRLA              (0x42001C00U) /**< \brief (TC2) Control A */
#define REG_TC2_READREQ            (0x42001C02U) /**< \brief (TC2) Read Request */
#define REG_TC2_CTRLBCLR           (0x42001C04U) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (0x42001C05U) /**< \brief (TC2) Control B Set */
#define REG_TC2_CTRLC              (0x42001C06U) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (0x42001C08U) /**< \brief (TC2) Debug Control */
#define REG_TC2_EVCTRL             (0x42001C0AU) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (0x42001C0CU) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (0x42001C0DU) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (0x42001C0EU) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (0x42001C0FU) /**< \brief (TC2) Status */
#define REG_TC2_COUNT16_COUNT      (0x42001C10U) /**< \brief (TC2) COUNT16 Counter Value */
#define REG_TC2_COUNT16_CC0        (0x42001C18U) /**< \brief (TC2) COUNT16 Compare/Capture 0 */
#define REG_TC2_COUNT16_CC1        (0x42001C1AU) /**< \brief (TC2) COUNT16 Compare/Capture 1 */
#define REG_TC2_COUNT32_COUNT      (0x42001C10U) /**< \brief (TC2) COUNT32 Counter Value */
#define REG_TC2_COUNT32_CC0        (0x42001C18U) /**< \brief (TC2) COUNT32 Compare/Capture 0 */
#define REG_TC2_COUNT32_CC1        (0x42001C1CU) /**< \brief (TC2) COUNT32 Compare/Capture 1 */
#define REG_TC2_COUNT8_COUNT       (0x42001C10U) /**< \brief (TC2) COUNT8 Counter Value */
#define REG_TC2_COUNT8_PER         (0x42001C14U) /**< \brief (TC2) COUNT8 Period Value */
#define REG_TC2_COUNT8_CC0         (0x42001C18U) /**< \brief (TC2) COUNT8 Compare/Capture 0 */
#define REG_TC2_COUNT8_CC1         (0x42001C19U) /**< \brief (TC2) COUNT8 Compare/Capture 1 */
#else
#define REG_TC2_CTRLA              (*(RwReg16*)0x42001C00U) /**< \brief (TC2) Control A */
#define REG_TC2_READREQ            (*(RwReg16*)0x42001C02U) /**< \brief (TC2) Read Request */
#define REG_TC2_CTRLBCLR           (*(RwReg8 *)0x42001C04U) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (*(RwReg8 *)0x42001C05U) /**< \brief (TC2) Control B Set */
#define REG_TC2_CTRLC              (*(RwReg8 *)0x42001C06U) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (*(RwReg8 *)0x42001C08U) /**< \brief (TC2) Debug Control */
#define REG_TC2_EVCTRL             (*(RwReg16*)0x42001C0AU) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (*(RwReg8 *)0x42001C0CU) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (*(RwReg8 *)0x42001C0DU) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (*(RwReg8 *)0x42001C0EU) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (*(RoReg8 *)0x42001C0FU) /**< \brief (TC2) Status */
#define REG_TC2_COUNT16_COUNT      (*(RwReg16*)0x42001C10U) /**< \brief (TC2) COUNT16 Counter Value */
#define REG_TC2_COUNT16_CC0        (*(RwReg16*)0x42001C18U) /**< \brief (TC2) COUNT16 Compare/Capture 0 */
#define REG_TC2_COUNT16_CC1        (*(RwReg16*)0x42001C1AU) /**< \brief (TC2) COUNT16 Compare/Capture 1 */
#define REG_TC2_COUNT32_COUNT      (*(RwReg  *)0x42001C10U) /**< \brief (TC2) COUNT32 Counter Value */
#define REG_TC2_COUNT32_CC0        (*(RwReg  *)0x42001C18U) /**< \brief (TC2) COUNT32 Compare/Capture 0 */
#define REG_TC2_COUNT32_CC1        (*(RwReg  *)0x42001C1CU) /**< \brief (TC2) COUNT32 Compare/Capture 1 */
#define REG_TC2_COUNT8_COUNT       (*(RwReg8 *)0x42001C10U) /**< \brief (TC2) COUNT8 Counter Value */
#define REG_TC2_COUNT8_PER         (*(RwReg8 *)0x42001C14U) /**< \brief (TC2) COUNT8 Period Value */
#define REG_TC2_COUNT8_CC0         (*(RwReg8 *)0x42001C18U) /**< \brief (TC2) COUNT8 Compare/Capture 0 */
#define REG_TC2_COUNT8_CC1         (*(RwReg8 *)0x42001C19U) /**< \brief (TC2) COUNT8 Compare/Capture 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC2 peripheral ========== */
#define TC2_CC8_NUM                 2        // Number of 8-bit Counters
#define TC2_CC16_NUM                2        // Number of 16-bit Counters
#define TC2_CC32_NUM                2        // Number of 32-bit Counters
#define TC2_DITHERING_EXT           0        // Dithering feature implemented
#define TC2_DMAC_ID_MC_0            16
#define TC2_DMAC_ID_MC_1            17
#define TC2_DMAC_ID_MC_LSB          16
#define TC2_DMAC_ID_MC_MSB          17
#define TC2_DMAC_ID_MC_SIZE         2
#define TC2_DMAC_ID_OVF             15       // Indexes of DMA Overflow trigger
#define TC2_GCLK_ID                 18       // Index of Generic Clock
#define TC2_MASTER                  0       
#define TC2_OW_NUM                  2        // Number of Output Waveforms
#define TC2_PERIOD_EXT              0        // Period feature implemented
#define TC2_SHADOW_EXT              0        // Shadow feature implemented

#endif /* _SAMD11_TC2_INSTANCE_ */
