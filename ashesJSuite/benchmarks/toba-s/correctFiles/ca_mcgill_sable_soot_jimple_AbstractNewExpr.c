/*  ca_mcgill_sable_soot_jimple_AbstractNewExpr.c -- from Java class ca.mcgill.sable.soot.jimple.AbstractNewExpr  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_AbstractNewExpr.h"
#include "ca_mcgill_sable_soot_jimple_NewExpr.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_ExprSwitch.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_NewExpr.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_AbstractNewExpr[];
extern const void *st_ca_mcgill_sable_soot_jimple_AbstractNewExpr[];
extern Class xt_toString__SbHba[];
extern Class xt_toBriefString__2jKKy[];
extern Class xt_getBaseType__1Kp2i[];
extern Class xt_setBaseType_R_viJKO[];
extern Class xt_getType__R6W49[];
extern Class xt_getUseBoxes__uVuCN[];
extern Class xt_apply_S_ken5m[];
extern Class xt_init__SaUyW[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  c.  c3760a4c  (c)  getBaseType  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
/*  10.  6d3e3310  (10)  getType  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  17.  9e646537  (17)  toBriefString  */
/*  1e.  fc7a37fe  (1e)  setBaseType  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1015674292, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.getBaseType__1Kp2i,
    0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.apply_S_ken5m,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.getType__R6W49,
    0, 0, 0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.getUseBoxes__uVuCN,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.toBriefString__2jKKy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -59099138, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.M.setBaseType_R_viJKO,
    0, 0,
};

static const CARRAY(43) nmchars = {&acl_char, 0, 43, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'N','e','w','E','x','p','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 43 };
static const Char nmiv_0[] = {
't','y','p','e'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','R','e','f','T','y','p','e',';'};
static const Char nmim_0[] = {
'<','i','n','i','t','>'};
static const Char sgim_0[] = {
'(',')','V'};
static const Char nmim_1[] = {
'c','l','o','n','e'};
static const Char sgim_1[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_2[] = {
'e','q','u','a','l','s'};
static const Char sgim_2[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','Z'};
static const Char nmim_3[] = {
'f','i','n','a','l','i','z','e'};
static const Char sgim_3[] = {
'(',')','V'};
static const Char nmim_4[] = {
'g','e','t','C','l','a','s','s'};
static const Char sgim_4[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','C','l','a','s','s',
';'};
static const Char nmim_5[] = {
'h','a','s','h','C','o','d','e'};
static const Char sgim_5[] = {
'(',')','I'};
static const Char nmim_6[] = {
'n','o','t','i','f','y'};
static const Char sgim_6[] = {
'(',')','V'};
static const Char nmim_7[] = {
'n','o','t','i','f','y','A','l','l'};
static const Char sgim_7[] = {
'(',')','V'};
static const Char nmim_8[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_8[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_9[] = {
'w','a','i','t'};
static const Char sgim_9[] = {
'(',')','V'};
static const Char nmim_10[] = {
'w','a','i','t'};
static const Char sgim_10[] = {
'(','J',')','V'};
static const Char nmim_11[] = {
'w','a','i','t'};
static const Char sgim_11[] = {
'(','J','I',')','V'};
static const Char nmim_12[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_12[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_13[] = {
'g','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','R','e','f','T','y','p','e',';'};
static const Char nmim_14[] = {
's','e','t','B','a','s','e','T','y','p','e'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','R','e','f','T','y','p','e',';',')','V'};
static const Char nmim_15[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_16[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'a','p','p','l','y'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr, type), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,30,1,0x0,0}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_undefined}
};

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_jimple_AbstractNewExpr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr cl_ca_mcgill_sable_soot_jimple_AbstractNewExpr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr),
    18,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_AbstractNewExpr,
    st_ca_mcgill_sable_soot_jimple_AbstractNewExpr,
    0,
    init__SaUyW,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_AbstractNewExpr,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__SaUyW,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,7,xt_init__SaUyW},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__8wJNW,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8101,6,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__SbHba,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,0,xt_toString__SbHba},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, toBriefString__2jKKy,(const Char *)&nmim_12,13,
	(const Char *)&sgim_12,20,1,0x8001,1,xt_toBriefString__2jKKy},
	{TMIT_native_code, getBaseType__1Kp2i,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,32,1,0x8001,2,xt_getBaseType__1Kp2i},
	{TMIT_native_code, setBaseType_R_viJKO,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,33,1,0x8001,3,xt_setBaseType_R_viJKO},
	{TMIT_native_code, getType__R6W49,(const Char *)&nmim_15,7,
	(const Char *)&sgim_15,29,1,0x8001,4,xt_getType__R6W49},
	{TMIT_native_code, getUseBoxes__uVuCN,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,29,1,0x8001,5,xt_getUseBoxes__uVuCN},
	{TMIT_native_code, apply_S_ken5m,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,1,0x8001,6,xt_apply_S_ken5m},
    } /* end of methodsigs */
};


/*M toString__SbHba: ca.mcgill.sable.soot.jimple.AbstractNewExpr.toString()Ljava/lang/String; */

Class xt_toString__SbHba[] = { 0 };

Object toString__SbHba(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_AbstractNewExpr[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr*)a2)->type;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_RefType*)a2)->class->M.
		toString__qqwSR.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toBriefString__2jKKy: ca.mcgill.sable.soot.jimple.AbstractNewExpr.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__2jKKy[] = { 0 };

Object toBriefString__2jKKy(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr*)a1)->class->M.
		toString__SbHba.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getBaseType__1Kp2i: ca.mcgill.sable.soot.jimple.AbstractNewExpr.getBaseType()Lca/mcgill/sable/soot/RefType; */

Class xt_getBaseType__1Kp2i[] = { 0 };

Object getBaseType__1Kp2i(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setBaseType_R_viJKO: ca.mcgill.sable.soot.jimple.AbstractNewExpr.setBaseType(Lca/mcgill/sable/soot/RefType;)V */

Class xt_setBaseType_R_viJKO[] = { 0 };

Void setBaseType_R_viJKO(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__R6W49: ca.mcgill.sable.soot.jimple.AbstractNewExpr.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__R6W49[] = { 0 };

Object getType__R6W49(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_AbstractNewExpr*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__uVuCN: ca.mcgill.sable.soot.jimple.AbstractNewExpr.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__uVuCN[] = { 0 };

Object getUseBoxes__uVuCN(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	init_ca_mcgill_sable_soot_jimple_AbstractStmt();
	a1 = cl_ca_mcgill_sable_soot_jimple_AbstractStmt.V.emptyList;
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_ken5m: ca.mcgill.sable.soot.jimple.AbstractNewExpr.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_ken5m[] = { 0 };

Void apply_S_ken5m(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ExprSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,-729816108)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__SaUyW: ca.mcgill.sable.soot.jimple.AbstractNewExpr.<init>()V */

Class xt_init__SaUyW[] = { 0 };

Void init__SaUyW(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_AbstractNewExpr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','A','b','s','t','r','a','c','t',
'N','e','w','E','x','p','r','n','e','w',' '};

const void *st_ca_mcgill_sable_soot_jimple_AbstractNewExpr[] = {
    ch_ca_mcgill_sable_soot_jimple_AbstractNewExpr+43,	/* 0. ca.mcgill.sable.soot.jimple.AbstractNewE */
    ch_ca_mcgill_sable_soot_jimple_AbstractNewExpr+47,	/* 1. new  */
    0};
