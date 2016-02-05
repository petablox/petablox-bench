/*  ca_mcgill_sable_soot_coffi_TypeStack.c -- from Java class ca.mcgill.sable.soot.coffi.TypeStack  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_TypeStack.h"
#include "ca_mcgill_sable_util_ValueObject.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "java_io_PrintStream.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_ValueObject.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_RuntimeException.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_TypeStack[];
extern const void *st_ca_mcgill_sable_soot_coffi_TypeStack[];
extern Class xt_init__XK22F[];
extern Class xt_setClassManager_S_ZzziC[];
extern Class xt_clone__KPQr6[];
extern Class xt_v__i0xez[];
extern Class xt_pop__RBXWY[];
extern Class xt_push_T_Vs7az[];
extern Class xt_get_i_t06Hz[];
extern Class xt_topIndex__5ZMC1[];
extern Class xt_top__nW0zk[];
extern Class xt_equals_O_mlSGv[];
extern Class xt_merge_T_jdprn[];
extern Class xt_print_P_GyHyt[];

#define HASHMASK 0x3
/*  1.  8942e761  (1)  hashCode  */
/*  3.  489f8e6f  (3)  toString  */
static const struct ihash htable[5] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_TypeStack.M.hashCode__8wJNW,
    0, 0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_TypeStack.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','T','y','p','e','S','t','a','c','k'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
static const Char nmcv_0[] = {
'c','m'};
static const Char sgcv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a','g',
'e','r',';'};
static const Char nmiv_0[] = {
't','y','p','e','s'};
static const Char sgiv_0[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';'};
static const Char nmsm_0[] = {
's','e','t','C','l','a','s','s','M','a','n','a','g','e','r'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';',')','V'};
static const Char nmsm_1[] = {
'v'};
static const Char sgsm_1[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t',
'a','c','k',';'};
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
'p','o','p'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t',
'a','c','k',';'};
static const Char nmim_13[] = {
'p','u','s','h'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','c','o','f',
'f','i','/','T','y','p','e','S','t','a','c','k',';'};
static const Char nmim_14[] = {
'g','e','t'};
static const Char sgim_14[] = {
'(','I',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_15[] = {
't','o','p','I','n','d','e','x'};
static const Char sgim_15[] = {
'(',')','I'};
static const Char nmim_16[] = {
't','o','p'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_17[] = {
'm','e','r','g','e'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','T','y','p','e','S','t','a',
'c','k',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b',
'l','e','/','s','o','o','t','/','c','o','f','f','i','/','T','y','p','e',
'S','t','a','c','k',';'};
static const Char nmim_18[] = {
'p','r','i','n','t'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','i','o','/','P','r','i','n','t','S','t','r',
'e','a','m',';',')','V'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_TypeStack.V.cm,(const Char *)&nmcv_0,2,(const Char *)&sgcv_0,39,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_TypeStack, types), 0,(const Char *)&nmiv_0,5,(const Char *)&sgiv_0,28,1,0x2,1}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())setClassManager_S_ZzziC,
	(const Char *)&nmsm_0,15,(const Char *)&sgsm_0,42,
	1,0x9,1,xt_setClassManager_S_ZzziC},
    {TMIT_native_code, (Void(*)())v__i0xez,
	(const Char *)&nmsm_1,1,(const Char *)&sgsm_1,40,
	1,0x9,3,xt_v__i0xez},
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
} inr_ca_mcgill_sable_soot_coffi_TypeStack = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_TypeStack.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_TypeStack cl_ca_mcgill_sable_soot_coffi_TypeStack = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_TypeStack),
    19,
    2,
    1,
    1,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_TypeStack,
    st_ca_mcgill_sable_soot_coffi_TypeStack,
    0,
    init__XK22F,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_TypeStack,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__XK22F,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__XK22F},
	{TMIT_native_code, clone__KPQr6,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x1,2,xt_clone__KPQr6},
	{TMIT_native_code, equals_O_mlSGv,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x1,9,xt_equals_O_mlSGv},
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
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, pop__RBXWY,(const Char *)&nmim_12,3,
	(const Char *)&sgim_12,40,1,0x1,4,xt_pop__RBXWY},
	{TMIT_native_code, push_T_Vs7az,(const Char *)&nmim_13,4,
	(const Char *)&sgim_13,67,1,0x1,5,xt_push_T_Vs7az},
	{TMIT_native_code, get_i_t06Hz,(const Char *)&nmim_14,3,
	(const Char *)&sgim_14,30,1,0x1,6,xt_get_i_t06Hz},
	{TMIT_native_code, topIndex__5ZMC1,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,3,1,0x1,7,xt_topIndex__5ZMC1},
	{TMIT_native_code, top__nW0zk,(const Char *)&nmim_16,3,
	(const Char *)&sgim_16,29,1,0x1,8,xt_top__nW0zk},
	{TMIT_native_code, merge_T_jdprn,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,78,1,0x1,10,xt_merge_T_jdprn},
	{TMIT_native_code, print_P_GyHyt,(const Char *)&nmim_18,5,
	(const Char *)&sgim_18,24,1,0x1,11,xt_print_P_GyHyt},
    } /* end of methodsigs */
};


