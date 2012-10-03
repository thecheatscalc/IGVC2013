/*******************************************************************************
* File Name: Err_LED_1.c  
* Version 1.60
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "cytypes.h"
#include "Err_LED_1.h"

/* APIs are not generated for P15[7:6] */
#if !(CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5 &&\
     CYDEV_CHIP_REVISION_USED == CYDEV_CHIP_REVISION_5A_PRODUCTION &&\
	 Err_LED_1__PORT == 15 && (Err_LED_1__MASK & 0xC0))

/*******************************************************************************
* Function Name: Err_LED_1_Write
********************************************************************************
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  void 
*  
*******************************************************************************/
void Err_LED_1_Write(uint8 value) 
{
    uint8 staticBits = Err_LED_1_DR & ~Err_LED_1_MASK;
    Err_LED_1_DR = staticBits | ((value << Err_LED_1_SHIFT) & Err_LED_1_MASK);
}


/*******************************************************************************
* Function Name: Err_LED_1_SetDriveMode
********************************************************************************
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  void
*
*******************************************************************************/
void Err_LED_1_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Err_LED_1_0, mode);
}


/*******************************************************************************
* Function Name: Err_LED_1_Read
********************************************************************************
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Err_LED_1_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Err_LED_1_Read(void) 
{
    return (Err_LED_1_PS & Err_LED_1_MASK) >> Err_LED_1_SHIFT;
}


/*******************************************************************************
* Function Name: Err_LED_1_ReadDataReg
********************************************************************************
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  void 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Err_LED_1_ReadDataReg(void) 
{
    return (Err_LED_1_DR & Err_LED_1_MASK) >> Err_LED_1_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Err_LED_1_INTSTAT) 

    /*******************************************************************************
    * Function Name: Err_LED_1_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  void 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Err_LED_1_ClearInterrupt(void) 
    {
        return (Err_LED_1_INTSTAT & Err_LED_1_MASK) >> Err_LED_1_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif
/* [] END OF FILE */ 
