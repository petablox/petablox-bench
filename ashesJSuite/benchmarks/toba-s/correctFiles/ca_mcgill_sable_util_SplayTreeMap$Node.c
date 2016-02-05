/*  ca_mcgill_sable_util_SplayTreeMap$Node.c -- from Java class ca.mcgill.sable.util.SplayTreeMap$Node  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_SplayTreeMap$Node.h"
#include "ca_mcgill_sable_util_AbstractMap$AbstractEntry.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_SplayTreeMap.h"
#include "ca_mcgill_sable_util_SplayTreeMap$EntryCollection.h"
#include "ca_mcgill_sable_util_SplayTreeMap$EntryIterator.h"
#include "java_lang_NullPointerException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Spla_Cgwz5.C,
    &cl_ca_mcgill_sable_util_Abst_FQuSs.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_SplayTreeMap.C,
    &cl_ca_mcgill_sable_util_Spla_8RYAj.C,
    &cl_ca_mcgill_sable_util_Spla_gQTcK.C,
    &cl_java_lang_NullPointerException.C,
};

extern const Char ch_ca_mcgill_sable_util_Spla_Cgwz5[];
extern const void *st_ca_mcgill_sable_util_Spla_Cgwz5[];
extern Class xt_init_OO_trzWw[];
extern Class xt_getKey__azarQ[];
extern Class xt_getValue__q3Pa2[];
extern Class xt_setValue_O_Q0wRy[];
extern Class xt_getLeft__7iwoc[];
extern Class xt_setLeft_S_B6NBJ[];
extern Class xt_getRight__Ut8tS[];
extern Class xt_setRight_S_61sM7[];
extern Class xt_getParent__MZBKw[];
extern Class xt_removeChild_S_O9TXS[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  2.  e1b631a2  (2)  setValue  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
/*  12.  4c0d6fd2  (12)  clone  */
/*  16.  b25b196  (16)  getValue  */
/*  1a.  6f566dfa  (1a)  getKey  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.hashCode__mOf3l,
    -508153438, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.setValue_O_Q0wRy,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.equals_O_pR9rc,
    1218416239, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.toString__4d9OF,
    0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    187019670, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.getValue__q3Pa2, 0, 0,
    0, 0, 0, 0,
    1867935226, &cl_ca_mcgill_sable_util_Spla_Cgwz5.M.getKey__azarQ, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','p','l','a','y','T','r','e','e','M','a','p','$','N','o',
'd','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
static const Char nmiv_0[] = {
'k','e','y'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_1[] = {
'v','a','l','u','e'};
static const Char sgiv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_2[] = {
'l','e','f','t'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$','N',
'o','d','e',';'};
static const Char nmiv_3[] = {
'r','i','g','h','t'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$','N',
'o','d','e',';'};
static const Char nmiv_4[] = {
'p','a','r','e','n','t'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$','N',
'o','d','e',';'};
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
'g','e','t','K','e','y'};
static const Char sgim_12[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_13[] = {
'g','e','t','V','a','l','u','e'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
's','e','t','V','a','l','u','e'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_15[] = {
'<','i','n','i','t','>'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_16[] = {
'g','e','t','L','e','f','t'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',
'$','N','o','d','e',';'};
static const Char nmim_17[] = {
's','e','t','L','e','f','t'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$',
'N','o','d','e',';',')','V'};
static const Char nmim_18[] = {
'g','e','t','R','i','g','h','t'};
static const Char sgim_18[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',
'$','N','o','d','e',';'};
static const Char nmim_19[] = {
's','e','t','R','i','g','h','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$',
'N','o','d','e',';',')','V'};
static const Char nmim_20[] = {
'g','e','t','P','a','r','e','n','t'};
static const Char sgim_20[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',
'$','N','o','d','e',';'};
static const Char nmim_21[] = {
'r','e','m','o','v','e','C','h','i','l','d'};
static const Char sgim_21[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$',
'N','o','d','e',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Spla_Cgwz5, key), 0,(const Char *)&nmiv_0,3,(const Char *)&sgiv_0,18,1,0x2,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_Cgwz5, value), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,18,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_Cgwz5, left), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,40,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_Cgwz5, right), 0,(const Char *)&nmiv_3,5,(const Char *)&sgiv_3,40,1,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_Cgwz5, parent), 0,(const Char *)&nmiv_4,6,(const Char *)&sgiv_4,40,1,0x2,4}, 
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
} inr_ca_mcgill_sable_util_Spla_Cgwz5 = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Spla_Cgwz5.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Spla_Cgwz5 cl_ca_mcgill_sable_util_Spla_Cgwz5 = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Spla_Cgwz5),
    22,
    0,
    5,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_util_Spla_Cgwz5,
    st_ca_mcgill_sable_util_Spla_Cgwz5,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Spla_Cgwz5,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__WCwLg,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,2,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_pR9rc,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,0,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__mOf3l,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,0,0x8001,1,0},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, getKey__azarQ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,20,1,0x8001,1,xt_getKey__azarQ},
	{TMIT_native_code, getValue__q3Pa2,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_getValue__q3Pa2},
	{TMIT_native_code, setValue_O_Q0wRy,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,38,1,0x8001,3,xt_setValue_O_Q0wRy},
	{TMIT_native_code, init_OO_trzWw,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,39,1,0x0,0,xt_init_OO_trzWw},
	{TMIT_native_code, getLeft__7iwoc,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,42,1,0x0,4,xt_getLeft__7iwoc},
	{TMIT_native_code, setLeft_S_B6NBJ,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,43,1,0x0,5,xt_setLeft_S_B6NBJ},
	{TMIT_native_code, getRight__Ut8tS,(const Char *)&nmim_18,8,
	(const Char *)&sgim_18,42,1,0x0,6,xt_getRight__Ut8tS},
	{TMIT_native_code, setRight_S_61sM7,(const Char *)&nmim_19,8,
	(const Char *)&sgim_19,43,1,0x0,7,xt_setRight_S_61sM7},
	{TMIT_native_code, getParent__MZBKw,(const Char *)&nmim_20,9,
	(const Char *)&sgim_20,42,1,0x0,8,xt_getParent__MZBKw},
	{TMIT_native_code, removeChild_S_O9TXS,(const Char *)&nmim_21,11,
	(const Char *)&sgim_21,43,1,0x2,9,xt_removeChild_S_O9TXS},
    } /* end of methodsigs */
};