/*M init__XK22F: ca.mcgill.sable.soot.coffi.TypeStack.<init>()V */

Class xt_init__XK22F[] = { 0 };

Void init__XK22F(Object p0)
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

/*M setClassManager_S_ZzziC: ca.mcgill.sable.soot.coffi.TypeStack.setClassManager(Lca/mcgill/sable/soot/SootClassManager;)V */

Class xt_setClassManager_S_ZzziC[] = { 0 };

Void setClassManager_S_ZzziC(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	cl_ca_mcgill_sable_soot_coffi_TypeStack.V.cm = a1;
	return;

	/*NOTREACHED*/
}

/*M clone__KPQr6: ca.mcgill.sable.soot.coffi.TypeStack.clone()Ljava/lang/Object; */

Class xt_clone__KPQr6[] = { 0 };

Object clone__KPQr6(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeStack.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XK22F(a2);
	av1 = a1;
	a1 = cl_ca_mcgill_sable_soot_coffi_TypeStack.V.cm;
	cl_ca_mcgill_sable_soot_coffi_TypeStack.V.cm = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_Object*)a2)->class->M.
		clone__dslwm.f(a2);
	if ((a2 != 0) && !instanceof(a2,&cl_ca_mcgill_sable_soot_Type.C,1))
		throwClassCastException(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types = a2;
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M v__i0xez: ca.mcgill.sable.soot.coffi.TypeStack.v()Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_v__i0xez[] = { 0 };

Object v__i0xez(void)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;


L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeStack.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XK22F(a2);
	av0 = a1;
	a1 = av0;
	i2 = 0;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types = a2;
	a1 = av0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M pop__RBXWY: ca.mcgill.sable.soot.coffi.TypeStack.pop()Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_pop__RBXWY[] = { 0 };

Object pop__RBXWY(Object p0)
{
Object a0, a1, a2, a3, a4, a5, a6;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5, i6;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeStack.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XK22F(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = 0;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->types;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->types;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct aarray*)a5)->length;
	i6 = 1;
	i5 = i5 - i6;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M push_T_Vs7az: ca.mcgill.sable.soot.coffi.TypeStack.push(Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_push_T_Vs7az[] = { 0 };

Object push_T_Vs7az(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeStack.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XK22F(a2);
	av2 = a1;
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 + i3;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = 0;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->types;
	i4 = 0;
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a5)->types;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	i5 = ((struct aarray*)a5)->length;
	arraycopy_OiOii_JRbqy(a1,i2,a3,i4,i5);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M get_i_t06Hz: ca.mcgill.sable.soot.coffi.TypeStack.get(I)Lca/mcgill/sable/soot/Type; */

Class xt_get_i_t06Hz[] = { 0 };

Object get_i_t06Hz(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M topIndex__5ZMC1: ca.mcgill.sable.soot.coffi.TypeStack.topIndex()I */

Class xt_topIndex__5ZMC1[] = { 0 };

Int topIndex__5ZMC1(Object p0)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 1;
	i1 = i1 - i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M top__nW0zk: ca.mcgill.sable.soot.coffi.TypeStack.top()Lca/mcgill/sable/soot/Type; */

Class xt_top__nW0zk[] = { 0 };

Object top__nW0zk(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 != 0)
		GOTO(5,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[1];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_mlSGv: ca.mcgill.sable.soot.coffi.TypeStack.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_mlSGv[] = { 0 };

Boolean equals_O_mlSGv(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(4,L5);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_TypeStack.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(22,L1);
	i1 = 0;
	return i1;

L1:	i1 = 0;
	iv3 = i1;
	GOTO(29,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(47,L3);
	i1 = 0;
	return i1;

L3:	iv3 += 1;
L4:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(61,L2);
	i1 = 1;
	return i1;

L5:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M merge_T_jdprn: ca.mcgill.sable.soot.coffi.TypeStack.merge(Lca/mcgill/sable/soot/coffi/TypeStack;)Lca/mcgill/sable/soot/coffi/TypeStack; */

Class xt_merge_T_jdprn[] = { 0 };

Object merge_T_jdprn(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2;
Int i0, i1, i2, i3, i4, i5;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 == i2)
		GOTO(10,L1);
	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[2];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->types;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct aarray*)a4)->length;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->types;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct aarray*)a4)->length;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_i_ZQIqx.f(a3,i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		toString__GjBaS.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_44piL(a2,a3);
	athrow(a1);

L1:	a1 = new(&cl_ca_mcgill_sable_soot_coffi_TypeStack.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__XK22F(a2);
	av2 = a1;
	a1 = av2;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	a2 = anewarray(&cl_ca_mcgill_sable_soot_Type.C,i2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types = a2;
	i1 = 0;
	iv3 = i1;
	GOTO(76,L8);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(94,L3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->types;
	i4 = iv3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	GOTO(109,L7);

L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(121,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(133,L5);
L4:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(145,L6);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(157,L6);
L5:	a1 = new(&cl_java_lang_RuntimeException.C);
	a2 = a1;
	a3 = new(&cl_java_lang_StringBuffer.C);
	a4 = a3;
	a5 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[4];
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a4,a5);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->types;
	i5 = iv3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct aarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	a4 = ((struct aarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_O_wO0jp.f(a3,a4);
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_StringBuffer*)a3)->class->M.
		append_S_6tRW4.f(a3,a4);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a4)->types;
	i5 = iv3;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct aarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	a4 = ((struct aarray*)a4)->data[i5];
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
	init_S_44piL(a2,a3);
	athrow(a1);

L6:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	i2 = iv3;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[5];
	a3 = v_S_k6iq0(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L7:	iv3 += 1;
L8:	i1 = iv3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a2)->types;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(223,L2);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M print_P_GyHyt: ca.mcgill.sable.soot.coffi.TypeStack.print(Ljava/io/PrintStream;)V */

Class xt_print_P_GyHyt[] = { 0 };

Void print_P_GyHyt(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 1;
	i1 = i1 - i2;
	iv2 = i1;
	GOTO(8,L2);

L1:	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	i4 = iv2;
	a4 = valueOf_i_N2qKF(i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[6];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a3)->types;
	i4 = iv2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_Type*)a3)->class->M.
		toString__J7Vel.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	iv2 += -1;
L2:	i1 = iv2;
	if (i1 >= 0)
		GOBACK(50,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_TypeStack*)a1)->types;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 != 0)
		GOTO(58,L3);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_TypeStack[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L3:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_TypeStack[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','T','y','p','e','S','t','a','c','k',
'T','y','p','e','S','t','a','c','k',' ','i','s',' ','e','m','p','t','y',
'T','y','p','e','S','t','a','c','k',' ','m','e','r','g','i','n','g',' ',
'f','a','i','l','e','d',';',' ','u','n','e','q','u','a','l',' ','s','t',
'a','c','k',' ','l','e','n','g','t','h','s',':',' ',' ','a','n','d',' ',
'T','y','p','e','S','t','a','c','k',' ','m','e','r','g','i','n','g',' ',
'f','a','i','l','e','d',';',' ','i','n','c','o','m','p','a','t','i','b',
'l','e',' ','t','y','p','e','s',' ','j','a','v','a','.','l','a','n','g',
'.','O','b','j','e','c','t',':',' ','<','e','m','p','t','y','>'};

const void *st_ca_mcgill_sable_soot_coffi_TypeStack[] = {
    ch_ca_mcgill_sable_soot_coffi_TypeStack+36,	/* 0. ca.mcgill.sable.soot.coffi.TypeStack */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+54,	/* 1. TypeStack is empty */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+103,	/* 2. TypeStack merging failed; unequal stack  */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+108,	/* 3.  and  */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+153,	/* 4. TypeStack merging failed; incompatible t */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+169,	/* 5. java.lang.Object */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+171,	/* 6. :  */
    ch_ca_mcgill_sable_soot_coffi_TypeStack+178,	/* 7. <empty> */
    0};
