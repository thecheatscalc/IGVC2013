#ifndef INCLUDED_CYFITTERKEIL_INC
#define INCLUDED_CYFITTERKEIL_INC
$INCLUDE (cydevicekeil.inc)
$INCLUDE (cydevicekeil_trm.inc)

; USBUART_bus_reset
USBUART_bus_reset__ES2_PATCH EQU 0
USBUART_bus_reset__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN2
USBUART_bus_reset__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD2
USBUART_bus_reset__INTC_MASK EQU 0x80
USBUART_bus_reset__INTC_NUMBER EQU 23
USBUART_bus_reset__INTC_PRIOR_NUM EQU 7
USBUART_bus_reset__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR23
USBUART_bus_reset__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN2
USBUART_bus_reset__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD2
USBUART_bus_reset__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x2E)

; Timer_1_TimerUDB
Timer_1_TimerUDB_rstSts_stsreg__0__MASK EQU 0x01
Timer_1_TimerUDB_rstSts_stsreg__0__POS EQU 0
Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
Timer_1_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB07_08_ST
Timer_1_TimerUDB_rstSts_stsreg__2__MASK EQU 0x04
Timer_1_TimerUDB_rstSts_stsreg__2__POS EQU 2
Timer_1_TimerUDB_rstSts_stsreg__3__MASK EQU 0x08
Timer_1_TimerUDB_rstSts_stsreg__3__POS EQU 3
Timer_1_TimerUDB_rstSts_stsreg__MASK EQU 0x0D
Timer_1_TimerUDB_rstSts_stsreg__MASK_REG EQU CYREG_B1_UDB07_MSK
Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG EQU CYREG_B1_UDB07_ST
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB04_05_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB04_05_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB04_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB04_ST_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B1_UDB04_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB04_ST_CTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB04_MSK
Timer_1_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
Timer_1_TimerUDB_sT32_timerdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
Timer_1_TimerUDB_sT32_timerdp_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
Timer_1_TimerUDB_sT32_timerdp_u0__A0_REG EQU CYREG_B1_UDB04_A0
Timer_1_TimerUDB_sT32_timerdp_u0__A1_REG EQU CYREG_B1_UDB04_A1
Timer_1_TimerUDB_sT32_timerdp_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
Timer_1_TimerUDB_sT32_timerdp_u0__D0_REG EQU CYREG_B1_UDB04_D0
Timer_1_TimerUDB_sT32_timerdp_u0__D1_REG EQU CYREG_B1_UDB04_D1
Timer_1_TimerUDB_sT32_timerdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
Timer_1_TimerUDB_sT32_timerdp_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
Timer_1_TimerUDB_sT32_timerdp_u0__F0_REG EQU CYREG_B1_UDB04_F0
Timer_1_TimerUDB_sT32_timerdp_u0__F1_REG EQU CYREG_B1_UDB04_F1
Timer_1_TimerUDB_sT32_timerdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Timer_1_TimerUDB_sT32_timerdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_A0_REG EQU CYREG_B1_UDB05_06_A0
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_A1_REG EQU CYREG_B1_UDB05_06_A1
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_D0_REG EQU CYREG_B1_UDB05_06_D0
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_D1_REG EQU CYREG_B1_UDB05_06_D1
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_F0_REG EQU CYREG_B1_UDB05_06_F0
Timer_1_TimerUDB_sT32_timerdp_u1__16BIT_F1_REG EQU CYREG_B1_UDB05_06_F1
Timer_1_TimerUDB_sT32_timerdp_u1__A0_A1_REG EQU CYREG_B1_UDB05_A0_A1
Timer_1_TimerUDB_sT32_timerdp_u1__A0_REG EQU CYREG_B1_UDB05_A0
Timer_1_TimerUDB_sT32_timerdp_u1__A1_REG EQU CYREG_B1_UDB05_A1
Timer_1_TimerUDB_sT32_timerdp_u1__D0_D1_REG EQU CYREG_B1_UDB05_D0_D1
Timer_1_TimerUDB_sT32_timerdp_u1__D0_REG EQU CYREG_B1_UDB05_D0
Timer_1_TimerUDB_sT32_timerdp_u1__D1_REG EQU CYREG_B1_UDB05_D1
Timer_1_TimerUDB_sT32_timerdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Timer_1_TimerUDB_sT32_timerdp_u1__F0_F1_REG EQU CYREG_B1_UDB05_F0_F1
Timer_1_TimerUDB_sT32_timerdp_u1__F0_REG EQU CYREG_B1_UDB05_F0
Timer_1_TimerUDB_sT32_timerdp_u1__F1_REG EQU CYREG_B1_UDB05_F1
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_A0_REG EQU CYREG_B1_UDB06_07_A0
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_A1_REG EQU CYREG_B1_UDB06_07_A1
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_D0_REG EQU CYREG_B1_UDB06_07_D0
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_D1_REG EQU CYREG_B1_UDB06_07_D1
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_F0_REG EQU CYREG_B1_UDB06_07_F0
Timer_1_TimerUDB_sT32_timerdp_u2__16BIT_F1_REG EQU CYREG_B1_UDB06_07_F1
Timer_1_TimerUDB_sT32_timerdp_u2__A0_A1_REG EQU CYREG_B1_UDB06_A0_A1
Timer_1_TimerUDB_sT32_timerdp_u2__A0_REG EQU CYREG_B1_UDB06_A0
Timer_1_TimerUDB_sT32_timerdp_u2__A1_REG EQU CYREG_B1_UDB06_A1
Timer_1_TimerUDB_sT32_timerdp_u2__D0_D1_REG EQU CYREG_B1_UDB06_D0_D1
Timer_1_TimerUDB_sT32_timerdp_u2__D0_REG EQU CYREG_B1_UDB06_D0
Timer_1_TimerUDB_sT32_timerdp_u2__D1_REG EQU CYREG_B1_UDB06_D1
Timer_1_TimerUDB_sT32_timerdp_u2__DP_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
Timer_1_TimerUDB_sT32_timerdp_u2__F0_F1_REG EQU CYREG_B1_UDB06_F0_F1
Timer_1_TimerUDB_sT32_timerdp_u2__F0_REG EQU CYREG_B1_UDB06_F0
Timer_1_TimerUDB_sT32_timerdp_u2__F1_REG EQU CYREG_B1_UDB06_F1
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_A0_REG EQU CYREG_B1_UDB07_08_A0
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_A1_REG EQU CYREG_B1_UDB07_08_A1
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_D0_REG EQU CYREG_B1_UDB07_08_D0
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_D1_REG EQU CYREG_B1_UDB07_08_D1
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_F0_REG EQU CYREG_B1_UDB07_08_F0
Timer_1_TimerUDB_sT32_timerdp_u3__16BIT_F1_REG EQU CYREG_B1_UDB07_08_F1
Timer_1_TimerUDB_sT32_timerdp_u3__A0_A1_REG EQU CYREG_B1_UDB07_A0_A1
Timer_1_TimerUDB_sT32_timerdp_u3__A0_REG EQU CYREG_B1_UDB07_A0
Timer_1_TimerUDB_sT32_timerdp_u3__A1_REG EQU CYREG_B1_UDB07_A1
Timer_1_TimerUDB_sT32_timerdp_u3__D0_D1_REG EQU CYREG_B1_UDB07_D0_D1
Timer_1_TimerUDB_sT32_timerdp_u3__D0_REG EQU CYREG_B1_UDB07_D0
Timer_1_TimerUDB_sT32_timerdp_u3__D1_REG EQU CYREG_B1_UDB07_D1
Timer_1_TimerUDB_sT32_timerdp_u3__DP_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
Timer_1_TimerUDB_sT32_timerdp_u3__F0_F1_REG EQU CYREG_B1_UDB07_F0_F1
Timer_1_TimerUDB_sT32_timerdp_u3__F0_REG EQU CYREG_B1_UDB07_F0
Timer_1_TimerUDB_sT32_timerdp_u3__F1_REG EQU CYREG_B1_UDB07_F1

