/*******************************************************************************
* File Name: Servo.h  
* Version 2.10
*
* Description:
*  Contains the prototypes and constants for the functions available to the 
*  PWM user module.
*
* Note:
*
********************************************************************************
* Copyright 2008-2011, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cytypes.h"
#include "cyfitter.h"
#include "CyLib.h" /* For CyEnterCriticalSection() and CyExitCriticalSection() functions */

#if !defined(CY_PWM_Servo_H)
#define CY_PWM_Servo_H


/***************************************
* Conditional Compilation Parameters
***************************************/
#define Servo_Resolution 16u
#define Servo_UsingFixedFunction 0u
#define Servo_DeadBandMode 0u
#define Servo_KillModeMinTime 0u
#define Servo_KillMode 0u
#define Servo_PWMMode 1u
#define Servo_PWMModeIsCenterAligned 0u
#define Servo_DeadBandUsed 0u
#define Servo_DeadBand2_4 0u
#if !defined(Servo_PWMUDB_sSTSReg_stsreg__REMOVED)
    #define Servo_UseStatus 1u
#else
    #define Servo_UseStatus 0u
#endif
#if !defined(Servo_PWMUDB_sCTRLReg_ctrlreg__REMOVED)
    #define Servo_UseControl 1u
#else
    #define Servo_UseControl 0u
#endif
#define Servo_UseOneCompareMode 0u
#define Servo_MinimumKillTime 1u
#define Servo_EnableMode 0u

#define Servo_CompareMode1SW 0u
#define Servo_CompareMode2SW 0u

/* PSoC3 ES2 or early */
#define Servo_PSOC3_ES2   ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_3A)   && \
                                     (CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_3A_ES2))

/* PSoC5 ES1 or early */
#define Servo_PSOC5_ES1   ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_5A)   && \
                                     (CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_5A_ES1))

/* PSoC3 ES3 or later */
#define Servo_PSOC3_ES3   ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_3A)    && \
                                     (CYDEV_CHIP_REVISION_USED >= CYDEV_CHIP_REVISION_3A_ES3))

/* PSoC5 ES2 or later */
#define Servo_PSOC5_ES2   ((CYDEV_CHIP_MEMBER_USED == CYDEV_CHIP_MEMBER_5A)   && \
                                     (CYDEV_CHIP_REVISION_USED > CYDEV_CHIP_REVISION_5A_ES1))

/* Use Kill Mode Enumerated Types */
#define Servo__B_PWM__DISABLED 0
#define Servo__B_PWM__ASYNCHRONOUS 1
#define Servo__B_PWM__SINGLECYCLE 2
#define Servo__B_PWM__LATCHED 3
#define Servo__B_PWM__MINTIME 4


/* Use Dead Band Mode Enumerated Types */
#define Servo__B_PWM__DBMDISABLED 0
#define Servo__B_PWM__DBM_2_4_CLOCKS 1
#define Servo__B_PWM__DBM_256_CLOCKS 2


/* Used PWM Mode Enumerated Types */
#define Servo__B_PWM__ONE_OUTPUT 0
#define Servo__B_PWM__TWO_OUTPUTS 1
#define Servo__B_PWM__DUAL_EDGE 2
#define Servo__B_PWM__CENTER_ALIGN 3
#define Servo__B_PWM__DITHER 5
#define Servo__B_PWM__HARDWARESELECT 4


/* Used PWM Compare Mode Enumerated Types */
#define Servo__B_PWM__LESS_THAN 1
#define Servo__B_PWM__LESS_THAN_OR_EQUAL 2
#define Servo__B_PWM__GREATER_THAN 3
#define Servo__B_PWM__GREATER_THAN_OR_EQUAL_TO 4
#define Servo__B_PWM__EQUAL 0
#define Servo__B_PWM__FIRMWARE 5



/***************************************
* Data Struct Definition
***************************************/

/**************************************************************************
 * Sleep Wakeup Backup structure for PWM Component
 *************************************************************************/
