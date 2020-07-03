//
// Copyright (c) 2018 NVIDIA Corporation.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution.
//
// Neither the name of the NVIDIA Corporation nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

//
// DO NOT EDIT - generated by simspec!
//

#ifndef ___ARUPHY_PLL_H_INC_
#define ___ARUPHY_PLL_H_INC_
#define NV_MOBILE_ARUPHY_PLL_H_UNIT_OF_OFFSET 1B

// Register UPHY_PLL_CTL_1_0
#define UPHY_PLL_CTL_1_0                        _MK_ADDR_CONST(0x0)
#define UPHY_PLL_CTL_1_0_SECURE                         0x0
#define UPHY_PLL_CTL_1_0_DUAL                   0x0
#define UPHY_PLL_CTL_1_0_SCR                    0
#define UPHY_PLL_CTL_1_0_WORD_COUNT                     0x1
#define UPHY_PLL_CTL_1_0_RESET_VAL                      _MK_MASK_CONST(0x17)
#define UPHY_PLL_CTL_1_0_RESET_MASK                     _MK_MASK_CONST(0x1118b9f)
#define UPHY_PLL_CTL_1_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_READ_MASK                      _MK_MASK_CONST(0x1118b9f)
#define UPHY_PLL_CTL_1_0_WRITE_MASK                     _MK_MASK_CONST(0x1110b9f)
#define UPHY_PLL_CTL_1_0_IDDQ_SHIFT                     _MK_SHIFT_CONST(0)
#define UPHY_PLL_CTL_1_0_IDDQ_FIELD                     _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_IDDQ_SHIFT)
#define UPHY_PLL_CTL_1_0_IDDQ_RANGE                     0:0
#define UPHY_PLL_CTL_1_0_IDDQ_WOFFSET                   0x0
#define UPHY_PLL_CTL_1_0_IDDQ_DEFAULT                   _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_IDDQ_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_IDDQ_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_IDDQ_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_IDDQ_PARITY_PROTECTION                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_IDDQ_PLATFORM_DEPENDENT                        _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_SLEEP_SHIFT                    _MK_SHIFT_CONST(1)
#define UPHY_PLL_CTL_1_0_SLEEP_FIELD                    _MK_FIELD_CONST(0x3, UPHY_PLL_CTL_1_0_SLEEP_SHIFT)
#define UPHY_PLL_CTL_1_0_SLEEP_RANGE                    2:1
#define UPHY_PLL_CTL_1_0_SLEEP_WOFFSET                  0x0
#define UPHY_PLL_CTL_1_0_SLEEP_DEFAULT                  _MK_MASK_CONST(0x3)
#define UPHY_PLL_CTL_1_0_SLEEP_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define UPHY_PLL_CTL_1_0_SLEEP_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_SLEEP_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_SLEEP_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_SLEEP_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_ENABLE_SHIFT                   _MK_SHIFT_CONST(3)
#define UPHY_PLL_CTL_1_0_ENABLE_FIELD                   _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_ENABLE_SHIFT)
#define UPHY_PLL_CTL_1_0_ENABLE_RANGE                   3:3
#define UPHY_PLL_CTL_1_0_ENABLE_WOFFSET                 0x0
#define UPHY_PLL_CTL_1_0_ENABLE_DEFAULT                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_ENABLE_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_ENABLE_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_ENABLE_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_ENABLE_PARITY_PROTECTION                       _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_ENABLE_PLATFORM_DEPENDENT                      _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_PWR_OVRD_SHIFT                 _MK_SHIFT_CONST(4)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_FIELD                 _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_PWR_OVRD_SHIFT)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_RANGE                 4:4
#define UPHY_PLL_CTL_1_0_PWR_OVRD_WOFFSET                       0x0
#define UPHY_PLL_CTL_1_0_PWR_OVRD_DEFAULT                       _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_PARITY_PROTECTION                     _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_PWR_OVRD_PLATFORM_DEPENDENT                    _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_BYPASS_EN_SHIFT                        _MK_SHIFT_CONST(7)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_FIELD                        _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_BYPASS_EN_SHIFT)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_RANGE                        7:7
#define UPHY_PLL_CTL_1_0_BYPASS_EN_WOFFSET                      0x0
#define UPHY_PLL_CTL_1_0_BYPASS_EN_DEFAULT                      _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_PARITY_PROTECTION                    _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_BYPASS_EN_PLATFORM_DEPENDENT                   _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_RATE_ID_SHIFT                  _MK_SHIFT_CONST(8)
#define UPHY_PLL_CTL_1_0_RATE_ID_FIELD                  _MK_FIELD_CONST(0x3, UPHY_PLL_CTL_1_0_RATE_ID_SHIFT)
#define UPHY_PLL_CTL_1_0_RATE_ID_RANGE                  9:8
#define UPHY_PLL_CTL_1_0_RATE_ID_WOFFSET                        0x0
#define UPHY_PLL_CTL_1_0_RATE_ID_DEFAULT                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_DEFAULT_MASK                   _MK_MASK_CONST(0x3)
#define UPHY_PLL_CTL_1_0_RATE_ID_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_PARITY_PROTECTION                      _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_PLATFORM_DEPENDENT                     _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_SHIFT                     _MK_SHIFT_CONST(11)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_FIELD                     _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_RATE_ID_OVRD_SHIFT)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_RANGE                     11:11
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_WOFFSET                   0x0
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_DEFAULT                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_PARITY_PROTECTION                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_RATE_ID_OVRD_PLATFORM_DEPENDENT                        _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_SHIFT                   _MK_SHIFT_CONST(15)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_FIELD                   _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_LOCKDET_STATUS_SHIFT)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_RANGE                   15:15
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_WOFFSET                 0x0
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_DEFAULT                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_PARITY_PROTECTION                       _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_LOCKDET_STATUS_PLATFORM_DEPENDENT                      _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_SHIFT                     _MK_SHIFT_CONST(16)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_FIELD                     _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_REFCLKBUF_EN_SHIFT)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_RANGE                     16:16
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_WOFFSET                   0x0
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_DEFAULT                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_PARITY_PROTECTION                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLKBUF_EN_PLATFORM_DEPENDENT                        _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_SHIFT                       _MK_SHIFT_CONST(20)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_FIELD                       _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_TCLKOUT_EN_SHIFT)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_RANGE                       20:20
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_WOFFSET                     0x0
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_DEFAULT                     _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_PARITY_PROTECTION                   _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_TCLKOUT_EN_PLATFORM_DEPENDENT                  _MK_MASK_CONST(0x1)

