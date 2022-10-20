/*
 * Copyright 1997-2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*!
 * @file S32Z27_MSG_DESCRIPTORS.h
 * @version 1.7
 * @date 2022-03-16
 * @brief Peripheral Access Layer for S32Z27_MSG_DESCRIPTORS
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32Z27_MSG_DESCRIPTORS_H_)  /* Check if memory map has not been already included */
#define S32Z27_MSG_DESCRIPTORS_H_

#include "S32Z27_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MSG_DESCRIPTORS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MSG_DESCRIPTORS_Peripheral_Access_Layer MSG_DESCRIPTORS Peripheral Access Layer
 * @{
 */

/** MSG_DESCRIPTORS - Size of Registers Arrays */
#define MSG_DESCRIPTORS_MSGDSC_COUNT              128u

/** MSG_DESCRIPTORS - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x20 */
    union {                                          /* offset: 0x0, array step: 0x20 */
      __IO uint32_t RXCTRL;                            /**< Message Descriptor Control (In Rx Mode), array offset: 0x0, array step: 0x20 */
    } CTRL;
    union {                                          /* offset: 0x4, array step: 0x20 */
      __IO uint32_t MDFLT1FD;                          /**< Message Descriptor Filter Configuration 1 (In Rx Mode/In FD Mode), array offset: 0x4, array step: 0x20 */
      __IO uint32_t MDFLT1XL;                          /**< Message Descriptor Filter Configuration 1 (In Rx Mode/In XL Mode), array offset: 0x4, array step: 0x20 */
    } CFG1;
    union {                                          /* offset: 0x8, array step: 0x20 */
      __IO uint32_t MDFLT2FD;                          /**< Message Descriptor Filter Configuration 2 (In Rx Mode/In FD Mode), array offset: 0x8, array step: 0x20 */
      __IO uint32_t MDFLT2XL;                          /**< Message Descriptor Filter Configuration 2 (In Rx Mode/In XL Mode), array offset: 0x8, array step: 0x20 */
    } CFG2;
    union {                                          /* offset: 0xC, array step: 0x20 */
      __IO uint32_t RXLSTPTR;                          /**< Message List Pointer (In Rx Mode), array offset: 0xC, array step: 0x20 */
      __IO uint32_t TXLSTPTR;                          /**< Message List Pointer (In Tx Mode), array offset: 0xC, array step: 0x20 */
    } LSTPNT;
    uint8_t RESERVED_0[16];
  } MSGDSC[MSG_DESCRIPTORS_MSGDSC_COUNT];
} MSG_DESCRIPTORS_Type, *MSG_DESCRIPTORS_MemMapPtr;

/** Number of instances of the MSG_DESCRIPTORS module. */
#define MSG_DESCRIPTORS_INSTANCE_COUNT           (2u)

/* MSG_DESCRIPTORS - Peripheral instance base addresses */
/** Peripheral CANXL_0__MSG_DESCRIPTORS base address */
#define IP_CANXL_0__MSG_DESCRIPTORS_BASE         (0x47420000u)
/** Peripheral CANXL_0__MSG_DESCRIPTORS base pointer */
#define IP_CANXL_0__MSG_DESCRIPTORS              ((MSG_DESCRIPTORS_Type *)IP_CANXL_0__MSG_DESCRIPTORS_BASE)
/** Peripheral CANXL_1__MSG_DESCRIPTORS base address */
#define IP_CANXL_1__MSG_DESCRIPTORS_BASE         (0x47520000u)
/** Peripheral CANXL_1__MSG_DESCRIPTORS base pointer */
#define IP_CANXL_1__MSG_DESCRIPTORS              ((MSG_DESCRIPTORS_Type *)IP_CANXL_1__MSG_DESCRIPTORS_BASE)
/** Array initializer of MSG_DESCRIPTORS peripheral base addresses */
#define IP_MSG_DESCRIPTORS_BASE_ADDRS            { IP_CANXL_0__MSG_DESCRIPTORS_BASE, IP_CANXL_1__MSG_DESCRIPTORS_BASE }
/** Array initializer of MSG_DESCRIPTORS peripheral base pointers */
#define IP_MSG_DESCRIPTORS_BASE_PTRS             { IP_CANXL_0__MSG_DESCRIPTORS, IP_CANXL_1__MSG_DESCRIPTORS }