typedef struct Servo_backupStruct
{
    
    uint8 PWMEnableState;
       
    #if(!Servo_UsingFixedFunction)
        #if (Servo_PSOC3_ES2 || Servo_PSOC5_ES1)
            uint16 PWMUdb;               /* PWM Current Counter value  */
            uint16 PWMPeriod;            /* PWM Current Period value   */
            #if (Servo_UseStatus)
                uint8 InterruptMaskValue;   /* PWM Current Interrupt Mask */
            #endif
            #if(Servo_UseOneCompareMode)
                uint16 PWMCompareValue;     /* PWM Current Compare value */
            #else
                uint16 PWMCompareValue1;     /* PWM Current Compare value1 */
                uint16 PWMCompareValue2;     /* PWM Current Compare value2 */
            #endif
            
            /* Backup for Deadband parameters */
            #if(Servo_DeadBandMode == Servo__B_PWM__DBM_256_CLOCKS || Servo_DeadBandMode == Servo__B_PWM__DBM_2_4_CLOCKS)
                uint8 PWMdeadBandValue; /* Dead Band Counter Current Value */
            #endif
            
            /* Backup Kill Mode Counter*/
            #if(Servo_KillModeMinTime)
                uint8 PWMKillCounterPeriod; /* Kill Mode period value */
            #endif
            
        #endif
        
        #if (Servo_PSOC3_ES3 || Servo_PSOC5_ES2)
            uint16 PWMUdb;               /* PWM Current Counter value  */
            #if(!Servo_PWMModeIsCenterAligned)
                uint16 PWMPeriod;
            #endif
            #if (Servo_UseStatus)
                uint8 InterruptMaskValue;   /* PWM Current Interrupt Mask */
            #endif
            
            /* Backup for Deadband parameters */
            #if(Servo_DeadBandMode == Servo__B_PWM__DBM_256_CLOCKS || Servo_DeadBandMode == Servo__B_PWM__DBM_2_4_CLOCKS)
                uint8 PWMdeadBandValue; /* Dead Band Counter Current Value */
            #endif
            
            /* Backup Kill Mode Counter*/
            #if(Servo_KillModeMinTime)
                uint8 PWMKillCounterPeriod; /* Kill Mode period value */
            #endif
        #endif
        
        
        /* Backup control register */
        #if(Servo_UseControl)
            uint8 PWMControlRegister; /* PWM Control Register value */
        #endif
        
    #endif 
   
}Servo_backupStruct;

/***************************************
*        Function Prototypes
 **************************************/
 
void    Servo_Start(void);
void    Servo_Stop(void) ;
#if (Servo_UseStatus || Servo_UsingFixedFunction)
    #define Servo_SetInterruptMode(interruptMode) CY_SET_REG8(Servo_STATUS_MASK_PTR, interruptMode)
    #define Servo_ReadStatusRegister() CY_GET_REG8(Servo_STATUS_PTR)
#endif
#define Servo_GetInterruptSource() Servo_ReadStatusRegister()
#if (Servo_UseControl)
    #define Servo_ReadControlRegister() CY_GET_REG8(Servo_CONTROL_PTR) 
    #define Servo_WriteControlRegister(control) CY_SET_REG8(Servo_CONTROL_PTR, control)
#endif
#if (Servo_UseOneCompareMode)
   #if (Servo_CompareMode1SW)
       void    Servo_SetCompareMode(uint8 comparemode) ;
   #endif
#else
    #if (Servo_CompareMode1SW)
        void    Servo_SetCompareMode1(uint8 comparemode) ;
    #endif
    #if (Servo_CompareMode2SW)
        void    Servo_SetCompareMode2(uint8 comparemode) ;
    #endif
#endif

#if (!Servo_UsingFixedFunction)
    uint16   Servo_ReadCounter(void) ;
    #define Servo_ReadCapture() CY_GET_REG16(Servo_CAPTURE_LSB_PTR)
    #if (Servo_UseStatus)
        void Servo_ClearFIFO(void) ;
    #endif
