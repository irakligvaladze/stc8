/**  fw_reg_stc8a8k64s4a12.h
*
* SFR and XDATA map for the STC8a8k64s4a12
* Digitize rab
* ver 0.1 Sep-23-2023
* @brief SFR and XDATA mapping for STC8a8k64s4a12
*/


#ifndef __FW_REG_STC8A8K64S4A12_H__
#define __FW_REG_STC8A8K64S4A12_H__




#include "fw_reg_base.h"


SFR(VRTRIM,             0xA6);

#define TM2PS             (*(unsigned char volatile __XDATA *)0xfea2)
#define TM3PS             (*(unsigned char volatile __XDATA *)0xfea3)
#define TM4PS             (*(unsigned char volatile __XDATA *)0xfea4)
#define ADCTIM            (*(unsigned char volatile __XDATA *)0xfea8)



SFR(VOCTRL,             0xBB);
  #define SCC bit(7)  // 0= normal current is 1.5uA  1= .15uA

#define  _CCON          0xD8
SFR(CCON,               _CCON);
SBIT(CF,                _CCON, 7);
SBIT(CR,                _CCON, 6);
SBIT(CCF3,              _CCON, 3);
SBIT(CCF2,              _CCON, 2);
SBIT(CCF1,              _CCON, 1);
SBIT(CCF0,              _CCON, 0);
SFR(CMOD,               0xD9);
  #define CIDL    bit(7)
  #define CPS2    bit(3)
  #define CPS1    bit(2)
  #define CPS0    bit(1)
  #define ECF     bit(0)
SFR(CCAPM0,             0xDA);
  #define ECOM0   bit(6)
  #define CCAPP0  bit(5)
  #define CCAPN0  bit(4)
  #define MAT0    bit(3)
  #define TOG0    bit(2)
  #define PWM0    bit(1)
  #define ECCF0   bit(0)
SFR(CCAPM1,             0xDB);
  #define ECOM1   bit(6)
  #define CCAPP1  bit(5)
  #define CCAPN1  bit(4)
  #define MAT1    bit(3)
  #define TOG1    bit(2)
  #define PWM1    bit(1)
  #define ECCF1   bit(0)
SFR(CCAPM2,             0xDC);
  #define ECOM2   bit(6)
  #define CCAPP2  bit(5)
  #define CCAPN2  bit(4)
  #define MAT2    bit(3)
  #define TOG2    bit(2)
  #define PWM2    bit(1)
  #define ECCF2   bit(0)
SFR(CCAPM3,             0xDD);
  #define ECOM3   bit(6)
  #define CCAPP3  bit(5)
  #define CCAPN3  bit(4)
  #define MAT3    bit(3)
  #define TOG3    bit(2)
  #define PWM3    bit(1)
  #define ECCF3   bit(0)
SFR(ADCCFG,             0xDE);
  #define RESFMT  bit(5)
  #define SPEED3  bit(3)
  #define SPEED2  bit(2)
  #define SPEED1  bit(1)
  #define SPEED0  bit(0)

SFR(P7M1,               0xE1);
SFR(P7M0,               0xE2);
SFR(DPS,                0xE3);
  #define ID1     bit(7)
  #define ID0     bit(6)
  #define TSL     bit(5)
  #define AU1     bit(4)
  #define AU0     bit(3)
  #define SEL     bit(0)
SFR(DPL1,               0xE4);
SFR(DPH1,               0xE5);
SFR(CMPCR1,             0xE6);
  #define CMPEN   bit(7)
  #define CMPIF   bit(6)
  #define PIE     bit(5)
  #define NIE     bit(4)
  #define PIS     bit(3)
  #define NIS     bit(2)
  #define CMPOE   bit(1)
  #define CMPRES  bit(0)
SFR(CMPCR2,             0xE7);
  #define INVCMPO  bit(7)
  #define DISFLT   bit(6)
  #define LCDTY5   bit(5)
  #define LCDTY4   bit(4)
  #define LCDTY3   bit(3)
  #define LCDTY2   bit(2)
  #define LCDTY1   bit(1)
  #define LCDTY0   bit(0)

