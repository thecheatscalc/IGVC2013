/*******************************************************************************
* File Name: PGA_1_PM.c  
* Version 1.70
*
* Description:
*  This file provides the power manager source code to the API for the PGA 
*  Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2011, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "PGA_1.h"

static PGA_1_BACKUP_STRUCT  PGA_1_backup;


/*******************************************************************************
* Function Name: PGA_1_SaveConfig
********************************************************************************
*
* Summary:
*  Save the current user register configuration.
* 
* Parameters:
*  void
* 
* Return:
*  void
*
* Reentrant:
*  No.
*
*******************************************************************************/
void PGA_1_SaveConfig(void)
{
    /* Nothing to save as registers are System reset on retention flops */
}


/*******************************************************************************  
* Function Name: PGA_1_RestoreConfig
********************************************************************************
*
* Summary:
*  Restore the register configurations.
* 
* Parameters:
*  void
* 
* Return:
*  void
*
* Reentrant:
*  No
*
*******************************************************************************/
void PGA_1_RestoreConfig(void)
{
    /* Nothing to restore */
}


/*******************************************************************************   
* Function Name: PGA_1_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves its configuration. Should be called 
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PGA_1_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
* Reentrant:
*  No
*
*******************************************************************************/
void PGA_1_Sleep(void)
{
    /* Save PGA enable state */
    if(PGA_1_ACT_PWR_EN == (PGA_1_PM_ACT_CFG_REG & PGA_1_ACT_PWR_EN))
    {
        /* Component is enabled */
        PGA_1_backup.enableState = 1u;
    }
    else
    {
        /* Component is disabled */
        PGA_1_backup.enableState = 0u;
    }

    /* Stop the configuration */
    PGA_1_Stop();

    /* Save the configuration */
    PGA_1_SaveConfig();
}


/*******************************************************************************
* Function Name: PGA_1_Wakeup
********************************************************************************
*
* Summary:
*  Enables block's operation and restores its configuration. Should be called
*  just after awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  void
*
* Global variables:
*  PGA_1_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
* Reentrant:
*  No
* 
*******************************************************************************/
void PGA_1_Wakeup(void) 
{
    /* Restore the configurations */
    PGA_1_RestoreConfig();

     /* Enable's the component operation */
    if(PGA_1_backup.enableState == 1u)
    {
        PGA_1_Enable();
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