/* ----------------------------------------------------------------------------
   -- MSG_DESCRIPTORS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MSG_DESCRIPTORS_Register_Masks MSG_DESCRIPTORS Register Masks
 * @{
 */

/*! @name RXCTRL - Message Descriptor Control (In Rx Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_RXCTRL_MBSIZE_MASK       (0x7FF00U)
#define MSG_DESCRIPTORS_RXCTRL_MBSIZE_SHIFT      (8U)
#define MSG_DESCRIPTORS_RXCTRL_MBSIZE_WIDTH      (11U)
#define MSG_DESCRIPTORS_RXCTRL_MBSIZE(x)         (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_MBSIZE_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_MBSIZE_MASK)

#define MSG_DESCRIPTORS_RXCTRL_ADDRROA_MASK      (0x100000U)
#define MSG_DESCRIPTORS_RXCTRL_ADDRROA_SHIFT     (20U)
#define MSG_DESCRIPTORS_RXCTRL_ADDRROA_WIDTH     (1U)
#define MSG_DESCRIPTORS_RXCTRL_ADDRROA(x)        (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_ADDRROA_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_ADDRROA_MASK)

#define MSG_DESCRIPTORS_RXCTRL_SDUROA_MASK       (0x200000U)
#define MSG_DESCRIPTORS_RXCTRL_SDUROA_SHIFT      (21U)
#define MSG_DESCRIPTORS_RXCTRL_SDUROA_WIDTH      (1U)
#define MSG_DESCRIPTORS_RXCTRL_SDUROA(x)         (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_SDUROA_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_SDUROA_MASK)

#define MSG_DESCRIPTORS_RXCTRL_VCANROA_MASK      (0x400000U)
#define MSG_DESCRIPTORS_RXCTRL_VCANROA_SHIFT     (22U)
#define MSG_DESCRIPTORS_RXCTRL_VCANROA_WIDTH     (1U)
#define MSG_DESCRIPTORS_RXCTRL_VCANROA(x)        (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_VCANROA_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_VCANROA_MASK)

#define MSG_DESCRIPTORS_RXCTRL_KEEPLST_MASK      (0x1000000U)
#define MSG_DESCRIPTORS_RXCTRL_KEEPLST_SHIFT     (24U)
#define MSG_DESCRIPTORS_RXCTRL_KEEPLST_WIDTH     (1U)
#define MSG_DESCRIPTORS_RXCTRL_KEEPLST(x)        (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_KEEPLST_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_KEEPLST_MASK)

#define MSG_DESCRIPTORS_RXCTRL_RXFDFRM_MASK      (0x20000000U)
#define MSG_DESCRIPTORS_RXCTRL_RXFDFRM_SHIFT     (29U)
#define MSG_DESCRIPTORS_RXCTRL_RXFDFRM_WIDTH     (1U)
#define MSG_DESCRIPTORS_RXCTRL_RXFDFRM(x)        (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_RXFDFRM_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_RXFDFRM_MASK)

#define MSG_DESCRIPTORS_RXCTRL_RXXLFRM_MASK      (0x40000000U)
#define MSG_DESCRIPTORS_RXCTRL_RXXLFRM_SHIFT     (30U)
#define MSG_DESCRIPTORS_RXCTRL_RXXLFRM_WIDTH     (1U)
#define MSG_DESCRIPTORS_RXCTRL_RXXLFRM(x)        (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_RXXLFRM_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_RXXLFRM_MASK)

#define MSG_DESCRIPTORS_RXCTRL_MODE_MASK         (0x80000000U)
#define MSG_DESCRIPTORS_RXCTRL_MODE_SHIFT        (31U)
#define MSG_DESCRIPTORS_RXCTRL_MODE_WIDTH        (1U)
#define MSG_DESCRIPTORS_RXCTRL_MODE(x)           (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXCTRL_MODE_SHIFT)) & MSG_DESCRIPTORS_RXCTRL_MODE_MASK)
/*! @} */