; USBUART_arb_int
USBUART_arb_int__ES2_PATCH EQU 0
USBUART_arb_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN2
USBUART_arb_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD2
USBUART_arb_int__INTC_MASK EQU 0x40
USBUART_arb_int__INTC_NUMBER EQU 22
USBUART_arb_int__INTC_PRIOR_NUM EQU 7
USBUART_arb_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR22
USBUART_arb_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN2
USBUART_arb_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD2
USBUART_arb_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x2C)

; USBUART_sof_int
USBUART_sof_int__ES2_PATCH EQU 0
USBUART_sof_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN2
USBUART_sof_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD2
USBUART_sof_int__INTC_MASK EQU 0x20
USBUART_sof_int__INTC_NUMBER EQU 21
USBUART_sof_int__INTC_PRIOR_NUM EQU 7
USBUART_sof_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR21
USBUART_sof_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN2
USBUART_sof_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD2
USBUART_sof_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x2A)

; USBUART_dp_int
USBUART_dp_int__ES2_PATCH EQU 0
USBUART_dp_int__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN1
USBUART_dp_int__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD1
USBUART_dp_int__INTC_MASK EQU 0x10
USBUART_dp_int__INTC_NUMBER EQU 12
USBUART_dp_int__INTC_PRIOR_NUM EQU 7
USBUART_dp_int__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR12
USBUART_dp_int__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN1
USBUART_dp_int__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD1
USBUART_dp_int__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x18)