#endif

void    Servo_WriteCounter(uint16 counter) ;
void    Servo_WritePeriod(uint16 period) ;
#define Servo_ReadPeriod() CY_GET_REG16(Servo_PERIOD_LSB_PTR) 
#if (Servo_UseOneCompareMode)
    void    Servo_WriteCompare(uint16 compare) ;
    #define Servo_ReadCompare() CY_GET_REG16(Servo_COMPARE1_LSB_PTR) 
#else
    void    Servo_WriteCompare1(uint16 compare) ;
    #define Servo_ReadCompare1() CY_GET_REG16(Servo_COMPARE1_LSB_PTR) 
    void    Servo_WriteCompare2(uint16 compare) ;
    #define Servo_ReadCompare2() CY_GET_REG16(Servo_COMPARE2_LSB_PTR) 
#endif


#if (Servo_DeadBandUsed)
    void    Servo_WriteDeadTime(uint8 deadtime) ;
    uint8   Servo_ReadDeadTime(void) ;
#endif

#if ( Servo_KillModeMinTime)
    #define Servo_WriteKillTime(killtime) CY_SET_REG8(Servo_KILLMODEMINTIME_PTR, killtime) 
    #define Servo_ReadKillTime() CY_GET_REG8(Servo_KILLMODEMINTIME_PTR) 
#endif

void Servo_Init(void) ;
void Servo_Enable(void) ;
void Servo_Sleep(void);
void Servo_Wakeup(void) ;
void Servo_SaveConfig(void);
void Servo_RestoreConfig(void) ;


/***************************************
*         Initialization Values
**************************************/
#define Servo_INIT_PERIOD_VALUE        30000u
#define Servo_INIT_COMPARE_VALUE1      3000u
#define Servo_INIT_COMPARE_VALUE2      3000u
#define Servo_INIT_INTERRUPTS_MODE     ((0u << Servo_STATUS_TC_INT_EN_MASK_SHIFT) | (0 << Servo_STATUS_CMP2_INT_EN_MASK_SHIFT) | (0 << Servo_STATUS_CMP1_INT_EN_MASK_SHIFT ) | (0 << Servo_STATUS_KILL_INT_EN_MASK_SHIFT ))
#define Servo_DEFAULT_COMPARE2_MODE    (1u << Servo_CTRL_CMPMODE2_SHIFT)
#define Servo_DEFAULT_COMPARE1_MODE    (1u << Servo_CTRL_CMPMODE1_SHIFT)
#define Servo_INIT_DEAD_TIME           1u


/********************************
*         Registers
******************************** */

#if (Servo_UsingFixedFunction)
   #define Servo_PERIOD_LSB          (*(reg16 *) Servo_PWMHW__PER0)
   #define Servo_PERIOD_LSB_PTR      ( (reg16 *) Servo_PWMHW__PER0)
   #define Servo_COMPARE1_LSB        (*(reg16 *) Servo_PWMHW__CNT_CMP0)
   #define Servo_COMPARE1_LSB_PTR    ( (reg16 *) Servo_PWMHW__CNT_CMP0)
   #define Servo_COMPARE2_LSB        0x00u
   #define Servo_COMPARE2_LSB_PTR    0x00u
   #define Servo_COUNTER_LSB         (*(reg16 *) Servo_PWMHW__CNT_CMP0)
   #define Servo_COUNTER_LSB_PTR     ( (reg16 *) Servo_PWMHW__CNT_CMP0)
   #define Servo_CAPTURE_LSB         (*(reg16 *) Servo_PWMHW__CAP0)
   #define Servo_CAPTURE_LSB_PTR     ( (reg16 *) Servo_PWMHW__CAP0)
   #define Servo_RT1                 (*(reg8 *)  Servo_PWMHW__RT1)
   #define Servo_RT1_PTR             ( (reg8 *)  Servo_PWMHW__RT1)
      
