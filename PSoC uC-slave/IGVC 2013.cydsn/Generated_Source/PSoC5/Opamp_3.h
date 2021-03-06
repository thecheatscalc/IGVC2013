/*******************************************************************************
* File Name: Opamp_3.h  
* Version 1.70
*
* Description:
*  This file contains the function prototypes and constants used in
*  the OpAmp (Analog Buffer) Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2011, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_OPAMP_Opamp_3_H) 
#define CY_OPAMP_Opamp_3_H 

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct _Opamp_3_backupStruct
{
    uint8   enableState;
}   Opamp_3_BACKUP_STRUCT;


/**************************************
*        Function Prototypes 
**************************************/

void Opamp_3_Start(void);
void Opamp_3_Stop(void) ;
void Opamp_3_SetPower(uint8 power) ;
void Opamp_3_Sleep(void);
void Opamp_3_Wakeup(void) ;
void Opamp_3_SaveConfig(void);
void Opamp_3_RestoreConfig(void);
void Opamp_3_Init(void) ;
void Opamp_3_Enable(void) ;


/**************************************
*           API Constants        
**************************************/

/* Power constants for SetPower() function */
#if (CY_PSOC3_ES3 || CY_PSOC5_ES2)
    #define Opamp_3_LPOCPOWER (0x00u)
    #define Opamp_3_LOWPOWER  (0x01u)
    #define Opamp_3_MEDPOWER  (0x02u)
    #define Opamp_3_HIGHPOWER (0x03u)
#else
    #define Opamp_3_LOWPOWER  (0x01u)
    #define Opamp_3_MEDPOWER  (0x02u)
    #define Opamp_3_HIGHPOWER (0x00u)
#endif

/**************************************
*           Parameter Defaults        
**************************************/
#if (CY_PSOC3_ES3 || CY_PSOC5_ES2)
    #define Opamp_3_DEFAULT_POWER    (3u)
#endif

#if (CY_PSOC3_ES2 || CY_PSOC5_ES1)
    #if (3u == 0)
        #error "Low Power Over Compensated Mode is not supported on ES2 silicon. Please select another default power setting"
    #elif (3u == 3)
        #define Opamp_3_DEFAULT_POWER (0u)
    #else
        #define Opamp_3_DEFAULT_POWER (3u)
    #endif
#endif

#define Opamp_3_DEFAULT_MODE     (1u)


/**************************************
*             Registers        
**************************************/

#define Opamp_3_CR_REG        (* (reg8 *) Opamp_3_ABuf__CR)
#define Opamp_3_CR_PTR        (  (reg8 *) Opamp_3_ABuf__CR)

#define Opamp_3_MX_REG        (* (reg8 *) Opamp_3_ABuf__MX)
#define Opamp_3_MX_PTR        (  (reg8 *) Opamp_3_ABuf__MX)

#define Opamp_3_SW_REG        (* (reg8 *) Opamp_3_ABuf__SW)
#define Opamp_3_SW_PTR        (  (reg8 *) Opamp_3_ABuf__SW)

/* Active mode power manager register */
#define Opamp_3_PM_ACT_CFG_REG    (* (reg8 *) Opamp_3_ABuf__PM_ACT_CFG)
#define Opamp_3_PM_ACT_CFG_PTR    (  (reg8 *) Opamp_3_ABuf__PM_ACT_CFG)

/* Alternative mode power manager register */
#define Opamp_3_PM_STBY_CFG_REG    (* (reg8 *) Opamp_3_ABuf__PM_STBY_CFG)
#define Opamp_3_PM_STBY_CFG_PTR    (  (reg8 *) Opamp_3_ABuf__PM_STBY_CFG)

/* ANIF.PUMP.CR1 Pump Configuration Register 1 */
#define Opamp_3_PUMP_CR1_REG  (* (reg8 *) CYDEV_ANAIF_CFG_PUMP_CR1)
#define Opamp_3_PUMP_CR1_PTR  (  (reg8 *) CYDEV_ANAIF_CFG_PUMP_CR1)

/* Trim register defines */
#define Opamp_3_TRO_REG       (* (reg8 *) Opamp_3_ABuf__TR0)
#define Opamp_3_TRO_PTR       (  (reg8 *) Opamp_3_ABuf__TR0)

#define Opamp_3_TR1_REG       (* (reg8 *) Opamp_3_ABuf__TR1)
#define Opamp_3_TR1_PTR       (  (reg8 *) Opamp_3_ABuf__TR1)

/* PM_ACT_CFG (Active Power Mode CFG Register) mask */ 
#define Opamp_3_ACT_PWR_EN   Opamp_3_ABuf__PM_ACT_MSK 

/* PM_STBY_CFG (Alternative Active Power Mode CFG Register) mask */ 
#define Opamp_3_STBY_PWR_EN   Opamp_3_ABuf__PM_STBY_MSK 


/**************************************
*       Register Constants        
**************************************/

/* CX Analog Buffer Input Selection Register */

/* Power mode defines */
#define Opamp_3_PWR_MASK           (0x03u)
#if (CY_PSOC3_ES3 || CY_PSOC5_ES2)
    #define Opamp_3_PWR_LPOC        (0x00u)
    #define Opamp_3_PWR_LOW         (0x01u)
    #define Opamp_3_PWR_MEDIUM      (0x02u)
    #define Opamp_3_PWR_HIGH        (0x03u)
#else
    #define Opamp_3_PWR_LOW         (0x01u)
    #define Opamp_3_PWR_MEDIUM      (0x02u)
    #define Opamp_3_PWR_HIGH        (0x00u)
#endif

/* MX Analog Buffer Input Selection Register */

/* Bit Field  MX_VN */
#define Opamp_3_MX_VN_MASK       (0x30u)
#define Opamp_3_MX_VN_NC         (0x00u)
#define Opamp_3_MX_VN_AG4        (0x10u)
#define Opamp_3_MX_VN_AG6        (0x20u)

/* Bit Field  MX_VP */
#define Opamp_3_MX_VP_MASK       (0x0Fu)
#define Opamp_3_MX_VP_NC         (0x00u)
#define Opamp_3_MX_VP_VREF       (0x09u)
#define Opamp_3_MX_VP_AG4        (0x01u)
#define Opamp_3_MX_VP_AG5        (0x02u)
#define Opamp_3_MX_VP_AG6        (0x03u)
#define Opamp_3_MX_VP_AG7        (0x04u)
#define Opamp_3_MX_VP_ABUS0      (0x05u)
#define Opamp_3_MX_VP_ABUS1      (0x06u)
#define Opamp_3_MX_VP_ABUS2      (0x07u)
#define Opamp_3_MX_VP_ABUS3      (0x08u)

/* SW Analog Buffer Routing Switch Reg */

/* Bit Field  SW */
#define Opamp_3_SW_MASK          (0x07u) 
#define Opamp_3_SW_SWINP         (0x04u)  /* Enable positive input */
#define Opamp_3_SW_SWINN         (0x02u)  /* Enable negative input */

/* Pump configuration register masks */
#define Opamp_3_PUMP_CR1_CLKSEL  (0x40u)
#define Opamp_3_PUMP_CR1_FORCE   (0x20u)
#define Opamp_3_PUMP_CR1_AUTO    (0x10u)

#endif /* CY_OPAMP_Opamp_3_H */



/* [] END OF FILE */
