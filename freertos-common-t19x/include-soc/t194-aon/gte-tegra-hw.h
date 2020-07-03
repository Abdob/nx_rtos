/*
 * Copyright (c) 2016, NVIDIA CORPORATION. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of NVIDIA CORPORATION nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _GTE_TEGRA_HW_H_
#define _GTE_TEGRA_HW_H_

extern struct tegra_gte_id tegra_gte_id_aon;

//GTE Interrupt connections. For slice 0
#define NV_AON_GTE_SLICE0_IRQ_GPIO_44 0
#define NV_AON_GTE_SLICE0_IRQ_GPIO_45 1
#define NV_AON_GTE_SLICE0_IRQ_TIMER0  2
#define NV_AON_GTE_SLICE0_IRQ_TIMER1  3
#define NV_AON_GTE_SLICE0_IRQ_TIMER2  4
#define NV_AON_GTE_SLICE0_IRQ_TIMER3  5
#define NV_AON_GTE_SLICE0_IRQ_MBOX    6
#define NV_AON_GTE_SLICE0_IRQ_GPIO_46 7
#define NV_AON_GTE_SLICE0_IRQ_PMU     8
#define NV_AON_GTE_SLICE0_IRQ_DMA0    9
#define NV_AON_GTE_SLICE0_IRQ_DMA1    10
#define NV_AON_GTE_SLICE0_IRQ_DMA2    11
#define NV_AON_GTE_SLICE0_IRQ_DMA3    12
#define NV_AON_GTE_SLICE0_IRQ_DMA4    13
#define NV_AON_GTE_SLICE0_IRQ_DMA5    14
#define NV_AON_GTE_SLICE0_IRQ_DMA6    15
#define NV_AON_GTE_SLICE0_IRQ_DMA7    16
#define NV_AON_GTE_SLICE0_IRQ_I2C1    17
#define NV_AON_GTE_SLICE0_IRQ_I2C2    18
#define NV_AON_GTE_SLICE0_IRQ_I2C3    19
#define NV_AON_GTE_SLICE0_IRQ_SPI     20
#define NV_AON_GTE_SLICE0_IRQ_ACTMON  21
#define NV_AON_GTE_SLICE0_IRQ_UART_1  22
#define NV_AON_GTE_SLICE0_IRQ_UART_2  23
#define NV_AON_GTE_SLICE0_IRQ_CAN1_0  24
#define NV_AON_GTE_SLICE0_IRQ_CAN1_1  25
#define NV_AON_GTE_SLICE0_IRQ_CAN2_0  26
#define NV_AON_GTE_SLICE0_IRQ_CAN2_1  27

//GTE Interrupt connections. For slice 1
#define NV_AON_GTE_SLICE1_IRQ_LIC0   0
#define NV_AON_GTE_SLICE1_IRQ_LIC1   1
#define NV_AON_GTE_SLICE1_IRQ_LIC2   2
#define NV_AON_GTE_SLICE1_IRQ_LIC3   3
#define NV_AON_GTE_SLICE1_IRQ_NOC_ERR 4
#define NV_AON_GTE_SLICE1_IRQ_GPIO   5
#define NV_AON_GTE_SLICE1_IRQ_WAKE0  6
#define NV_AON_GTE_SLICE1_IRQ_PMC    7
#define NV_AON_GTE_SLICE1_IRQ_DMIC   8
#define NV_AON_GTE_SLICE1_IRQ_PM     9
#define NV_AON_GTE_SLICE1_IRQ_FPUINT 10
#define NV_AON_GTE_SLICE1_IRQ_AOVC   11
#define NV_AON_GTE_SLICE1_IRQ_GPIO_28 12
#define NV_AON_GTE_SLICE1_IRQ_GPIO_29 13
#define NV_AON_GTE_SLICE1_IRQ_GPIO_30 14
#define NV_AON_GTE_SLICE1_IRQ_GPIO_31 15
#define NV_AON_GTE_SLICE1_IRQ_GPIO_32 16
#define NV_AON_GTE_SLICE1_IRQ_GPIO_33 17
#define NV_AON_GTE_SLICE1_IRQ_GPIO_34 18
#define NV_AON_GTE_SLICE1_IRQ_GPIO_35 19
#define NV_AON_GTE_SLICE1_IRQ_GPIO_36 20
#define NV_AON_GTE_SLICE1_IRQ_GPIO_37 21
#define NV_AON_GTE_SLICE1_IRQ_GPIO_38 22
#define NV_AON_GTE_SLICE1_IRQ_GPIO_39 23
#define NV_AON_GTE_SLICE1_IRQ_GPIO_40 24
#define NV_AON_GTE_SLICE1_IRQ_GPIO_41 25
#define NV_AON_GTE_SLICE1_IRQ_GPIO_42 26
#define NV_AON_GTE_SLICE1_IRQ_GPIO_43 27

//GTE Interrupt connections. For slice 2
#define NV_AON_GTE_SLICE2_IRQ_GPIO_0 0
#define NV_AON_GTE_SLICE2_IRQ_GPIO_1 1
#define NV_AON_GTE_SLICE2_IRQ_GPIO_2 2
#define NV_AON_GTE_SLICE2_IRQ_GPIO_3 3
#define NV_AON_GTE_SLICE2_IRQ_GPIO_4 4
#define NV_AON_GTE_SLICE2_IRQ_GPIO_5 5
#define NV_AON_GTE_SLICE2_IRQ_GPIO_6 6
#define NV_AON_GTE_SLICE2_IRQ_GPIO_7 7
#define NV_AON_GTE_SLICE2_IRQ_GPIO_8 8
#define NV_AON_GTE_SLICE2_IRQ_GPIO_9 9
#define NV_AON_GTE_SLICE2_IRQ_GPIO_10 10
#define NV_AON_GTE_SLICE2_IRQ_GPIO_11 11
#define NV_AON_GTE_SLICE2_IRQ_GPIO_12 12
#define NV_AON_GTE_SLICE2_IRQ_GPIO_13 13
#define NV_AON_GTE_SLICE2_IRQ_GPIO_14 14
#define NV_AON_GTE_SLICE2_IRQ_GPIO_15 15
#define NV_AON_GTE_SLICE2_IRQ_GPIO_16 16
#define NV_AON_GTE_SLICE2_IRQ_GPIO_17 17
#define NV_AON_GTE_SLICE2_IRQ_GPIO_18 18
#define NV_AON_GTE_SLICE2_IRQ_GPIO_19 19
#define NV_AON_GTE_SLICE2_IRQ_GPIO_20 20
#define NV_AON_GTE_SLICE2_IRQ_GPIO_21 21
#define NV_AON_GTE_SLICE2_IRQ_GPIO_22 22
#define NV_AON_GTE_SLICE2_IRQ_GPIO_23 23
#define NV_AON_GTE_SLICE2_IRQ_GPIO_24 24
#define NV_AON_GTE_SLICE2_IRQ_GPIO_25 25
#define NV_AON_GTE_SLICE2_IRQ_GPIO_26 26
#define NV_AON_GTE_SLICE2_IRQ_GPIO_27 27

#endif