#else
   #if(Servo_PWMModeIsCenterAligned)
       #define Servo_PERIOD_LSB      (*(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__D1_REG)
       #define Servo_PERIOD_LSB_PTR   ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__D1_REG)
   #else
       #define Servo_PERIOD_LSB      (*(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__F0_REG)
       #define Servo_PERIOD_LSB_PTR   ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__F0_REG)
   #endif
   #define Servo_COMPARE1_LSB    (*(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__D0_REG)
   #define Servo_COMPARE1_LSB_PTR ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__D0_REG)
   #define Servo_COMPARE2_LSB    (*(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__D1_REG)
   #define Servo_COMPARE2_LSB_PTR ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__D1_REG)
   #define Servo_COUNTERCAP_LSB   *(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__A1_REG)
   #define Servo_COUNTERCAP_LSB_PTR ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__A1_REG)
   #define Servo_COUNTER_LSB     (*(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__A0_REG)
   #define Servo_COUNTER_LSB_PTR  ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__A0_REG)
   #define Servo_CAPTURE_LSB     (*(reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__F1_REG)
   #define Servo_CAPTURE_LSB_PTR  ((reg16 *) Servo_PWMUDB_sP16_pwmdp_u0__F1_REG)
   #define Servo_AUX_CONTROLDP0      (*(reg8 *) Servo_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG)
   #define Servo_AUX_CONTROLDP0_PTR  ((reg8 *) Servo_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG)
   #if (Servo_Resolution == 16)
       #define Servo_AUX_CONTROLDP1    (*(reg8 *) Servo_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG)
       #define Servo_AUX_CONTROLDP1_PTR  ((reg8 *) Servo_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG)
   #endif
#endif
   
#if(Servo_KillModeMinTime )
    #define Servo_KILLMODEMINTIME      (*(reg8 *) Servo_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    #define Servo_KILLMODEMINTIME_PTR   ((reg8 *) Servo_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    /* Fixed Function Block has no Kill Mode parameters because it is Asynchronous only */
#endif

#if(Servo_DeadBandMode == Servo__B_PWM__DBM_256_CLOCKS)
    #define Servo_DEADBAND_COUNT        (*(reg8 *) Servo_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define Servo_DEADBAND_COUNT_PTR     ((reg8 *) Servo_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define Servo_DEADBAND_LSB_PTR       ((reg8 *) Servo_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
    #define Servo_DEADBAND_LSB          (*(reg8 *) Servo_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
#elif(Servo_DeadBandMode == Servo__B_PWM__DBM_2_4_CLOCKS)
    /* In Fixed Function Block these bits are in the control blocks control register */
    #if (Servo_UsingFixedFunction)
        #define Servo_DEADBAND_COUNT        (*(reg8 *) Servo_PWMHW__CFG0) 
        #define Servo_DEADBAND_COUNT_PTR     ((reg8 *) Servo_PWMHW__CFG0)
        #define Servo_DEADBAND_COUNT_MASK    (0x03u << Servo_DEADBAND_COUNT_SHIFT) 
        #define Servo_DEADBAND_COUNT_SHIFT   0x06u /* As defined by the Register Map as DEADBAND_PERIOD[1:0] in CFG0 */ 
    #else
        /* Lower two bits of the added control register define the count 1-3 */
        #define Servo_DEADBAND_COUNT        (*(reg8 *) Servo_PWMUDB_sDB3_AsyncCtl_dbctrlreg__CONTROL_REG)
        #define Servo_DEADBAND_COUNT_PTR     ((reg8 *) Servo_PWMUDB_sDB3_AsyncCtl_dbctrlreg__CONTROL_REG)
        #define Servo_DEADBAND_COUNT_MASK    (0x03u << Servo_DEADBAND_COUNT_SHIFT) 
        #define Servo_DEADBAND_COUNT_SHIFT   0x00u /* As defined by the verilog implementation of the Control Register */
    #endif
#endif