; USBUART_ep_0
USBUART_ep_0__ES2_PATCH EQU 0
USBUART_ep_0__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN3
USBUART_ep_0__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD3
USBUART_ep_0__INTC_MASK EQU 0x01
USBUART_ep_0__INTC_NUMBER EQU 24
USBUART_ep_0__INTC_PRIOR_NUM EQU 7
USBUART_ep_0__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR24
USBUART_ep_0__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN3
USBUART_ep_0__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD3
USBUART_ep_0__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x30)

; USBUART_ep_1
USBUART_ep_1__ES2_PATCH EQU 0
USBUART_ep_1__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN0
USBUART_ep_1__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD0
USBUART_ep_1__INTC_MASK EQU 0x01
USBUART_ep_1__INTC_NUMBER EQU 0
USBUART_ep_1__INTC_PRIOR_NUM EQU 7
USBUART_ep_1__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR0
USBUART_ep_1__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN0
USBUART_ep_1__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD0
USBUART_ep_1__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x00)

; USBUART_USB
USBUART_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBUART_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBUART_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBUART_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBUART_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBUART_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBUART_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBUART_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBUART_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBUART_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBUART_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBUART_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBUART_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBUART_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBUART_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBUART_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBUART_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBUART_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBUART_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBUART_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBUART_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBUART_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBUART_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBUART_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBUART_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBUART_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBUART_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBUART_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBUART_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBUART_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBUART_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBUART_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBUART_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBUART_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBUART_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBUART_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBUART_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBUART_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBUART_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBUART_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBUART_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBUART_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBUART_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBUART_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBUART_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBUART_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBUART_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBUART_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBUART_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBUART_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBUART_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBUART_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBUART_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBUART_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBUART_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBUART_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBUART_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBUART_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBUART_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBUART_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBUART_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBUART_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBUART_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBUART_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBUART_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBUART_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBUART_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBUART_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBUART_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBUART_USB__CR0 EQU CYREG_USB_CR0
USBUART_USB__CR1 EQU CYREG_USB_CR1
USBUART_USB__CWA EQU CYREG_USB_CWA
USBUART_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBUART_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBUART_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBUART_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBUART_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBUART_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBUART_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBUART_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBUART_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBUART_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBUART_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBUART_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBUART_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBUART_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBUART_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBUART_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBUART_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBUART_USB__OSCLK_DR0 EQU CYREG_USB_OSCLK_DR0
USBUART_USB__OSCLK_DR1 EQU CYREG_USB_OSCLK_DR1
USBUART_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBUART_USB__PM_ACT_MSK EQU 0x01
USBUART_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBUART_USB__PM_STBY_MSK EQU 0x01
USBUART_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBUART_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBUART_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBUART_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBUART_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBUART_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBUART_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBUART_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBUART_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBUART_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBUART_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBUART_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBUART_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBUART_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBUART_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBUART_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBUART_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBUART_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBUART_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBUART_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBUART_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBUART_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBUART_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBUART_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBUART_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBUART_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBUART_USB__SOF0 EQU CYREG_USB_SOF0
USBUART_USB__SOF1 EQU CYREG_USB_SOF1
USBUART_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBUART_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1
USBUART_USB__USBIO_CR2 EQU CYREG_USB_USBIO_CR2
USBUART_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN

