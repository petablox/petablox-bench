/*  ca_mcgill_sable_soot_Type.c -- from Java class ca.mcgill.sable.soot.Type  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "ca_mcgill_sable_util_Switchable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_BooleanType.h"
#include "ca_mcgill_sable_soot_ByteType.h"
#include "ca_mcgill_sable_soot_CharType.h"
#include "ca_mcgill_sable_soot_IllegalTypeMergeException.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_ShortType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootClassManager.h"
#include "ca_mcgill_sable_soot_UnknownType.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ValueObject.C,
    &cl_ca_mcgill_sable_util_Switchable.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_BooleanType.C,
    &cl_ca_mcgill_sable_soot_ByteType.C,
    &cl_ca_mcgill_sable_soot_CharType.C,
    &cl_ca_mcgill_sable_soot_IllegalTypeMergeException.C,
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_ShortType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootClassManager.C,
    &cl_ca_mcgill_sable_soot_UnknownType.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_Type[];
extern const void *st_ca_mcgill_sable_soot_Type[];
extern Class xt_toString__J7Vel[];
extern Class xt_toMachineType_T_9kdXw[];
extern Class xt_merge_TS_yfmlv[];
extern Class xt_apply_S_1raGs[];
extern Class xt_init__vh6sx[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  494d5bef  (7)  apply  */
static const struct ihash htable[9] = {
    0, 0, -1992104095, &cl_ca_mcgill_sable_soot_Type.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_Type.M.clone__dslwm, 0, 0, 0, 0,
    0, 0, -1028981426, &cl_ca_mcgill_sable_soot_Type.M.equals_O_Ba6e0,
    1229806575, &cl_ca_mcgill_sable_soot_Type.M.apply_S_1raGs, 0, 0,
};

static const CARRAY(25) nmchars = {&acl_char, 0, 25, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','T','y','p','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 25 };
static const Char nmsm_0[] = {
't','o','M','a','c','h','i','n','e','T','y','p','e'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p',
'e',';'};
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
'm','e','r','g','e'};
static const Char sgim_12[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','L','c','a','/','m','c','g','i',
'l','l','/','s','a','b','l','e','/','s','o','o','t','/','S','o','o','t',
'C','l','a','s','s','M','a','n','a','g','e','r',';',')','L','c','a','/',
'm','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o','t','/',
'T','y','p','e',';'};
static const Char nmim_13[] = {
'a','p','p','l','y'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','S','w','i','t','c','h',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())toMachineType_T_9kdXw,
	(const Char *)&nmsm_0,13,(const Char *)&sgsm_0,56,
	1,0x9,1,xt_toMachineType_T_9kdXw},
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
} inr_ca_mcgill_sable_soot_Type = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_Type.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_Type cl_ca_mcgill_sable_soot_Type = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_Type),
    14,
    1,
    0,
    0,
    2, supers,
    2, 2, inters, HASHMASK, htable,
    14, others,
    0, 0,
    ch_ca_mcgill_sable_soot_Type,
    st_ca_mcgill_sable_soot_Type,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    0,
    0,
    43,
    0x421,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_Type,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__vh6sx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,4,xt_init__vh6sx},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
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
	{TMIT_abstract, 0,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x401,0,xt_toString__J7Vel},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, merge_TS_yfmlv,(const Char *)&nmim_12,5,
	(const Char *)&sgim_12,95,1,0x1,2,xt_merge_TS_yfmlv},
	{TMIT_native_code, apply_S_1raGs,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,32,1,0x8001,3,xt_apply_S_1raGs},
    } /* end of methodsigs */
};


/*M toString__J7Vel: ca.mcgill.sable.soot.Type.toString()Ljava/lang/String; */

Class xt_toString__J7Vel[] = { 0 };

/*M toMachineType_T_9kdXw: ca.mcgill.sable.soot.Type.toMachineType(Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/Type; */

Class xt_toMachineType_T_9kdXw[] = { 0 };