#if (Servo_UsingFixedFunction)
    #define Servo_STATUS                (*(reg8 *) Servo_PWMHW__SR0)
    #define Servo_STATUS_PTR            ((reg8 *) Servo_PWMHW__SR0)
    #define Servo_STATUS_MASK           (*(reg8 *) Servo_PWMHW__SR0)
    #define Servo_STATUS_MASK_PTR       ((reg8 *) Servo_PWMHW__SR0)
    #define Servo_CONTROL               (*(reg8 *) Servo_PWMHW__CFG0)
    #define Servo_CONTROL_PTR           ((reg8 *) Servo_PWMHW__CFG0)    
    #define Servo_CONTROL2              (*(reg8 *) Servo_PWMHW__CFG1)    
    #if(Servo_PSOC3_ES3 || Servo_PSOC5_ES2)
        #define Servo_CONTROL3              (*(reg8 *) Servo_PWMHW__CFG2)
    #endif
    #define Servo_GLOBAL_ENABLE         (*(reg8 *) Servo_PWMHW__PM_ACT_CFG)
    #define Servo_GLOBAL_ENABLE_PTR       ( (reg8 *) Servo_PWMHW__PM_ACT_CFG)
    #define Servo_GLOBAL_STBY_ENABLE      (*(reg8 *) Servo_PWMHW__PM_STBY_CFG)
    #define Servo_GLOBAL_STBY_ENABLE_PTR  ( (reg8 *) Servo_PWMHW__PM_STBY_CFG)
  
  
    /***********************************
    *          Constants
    ***********************************/
    /* Fixed Function Block Chosen */
    #define Servo_BLOCK_EN_MASK          Servo_PWMHW__PM_ACT_MSK
    #define Servo_BLOCK_STBY_EN_MASK     Servo_PWMHW__PM_STBY_MSK 
    /* Control Register definitions */
    #define Servo_CTRL_ENABLE_SHIFT      0x00u
    
    #if(Servo_PSOC3_ES2 || Servo_PSOC5_ES1)
        #define Servo_CTRL_CMPMODE1_SHIFT    0x01u   /* As defined by Register map as MODE_CFG bits in CFG1*/
    #endif
    #if(Servo_PSOC3_ES3 || Servo_PSOC5_ES2)
        #define Servo_CTRL_CMPMODE1_SHIFT    0x04u  /* As defined by Register map as MODE_CFG bits in CFG2*/
    #endif
    
    #define Servo_CTRL_DEAD_TIME_SHIFT   0x06u   /* As defined by Register map */
    /* Fixed Function Block Only CFG register bit definitions */
    #define Servo_CFG0_MODE              0x02u   /*  Set to compare mode */
    //#define Servo_CFG0_ENABLE            0x01u   /* Enable the block to run */
    #define Servo_CFG0_DB                0x20u   /* As defined by Register map as DB bit in CFG0 */

    /* Control Register Bit Masks */
    #define Servo_CTRL_ENABLE            (0x01u << Servo_CTRL_ENABLE_SHIFT)
    #define Servo_CTRL_RESET             (0x01u << Servo_CTRL_RESET_SHIFT)
    #define Servo_CTRL_CMPMODE2_MASK     (0x07u << Servo_CTRL_CMPMODE2_SHIFT)
    #if(Servo_PSOC3_ES2 || Servo_PSOC5_ES1)
        #define Servo_CTRL_CMPMODE1_MASK     (0x07u << Servo_CTRL_CMPMODE1_SHIFT)
    #endif
    #if(Servo_PSOC3_ES3 || Servo_PSOC5_ES2)
        #define Servo_CTRL_CMPMODE1_MASK     (0x07u << Servo_CTRL_CMPMODE1_SHIFT)
    #endif
    
    /* Control2 Register Bit Masks */
    #define Servo_CTRL2_IRQ_SEL_SHIFT    0x00u       /* As defined in Register Map, Part of the TMRX_CFG1 register */
    #define Servo_CTRL2_IRQ_SEL          (0x01u << Servo_CTRL2_IRQ_SEL_SHIFT)  
    
    /* Status Register Bit Locations */
    #define Servo_STATUS_TC_SHIFT            0x07u   /* As defined by Register map as TC in SR0 */
    #define Servo_STATUS_CMP1_SHIFT          0x06u   /* As defined by the Register map as CAP_CMP in SR0 */
    
    /* Status Register Interrupt Enable Bit Locations */
    #define Servo_STATUS_KILL_INT_EN_MASK_SHIFT          (0x00u)    
    #define Servo_STATUS_TC_INT_EN_MASK_SHIFT            (Servo_STATUS_TC_SHIFT - 4)
    #define Servo_STATUS_CMP2_INT_EN_MASK_SHIFT          (0x00u)  
    #define Servo_STATUS_CMP1_INT_EN_MASK_SHIFT          (Servo_STATUS_CMP1_SHIFT - 4)
    
    /* Status Register Bit Masks */
    #define Servo_STATUS_TC              (0x01u << Servo_STATUS_TC_SHIFT)
    #define Servo_STATUS_CMP1            (0x01u << Servo_STATUS_CMP1_SHIFT)
    
    /* Status Register Interrupt Bit Masks*/
    #define Servo_STATUS_TC_INT_EN_MASK              (Servo_STATUS_TC >> 4)
    #define Servo_STATUS_CMP1_INT_EN_MASK            (Servo_STATUS_CMP1 >> 4)
    
    /*RT1 Synch Constants: Applicable for PSoC3 ES2/PSoC3 ES3 PSoC5 ES2*/
    #define Servo_RT1_SHIFT              0x04u
    #define Servo_RT1_MASK               (0x03u << Servo_RT1_SHIFT)  /* Sync TC and CMP bit masks */
    #define Servo_SYNC                   (0x03u << Servo_RT1_SHIFT)
    #define Servo_SYNCDSI_SHIFT          0x00u
    #define Servo_SYNCDSI_MASK           (0x0Fu << Servo_SYNCDSI_SHIFT) /* Sync all DSI inputs */
    #define Servo_SYNCDSI_EN             (0x0Fu << Servo_SYNCDSI_SHIFT) /* Sync all DSI inputs */
    