; Echo_ISR_0
Echo_ISR_0__ES2_PATCH EQU 0
Echo_ISR_0__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN1
Echo_ISR_0__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD1
Echo_ISR_0__INTC_MASK EQU 0x02
Echo_ISR_0__INTC_NUMBER EQU 9
Echo_ISR_0__INTC_PRIOR_NUM EQU 7
Echo_ISR_0__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR9
Echo_ISR_0__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN1
Echo_ISR_0__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD1
Echo_ISR_0__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x12)

; Echo_ISR_1
Echo_ISR_1__ES2_PATCH EQU 0
Echo_ISR_1__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN0
Echo_ISR_1__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD0
Echo_ISR_1__INTC_MASK EQU 0x40
Echo_ISR_1__INTC_NUMBER EQU 6
Echo_ISR_1__INTC_PRIOR_NUM EQU 7
Echo_ISR_1__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR6
Echo_ISR_1__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN0
Echo_ISR_1__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD0
Echo_ISR_1__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x0C)

; USBUART_Dm
USBUART_Dm__0__MASK EQU 0x80
USBUART_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBUART_Dm__0__PORT EQU 15
USBUART_Dm__0__SHIFT EQU 7
USBUART_Dm__AG EQU CYREG_PRT15_AG
USBUART_Dm__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dm__BIE EQU CYREG_PRT15_BIE
USBUART_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dm__BYP EQU CYREG_PRT15_BYP
USBUART_Dm__CTL EQU CYREG_PRT15_CTL
USBUART_Dm__DM0 EQU CYREG_PRT15_DM0
USBUART_Dm__DM1 EQU CYREG_PRT15_DM1
USBUART_Dm__DM2 EQU CYREG_PRT15_DM2
USBUART_Dm__DR EQU CYREG_PRT15_DR
USBUART_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dm__PORT EQU 15
USBUART_Dm__PRT EQU CYREG_PRT15_PRT
USBUART_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dm__PS EQU CYREG_PRT15_PS
USBUART_Dm__SLW EQU CYREG_PRT15_SLW

; USBUART_Dp
USBUART_Dp__0__MASK EQU 0x40
USBUART_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBUART_Dp__0__PORT EQU 15
USBUART_Dp__0__SHIFT EQU 6
USBUART_Dp__AG EQU CYREG_PRT15_AG
USBUART_Dp__AMUX EQU CYREG_PRT15_AMUX
USBUART_Dp__BIE EQU CYREG_PRT15_BIE
USBUART_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_Dp__BYP EQU CYREG_PRT15_BYP
USBUART_Dp__CTL EQU CYREG_PRT15_CTL
USBUART_Dp__DM0 EQU CYREG_PRT15_DM0
USBUART_Dp__DM1 EQU CYREG_PRT15_DM1
USBUART_Dp__DM2 EQU CYREG_PRT15_DM2
USBUART_Dp__DR EQU CYREG_PRT15_DR
USBUART_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBUART_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_Dp__MASK EQU 0x40
USBUART_Dp__PORT EQU 15
USBUART_Dp__PRT EQU CYREG_PRT15_PRT
USBUART_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_Dp__PS EQU CYREG_PRT15_PS
USBUART_Dp__SHIFT EQU 6
USBUART_Dp__SLW EQU CYREG_PRT15_SLW
USBUART_Dp__SNAP EQU CYREG_PICU15_SNAP

; Timer_ISR
Timer_ISR__ES2_PATCH EQU 0
Timer_ISR__INTC_CLR_EN_REG EQU CYREG_INTC_CLR_EN3
Timer_ISR__INTC_CLR_PD_REG EQU CYREG_INTC_CLR_PD3
Timer_ISR__INTC_MASK EQU 0x80
Timer_ISR__INTC_NUMBER EQU 31
Timer_ISR__INTC_PRIOR_NUM EQU 7
Timer_ISR__INTC_PRIOR_REG EQU CYREG_INTC_PRIOR31
Timer_ISR__INTC_SET_EN_REG EQU CYREG_INTC_SET_EN3
Timer_ISR__INTC_SET_PD_REG EQU CYREG_INTC_SET_PD3
Timer_ISR__INTC_VECT EQU (CYREG_INTC_VECT_MBASE+0x3E)

