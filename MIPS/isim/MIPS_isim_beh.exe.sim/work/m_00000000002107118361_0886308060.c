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
static const char *ng0 = "C:/Users/emir/homework/ProgramCounter/ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};
static int ng11[] = {10, 0};
static int ng12[] = {11, 0};
static int ng13[] = {12, 0};
static int ng14[] = {13, 0};
static int ng15[] = {14, 0};
static int ng16[] = {15, 0};
static int ng17[] = {16, 0};
static int ng18[] = {17, 0};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t61[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t63;
    char *t64;
    char *t65;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB30:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t6) = 1;

LAB74:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB95;

LAB92:    if (t18 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t6) = 1;

LAB95:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB116;

LAB113:    if (t18 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t6) = 1;

LAB116:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB140;

LAB137:    if (t18 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t6) = 1;

LAB140:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB164;

LAB161:    if (t18 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t6) = 1;

LAB164:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB203;

LAB200:    if (t18 != 0)
        goto LAB202;

LAB201:    *((unsigned int *)t6) = 1;

LAB203:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB204;

LAB205:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB228;

LAB225:    if (t18 != 0)
        goto LAB227;

LAB226:    *((unsigned int *)t6) = 1;

LAB228:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB229;

LAB230:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB253;

LAB250:    if (t18 != 0)
        goto LAB252;

LAB251:    *((unsigned int *)t6) = 1;

LAB253:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB254;

LAB255:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB279;

LAB276:    if (t18 != 0)
        goto LAB278;

LAB277:    *((unsigned int *)t6) = 1;

LAB279:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB280;

LAB281:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB305;

LAB302:    if (t18 != 0)
        goto LAB304;

LAB303:    *((unsigned int *)t6) = 1;

LAB305:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB306;

LAB307:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB331;

LAB328:    if (t18 != 0)
        goto LAB330;

LAB329:    *((unsigned int *)t6) = 1;

LAB331:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB332;

LAB333:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB357;

LAB354:    if (t18 != 0)
        goto LAB356;

LAB355:    *((unsigned int *)t6) = 1;

LAB357:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB358;

LAB359:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB365;

LAB362:    if (t18 != 0)
        goto LAB364;

LAB363:    *((unsigned int *)t6) = 1;

LAB365:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB366;

LAB367:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB386;

LAB383:    if (t18 != 0)
        goto LAB385;

LAB384:    *((unsigned int *)t6) = 1;

LAB386:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB387;

LAB388:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB407;

LAB404:    if (t18 != 0)
        goto LAB406;

LAB405:    *((unsigned int *)t6) = 1;

LAB407:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB408;

LAB409:
LAB410:
LAB389:
LAB368:
LAB360:
LAB334:
LAB308:
LAB282:
LAB256:
LAB231:
LAB206:
LAB167:
LAB143:
LAB119:
LAB98:
LAB77:
LAB54:
LAB33:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(36, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = (t0 + 1368U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t29, 32, t30, 32);
    t28 = (t0 + 1928);
    xsi_vlogvar_assign_value(t28, t31, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB17:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB18;

LAB19:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t8) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t31) > 0)
        goto LAB24;

LAB25:    memcpy(t6, t22, 8);

LAB26:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB12;

LAB14:    *((unsigned int *)t31) = 1;
    goto LAB17;

LAB16:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    t21 = ((char*)((ng1)));
    goto LAB19;

LAB20:    t22 = ((char*)((ng2)));
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB26;

LAB24:    memcpy(t6, t21, 8);
    goto LAB26;

LAB29:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(39, ng0);

LAB34:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t5) != 0)
        goto LAB37;

LAB38:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB39;

LAB40:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t8) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t31) > 0)
        goto LAB45;

LAB46:    memcpy(t6, t22, 8);

LAB47:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB33;

LAB35:    *((unsigned int *)t31) = 1;
    goto LAB38;

LAB37:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB39:    t21 = ((char*)((ng1)));
    goto LAB40;