/*! @name MDFLT1FD - Message Descriptor Filter Configuration 1 (In Rx Mode/In FD Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_MDFLT1FD_IDEXTa_L_MASK   (0x3FFFFU)
#define MSG_DESCRIPTORS_MDFLT1FD_IDEXTa_L_SHIFT  (0U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDEXTa_L_WIDTH  (18U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDEXTa_L(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1FD_IDEXTa_L_SHIFT)) & MSG_DESCRIPTORS_MDFLT1FD_IDEXTa_L_MASK)

#define MSG_DESCRIPTORS_MDFLT1FD_IDSTDa_L_MASK   (0x1FFC0000U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDSTDa_L_SHIFT  (18U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDSTDa_L_WIDTH  (11U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDSTDa_L(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1FD_IDSTDa_L_SHIFT)) & MSG_DESCRIPTORS_MDFLT1FD_IDSTDa_L_MASK)

#define MSG_DESCRIPTORS_MDFLT1FD_MSKRNG_MASK     (0x20000000U)
#define MSG_DESCRIPTORS_MDFLT1FD_MSKRNG_SHIFT    (29U)
#define MSG_DESCRIPTORS_MDFLT1FD_MSKRNG_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1FD_MSKRNG(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1FD_MSKRNG_SHIFT)) & MSG_DESCRIPTORS_MDFLT1FD_MSKRNG_MASK)

#define MSG_DESCRIPTORS_MDFLT1FD_IDEMSK_MASK     (0x40000000U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDEMSK_SHIFT    (30U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDEMSK_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1FD_IDEMSK(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1FD_IDEMSK_SHIFT)) & MSG_DESCRIPTORS_MDFLT1FD_IDEMSK_MASK)

#define MSG_DESCRIPTORS_MDFLT1FD_RTRMSK_MASK     (0x80000000U)
#define MSG_DESCRIPTORS_MDFLT1FD_RTRMSK_SHIFT    (31U)
#define MSG_DESCRIPTORS_MDFLT1FD_RTRMSK_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1FD_RTRMSK(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1FD_RTRMSK_SHIFT)) & MSG_DESCRIPTORS_MDFLT1FD_RTRMSK_MASK)
/*! @} */