; Trigger
Trigger__0__MASK EQU 0x80
Trigger__0__PC EQU CYREG_PRT2_PC7
Trigger__0__PORT EQU 2
Trigger__0__SHIFT EQU 7
Trigger__AG EQU CYREG_PRT2_AG
Trigger__AMUX EQU CYREG_PRT2_AMUX
Trigger__BIE EQU CYREG_PRT2_BIE
Trigger__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Trigger__BYP EQU CYREG_PRT2_BYP
Trigger__CTL EQU CYREG_PRT2_CTL
Trigger__DM0 EQU CYREG_PRT2_DM0
Trigger__DM1 EQU CYREG_PRT2_DM1
Trigger__DM2 EQU CYREG_PRT2_DM2
Trigger__DR EQU CYREG_PRT2_DR
Trigger__INP_DIS EQU CYREG_PRT2_INP_DIS
Trigger__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Trigger__LCD_EN EQU CYREG_PRT2_LCD_EN
Trigger__MASK EQU 0x80
Trigger__PORT EQU 2
Trigger__PRT EQU CYREG_PRT2_PRT
Trigger__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Trigger__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Trigger__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Trigger__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Trigger__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Trigger__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Trigger__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Trigger__PS EQU CYREG_PRT2_PS
Trigger__SHIFT EQU 7
Trigger__SLW EQU CYREG_PRT2_SLW

; Echo_0
Echo_0__0__MASK EQU 0x01
Echo_0__0__PC EQU CYREG_PRT5_PC0
Echo_0__0__PORT EQU 5
Echo_0__0__SHIFT EQU 0
Echo_0__1__MASK EQU 0x02
Echo_0__1__PC EQU CYREG_PRT5_PC1
Echo_0__1__PORT EQU 5
Echo_0__1__SHIFT EQU 1
Echo_0__2__MASK EQU 0x04
Echo_0__2__PC EQU CYREG_PRT5_PC2
Echo_0__2__PORT EQU 5
Echo_0__2__SHIFT EQU 2
Echo_0__3__MASK EQU 0x08
Echo_0__3__PC EQU CYREG_PRT5_PC3
Echo_0__3__PORT EQU 5
Echo_0__3__SHIFT EQU 3
Echo_0__4__MASK EQU 0x10
Echo_0__4__PC EQU CYREG_PRT5_PC4
Echo_0__4__PORT EQU 5
Echo_0__4__SHIFT EQU 4
Echo_0__5__MASK EQU 0x20
Echo_0__5__PC EQU CYREG_PRT5_PC5
Echo_0__5__PORT EQU 5
Echo_0__5__SHIFT EQU 5
Echo_0__AG EQU CYREG_PRT5_AG
Echo_0__AMUX EQU CYREG_PRT5_AMUX
Echo_0__BIE EQU CYREG_PRT5_BIE
Echo_0__BIT_MASK EQU CYREG_PRT5_BIT_MASK
Echo_0__BYP EQU CYREG_PRT5_BYP
Echo_0__CTL EQU CYREG_PRT5_CTL
Echo_0__DM0 EQU CYREG_PRT5_DM0
Echo_0__DM1 EQU CYREG_PRT5_DM1
Echo_0__DM2 EQU CYREG_PRT5_DM2
Echo_0__DR EQU CYREG_PRT5_DR
Echo_0__INP_DIS EQU CYREG_PRT5_INP_DIS
Echo_0__INTSTAT EQU CYREG_PICU5_INTSTAT
Echo_0__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
Echo_0__LCD_EN EQU CYREG_PRT5_LCD_EN
Echo_0__MASK EQU 0x3F
Echo_0__PORT EQU 5
Echo_0__PRT EQU CYREG_PRT5_PRT
Echo_0__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
Echo_0__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
Echo_0__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
Echo_0__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
Echo_0__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
Echo_0__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
Echo_0__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
Echo_0__PS EQU CYREG_PRT5_PS
Echo_0__SHIFT EQU 0
Echo_0__SLW EQU CYREG_PRT5_SLW
Echo_0__SNAP EQU CYREG_PICU5_SNAP