SFR(CL,                 0xE9);
SFR(CCAP0L,             0xEA);
SFR(CCAP1L,             0xEB);
SFR(CCAP2L,             0xEC);
SFR(CCAP3L,             0xED);
SFR(AUXINTIF,           0xEF);
  #define INT4IF   bit(6)
  #define INT3IF   bit(5)
  #define INT2IF   bit(4)
  #define T4IF     bit(2)
  #define T3IF     bit(1)
  #define T2IF     bit(0)

SFR(PWMCFG,             0xF1);
  #define CBIF     bit(7)
  #define ETADC    bit(6)
SFR(PCA_PWM0,           0xF2);
  #define EBS01     bit(7)
  #define EBS00     bit(6)
  #define XCCAP0H1  bit(5)
  #define XCCAP0H0  bit(4)
  #define XCCAP0L1  bit(3)
  #define XCCAP0L0  bit(2)
  #define EPC0H     bit(1)
  #define EPC0L     bit(0)
SFR(PCA_PWM1,           0xF3);
  #define EBS11     bit(7)
  #define EBS10     bit(6)
  #define XCCAP1H1  bit(5)
  #define XCCAP1H0  bit(4)
  #define XCCAP1L1  bit(3)
  #define XCCAP1L0  bit(2)
  #define EPC1H     bit(1)
  #define EPC1L     bit(0)
SFR(PCA_PWM2,           0xF4);
  #define EBS21     bit(7)
  #define EBS20     bit(6)
  #define XCCAP2H1  bit(5)
  #define XCCAP2H0  bit(4)
  #define XCCAP2L1  bit(3)
  #define XCCAP2L0  bit(2)
  #define EPC2H     bit(1)
  #define EPC2L     bit(0)
SFR(PCA_PWM3,           0xF5);
  #define EBS31     bit(7)
  #define EBS30     bit(6)
  #define XCCAP3H1  bit(5)
  #define XCCAP3H0  bit(4)
  #define XCCAP3L1  bit(3)
  #define XCCAP3L0  bit(2)
  #define EPC3H     bit(1)
  #define EPC3L     bit(0)
SFR(PWMIF,              0xF6);
  #define C7IF      bit(7)
  #define C6IF      bit(6)
  #define C5IF      bit(5)
  #define C4IF      bit(4)
  #define C3IF      bit(3)
  #define C2IF      bit(2)
  #define C1IF      bit(1)
  #define C0IF      bit(0)
SFR(PWMFDCR,            0xF7);
  #define INVCMP    bit(7)
  #define INVIO     bit(6)
  #define ENFD      bit(5)
  #define FLTFLIO   bit(4)
  #define EFDI      bit(3)
  #define FDCMP     bit(2)
  #define FDIO      bit(1)
  #define FDIF      bit(0)
SFR(CH,                 0xF9);
SFR(CCAP0H,             0xFA);
SFR(CCAP1H,             0xFB);
SFR(CCAP2H,             0xFC);
SFR(CCAP3H,             0xFD);
SFR(PWMCR,              0xFE);
  #define ENPWM    bit(7)
  #define ECBI     bit(6)

SFR(RSTCFG,             0xFF);
  #define ENLVR    bit(6)
  #define P54RST   bit(4)
  #define LVDS1    bit(1)
  #define LVDS0    bit(0)

/**
 * Set B7 of P_SW2 before read/write the following registers
*/

/////////////////////////////////////////////////
//FF00H-FFFFH
/////////////////////////////////////////////////

SFRX(PWMCH,             0xFFF0);
SFRX(PWMCL,             0xFFF1);
SFRX(PWMCKS,            0xFFF2);
  #define SELT2      bit(4)
  #define PWM_PS3    bit(3)
  #define PWM_PS2    bit(2)
  #define PWM_PS1    bit(1)
  #define PWM_PS0    bit(0)
SFRX(TADCPH,            0xFFF3);
SFRX(TADCPL,            0xFFF4);