LAB41:    t22 = ((char*)((ng2)));
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB47;

LAB45:    memcpy(t6, t21, 8);
    goto LAB47;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(43, ng0);

LAB55:    xsi_set_current_line(44, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t31 + 4);
    t28 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    *((unsigned int *)t31) = t33;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB57;

LAB56:    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 & 4294967295U);
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & 4294967295U);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t5) != 0)
        goto LAB60;

LAB61:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB62;

LAB63:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t8) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t31) > 0)
        goto LAB68;

LAB69:    memcpy(t6, t22, 8);

LAB70:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB54;

LAB57:    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t31) = (t34 | t35);
    t36 = *((unsigned int *)t21);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t21) = (t36 | t37);
    goto LAB56;

LAB58:    *((unsigned int *)t31) = 1;
    goto LAB61;

LAB60:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB61;

LAB62:    t21 = ((char*)((ng1)));
    goto LAB63;

LAB64:    t22 = ((char*)((ng2)));
    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB70;

LAB68:    memcpy(t6, t21, 8);
    goto LAB70;

LAB73:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(47, ng0);

LAB78:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1528U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 32, t22, 32, t28, 5);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t5) != 0)
        goto LAB81;

LAB82:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB83;

LAB84:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t8) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t31) > 0)
        goto LAB89;

LAB90:    memcpy(t6, t22, 8);

LAB91:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB77;

LAB79:    *((unsigned int *)t31) = 1;
    goto LAB82;

LAB81:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB82;

LAB83:    t21 = ((char*)((ng1)));
    goto LAB84;

LAB85:    t22 = ((char*)((ng2)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB91;

LAB89:    memcpy(t6, t21, 8);
    goto LAB91;

LAB94:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(51, ng0);

LAB99:    xsi_set_current_line(52, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1528U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 32, t22, 32, t28, 5);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t5) != 0)
        goto LAB102;

LAB103:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB104;

LAB105:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t8) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t31) > 0)
        goto LAB110;

LAB111:    memcpy(t6, t22, 8);

LAB112:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB98;

LAB100:    *((unsigned int *)t31) = 1;
    goto LAB103;

LAB102:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB103;

LAB104:    t21 = ((char*)((ng1)));
    goto LAB105;

LAB106:    t22 = ((char*)((ng2)));
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB112;

LAB110:    memcpy(t6, t21, 8);
    goto LAB112;

LAB115:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(55, ng0);

LAB120:    xsi_set_current_line(56, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t30);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB121;

LAB122:
LAB123:    t60 = (t0 + 1928);
    xsi_vlogvar_assign_value(t60, t31, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t5) != 0)
        goto LAB126;

LAB127:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB128;

LAB129:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t8) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t31) > 0)
        goto LAB134;

LAB135:    memcpy(t6, t22, 8);

LAB136:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB119;

LAB121:    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t40 | t41);
    t42 = (t22 + 4);
    t43 = (t28 + 4);
    t44 = *((unsigned int *)t22);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = (t45 & t47);
    t53 = (t49 & t51);
    t54 = (~(t52));
    t55 = (~(t53));
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t54);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t55);
    t58 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t58 & t54);
    t59 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t59 & t55);
    goto LAB123;

LAB124:    *((unsigned int *)t31) = 1;
    goto LAB127;

LAB126:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB127;

LAB128:    t21 = ((char*)((ng1)));
    goto LAB129;

LAB130:    t22 = ((char*)((ng2)));
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB136;

LAB134:    memcpy(t6, t21, 8);
    goto LAB136;

LAB139:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB140;

LAB141:    xsi_set_current_line(59, ng0);

LAB144:    xsi_set_current_line(60, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t30);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB145;

LAB146:
LAB147:    t60 = (t0 + 1928);
    xsi_vlogvar_assign_value(t60, t31, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t5) != 0)
        goto LAB150;

LAB151:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB152;

LAB153:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB154;

