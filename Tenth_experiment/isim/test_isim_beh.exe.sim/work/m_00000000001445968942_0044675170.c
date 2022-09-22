/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/Desktop/FPGA/tenth_experiment/OP_Func.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {4U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {37U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {38U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {39U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {43U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {12U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {35U, 0U};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);

LAB43:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB44:    t2 = ((char*)((ng18)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng19)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng20)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng21)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng22)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t28 == 1)
        goto LAB63;

LAB64:
LAB65:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t26 = (t0 + 1208U);
    t27 = *((char **)t26);

LAB14:    t26 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t26, 6);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng18)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 6, t2, 6);
    if (t28 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB12;

LAB15:    xsi_set_current_line(46, ng0);

LAB34:    xsi_set_current_line(46, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB33;

LAB17:    xsi_set_current_line(47, ng0);

LAB35:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB19:    xsi_set_current_line(48, ng0);

LAB36:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB21:    xsi_set_current_line(49, ng0);

LAB37:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB23:    xsi_set_current_line(50, ng0);

LAB38:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB25:    xsi_set_current_line(51, ng0);

LAB39:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB27:    xsi_set_current_line(52, ng0);

LAB40:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB29:    xsi_set_current_line(53, ng0);

LAB41:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB33;

LAB31:    xsi_set_current_line(54, ng0);

LAB42:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB45:    xsi_set_current_line(60, ng0);

LAB66:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB65;

LAB47:    xsi_set_current_line(61, ng0);

LAB67:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB65;

LAB49:    xsi_set_current_line(62, ng0);

LAB68:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB65;

LAB51:    xsi_set_current_line(63, ng0);

LAB69:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB65;

LAB53:    xsi_set_current_line(64, ng0);

LAB70:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB65;

LAB55:    xsi_set_current_line(65, ng0);

LAB71:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB65;

LAB57:    xsi_set_current_line(66, ng0);

LAB72:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t4 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t2) != 0)
        goto LAB75;

LAB76:    t19 = (t31 + 4);
    t12 = *((unsigned int *)t31);
    t13 = *((unsigned int *)t19);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB77;

LAB78:    t15 = *((unsigned int *)t31);
    t16 = (~(t15));
    t17 = *((unsigned int *)t19);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t19) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t31) > 0)
        goto LAB83;

LAB84:    memcpy(t6, t26, 8);

LAB85:    t29 = (t0 + 2888);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB65;

LAB59:    xsi_set_current_line(67, ng0);

LAB86:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t31, 0, 8);
    t2 = (t4 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t2) != 0)
        goto LAB89;

LAB90:    t19 = (t31 + 4);
    t12 = *((unsigned int *)t31);
    t13 = *((unsigned int *)t19);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB91;

LAB92:    t15 = *((unsigned int *)t31);
    t16 = (~(t15));
    t17 = *((unsigned int *)t19);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t19) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t31) > 0)
        goto LAB97;

LAB98:    memcpy(t6, t26, 8);

LAB99:    t29 = (t0 + 2888);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB65;

LAB61:    xsi_set_current_line(68, ng0);

LAB100:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB65;

LAB63:    xsi_set_current_line(69, ng0);

LAB101:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng14)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB65;

LAB73:    *((unsigned int *)t31) = 1;
    goto LAB76;

LAB75:    t5 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB76;

LAB77:    t20 = ((char*)((ng12)));
    goto LAB78;

LAB79:    t26 = ((char*)((ng4)));
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t6, 2, t20, 2, t26, 2);
    goto LAB85;

LAB83:    memcpy(t6, t20, 8);
    goto LAB85;

LAB87:    *((unsigned int *)t31) = 1;
    goto LAB90;

LAB89:    t5 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB90;

LAB91:    t20 = ((char*)((ng4)));
    goto LAB92;

LAB93:    t26 = ((char*)((ng12)));
    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t6, 2, t20, 2, t26, 2);
    goto LAB99;

LAB97:    memcpy(t6, t20, 8);
    goto LAB99;

}


extern void work_m_00000000001445968942_0044675170_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000001445968942_0044675170", "isim/test_isim_beh.exe.sim/work/m_00000000001445968942_0044675170.didat");
	xsi_register_executes(pe);
}