#else
    #define Servo_STATUS                (*(reg8 *) Servo_PWMUDB_sSTSReg_nrstSts_stsreg__STATUS_REG )
    #define Servo_STATUS_PTR            ((reg8 *) Servo_PWMUDB_sSTSReg_nrstSts_stsreg__STATUS_REG )
    #define Servo_STATUS_MASK           (*(reg8 *) Servo_PWMUDB_sSTSReg_nrstSts_stsreg__MASK_REG)
    #define Servo_STATUS_MASK_PTR       ((reg8 *) Servo_PWMUDB_sSTSReg_nrstSts_stsreg__MASK_REG)
    #define Servo_STATUS_AUX_CTRL       (*(reg8 *) Servo_PWMUDB_sSTSReg_nrstSts_stsreg__STATUS_AUX_CTL_REG)
    #define Servo_CONTROL               (*(reg8 *) Servo_PWMUDB_sCTRLReg_AsyncCtl_ctrlreg__CONTROL_REG)
    #define Servo_CONTROL_PTR           ((reg8 *) Servo_PWMUDB_sCTRLReg_AsyncCtl_ctrlreg__CONTROL_REG)
    
    
    /***********************************
    *          Constants
    ***********************************/
    /* Control Register definitions */
    #define Servo_CTRL_ENABLE_SHIFT      0x07u
    #define Servo_CTRL_RESET_SHIFT       0x06u
    #define Servo_CTRL_CMPMODE2_SHIFT    0x03u
    #define Servo_CTRL_CMPMODE1_SHIFT    0x00u
    #define Servo_CTRL_DEAD_TIME_SHIFT   0x00u   /* No Shift Needed for UDB block */
    /* Control Register Bit Masks */
    #define Servo_CTRL_ENABLE            (0x01u << Servo_CTRL_ENABLE_SHIFT)
    #define Servo_CTRL_RESET             (0x01u << Servo_CTRL_RESET_SHIFT)
    #define Servo_CTRL_CMPMODE2_MASK     (0x07u << Servo_CTRL_CMPMODE2_SHIFT)
    #define Servo_CTRL_CMPMODE1_MASK     (0x07u << Servo_CTRL_CMPMODE1_SHIFT) 
    
    /* Status Register Bit Locations */
    #define Servo_STATUS_KILL_SHIFT          0x05u
    #define Servo_STATUS_FIFONEMPTY_SHIFT    0x04u
    #define Servo_STATUS_FIFOFULL_SHIFT      0x03u  
    #define Servo_STATUS_TC_SHIFT            0x02u
    #define Servo_STATUS_CMP2_SHIFT          0x01u
    #define Servo_STATUS_CMP1_SHIFT          0x00u
    /* Status Register Interrupt Enable Bit Locations - UDB Status Interrupt Mask match Status Bit Locations*/
    #define Servo_STATUS_KILL_INT_EN_MASK_SHIFT          Servo_STATUS_KILL_SHIFT          
    #define Servo_STATUS_FIFONEMPTY_INT_EN_MASK_SHIFT    Servo_STATUS_FIFONEMPTY_SHIFT    
    #define Servo_STATUS_FIFOFULL_INT_EN_MASK_SHIFT      Servo_STATUS_FIFOFULL_SHIFT        
    #define Servo_STATUS_TC_INT_EN_MASK_SHIFT            Servo_STATUS_TC_SHIFT            
    #define Servo_STATUS_CMP2_INT_EN_MASK_SHIFT          Servo_STATUS_CMP2_SHIFT          
    #define Servo_STATUS_CMP1_INT_EN_MASK_SHIFT          Servo_STATUS_CMP1_SHIFT   
    /* Status Register Bit Masks */
    #define Servo_STATUS_KILL            (0x00u << Servo_STATUS_KILL_SHIFT )
    #define Servo_STATUS_FIFOFULL        (0x01u << Servo_STATUS_FIFOFULL_SHIFT)
    #define Servo_STATUS_FIFONEMPTY      (0x01u << Servo_STATUS_FIFONEMPTY_SHIFT)
    #define Servo_STATUS_TC              (0x01u << Servo_STATUS_TC_SHIFT)
    #define Servo_STATUS_CMP2            (0x01u << Servo_STATUS_CMP2_SHIFT) 
    #define Servo_STATUS_CMP1            (0x01u << Servo_STATUS_CMP1_SHIFT)
    /* Status Register Interrupt Bit Masks  - UDB Status Interrupt Mask match Status Bit Locations */
    #define Servo_STATUS_KILL_INT_EN_MASK            Servo_STATUS_KILL
    #define Servo_STATUS_FIFOFULL_INT_EN_MASK        Servo_STATUS_FIFOFULL
    #define Servo_STATUS_FIFONEMPTY_INT_EN_MASK      Servo_STATUS_FIFONEMPTY
    #define Servo_STATUS_TC_INT_EN_MASK              Servo_STATUS_TC
    #define Servo_STATUS_CMP2_INT_EN_MASK            Servo_STATUS_CMP2
    #define Servo_STATUS_CMP1_INT_EN_MASK            Servo_STATUS_CMP1
                                                          
    /* Datapath Auxillary Control Register definitions */
    #define Servo_AUX_CTRL_FIFO0_CLR     0x01u
    #define Servo_AUX_CTRL_FIFO1_CLR     0x02u
    #define Servo_AUX_CTRL_FIFO0_LVL     0x04u
    #define Servo_AUX_CTRL_FIFO1_LVL     0x08u
    #define Servo_STATUS_ACTL_INT_EN_MASK  0x10u /* As defined for the ACTL Register */
#endif /* Servo_UsingFixedFunction */

#endif  /* CY_PWM_Servo_H */