#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_SHIFT                   _MK_SHIFT_CONST(24)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_FIELD                   _MK_FIELD_CONST(0x1, UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_SHIFT)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_RANGE                   24:24
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_WOFFSET                 0x0
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_DEFAULT                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_PARITY_PROTECTION                       _MK_MASK_CONST(0x0)
#define UPHY_PLL_CTL_1_0_REFCLK_CFG_SEL_PLATFORM_DEPENDENT                      _MK_MASK_CONST(0x1)

//
// REGISTER LIST
//
#define LIST_ARUPHY_PLL_REGS(_op_) \
_op_(UPHY_PLL_CTL_1_0) \

//
// ADDRESS SPACES
//

#define BASE_ADDRESS_UPHY_PLL   0x00000000

//
// ARUPHY_PLL REGISTER BANKS
//

#define UPHY_PLL0_FIRST_REG 0x0000 // UPHY_PLL_CTL_1_0

// To satisfy various compilers and platforms,
// we let users control the types and syntax of certain constants, using macros.
#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif
#ifndef _MK_FIELD_CONST
  #define _MK_FIELD_CONST(_mask_, _shift_) (_MK_MASK_CONST(_mask_) << _MK_SHIFT_CONST(_shift_))
#endif

#endif // ifndef ___ARUPHY_PLL_H_INC_
