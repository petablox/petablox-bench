/*  ca_mcgill_sable_soot_jimple_StaticFieldRef.c -- from Java class ca.mcgill.sable.soot.jimple.StaticFieldRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_StaticFieldRef.h"
#include "ca_mcgill_sable_soot_jimple_FieldRef.h"
#include "ca_mcgill_sable_soot_ToBriefString.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_FieldRef.C,
    &cl_ca_mcgill_sable_soot_ToBriefString.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_StaticFieldRef[];
extern const void *st_ca_mcgill_sable_soot_jimple_StaticFieldRef[];
extern Class xt_init_S_8zx1Z[];
extern Class xt_toString__qJXhB[];
extern Class xt_toBriefString__oGs85[];
extern Class xt_getField__KS13V[];
extern Class xt_setField_S_K76aF[];
extern Class xt_getUseBoxes__eB6XS[];
extern Class xt_getType__DJtQk[];
extern Class xt_apply_S_6NWCZ[];
extern Class xt_equals_O_lpTbz[];

#define HASHMASK 0x7f
/*  10.  6d3e3310  (10)  getType  */
/*  11.  875cba91  (11)  getField  */
/*  13.  f9391693  (13)  getUseBoxes  */
/*  37.  9e646537  (37)  toBriefString  */
/*  61.  8942e761  (61)  hashCode  */
/*  6f.  494d5bef  (6f)  apply  */
/*  77.  30fd6bf7  (77)  setField  */
static const struct ihash htable[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1832792848, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.getType__DJtQk,
    -2023966063, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.getField__KS13V,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.getUseBoxes__eB6XS,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.toBriefString__oGs85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.hashCode__8wJNW,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.apply_S_6NWCZ,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    821914615, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.M.setField_S_K76aF,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','a','t','i','c','F','i',
'e','l','d','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmiv_0[] = {
'f','i','e','l','d'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','F','i','e','l','d',';'};
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
'<','i','n','i','t','>'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','F','i','e','l','d'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','F','i','e','l','d',';'};
static const Char nmim_15[] = {
's','e','t','F','i','e','l','d'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','F','i','e','l','d',';',')','V'};
static const Char nmim_16[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_17[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_18[] = {
'a','p','p','l','y'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef, field), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,32,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_StaticFieldRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_StaticFieldRef cl_ca_mcgill_sable_soot_jimple_StaticFieldRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef),
    19,
    0,
    1,
    0,
    2, supers,
    2, 2, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_StaticFieldRef,
    st_ca_mcgill_sable_soot_jimple_StaticFieldRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_StaticFieldRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x104,2,0},
	{TMIT_native_code, equals_O_lpTbz,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,8,xt_equals_O_lpTbz},
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
	{TMIT_native_code, toString__qJXhB,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__qJXhB},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_S_8zx1Z,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,35,1,0x0,0,xt_init_S_8zx1Z},
	{TMIT_native_code, toBriefString__oGs85,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_toBriefString__oGs85},
	{TMIT_native_code, getField__KS13V,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,34,1,0x8001,3,xt_getField__KS13V},
	{TMIT_native_code, setField_S_K76aF,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,35,1,0x8001,4,xt_setField_S_K76aF},
	{TMIT_native_code, getUseBoxes__eB6XS,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,29,1,0x8001,5,xt_getUseBoxes__eB6XS},
	{TMIT_native_code, getType__DJtQk,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,29,1,0x8001,6,xt_getType__DJtQk},
	{TMIT_native_code, apply_S_6NWCZ,(const Char *)&nmim_18,5,
	(const Char *)&sgim_18,32,1,0x8001,7,xt_apply_S_6NWCZ},
    } /* end of methodsigs */
};


/*M init_S_8zx1Z: ca.mcgill.sable.soot.jimple.StaticFieldRef.<init>(Lca/mcgill/sable/soot/SootField;)V */

Class xt_init_S_8zx1Z[] = { 0 };

Void init_S_8zx1Z(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a1)->field = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__qJXhB: ca.mcgill.sable.soot.jimple.StaticFieldRef.toString()Ljava/lang/String; */

Class xt_toString__qJXhB[] = { 0 };

Object toString__qJXhB(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_StaticFieldRef[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a2)->field;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getSignature__yo9RG.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_StaticFieldRef[2];
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

/*M toBriefString__oGs85: ca.mcgill.sable.soot.jimple.StaticFieldRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__oGs85[] = { 0 };

Object toBriefString__oGs85(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a3)->field;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getDeclaringClass__Ddy5k.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_StaticFieldRef[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a2)->field;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getName__LfNQ7.f(a2);
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

/*M getField__KS13V: ca.mcgill.sable.soot.jimple.StaticFieldRef.getField()Lca/mcgill/sable/soot/SootField; */

Class xt_getField__KS13V[] = { 0 };

Object getField__KS13V(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a1)->field;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setField_S_K76aF: ca.mcgill.sable.soot.jimple.StaticFieldRef.setField(Lca/mcgill/sable/soot/SootField;)V */

Class xt_setField_S_K76aF[] = { 0 };

Void setField_S_K76aF(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a1)->field = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__eB6XS: ca.mcgill.sable.soot.jimple.StaticFieldRef.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__eB6XS[] = { 0 };

Object getUseBoxes__eB6XS(Object p0)
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

/*M getType__DJtQk: ca.mcgill.sable.soot.jimple.StaticFieldRef.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__DJtQk[] = { 0 };

Object getType__DJtQk(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a1)->field;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		getType__NbCeK.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_6NWCZ: ca.mcgill.sable.soot.jimple.StaticFieldRef.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_6NWCZ[] = { 0 };

Void apply_S_6NWCZ(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1963691436)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_lpTbz: ca.mcgill.sable.soot.jimple.StaticFieldRef.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_lpTbz[] = { 0 };

Boolean equals_O_lpTbz(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L1);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_StaticFieldRef.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a1)->field;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_StaticFieldRef*)a2)->field;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	return i1;

L1:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_StaticFieldRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','S','t','a','t','i','c','F','i',
'e','l','d','R','e','f','[',']','.'};

const void *st_ca_mcgill_sable_soot_jimple_StaticFieldRef[] = {
    ch_ca_mcgill_sable_soot_jimple_StaticFieldRef+42,	/* 0. ca.mcgill.sable.soot.jimple.StaticFieldR */
    ch_ca_mcgill_sable_soot_jimple_StaticFieldRef+43,	/* 1. [ */
    ch_ca_mcgill_sable_soot_jimple_StaticFieldRef+44,	/* 2. ] */
    ch_ca_mcgill_sable_soot_jimple_StaticFieldRef+45,	/* 3. . */
    0};