SFRX(PWM7T1H,           0xFF70);
SFRX(PWM7T1L,           0xFF71);
SFRX(PWM7T2H,           0xFF72);
SFRX(PWM7T2L,           0xFF73);
SFRX(PWM7CR,            0xFF74);
  #define ENC7O     bit(7)
  #define C7INI     bit(6)
  #define C7_S1     bit(4)
  #define C7_S0     bit(3)
  #define EC7I      bit(2)
  #define EC7T2SI   bit(1)
  #define EC7T1SI   bit(0)
SFRX(PWM7HLD,           0xFF75);
  #define HC7H      bit(1)
  #define HC7L      bit(0)
SFRX(PWM6T1H,           0xFF60);
SFRX(PWM6T1L,           0xFF61);
SFRX(PWM6T2H,           0xFF62);
SFRX(PWM6T2L,           0xFF63);
SFRX(PWM6CR,            0xFF64);
  #define ENC6O     bit(7)
  #define C6INI     bit(6)
  #define C6_S1     bit(4)
  #define C6_S0     bit(3)
  #define EC6I      bit(2)
  #define EC6T2SI   bit(1)
  #define EC6T1SI   bit(0)
SFRX(PWM6HLD,           0xFF65);
  #define HC6H      bit(1)
  #define HC6L      bit(0)

SFRX(PWM5T1H,           0xFF50);
SFRX(PWM5T1L,           0xFF51);
SFRX(PWM5T2H,           0xFF52);
SFRX(PWM5T2L,           0xFF53);
SFRX(PWM5CR,            0xFF54);
  #define ENC5O     bit(7)
  #define C5INI     bit(6)
  #define C5_S1     bit(4)
  #define C5_S0     bit(3)
  #define EC5I      bit(2)
  #define EC5T2SI   bit(1)
  #define EC5T1SI   bit(0)
SFRX(PWM5HLD,           0xFF55);
  #define HC5H      bit(1)
  #define HC5L      bit(0)

SFRX(PWM4T1H,           0xFF40);
SFRX(PWM4T1L,           0xFF41);
SFRX(PWM4T2H,           0xFF42);
SFRX(PWM4T2L,           0xFF43);
SFRX(PWM4CR,            0xFF44);
  #define ENC4O     bit(7)
  #define C4INI     bit(6)
  #define C4_S1     bit(4)
  #define C4_S0     bit(3)
  #define EC4I      bit(2)
  #define EC4T2SI   bit(1)
  #define EC4T1SI   bit(0)
SFRX(PWM4HLD,           0xFF45);
  #define HC4H      bit(1)
  #define HC4L      bit(0)

SFRX(PWM3T1H,           0xFF30);
SFRX(PWM3T1L,           0xFF31);
SFRX(PWM3T2H,           0xFF32);
SFRX(PWM3T2L,           0xFF33);
SFRX(PWM3CR,            0xFF34);
  #define ENC3O     bit(7)
  #define C3INI     bit(6)
  #define C3_S1     bit(4)
  #define C3_S0     bit(3)
  #define EC3I      bit(2)
  #define EC3T2SI   bit(1)
  #define EC3T1SI   bit(0)
SFRX(PWM3HLD,           0xFF35);
  #define HC3H      bit(1)
  #define HC3L      bit(0)

SFRX(PWM2T1H,           0xFF20);
SFRX(PWM2T1L,           0xFF21);
SFRX(PWM2T2H,           0xFF22);
SFRX(PWM2T2L,           0xFF23);
SFRX(PWM2CR,            0xFF24);
  #define ENC2O     bit(7)
  #define C2INI     bit(6)
  #define C2_S1     bit(4)
  #define C2_S0     bit(3)
  #define EC2I      bit(2)
  #define EC2T2SI   bit(1)
  #define EC2T1SI   bit(0)
SFRX(PWM2HLD,           0xFF25);
  #define HC2H      bit(1)
  #define HC2L      bit(0)

SFRX(PWM1T1H,           0xFF10);
SFRX(PWM1T1L,           0xFF11);
SFRX(PWM1T2H,           0xFF12);
SFRX(PWM1T2L,           0xFF13);
SFRX(PWM1CR,            0xFF14);
  #define ENC1O     bit(7)
  #define C1INI     bit(6)
  #define C1_S1     bit(4)
  #define C1_S0     bit(3)
  #define EC1I      bit(2)
  #define EC1T2SI   bit(1)
  #define EC1T1SI   bit(0)
