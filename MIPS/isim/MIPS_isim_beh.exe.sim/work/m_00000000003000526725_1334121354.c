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
static const char *ng0 = "C:/Users/emir/homework/ProgramCounter/cache.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static int ng3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4294967295U, 4294967295U};
static int ng10[] = {153, 0};
static int ng11[] = {5, 0};



static void Initial_37_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 3208);
    t16 = (t0 + 3208);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3208);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3368);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_43_1(char *t0)
{
    char t4[8];
    char t15[40];
    char t23[8];
    char t36[8];
    char t47[8];
    char t60[8];
    char t68[8];
    char t106[32];
    char t111[8];
    char t112[8];
    char t113[8];
    char t114[8];
    char t117[8];
    char t138[8];
    char t155[8];
    char t156[8];
    char t161[8];
    char t188[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
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
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t115;
    char *t116;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 7);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 7);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 33554431U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 33554431U);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 25);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 4);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3208);
    t7 = (t6 + 72U);
    t14 = *((char **)t7);
    t16 = (t0 + 3208);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_array_select_value(t15, 154, t5, t14, t18, 2, 1, t21, 4, 2);
    t22 = (t0 + 2888);
    xsi_vlogvar_assign_value(t22, t15, 0, 0, 154);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    memset(t4, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 32);
    t18 = (t14 + 36);
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t18);
    t11 = (t10 >> 0);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 33554431U);
    t13 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t13 & 33554431U);
    memset(t23, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t4);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t20);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t20);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB9;

LAB6:    if (t33 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t23) = 1;

LAB9:    memset(t36, 0, 8);
    t22 = (t23 + 4);
    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB13:    t43 = (t36 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    memcpy(t68, t36, 8);

LAB16:    t100 = (t68 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t68);
    t104 = (t103 & t102);
    t105 = (t104 != 0);
    if (t105 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(61, ng0);

LAB96:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t14 = (t0 + 3208);
    t16 = (t14 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2408);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t17, 2, 1, t20, 4, 2);
    t21 = (t0 + 3208);
    t22 = (t21 + 72U);
    t42 = *((char **)t22);
    t43 = ((char*)((ng10)));
    t48 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t36, t47, t60, ((int*)(t42)), 2, t43, 32, 1, t48, 32, 1);
    t49 = (t4 + 4);
    t8 = *((unsigned int *)t49);
    t92 = (!(t8));
    t50 = (t23 + 4);
    t9 = *((unsigned int *)t50);
    t93 = (!(t9));
    t207 = (t92 && t93);
    t51 = (t36 + 4);
    t10 = *((unsigned int *)t51);
    t208 = (!(t10));
    t209 = (t207 && t208);
    t52 = (t47 + 4);
    t11 = *((unsigned int *)t52);
    t210 = (!(t11));
    t211 = (t209 && t210);
    t53 = (t60 + 4);
    t12 = *((unsigned int *)t53);
    t212 = (!(t12));
    t213 = (t211 && t212);
    if (t213 == 1)
        goto LAB97;

LAB98:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB99;

LAB100:
LAB101:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t24 = (t10 | t13);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB108;

LAB107:    if (t27 != 0)
        goto LAB109;

LAB110:    t17 = (t4 + 4);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = *((unsigned int *)t4);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB113:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB26:    goto LAB2;

LAB8:    t21 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t36) = 1;
    goto LAB13;

LAB12:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB13;

LAB14:    t48 = (t0 + 2888);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t47, 0, 8);
    t51 = (t47 + 4);
    t52 = (t50 + 32);
    t53 = (t50 + 36);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 25);
    *((unsigned int *)t47) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 25);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t58 & 1U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 1U);
    memset(t60, 0, 8);
    t61 = (t47 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t47);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t61) != 0)
        goto LAB19;

LAB20:    t69 = *((unsigned int *)t36);
    t70 = *((unsigned int *)t60);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t36 + 4);
    t73 = (t60 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t60) = 1;
    goto LAB20;

LAB19:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB20;