LAB155:    if (*((unsigned int *)t8) > 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t31) > 0)
        goto LAB158;

LAB159:    memcpy(t6, t22, 8);

LAB160:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB143;

LAB145:    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t40 | t41);
    t42 = (t22 + 4);
    t43 = (t28 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t22);
    t52 = (t46 & t45);
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t28);
    t53 = (t49 & t48);
    t50 = (~(t52));
    t51 = (~(t53));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t50);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t51);
    goto LAB147;

LAB148:    *((unsigned int *)t31) = 1;
    goto LAB151;

LAB150:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB151;

LAB152:    t21 = ((char*)((ng1)));
    goto LAB153;

LAB154:    t22 = ((char*)((ng2)));
    goto LAB155;

LAB156:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB160;

LAB158:    memcpy(t6, t21, 8);
    goto LAB160;

LAB163:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(63, ng0);

LAB168:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB170;

LAB169:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB170;

LAB173:    if (*((unsigned int *)t22) < *((unsigned int *)t28))
        goto LAB171;

LAB172:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (~(t32));
    t34 = *((unsigned int *)t62);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t42) != 0)
        goto LAB176;

LAB177:    t60 = (t61 + 4);
    t37 = *((unsigned int *)t61);
    t38 = *((unsigned int *)t60);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB178;

LAB179:    t40 = *((unsigned int *)t61);
    t41 = (~(t40));
    t44 = *((unsigned int *)t60);
    t45 = (t41 || t44);
    if (t45 > 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t60) > 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t61) > 0)
        goto LAB184;

LAB185:    memcpy(t31, t64, 8);

LAB186:    t65 = (t0 + 1928);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t5) != 0)
        goto LAB189;

LAB190:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB191;

LAB192:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB193;

LAB194:    if (*((unsigned int *)t8) > 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t31) > 0)
        goto LAB197;

LAB198:    memcpy(t6, t22, 8);

LAB199:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB167;

LAB170:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB172;

LAB171:    *((unsigned int *)t62) = 1;
    goto LAB172;

LAB174:    *((unsigned int *)t61) = 1;
    goto LAB177;

LAB176:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB177;

LAB178:    t63 = ((char*)((ng2)));
    goto LAB179;

LAB180:    t64 = ((char*)((ng1)));
    goto LAB181;

LAB182:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB186;

LAB184:    memcpy(t31, t63, 8);
    goto LAB186;

LAB187:    *((unsigned int *)t31) = 1;
    goto LAB190;

LAB189:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB190;

LAB191:    t21 = ((char*)((ng1)));
    goto LAB192;

LAB193:    t22 = ((char*)((ng2)));
    goto LAB194;

LAB195:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB199;

LAB197:    memcpy(t6, t21, 8);
    goto LAB199;

LAB202:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB203;

LAB204:    xsi_set_current_line(69, ng0);

LAB207:    xsi_set_current_line(70, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t29);
    t41 = (t39 | t40);
    t44 = (~(t41));
    t45 = (t38 & t44);
    if (t45 != 0)
        goto LAB211;

LAB208:    if (t41 != 0)
        goto LAB210;

LAB209:    *((unsigned int *)t62) = 1;

LAB211:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t62);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t42) != 0)
        goto LAB214;

LAB215:    t60 = (t61 + 4);
    t51 = *((unsigned int *)t61);
    t54 = *((unsigned int *)t60);
    t55 = (t51 || t54);
    if (t55 > 0)
        goto LAB216;

LAB217:    t56 = *((unsigned int *)t61);
    t57 = (~(t56));
    t58 = *((unsigned int *)t60);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t60) > 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t61) > 0)
        goto LAB222;

LAB223:    memcpy(t31, t64, 8);

LAB224:    t65 = (t0 + 2088);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 1);
    goto LAB206;

LAB210:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB211;

LAB212:    *((unsigned int *)t61) = 1;
    goto LAB215;

LAB214:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB215;

LAB216:    t63 = ((char*)((ng2)));
    goto LAB217;

