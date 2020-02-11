/*

Written by : Bebo
DATE : 1/9/2019
AUTOSAR Version : 4.3.1
DOC Name : AUTOSAR_SWS_CompilerAbstraction.pdf
Target : ARM TIVA_C TM4C123GH6PM

*/


#ifndef COMPILER_CFG_H

#define COMPILER_CFG_H


/*********************************************************************/


/* Published information */
#define MCU_MODULE_ID 30u
#define MCU_VENDOR_ID 0x002Bu   /* vendor id of NXP */

#define MCU_AR_RELEASE_MAJOR_VERSION 0x01u
#define MCU_AR_RELEASE_MINOR_VERSION 0x00u
#define MCU_AR_RELEASE_REVISION_VERSION 0x00u

#define MCU_SW_MAJOR_VERSION 0x04u
#define MCU_SW_MINOR_VERSION 0x03u
#define MCU_SW_PATCH_VERSION 0x01u


/*********************************************************************/

/* 7.1.2 */
/* this is compiler keywords (not C keywords) must by used with function, variables and, pointers to work in prober way */
/* for ARM C (GCC, ADS) compilers no need for those*/

#define MCU_CODE                /* used for ordinary code */
#define MCU_CONFIG_DATA			/* used for cused for module configuration constants */
#define REGSPACE		 		/* used for staitc Pointer to Reg (ptr to volatile) carry adress of value that changed in any time by interrupts */
#define MCU_VAR_INIT            /* for variables that are initialized with values after every reset */
#define MCU_CONFIG_DATA         /* used for cused for module configuration constants */
#define MCU_CONST               /* used for global or static constants */
#define MCU_APPL_CONST          /* used for global or static pointer to constants */




#endif 	/* COMPILER_CFG_H */