Object toMachineType_T_9kdXw(Object p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	a2 = v__QUgPF();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(7,L1);
	a1 = av0;
	a2 = v__AsEYN();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(17,L1);
	a1 = av0;
	a2 = v__AA1Up();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(27,L1);
	a1 = av0;
	a2 = v__eNy0s();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(37,L2);
L1:	a1 = v__GKSua();
	return a1;

L2:	a1 = av0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M merge_TS_yfmlv: ca.mcgill.sable.soot.Type.merge(Lca/mcgill/sable/soot/Type;Lca/mcgill/sable/soot/SootClassManager;)Lca/mcgill/sable/soot/Type; */

Class xt_merge_TS_yfmlv[] = { 0 };

Object merge_TS_yfmlv(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(7,L1);
	a1 = av1;
	return a1;

L1:	a1 = av1;
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(19,L2);
	a1 = av0;
	return a1;

L2:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(29,L3);
	a1 = av0;
	return a1;

L3:	a1 = av0;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(38,L11);
	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(45,L11);
	a1 = av2;
	a2 = av0;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_RefType*)a2)->className;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av3 = a1;
	a1 = av2;
	a2 = av1;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_RefType*)a2)->className;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av4 = a1;
	a1 = av2;
	a2 = (Object)st_ca_mcgill_sable_soot_Type[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClassManager*)a1)->class->M.
		getClass_S_5qul0.f(a1,a2);
	av5 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av6 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av7 = a1;
	a1 = av3;
	av8 = a1;
L4:	a1 = av6;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addFirst_O_KZQDt.f(a1,a2);
	a1 = av8;
	a2 = av5;
	if (a1 == a2)
		GOTO(113,L5);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getSuperClass__V2vll.f(a1);
	av8 = a1;
	GOBACK(123,L4);

L5:	a1 = av4;
	av9 = a1;
L6:	a1 = av7;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addFirst_O_KZQDt.f(a1,a2);
	a1 = av9;
	a2 = av5;
	if (a1 == a2)
		GOTO(141,L7);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getSuperClass__V2vll.f(a1);
	av9 = a1;
	GOBACK(151,L6);

L7:	a1 = 0;
	av10 = a1;
	GOTO(157,L9);

L8:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
L9:	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		isEmpty__pVAEs.f(a1);
	if (i1 != 0)
		GOTO(181,L10);
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		isEmpty__pVAEs.f(a1);
	if (i1 != 0)
		GOTO(189,L10);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		getFirst__HhPRs.f(a1);
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->class->M.
		getFirst__HhPRs.f(a2);
	if (a1 == a2)
		GOBACK(202,L8);
L10:	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	a1 = v_S_k6iq0(a1);
	return a1;

L11:	a1 = new(&cl_ca_mcgill_sable_soot_IllegalTypeMergeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = av0;
	a5 = valueOf_O_6F80r(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = (Object)st_ca_mcgill_sable_soot_Type[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_ovdtU(a2,a3);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M apply_S_1raGs: ca.mcgill.sable.soot.Type.apply(Lca/mcgill/sable/util/Switch;)V */

Class xt_apply_S_1raGs[] = { 0 };

Void apply_S_1raGs(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M init__vh6sx: ca.mcgill.sable.soot.Type.<init>()V */

Class xt_init__vh6sx[] = { 0 };

Void init__vh6sx(Object p0)
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



const Char ch_ca_mcgill_sable_soot_Type[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','T','y','p','e','j','a','v','a','.','l','a','n','g','.','O',
'b','j','e','c','t',' ','a','n','d',' '};

const void *st_ca_mcgill_sable_soot_Type[] = {
    ch_ca_mcgill_sable_soot_Type+25,	/* 0. ca.mcgill.sable.soot.Type */
    ch_ca_mcgill_sable_soot_Type+41,	/* 1. java.lang.Object */
    ch_ca_mcgill_sable_soot_Type+46,	/* 2.  and  */
    0};