LAB218:    t64 = ((char*)((ng1)));
    goto LAB219;

LAB220:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB224;

LAB222:    memcpy(t31, t63, 8);
    goto LAB224;

LAB227:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB228;

LAB229:    xsi_set_current_line(72, ng0);

LAB232:    xsi_set_current_line(73, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t21);
    t36 = *((unsigned int *)t29);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t29);
    t41 = (t39 | t40);
    t44 = (~(t41));
    t45 = (t38 & t44);
    if (t45 != 0)
        goto LAB234;

LAB233:    if (t41 != 0)
        goto LAB235;

LAB236:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t62);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB237;

LAB238:    if (*((unsigned int *)t42) != 0)
        goto LAB239;

LAB240:    t60 = (t61 + 4);
    t51 = *((unsigned int *)t61);
    t54 = *((unsigned int *)t60);
    t55 = (t51 || t54);
    if (t55 > 0)
        goto LAB241;

LAB242:    t56 = *((unsigned int *)t61);
    t57 = (~(t56));
    t58 = *((unsigned int *)t60);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB243;

LAB244:    if (*((unsigned int *)t60) > 0)
        goto LAB245;

LAB246:    if (*((unsigned int *)t61) > 0)
        goto LAB247;

LAB248:    memcpy(t31, t64, 8);

LAB249:    t65 = (t0 + 2088);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 1);
    goto LAB231;

LAB234:    *((unsigned int *)t62) = 1;
    goto LAB236;

LAB235:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB236;

LAB237:    *((unsigned int *)t61) = 1;
    goto LAB240;

LAB239:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB240;

LAB241:    t63 = ((char*)((ng2)));
    goto LAB242;

LAB243:    t64 = ((char*)((ng1)));
    goto LAB244;

LAB245:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB249;

LAB247:    memcpy(t31, t63, 8);
    goto LAB249;

LAB252:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB253;

LAB254:    xsi_set_current_line(75, ng0);

LAB257:    xsi_set_current_line(76, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB259;

LAB258:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB259;

LAB262:    if (*((unsigned int *)t22) > *((unsigned int *)t28))
        goto LAB260;

LAB261:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (~(t32));
    t34 = *((unsigned int *)t62);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB263;

LAB264:    if (*((unsigned int *)t42) != 0)
        goto LAB265;

LAB266:    t60 = (t61 + 4);
    t37 = *((unsigned int *)t61);
    t38 = *((unsigned int *)t60);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB267;

LAB268:    t40 = *((unsigned int *)t61);
    t41 = (~(t40));
    t44 = *((unsigned int *)t60);
    t45 = (t41 || t44);
    if (t45 > 0)
        goto LAB269;

LAB270:    if (*((unsigned int *)t60) > 0)
        goto LAB271;

LAB272:    if (*((unsigned int *)t61) > 0)
        goto LAB273;

LAB274:    memcpy(t31, t64, 8);

LAB275:    t65 = (t0 + 2088);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 1);
    goto LAB256;

LAB259:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB261;

LAB260:    *((unsigned int *)t62) = 1;
    goto LAB261;

LAB263:    *((unsigned int *)t61) = 1;
    goto LAB266;

LAB265:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB266;

LAB267:    t63 = ((char*)((ng2)));
    goto LAB268;

LAB269:    t64 = ((char*)((ng1)));
    goto LAB270;

LAB271:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB275;

LAB273:    memcpy(t31, t63, 8);
    goto LAB275;

LAB278:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB279;

LAB280:    xsi_set_current_line(78, ng0);

