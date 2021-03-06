/*******************************************************************************
* File Name: Left_Encoder_Pins.h  
* Version 1.60
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_PINS_Left_Encoder_Pins_H) /* Pins Left_Encoder_Pins_H */
#define CY_PINS_Left_Encoder_Pins_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Left_Encoder_Pins_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5 &&\
     CYDEV_CHIP_REVISION_USED == CYDEV_CHIP_REVISION_5A_PRODUCTION &&\
	 Left_Encoder_Pins__PORT == 15 && (Left_Encoder_Pins__MASK & 0xC0))

/***************************************
*        Function Prototypes             
***************************************/    

void    Left_Encoder_Pins_Write(uint8 value) ;
void    Left_Encoder_Pins_SetDriveMode(uint8 mode) ;
uint8   Left_Encoder_Pins_ReadDataReg(void) ;
uint8   Left_Encoder_Pins_Read(void) ;
uint8   Left_Encoder_Pins_ClearInterrupt(void) ;

/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Left_Encoder_Pins_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Left_Encoder_Pins_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Left_Encoder_Pins_DM_RES_UP          PIN_DM_RES_UP
#define Left_Encoder_Pins_DM_RES_DWN         PIN_DM_RES_DWN
#define Left_Encoder_Pins_DM_OD_LO           PIN_DM_OD_LO
#define Left_Encoder_Pins_DM_OD_HI           PIN_DM_OD_HI
#define Left_Encoder_Pins_DM_STRONG          PIN_DM_STRONG
#define Left_Encoder_Pins_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Left_Encoder_Pins_MASK               Left_Encoder_Pins__MASK
#define Left_Encoder_Pins_SHIFT              Left_Encoder_Pins__SHIFT
#define Left_Encoder_Pins_WIDTH              2u

/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Left_Encoder_Pins_PS                     (* (reg8 *) Left_Encoder_Pins__PS)
/* Data Register */
#define Left_Encoder_Pins_DR                     (* (reg8 *) Left_Encoder_Pins__DR)
/* Port Number */
#define Left_Encoder_Pins_PRT_NUM                (* (reg8 *) Left_Encoder_Pins__PRT) 
/* Connect to Analog Globals */                                                  
#define Left_Encoder_Pins_AG                     (* (reg8 *) Left_Encoder_Pins__AG)                       
/* Analog MUX bux enable */
#define Left_Encoder_Pins_AMUX                   (* (reg8 *) Left_Encoder_Pins__AMUX) 
/* Bidirectional Enable */                                                        
#define Left_Encoder_Pins_BIE                    (* (reg8 *) Left_Encoder_Pins__BIE)
/* Bit-mask for Aliased Register Access */
#define Left_Encoder_Pins_BIT_MASK               (* (reg8 *) Left_Encoder_Pins__BIT_MASK)
/* Bypass Enable */
#define Left_Encoder_Pins_BYP                    (* (reg8 *) Left_Encoder_Pins__BYP)
/* Port wide control signals */                                                   
#define Left_Encoder_Pins_CTL                    (* (reg8 *) Left_Encoder_Pins__CTL)
/* Drive Modes */
#define Left_Encoder_Pins_DM0                    (* (reg8 *) Left_Encoder_Pins__DM0) 
#define Left_Encoder_Pins_DM1                    (* (reg8 *) Left_Encoder_Pins__DM1)
#define Left_Encoder_Pins_DM2                    (* (reg8 *) Left_Encoder_Pins__DM2) 
/* Input Buffer Disable Override */
#define Left_Encoder_Pins_INP_DIS                (* (reg8 *) Left_Encoder_Pins__INP_DIS)
/* LCD Common or Segment Drive */
#define Left_Encoder_Pins_LCD_COM_SEG            (* (reg8 *) Left_Encoder_Pins__LCD_COM_SEG)
/* Enable Segment LCD */
#define Left_Encoder_Pins_LCD_EN                 (* (reg8 *) Left_Encoder_Pins__LCD_EN)
/* Slew Rate Control */
#define Left_Encoder_Pins_SLW                    (* (reg8 *) Left_Encoder_Pins__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Left_Encoder_Pins_PRTDSI__CAPS_SEL       (* (reg8 *) Left_Encoder_Pins__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Left_Encoder_Pins_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Left_Encoder_Pins__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Left_Encoder_Pins_PRTDSI__OE_SEL0        (* (reg8 *) Left_Encoder_Pins__PRTDSI__OE_SEL0) 
#define Left_Encoder_Pins_PRTDSI__OE_SEL1        (* (reg8 *) Left_Encoder_Pins__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Left_Encoder_Pins_PRTDSI__OUT_SEL0       (* (reg8 *) Left_Encoder_Pins__PRTDSI__OUT_SEL0) 
#define Left_Encoder_Pins_PRTDSI__OUT_SEL1       (* (reg8 *) Left_Encoder_Pins__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Left_Encoder_Pins_PRTDSI__SYNC_OUT       (* (reg8 *) Left_Encoder_Pins__PRTDSI__SYNC_OUT) 


#if defined(Left_Encoder_Pins__INTSTAT)  /* Interrupt Registers */

    #define Left_Encoder_Pins_INTSTAT                (* (reg8 *) Left_Encoder_Pins__INTSTAT)
    #define Left_Encoder_Pins_SNAP                   (* (reg8 *) Left_Encoder_Pins__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Left_Encoder_Pins_H */

#endif
/* [] END OF FILE */