SFRX(PWM1HLD,           0xFF15);
  #define HC1H      bit(1)
  #define HC1L      bit(0)

SFRX(PWM0T1H,           0xFF00);
SFRX(PWM0T1L,           0xFF01);
SFRX(PWM0T2H,           0xFF02);
SFRX(PWM0T2L,           0xFF03);
SFRX(PWM0CR,            0xFF04);
  #define ENC0O     bit(7)
  #define C0INI     bit(6)
  #define C0_S1     bit(4)
  #define C0_S0     bit(3)
  #define EC0I      bit(2)
  #define EC0T2SI   bit(1)
  #define EC0T1SI   bit(0)
SFRX(PWM0HLD,           0xFF05);
  #define HC0H      bit(1)
  #define HC0L      bit(0)

SFRX(I2CCFG,            0xFE80);
  #define ENI2C     bit(7)
  #define MSSL      bit(6)
  #define MSSPEED6  bit(5)
  #define MSSPEED5  bit(4)
  #define MSSPEED4  bit(3)
  #define MSSPEED3  bit(2)
  #define MSSPEED2  bit(1)
  #define MSSPEED1  bit(0)

SFRX(I2CMSCR,           0xFE81);
  #define EMSI      bit(7)
  #define MSCMD3    bit(3)
  #define MSCMD2    bit(2)
  #define MSCMD1    bit(1)
  #define MSCMD0    bit(0)
SFRX(I2CMSST,           0xFE82);
  #define MSBUSY    bit(7)
  #define MSIF      bit(6)
  #define MSACKI    bit(1)
  #define MSACKO    bit(0)
SFRX(I2CSLCR,           0xFE83);
  #define ESTAI     bit(6)
  #define ERXI      bit(5)
  #define ETXI      bit(4)
  #define ESTOI     bit(3)
  #define SLRST     bit(0)
SFRX(I2CSLST,           0xFE84);
  #define SLBUSY    bit(7)
  #define STAIF     bit(6)
  #define RXIF      bit(5)
  #define TXIF      bit(4)
  #define STOIF     bit(3)
  #define TXING     bit(2)
  #define SLACKI    bit(1)
  #define SLACKO    bit(0)
SFRX(I2CSCADR,          0xFE85);
  #define SLADR6    bit(7)
  #define SLADR5    bit(6)
  #define SLADR4    bit(5)
  #define SLADR3    bit(4)
  #define SLADR2    bit(3)
  #define SLADR1    bit(2)
  #define SLADR0    bit(1)
  #define MA        bit(0)
SFRX(I2CTXD,            0xFE86);
SFRX(I2CRXD,            0xFE87);
SFRX(I2CMSAUX,          0xFE88);
  #define WDTA      bit(0)

#define PxNCS          0xfe18
SFRX(P0NCS,            0xFE18);
SFRX(P1NCS,            0xFE19);
SFRX(P2NCS,            0xFE1A);
SFRX(P3NCS,            0xFE1B);
SFRX(P4NCS,            0xFE1C);
SFRX(P5NCS,            0xFE1D);
SFRX(P6NCS,            0xFE1E);
SFRX(P7NCS,            0xFE1F);

#define PxPU           0xfe10
SFRX(P0PU,             0xFE10);
SFRX(P1PU,             0xFE11);
SFRX(P2PU,             0xFE12);
SFRX(P3PU,             0xFE13);
SFRX(P4PU,             0xFE14);
SFRX(P5PU,             0xFE15);
SFRX(P6PU,             0xFE16);
SFRX(P7PU,             0xFE17);


SFRX(CKSEL,            0xFE00);
  #define MCKSEL0 bit(0)
  #define MCKSEL1 bit(1)
  #define MCLK0_S bit(3)  // 0=P54  1=P16
  #define MCLKODIV0 bit(4)
  #define MCLKODIV1 bit(5)
  #define MCLKODIV2 bit(6)
  #define MCLKODIV3 bit(7)