; Echo_1
Echo_1__0__MASK EQU 0x01
Echo_1__0__PC EQU CYREG_PRT2_PC0
Echo_1__0__PORT EQU 2
Echo_1__0__SHIFT EQU 0
Echo_1__1__MASK EQU 0x02
Echo_1__1__PC EQU CYREG_PRT2_PC1
Echo_1__1__PORT EQU 2
Echo_1__1__SHIFT EQU 1
Echo_1__2__MASK EQU 0x04
Echo_1__2__PC EQU CYREG_PRT2_PC2
Echo_1__2__PORT EQU 2
Echo_1__2__SHIFT EQU 2
Echo_1__3__MASK EQU 0x08
Echo_1__3__PC EQU CYREG_PRT2_PC3
Echo_1__3__PORT EQU 2
Echo_1__3__SHIFT EQU 3
Echo_1__4__MASK EQU 0x10
Echo_1__4__PC EQU CYREG_PRT2_PC4
Echo_1__4__PORT EQU 2
Echo_1__4__SHIFT EQU 4
Echo_1__5__MASK EQU 0x20
Echo_1__5__PC EQU CYREG_PRT2_PC5
Echo_1__5__PORT EQU 2
Echo_1__5__SHIFT EQU 5
Echo_1__AG EQU CYREG_PRT2_AG
Echo_1__AMUX EQU CYREG_PRT2_AMUX
Echo_1__BIE EQU CYREG_PRT2_BIE
Echo_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Echo_1__BYP EQU CYREG_PRT2_BYP
Echo_1__CTL EQU CYREG_PRT2_CTL
Echo_1__DM0 EQU CYREG_PRT2_DM0
Echo_1__DM1 EQU CYREG_PRT2_DM1
Echo_1__DM2 EQU CYREG_PRT2_DM2
Echo_1__DR EQU CYREG_PRT2_DR
Echo_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Echo_1__INTSTAT EQU CYREG_PICU2_INTSTAT
Echo_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Echo_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Echo_1__MASK EQU 0x3F
Echo_1__PORT EQU 2
Echo_1__PRT EQU CYREG_PRT2_PRT
Echo_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Echo_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Echo_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Echo_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Echo_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Echo_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Echo_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Echo_1__PS EQU CYREG_PRT2_PS
Echo_1__SHIFT EQU 0
Echo_1__SLW EQU CYREG_PRT2_SLW
Echo_1__SNAP EQU CYREG_PICU2_SNAP

; Miscellaneous
; -- WARNING: define names containting LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_BOOTLOADER_IO_COMP_USBUART EQU 1
CYDEV_BOOTLOADER_IO_COMP_CUSTOM_IO EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_LEOPARD
CYDEV_BOOTLOADER_CHECKSUM_BASIC EQU 0
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_APPLICATION_ID EQU 0x0000
CYDEV_APPLICATION_VERSION EQU 0x0000
CYDEV_BOOTLOADER_CHECKSUM EQU CYDEV_BOOTLOADER_CHECKSUM_BASIC
CYDEV_BOOTLOADER_CHECKSUM_CRC EQU 1
CYDEV_BOOTLOADER_FAST_VERIFY EQU 0
CYDEV_BOOTLOADER_VERSION EQU 0x0000
CYDEV_BOOTLOADER_WAIT_COMMAND EQU 1
CYDEV_BOOTLOADER_WAIT_TIME EQU 200
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_PANTHER EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC3
CYDEV_CHIP_JTAG_ID EQU 0x1E028069
CYDEV_CHIP_MEMBER_5A EQU 2
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_3A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_3A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_LEOPARD_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CONFIGURATION_CLEAR_SRAM EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_FORCE_ROUTE EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CUSTOM_ID EQU 0x00000000
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_REQXRES EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_VDDA LIT '5.0'
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD LIT '5.0'
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0 LIT '5.0'
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1 LIT '5.0'
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2 LIT '5.0'
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3 LIT '5.0'
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
CyBtldr_Custom_Interface EQU CYDEV_BOOTLOADER_IO_COMP_CUSTOM_IO
CyBtldr_USBUART EQU CYDEV_BOOTLOADER_IO_COMP_USBUART
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERKEIL_INC */