/*M init_OO_trzWw: ca.mcgill.sable.util.SplayTreeMap$Node.<init>(Ljava/lang/Object;Ljava/lang/Object;)V */

Class xt_init_OO_trzWw[] = { 0 };

Void init_OO_trzWw(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__WCwLg(a1);
	a1 = av1;
	if (a1 == 0)
		GOTO(5,L1);
	a1 = av2;
	if (a1 != 0)
		GOTO(9,L2);
L1:	a1 = new(&cl_java_lang_NullPointerException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__iQiCT(a2);
	athrow(a1);

L2:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->key = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->value = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getKey__azarQ: ca.mcgill.sable.util.SplayTreeMap$Node.getKey()Ljava/lang/Object; */

Class xt_getKey__azarQ[] = { 0 };

Object getKey__azarQ(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->key;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getValue__q3Pa2: ca.mcgill.sable.util.SplayTreeMap$Node.getValue()Ljava/lang/Object; */

Class xt_getValue__q3Pa2[] = { 0 };

Object getValue__q3Pa2(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->value;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setValue_O_Q0wRy: ca.mcgill.sable.util.SplayTreeMap$Node.setValue(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_setValue_O_Q0wRy[] = { 0 };

Object setValue_O_Q0wRy(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (a1 != 0)
		GOTO(1,L1);
	a1 = new(&cl_java_lang_NullPointerException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__iQiCT(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->value;
	av2 = a1;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->value = a2;
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLeft__7iwoc: ca.mcgill.sable.util.SplayTreeMap$Node.getLeft()Lca/mcgill/sable/util/SplayTreeMap$Node; */

Class xt_getLeft__7iwoc[] = { 0 };

Object getLeft__7iwoc(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->left;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setLeft_S_B6NBJ: ca.mcgill.sable.util.SplayTreeMap$Node.setLeft(Lca/mcgill/sable/util/SplayTreeMap$Node;)V */

Class xt_setLeft_S_B6NBJ[] = { 0 };

Void setLeft_S_B6NBJ(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->left;
	if (a1 == 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->left;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent = a2;
L1:	a1 = av1;
	if (a1 == 0)
		GOTO(16,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent;
	if (a1 == 0)
		GOTO(23,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeChild_S_O9TXS(a1,a2);
L2:	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent = a2;
L3:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->left = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getRight__Ut8tS: ca.mcgill.sable.util.SplayTreeMap$Node.getRight()Lca/mcgill/sable/util/SplayTreeMap$Node; */

Class xt_getRight__Ut8tS[] = { 0 };

Object getRight__Ut8tS(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->right;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setRight_S_61sM7: ca.mcgill.sable.util.SplayTreeMap$Node.setRight(Lca/mcgill/sable/util/SplayTreeMap$Node;)V */

Class xt_setRight_S_61sM7[] = { 0 };

Void setRight_S_61sM7(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->right;
	if (a1 == 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->right;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent = a2;
L1:	a1 = av1;
	if (a1 == 0)
		GOTO(16,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent;
	if (a1 == 0)
		GOTO(23,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeChild_S_O9TXS(a1,a2);
L2:	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent = a2;
L3:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->right = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getParent__MZBKw: ca.mcgill.sable.util.SplayTreeMap$Node.getParent()Lca/mcgill/sable/util/SplayTreeMap$Node; */

Class xt_getParent__MZBKw[] = { 0 };

Object getParent__MZBKw(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->parent;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeChild_S_O9TXS: ca.mcgill.sable.util.SplayTreeMap$Node.removeChild(Lca/mcgill/sable/util/SplayTreeMap$Node;)V */

Class xt_removeChild_S_O9TXS[] = { 0 };

Void removeChild_S_O9TXS(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->left;
	a2 = av1;
	if (a1 != a2)
		GOTO(5,L1);
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setLeft_S_B6NBJ.f(a1,a2);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->right;
	a2 = av1;
	if (a1 != a2)
		GOTO(18,L2);
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		setRight_S_61sM7.f(a1,a2);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Spla_Cgwz5[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','p','l','a','y','T','r','e','e','M','a','p','$','N','o',
'd','e'};

const void *st_ca_mcgill_sable_util_Spla_Cgwz5[] = {
    ch_ca_mcgill_sable_util_Spla_Cgwz5+38,	/* 0. ca.mcgill.sable.util.SplayTreeMap$Node */
    0};
