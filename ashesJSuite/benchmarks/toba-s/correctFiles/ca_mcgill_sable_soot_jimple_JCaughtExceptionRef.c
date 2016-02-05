/*  ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.c -- from Java class ca.mcgill.sable.soot.jimple.JCaughtExceptionRef  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.h"
#include "ca_mcgill_sable_soot_jimple_CaughtExceptionRef.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_jimple_AbstractStmt.h"
#include "ca_mcgill_sable_soot_jimple_DefinitionStmt.h"
#include "ca_mcgill_sable_soot_jimple_IdentityStmt.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_RefSwitch.h"
#include "ca_mcgill_sable_soot_jimple_Trap.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_soot_jimple_CaughtExceptionRef.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_jimple_AbstractStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_DefinitionStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_RefSwitch.C,
    &cl_ca_mcgill_sable_soot_jimple_Trap.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef[];
extern const void *st_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef[];
extern Class xt_init_J_hfjIH[];
extern Class xt_toString__n48XE[];
extern Class xt_toBriefString__n2fi4[];
extern Class xt_getUseBoxes__9plec[];
extern Class xt_getExceptionTypes__j3DHL[];
extern Class xt_getType__QQbiV[];
extern Class xt_apply_S_LUaao[];

#define HASHMASK 0xf
/*  0.  6d3e3310  (0)  getType  */
/*  1.  8942e761  (1)  hashCode  */
/*  3.  f9391693  (3)  getUseBoxes  */
/*  7.  9e646537  (7)  toBriefString  */
/*  9.  2f704439  (9)  getExceptionTypes  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  494d5bef  (f)  apply  */
static const struct ihash htable[17] = {
    1832792848, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.getType__QQbiV,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.hashCode__8wJNW,
    0, 0,
    -113699181, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.getUseBoxes__9plec,
    0, 0, 0, 0, 0, 0,
    -1637587657, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.toBriefString__n2fi4,
    0, 0,
    795886649, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.getExceptionTypes__j3DHL,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.M.apply_S_LUaao,
    0, 0,
};

static const CARRAY(47) nmchars = {&acl_char, 0, 47, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','C','a','u','g','h','t','E',
'x','c','e','p','t','i','o','n','R','e','f'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 47 };
static const Char nmiv_0[] = {
'b','o','d','y'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e','B',
'o','d','y',';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';',')','V'};
static const Char nmim_13[] = {
't','o','B','r','i','e','f','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_14[] = {
'g','e','t','U','s','e','B','o','x','e','s'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_15[] = {
'g','e','t','E','x','c','e','p','t','i','o','n','T','y','p','e','s'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','s','t',';'};
static const Char nmim_16[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
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
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef, body), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,40,1,0x0,0}, 
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
} inr_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef cl_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef),
    18,
    0,
    1,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    11, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef,
    st_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_native_code, toString__n48XE,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,1,xt_toString__n48XE},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_J_hfjIH,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,43,1,0x0,0,xt_init_J_hfjIH},
	{TMIT_native_code, toBriefString__n2fi4,(const Char *)&nmim_13,13,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_toBriefString__n2fi4},
	{TMIT_native_code, getUseBoxes__9plec,(const Char *)&nmim_14,11,
	(const Char *)&sgim_14,29,1,0x8001,3,xt_getUseBoxes__9plec},
	{TMIT_native_code, getExceptionTypes__j3DHL,(const Char *)&nmim_15,17,
	(const Char *)&sgim_15,29,1,0x8001,4,xt_getExceptionTypes__j3DHL},
	{TMIT_native_code, getType__QQbiV,(const Char *)&nmim_16,7,
	(const Char *)&sgim_16,29,1,0x8001,5,xt_getType__QQbiV},
	{TMIT_native_code, apply_S_LUaao,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,32,1,0x8001,6,xt_apply_S_LUaao},
    } /* end of methodsigs */
};


/*M init_J_hfjIH: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.<init>(Lca/mcgill/sable/soot/jimple/JimpleBody;)V */

Class xt_init_J_hfjIH[] = { 0 };

Void init_J_hfjIH(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef*)a1)->body = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__n48XE: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.toString()Ljava/lang/String; */

Class xt_toString__n48XE[] = { 0 };

Object toString__n48XE(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef[1];
	return a1;

	/*NOTREACHED*/
}

/*M toBriefString__n2fi4: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.toBriefString()Ljava/lang/String; */

Class xt_toBriefString__n2fi4[] = { 0 };

Object toBriefString__n2fi4(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef*)a1)->class->M.
		toString__n48XE.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getUseBoxes__9plec: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.getUseBoxes()Lca/mcgill/sable/util/List; */

Class xt_getUseBoxes__9plec[] = { 0 };

Object getUseBoxes__9plec(Object p0)
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

/*M getExceptionTypes__j3DHL: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.getExceptionTypes()Lca/mcgill/sable/util/List; */

Class xt_getExceptionTypes__j3DHL[] = { 0 };

Object getExceptionTypes__j3DHL(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_ArrayList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__xnHfs(a2);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef*)a1)->body;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getTraps__8lukq.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(21,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Trap.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-351888170)->f)(a1);
	av4 = a1;
	a1 = av4;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(47,L2);
	a1 = av4;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_IdentityStmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1235668254)->f)(a1);
	a2 = av0;
	if (a1 != a2)
		GOTO(61,L2);
	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1567733942)->f)(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1444174436)->f)(a1,a2);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(89,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__QQbiV: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__QQbiV[] = { 0 };

Object getType__QQbiV(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef[2];
	a1 = v_S_k6iq0(a1);
	return a1;

	/*NOTREACHED*/
}

/*M apply_S_LUaao: ca.mcgill.sable.soot.jimple.JCaughtExceptionRef.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_LUaao[] = { 0 };

Void apply_S_LUaao(Object p0, Object p1)
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
	(*(Void(*)())findinterface(a1,-1202230754)->f)(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','J','C','a','u','g','h','t','E',
'x','c','e','p','t','i','o','n','R','e','f','@','c','a','u','g','h','t',
'e','x','c','e','p','t','i','o','n','j','a','v','a','.','l','a','n','g',
'.','T','h','r','o','w','a','b','l','e'};

const void *st_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef[] = {
    ch_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef+47,	/* 0. ca.mcgill.sable.soot.jimple.JCaughtExcep */
    ch_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef+63,	/* 1. @caughtexception */
    ch_ca_mcgill_sable_soot_jimple_JCaughtExceptionRef+82,	/* 2. java.lang.Throwable */
    0};