SFRX(CLKDIV,           0xFE01);
SFRX(IRC24MCR,         0xFE02);
  #define ENIRC24M  bit(7)  // 0=disable  1=enable Internal 24M IRC
  #define IRC24MST  bit(0)  // 0=Not Stable  1=Clock Stable
SFRX(XOSCCR,           0xFE03);
  #define ENXOSC  bit(7)  // 0=disable  1=enable External Xtal Osc
  #define XITYPE  bit(6)  // 0=Extrn Clock In on P1_7 1=Xtal Osc XtalI=P1_7 XtalO=P1_6
  #define XOSCMST  bit(0)  // 0=Not Stable  1=Clock Stable
SFRX(IRC32KCR,         0xFE04);
  #define ENIRC32K  bit(7)  // 0=disable  1=enable Internal 24M IRC
  #define IRC32KST  bit(0)  // 0=Not Stable  1=Clock Stable

#endif

/* Interrupt routine address and interrupt number */
#define INT_ADDR_INT0     0x0003    // interrupt vector address for INT0
#define INT_ADDR_TMR0     0x000B    // interrupt vector address for timer0
#define INT_ADDR_INT1     0x0013    // interrupt vector address for INT1
#define INT_ADDR_TMR1     0x001B    // interrupt vector address for timer1
#define INT_ADDR_UART0    0x0023    // interrupt vector address for UART1
#define INT_ADDR_ADC      0x002B    // interrupt vector address for ADC
#define INT_ADDR_LVD      0x0033    // interrupt vector address for LVD
#define INT_PCA           0x003B    // interrupt vector address for PCA
#define INT_ADDR_UART2    0x0043    // interrupt vector address for UART2
#define INT_ADDR_SPI      0x004B    // interrupt vector address for SPI
#define INT_ADDR_INT2     0x0053    // interrupt vector address for INT2
#define INT_ADDR_INT3     0x005B    // interrupt vector address for INT3
#define INT_ADDR_TIMER2   0x0063    // interrupt vector address for TIMER2
#define INT_ADDR_INT4     0x0083    // interrupt vector address for INT4
#define INT_ADDR_UART3    0x008B    // interrupt vector address for UART3
#define INT_ADDR_UART4    0x0093    // interrupt vector address for UART4
#define INT_ADDR_TIMER3   0x009B    // interrupt vector address for TIMER3
#define INT_ADDR_TIMER4   0x00A3    // interrupt vector address for TIMER4
#define INT_ADDR_CMP      0x00AB    // interrupt vector address for CMP
#define INT_ADDR_PWM      0x00B3    // interrupt vector address for PWM
#define INT_ADDR_PWMFD    0x00BB    // interrupt vector address for PWMFD
#define INT_ADDR_I2C      0x00C3    // interrupt vector address for I2C

#define INT_NO_INT0       0         // interrupt number for INT0
#define INT_NO_TMR0       1         // interrupt number for timer0
#define INT_NO_INT1       2         // interrupt number for INT1
#define INT_NO_TMR1       3         // interrupt number for timer1
#define INT_NO_UART1      4         // interrupt number for UART1
#define INT_NO_ADC        5         // interrupt number for ADC
#define INT_NO_LVD        6         // interrupt number for LVD
#define INT_NO_PCA        7         // interrupt number for PCA
#define INT_NO_UART2      8         // interrupt number for UART2
#define INT_NO_SPI        9         // interrupt number for SPI
#define INT_NO_INT2       10        // interrupt number for INT2
#define INT_NO_INT3       11        // interrupt number for INT3
#define INT_NO_TMR2       12        // interrupt number for TMR2
#define INT_NO_INT4       16        // interrupt number for INT4

#define INT_NO_UART3      17        // interrupt number for UART3
#define INT_NO_UART4      18        // interrupt number for UART4
#define INT_NO_TMR3       19        // interrupt number for TMR3
#define INT_NO_TMR4       20        // interrupt number for TMR4
#define INT_NO_CMP        21        // interrupt number for CMP
#define INT_NO_PWM        22        // interrupt number for PWM
#define INT_NO_PWMFD      23        // interrupt number for PWMFD
#define INT_NO_I2C        24        // interrupt number for I2C


/*** end of file ***/