LAB283:    xsi_set_current_line(79, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB285;

LAB284:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB285;

LAB288:    if (*((unsigned int *)t22) < *((unsigned int *)t28))
        goto LAB287;

LAB286:    *((unsigned int *)t62) = 1;

LAB287:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (~(t32));
    t34 = *((unsigned int *)t62);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB289;

LAB290:    if (*((unsigned int *)t42) != 0)
        goto LAB291;

LAB292:    t60 = (t61 + 4);
    t37 = *((unsigned int *)t61);
    t38 = *((unsigned int *)t60);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB293;

LAB294:    t40 = *((unsigned int *)t61);
    t41 = (~(t40));
    t44 = *((unsigned int *)t60);
    t45 = (t41 || t44);
    if (t45 > 0)
        goto LAB295;

LAB296:    if (*((unsigned int *)t60) > 0)
        goto LAB297;

LAB298:    if (*((unsigned int *)t61) > 0)
        goto LAB299;

LAB300:    memcpy(t31, t64, 8);

LAB301:    t65 = (t0 + 2088);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 1);
    goto LAB282;

LAB285:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB287;

LAB289:    *((unsigned int *)t61) = 1;
    goto LAB292;

LAB291:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB292;

LAB293:    t63 = ((char*)((ng2)));
    goto LAB294;

LAB295:    t64 = ((char*)((ng1)));
    goto LAB296;

LAB297:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB301;

LAB299:    memcpy(t31, t63, 8);
    goto LAB301;

LAB304:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB305;

LAB306:    xsi_set_current_line(81, ng0);

LAB309:    xsi_set_current_line(82, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB311;

LAB310:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB311;

LAB314:    if (*((unsigned int *)t22) < *((unsigned int *)t28))
        goto LAB312;

LAB313:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (~(t32));
    t34 = *((unsigned int *)t62);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB315;

LAB316:    if (*((unsigned int *)t42) != 0)
        goto LAB317;

LAB318:    t60 = (t61 + 4);
    t37 = *((unsigned int *)t61);
    t38 = *((unsigned int *)t60);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB319;

LAB320:    t40 = *((unsigned int *)t61);
    t41 = (~(t40));
    t44 = *((unsigned int *)t60);
    t45 = (t41 || t44);
    if (t45 > 0)
        goto LAB321;

LAB322:    if (*((unsigned int *)t60) > 0)
        goto LAB323;

LAB324:    if (*((unsigned int *)t61) > 0)
        goto LAB325;

LAB326:    memcpy(t31, t64, 8);

LAB327:    t65 = (t0 + 2088);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 1);
    goto LAB308;

LAB311:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB313;

LAB312:    *((unsigned int *)t62) = 1;
    goto LAB313;

LAB315:    *((unsigned int *)t61) = 1;
    goto LAB318;

LAB317:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB318;

LAB319:    t63 = ((char*)((ng2)));
    goto LAB320;

LAB321:    t64 = ((char*)((ng1)));
    goto LAB322;

LAB323:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB327;

LAB325:    memcpy(t31, t63, 8);
    goto LAB327;

LAB330:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB331;

LAB332:    xsi_set_current_line(84, ng0);