LAB21:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t36 + 4);
    t83 = (t60 + 4);
    t84 = *((unsigned int *)t36);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t60);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = (t85 & t87);
    t93 = (t89 & t91);
    t94 = (~(t92));
    t95 = (~(t93));
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    t99 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t99 & t95);
    goto LAB23;

LAB24:    xsi_set_current_line(51, ng0);

LAB27:    xsi_set_current_line(52, ng0);
    t107 = (t0 + 2888);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    xsi_vlog_get_part_select_value(t106, 128, t109, 127, 0);
    t110 = (t0 + 3048);
    xsi_vlogvar_assign_value(t110, t106, 0, 0, 128);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t36, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t24 = (t10 | t13);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB31;

LAB28:    if (t27 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t36) = 1;

LAB31:    memset(t23, 0, 8);
    t17 = (t36 + 4);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = *((unsigned int *)t36);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t17) != 0)
        goto LAB34;

LAB35:    t19 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t19);
    t38 = (t35 || t37);
    if (t38 > 0)
        goto LAB36;

LAB37:    t54 = *((unsigned int *)t23);
    t55 = (~(t54));
    t56 = *((unsigned int *)t19);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t19) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t23) > 0)
        goto LAB42;

LAB43:    memcpy(t4, t60, 8);

LAB44:    t206 = (t0 + 1928);
    xsi_vlogvar_assign_value(t206, t4, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB26;

LAB30:    t16 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t23) = 1;
    goto LAB35;

LAB34:    t18 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB36:    t20 = (t0 + 3048);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t47, 0, 8);
    t42 = (t47 + 4);
    t43 = (t22 + 4);
    t39 = *((unsigned int *)t22);
    t40 = (t39 >> 0);
    *((unsigned int *)t47) = t40;
    t41 = *((unsigned int *)t43);
    t44 = (t41 >> 0);
    *((unsigned int *)t42) = t44;
    t45 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t46 & 4294967295U);
    goto LAB37;

LAB38:    t48 = (t0 + 2248);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng6)));
    memset(t111, 0, 8);
    t52 = (t50 + 4);
    t53 = (t51 + 4);
    t58 = *((unsigned int *)t50);
    t59 = *((unsigned int *)t51);
    t62 = (t58 ^ t59);
    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t53);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t69 = *((unsigned int *)t52);
    t70 = *((unsigned int *)t53);
    t71 = (t69 | t70);
    t75 = (~(t71));
    t76 = (t66 & t75);
    if (t76 != 0)
        goto LAB48;

LAB45:    if (t71 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t111) = 1;

LAB48:    memset(t68, 0, 8);
    t67 = (t111 + 4);
    t77 = *((unsigned int *)t67);
    t78 = (~(t77));
    t79 = *((unsigned int *)t111);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t67) != 0)
        goto LAB51;

LAB52:    t73 = (t68 + 4);
    t84 = *((unsigned int *)t68);
    t85 = *((unsigned int *)t73);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB53;

LAB54:    t95 = *((unsigned int *)t68);
    t96 = (~(t95));
    t97 = *((unsigned int *)t73);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t73) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t68) > 0)
        goto LAB59;

LAB60:    memcpy(t60, t113, 8);

LAB61:    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t4, 32, t47, 32, t60, 32);
    goto LAB44;

LAB42:    memcpy(t4, t47, 8);
    goto LAB44;

LAB47:    t61 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t68) = 1;
    goto LAB52;

LAB51:    t72 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB52;

LAB53:    t74 = (t0 + 3048);
    t82 = (t74 + 56U);
    t83 = *((char **)t82);
    memset(t112, 0, 8);
    t100 = (t112 + 4);
    t107 = (t83 + 8);
    t108 = (t83 + 12);
    t87 = *((unsigned int *)t107);
    t88 = (t87 >> 0);
    *((unsigned int *)t112) = t88;
    t89 = *((unsigned int *)t108);
    t90 = (t89 >> 0);
    *((unsigned int *)t100) = t90;
    t91 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t91 & 4294967295U);
    t94 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t94 & 4294967295U);
    goto LAB54;