/*! @name MDFLT1XL - Message Descriptor Filter Configuration 1 (In Rx Mode/In XL Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_VCAN_MASK (0x1FU)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_VCAN_SHIFT (0U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_VCAN_WIDTH (5U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_VCAN(x)   (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_ACCPT_VCAN_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_ACCPT_VCAN_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_SDU_MASK  (0x3E0U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_SDU_SHIFT (5U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_SDU_WIDTH (5U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_SDU(x)    (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_ACCPT_SDU_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_ACCPT_SDU_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_ADDR_MASK (0x7C00U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_ADDR_SHIFT (10U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_ADDR_WIDTH (5U)
#define MSG_DESCRIPTORS_MDFLT1XL_ACCPT_ADDR(x)   (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_ACCPT_ADDR_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_ACCPT_ADDR_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_FBSEL_MASK      (0x10000U)
#define MSG_DESCRIPTORS_MDFLT1XL_FBSEL_SHIFT     (16U)
#define MSG_DESCRIPTORS_MDFLT1XL_FBSEL_WIDTH     (1U)
#define MSG_DESCRIPTORS_MDFLT1XL_FBSEL(x)        (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_FBSEL_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_FBSEL_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_SECMSK_MASK     (0x20000U)
#define MSG_DESCRIPTORS_MDFLT1XL_SECMSK_SHIFT    (17U)
#define MSG_DESCRIPTORS_MDFLT1XL_SECMSK_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1XL_SECMSK(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_SECMSK_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_SECMSK_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_IDSTDa_L_MASK   (0x1FFC0000U)
#define MSG_DESCRIPTORS_MDFLT1XL_IDSTDa_L_SHIFT  (18U)
#define MSG_DESCRIPTORS_MDFLT1XL_IDSTDa_L_WIDTH  (11U)
#define MSG_DESCRIPTORS_MDFLT1XL_IDSTDa_L(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_IDSTDa_L_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_IDSTDa_L_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_MSKRNG_MASK     (0x20000000U)
#define MSG_DESCRIPTORS_MDFLT1XL_MSKRNG_SHIFT    (29U)
#define MSG_DESCRIPTORS_MDFLT1XL_MSKRNG_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1XL_MSKRNG(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_MSKRNG_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_MSKRNG_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_IDEMSK_MASK     (0x40000000U)
#define MSG_DESCRIPTORS_MDFLT1XL_IDEMSK_SHIFT    (30U)
#define MSG_DESCRIPTORS_MDFLT1XL_IDEMSK_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1XL_IDEMSK(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_IDEMSK_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_IDEMSK_MASK)

#define MSG_DESCRIPTORS_MDFLT1XL_RRSMSK_MASK     (0x80000000U)
#define MSG_DESCRIPTORS_MDFLT1XL_RRSMSK_SHIFT    (31U)
#define MSG_DESCRIPTORS_MDFLT1XL_RRSMSK_WIDTH    (1U)
#define MSG_DESCRIPTORS_MDFLT1XL_RRSMSK(x)       (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT1XL_RRSMSK_SHIFT)) & MSG_DESCRIPTORS_MDFLT1XL_RRSMSK_MASK)
/*! @} */

/*! @name MDFLT2FD - Message Descriptor Filter Configuration 2 (In Rx Mode/In FD Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_MDFLT2FD_IDEXTa_H_MASK   (0x3FFFFU)
#define MSG_DESCRIPTORS_MDFLT2FD_IDEXTa_H_SHIFT  (0U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDEXTa_H_WIDTH  (18U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDEXTa_H(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2FD_IDEXTa_H_SHIFT)) & MSG_DESCRIPTORS_MDFLT2FD_IDEXTa_H_MASK)

#define MSG_DESCRIPTORS_MDFLT2FD_IDSTDa_H_MASK   (0x1FFC0000U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDSTDa_H_SHIFT  (18U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDSTDa_H_WIDTH  (11U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDSTDa_H(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2FD_IDSTDa_H_SHIFT)) & MSG_DESCRIPTORS_MDFLT2FD_IDSTDa_H_MASK)

#define MSG_DESCRIPTORS_MDFLT2FD_IDE_MASK        (0x40000000U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDE_SHIFT       (30U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDE_WIDTH       (1U)
#define MSG_DESCRIPTORS_MDFLT2FD_IDE(x)          (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2FD_IDE_SHIFT)) & MSG_DESCRIPTORS_MDFLT2FD_IDE_MASK)

#define MSG_DESCRIPTORS_MDFLT2FD_RTR_MASK        (0x80000000U)
#define MSG_DESCRIPTORS_MDFLT2FD_RTR_SHIFT       (31U)
#define MSG_DESCRIPTORS_MDFLT2FD_RTR_WIDTH       (1U)
#define MSG_DESCRIPTORS_MDFLT2FD_RTR(x)          (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2FD_RTR_SHIFT)) & MSG_DESCRIPTORS_MDFLT2FD_RTR_MASK)
/*! @} */