LAB335:    xsi_set_current_line(85, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t62, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB337;

LAB336:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB337;

LAB340:    if (*((unsigned int *)t22) > *((unsigned int *)t28))
        goto LAB339;

LAB338:    *((unsigned int *)t62) = 1;

LAB339:    memset(t61, 0, 8);
    t42 = (t62 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (~(t32));
    t34 = *((unsigned int *)t62);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB341;

LAB342:    if (*((unsigned int *)t42) != 0)
        goto LAB343;

LAB344:    t60 = (t61 + 4);
    t37 = *((unsigned int *)t61);
    t38 = *((unsigned int *)t60);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB345;

LAB346:    t40 = *((unsigned int *)t61);
    t41 = (~(t40));
    t44 = *((unsigned int *)t60);
    t45 = (t41 || t44);
    if (t45 > 0)
        goto LAB347;

LAB348:    if (*((unsigned int *)t60) > 0)
        goto LAB349;

LAB350:    if (*((unsigned int *)t61) > 0)
        goto LAB351;

LAB352:    memcpy(t31, t64, 8);

LAB353:    t65 = (t0 + 2088);
    xsi_vlogvar_assign_value(t65, t31, 0, 0, 1);
    goto LAB334;

LAB337:    t30 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB339;

LAB341:    *((unsigned int *)t61) = 1;
    goto LAB344;

LAB343:    t43 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB344;

LAB345:    t63 = ((char*)((ng2)));
    goto LAB346;

LAB347:    t64 = ((char*)((ng1)));
    goto LAB348;

LAB349:    xsi_vlog_unsigned_bit_combine(t31, 32, t63, 32, t64, 32);
    goto LAB353;

LAB351:    memcpy(t31, t63, 8);
    goto LAB353;

LAB356:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB357;

LAB358:    xsi_set_current_line(88, ng0);

LAB361:    xsi_set_current_line(90, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB360;

LAB364:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB365;

LAB366:    xsi_set_current_line(93, ng0);

LAB369:    xsi_set_current_line(94, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB370;

LAB371:    if (*((unsigned int *)t5) != 0)
        goto LAB372;

LAB373:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB374;

LAB375:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB376;

LAB377:    if (*((unsigned int *)t8) > 0)
        goto LAB378;

LAB379:    if (*((unsigned int *)t31) > 0)
        goto LAB380;

LAB381:    memcpy(t6, t22, 8);

LAB382:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB368;

LAB370:    *((unsigned int *)t31) = 1;
    goto LAB373;

LAB372:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB373;

LAB374:    t21 = ((char*)((ng1)));
    goto LAB375;

LAB376:    t22 = ((char*)((ng2)));
    goto LAB377;

LAB378:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB382;

LAB380:    memcpy(t6, t21, 8);
    goto LAB382;

LAB385:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB386;

LAB387:    xsi_set_current_line(98, ng0);

LAB390:    xsi_set_current_line(99, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_divide(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB391;

LAB392:    if (*((unsigned int *)t5) != 0)
        goto LAB393;

LAB394:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB395;

LAB396:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB397;

LAB398:    if (*((unsigned int *)t8) > 0)
        goto LAB399;

LAB400:    if (*((unsigned int *)t31) > 0)
        goto LAB401;

LAB402:    memcpy(t6, t22, 8);

LAB403:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB389;

LAB391:    *((unsigned int *)t31) = 1;
    goto LAB394;

LAB393:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB394;

LAB395:    t21 = ((char*)((ng1)));
    goto LAB396;

LAB397:    t22 = ((char*)((ng2)));
    goto LAB398;

LAB399:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB403;

LAB401:    memcpy(t6, t21, 8);
    goto LAB403;

LAB406:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB407;

LAB408:    xsi_set_current_line(103, ng0);

LAB411:    xsi_set_current_line(104, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 4294967295U);
    if (t13 != 0)
        goto LAB412;

LAB413:    if (*((unsigned int *)t5) != 0)
        goto LAB414;

LAB415:    t8 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB416;

LAB417:    t17 = *((unsigned int *)t31);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB418;

LAB419:    if (*((unsigned int *)t8) > 0)
        goto LAB420;

LAB421:    if (*((unsigned int *)t31) > 0)
        goto LAB422;

LAB423:    memcpy(t6, t22, 8);

LAB424:    t28 = (t0 + 2088);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 1);
    goto LAB410;

LAB412:    *((unsigned int *)t31) = 1;
    goto LAB415;

LAB414:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB415;

LAB416:    t21 = ((char*)((ng1)));
    goto LAB417;

LAB418:    t22 = ((char*)((ng2)));
    goto LAB419;

LAB420:    xsi_vlog_unsigned_bit_combine(t6, 32, t21, 32, t22, 32);
    goto LAB424;

LAB422:    memcpy(t6, t21, 8);
    goto LAB424;

}


extern void work_m_00000000002107118361_0886308060_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002107118361_0886308060", "isim/MIPS_isim_beh.exe.sim/work/m_00000000002107118361_0886308060.didat");
	xsi_register_executes(pe);
}