LAB55:    t109 = (t0 + 2248);
    t110 = (t109 + 56U);
    t115 = *((char **)t110);
    t116 = ((char*)((ng7)));
    memset(t117, 0, 8);
    t118 = (t115 + 4);
    t119 = (t116 + 4);
    t99 = *((unsigned int *)t115);
    t101 = *((unsigned int *)t116);
    t102 = (t99 ^ t101);
    t103 = *((unsigned int *)t118);
    t104 = *((unsigned int *)t119);
    t105 = (t103 ^ t104);
    t120 = (t102 | t105);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB65;

LAB62:    if (t123 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t117) = 1;

LAB65:    memset(t114, 0, 8);
    t127 = (t117 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t117);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t127) != 0)
        goto LAB68;

LAB69:    t134 = (t114 + 4);
    t135 = *((unsigned int *)t114);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB70;

LAB71:    t151 = *((unsigned int *)t114);
    t152 = (~(t151));
    t153 = *((unsigned int *)t134);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t134) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t114) > 0)
        goto LAB76;

LAB77:    memcpy(t113, t155, 8);

LAB78:    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t60, 32, t112, 32, t113, 32);
    goto LAB61;

LAB59:    memcpy(t60, t112, 8);
    goto LAB61;

LAB64:    t126 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t114) = 1;
    goto LAB69;

LAB68:    t133 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB69;

LAB70:    t139 = (t0 + 3048);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    memset(t138, 0, 8);
    t142 = (t138 + 4);
    t143 = (t141 + 16);
    t144 = (t141 + 20);
    t145 = *((unsigned int *)t143);
    t146 = (t145 >> 0);
    *((unsigned int *)t138) = t146;
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 0);
    *((unsigned int *)t142) = t148;
    t149 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t149 & 4294967295U);
    t150 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t150 & 4294967295U);
    goto LAB71;

LAB72:    t157 = (t0 + 2248);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    t160 = ((char*)((ng8)));
    memset(t161, 0, 8);
    t162 = (t159 + 4);
    t163 = (t160 + 4);
    t164 = *((unsigned int *)t159);
    t165 = *((unsigned int *)t160);
    t166 = (t164 ^ t165);
    t167 = *((unsigned int *)t162);
    t168 = *((unsigned int *)t163);
    t169 = (t167 ^ t168);
    t170 = (t166 | t169);
    t171 = *((unsigned int *)t162);
    t172 = *((unsigned int *)t163);
    t173 = (t171 | t172);
    t174 = (~(t173));
    t175 = (t170 & t174);
    if (t175 != 0)
        goto LAB82;

LAB79:    if (t173 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t161) = 1;

LAB82:    memset(t156, 0, 8);
    t177 = (t161 + 4);
    t178 = *((unsigned int *)t177);
    t179 = (~(t178));
    t180 = *((unsigned int *)t161);
    t181 = (t180 & t179);
    t182 = (t181 & 1U);
    if (t182 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t177) != 0)
        goto LAB85;

LAB86:    t184 = (t156 + 4);
    t185 = *((unsigned int *)t156);
    t186 = *((unsigned int *)t184);
    t187 = (t185 || t186);
    if (t187 > 0)
        goto LAB87;

LAB88:    t201 = *((unsigned int *)t156);
    t202 = (~(t201));
    t203 = *((unsigned int *)t184);
    t204 = (t202 || t203);
    if (t204 > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t184) > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t156) > 0)
        goto LAB93;

LAB94:    memcpy(t155, t205, 8);

LAB95:    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t113, 32, t138, 32, t155, 32);
    goto LAB78;

LAB76:    memcpy(t113, t138, 8);
    goto LAB78;

LAB81:    t176 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t156) = 1;
    goto LAB86;

LAB85:    t183 = (t156 + 4);
    *((unsigned int *)t156) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB86;

LAB87:    t189 = (t0 + 3048);
    t190 = (t189 + 56U);
    t191 = *((char **)t190);
    memset(t188, 0, 8);
    t192 = (t188 + 4);
    t193 = (t191 + 24);
    t194 = (t191 + 28);
    t195 = *((unsigned int *)t193);
    t196 = (t195 >> 0);
    *((unsigned int *)t188) = t196;
    t197 = *((unsigned int *)t194);
    t198 = (t197 >> 0);
    *((unsigned int *)t192) = t198;
    t199 = *((unsigned int *)t188);
    *((unsigned int *)t188) = (t199 & 4294967295U);
    t200 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t200 & 4294967295U);
    goto LAB88;