/*! @name MDFLT2XL - Message Descriptor Filter Configuration 2 (In Rx Mode/In XL Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_VCAN_MASK  (0x1FU)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_VCAN_SHIFT (0U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_VCAN_WIDTH (5U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_VCAN(x)    (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_RJCT_VCAN_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_RJCT_VCAN_MASK)

#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_SDU_MASK   (0x3E0U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_SDU_SHIFT  (5U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_SDU_WIDTH  (5U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_SDU(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_RJCT_SDU_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_RJCT_SDU_MASK)

#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_ADDR_MASK  (0x7C00U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_ADDR_SHIFT (10U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_ADDR_WIDTH (5U)
#define MSG_DESCRIPTORS_MDFLT2XL_RJCT_ADDR(x)    (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_RJCT_ADDR_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_RJCT_ADDR_MASK)

#define MSG_DESCRIPTORS_MDFLT2XL_SEC_MASK        (0x20000U)
#define MSG_DESCRIPTORS_MDFLT2XL_SEC_SHIFT       (17U)
#define MSG_DESCRIPTORS_MDFLT2XL_SEC_WIDTH       (1U)
#define MSG_DESCRIPTORS_MDFLT2XL_SEC(x)          (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_SEC_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_SEC_MASK)

#define MSG_DESCRIPTORS_MDFLT2XL_IDSTDa_H_MASK   (0x1FFC0000U)
#define MSG_DESCRIPTORS_MDFLT2XL_IDSTDa_H_SHIFT  (18U)
#define MSG_DESCRIPTORS_MDFLT2XL_IDSTDa_H_WIDTH  (11U)
#define MSG_DESCRIPTORS_MDFLT2XL_IDSTDa_H(x)     (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_IDSTDa_H_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_IDSTDa_H_MASK)

#define MSG_DESCRIPTORS_MDFLT2XL_IDE_MASK        (0x40000000U)
#define MSG_DESCRIPTORS_MDFLT2XL_IDE_SHIFT       (30U)
#define MSG_DESCRIPTORS_MDFLT2XL_IDE_WIDTH       (1U)
#define MSG_DESCRIPTORS_MDFLT2XL_IDE(x)          (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_IDE_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_IDE_MASK)

#define MSG_DESCRIPTORS_MDFLT2XL_RRS_MASK        (0x80000000U)
#define MSG_DESCRIPTORS_MDFLT2XL_RRS_SHIFT       (31U)
#define MSG_DESCRIPTORS_MDFLT2XL_RRS_WIDTH       (1U)
#define MSG_DESCRIPTORS_MDFLT2XL_RRS(x)          (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_MDFLT2XL_RRS_SHIFT)) & MSG_DESCRIPTORS_MDFLT2XL_RRS_MASK)
/*! @} */

/*! @name RXLSTPTR - Message List Pointer (In Rx Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_RXLSTPTR_RXLST_POINTER_MASK (0xFFFFFFFFU)
#define MSG_DESCRIPTORS_RXLSTPTR_RXLST_POINTER_SHIFT (0U)
#define MSG_DESCRIPTORS_RXLSTPTR_RXLST_POINTER_WIDTH (32U)
#define MSG_DESCRIPTORS_RXLSTPTR_RXLST_POINTER(x) (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_RXLSTPTR_RXLST_POINTER_SHIFT)) & MSG_DESCRIPTORS_RXLSTPTR_RXLST_POINTER_MASK)
/*! @} */

/*! @name TXLSTPTR - Message List Pointer (In Tx Mode) */
/*! @{ */

#define MSG_DESCRIPTORS_TXLSTPTR_TXLST_POINTER_MASK (0xFFFFFFFFU)
#define MSG_DESCRIPTORS_TXLSTPTR_TXLST_POINTER_SHIFT (0U)
#define MSG_DESCRIPTORS_TXLSTPTR_TXLST_POINTER_WIDTH (32U)
#define MSG_DESCRIPTORS_TXLSTPTR_TXLST_POINTER(x) (((uint32_t)(((uint32_t)(x)) << MSG_DESCRIPTORS_TXLSTPTR_TXLST_POINTER_SHIFT)) & MSG_DESCRIPTORS_TXLSTPTR_TXLST_POINTER_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MSG_DESCRIPTORS_Register_Masks */

/*!
 * @}
 */ /* end of group MSG_DESCRIPTORS_Peripheral_Access_Layer */

#endif  /* #if !defined(S32Z27_MSG_DESCRIPTORS_H_) */