LAB89:    t205 = ((char*)((ng9)));
    goto LAB90;

LAB91:    xsi_vlog_unsigned_bit_combine(t155, 32, t188, 32, t205, 32);
    goto LAB95;

LAB93:    memcpy(t155, t188, 8);
    goto LAB95;

LAB97:    t13 = *((unsigned int *)t60);
    t214 = (t13 + 0);
    t24 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t47);
    t215 = (t24 + t25);
    t26 = *((unsigned int *)t36);
    t27 = *((unsigned int *)t47);
    t216 = (t26 - t27);
    t217 = (t216 + 1);
    xsi_vlogvar_assign_value(t3, t2, t214, t215, t217);
    goto LAB98;

LAB99:    xsi_set_current_line(64, ng0);

LAB102:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 1368U);
    t16 = *((char **)t14);
    t14 = (t0 + 2088);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    xsi_vlogtype_concat(t15, 154, 154, 3U, t19, 1, t18, 25, t16, 128);
    t20 = (t0 + 3208);
    t21 = (t0 + 3208);
    t22 = (t21 + 72U);
    t42 = *((char **)t22);
    t43 = (t0 + 3208);
    t48 = (t43 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2408);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_convert_array_indices(t23, t36, t42, t49, 2, 1, t52, 4, 2);
    t53 = (t23 + 4);
    t13 = *((unsigned int *)t53);
    t92 = (!(t13));
    t61 = (t36 + 4);
    t24 = *((unsigned int *)t61);
    t93 = (!(t24));
    t207 = (t92 && t93);
    if (t207 == 1)
        goto LAB103;

LAB104:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    t5 = (t0 + 3208);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t14 = (t0 + 3208);
    t16 = (t14 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 2408);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t17, 2, 1, t20, 4, 2);
    t21 = (t0 + 3208);
    t22 = (t21 + 72U);
    t42 = *((char **)t22);
    t43 = ((char*)((ng10)));
    t48 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t36, t47, t60, ((int*)(t42)), 2, t43, 32, 1, t48, 32, 1);
    t49 = (t4 + 4);
    t8 = *((unsigned int *)t49);
    t92 = (!(t8));
    t50 = (t23 + 4);
    t9 = *((unsigned int *)t50);
    t93 = (!(t9));
    t207 = (t92 && t93);
    t51 = (t36 + 4);
    t10 = *((unsigned int *)t51);
    t208 = (!(t10));
    t209 = (t207 && t208);
    t52 = (t47 + 4);
    t11 = *((unsigned int *)t52);
    t210 = (!(t11));
    t211 = (t209 && t210);
    t53 = (t60 + 4);
    t12 = *((unsigned int *)t53);
    t212 = (!(t12));
    t213 = (t211 && t212);
    if (t213 == 1)
        goto LAB105;

LAB106:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB101;

LAB103:    t25 = *((unsigned int *)t23);
    t26 = *((unsigned int *)t36);
    t208 = (t25 - t26);
    t209 = (t208 + 1);
    xsi_vlogvar_assign_value(t20, t15, 0, *((unsigned int *)t36), t209);
    goto LAB104;

LAB105:    t13 = *((unsigned int *)t60);
    t214 = (t13 + 0);
    t24 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t47);
    t215 = (t24 + t25);
    t26 = *((unsigned int *)t36);
    t27 = *((unsigned int *)t47);
    t216 = (t26 - t27);
    t217 = (t216 + 1);
    xsi_vlogvar_assign_value(t3, t2, t214, t215, t217);
    goto LAB106;

LAB108:    *((unsigned int *)t4) = 1;
    goto LAB110;

LAB109:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(70, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 3528);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    goto LAB113;

}


extern void work_m_00000000003000526725_1334121354_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000003000526725_1334121354", "isim/MIPS_isim_beh.exe.sim/work/m_00000000003000526725_1334121354.didat");
	xsi_register_executes(pe);
}
