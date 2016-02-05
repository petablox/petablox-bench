/*  ca_mcgill_sable_soot_jimple_ClassHierarchy$TypeNode.c -- from Java class ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$TypeNode.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_NullType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootClassManager.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$ConstructorChooser.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$ToInt.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_util_BitSet.h"
#include "java_util_Hashtable.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_NullType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootClassManager.C,
    &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C,
    &cl_ca_mcgill_sable_soot_jimp_OGkBH.C,
    &cl_ca_mcgill_sable_soot_jimp_fo53n.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_util_BitSet.C,
    &cl_java_util_Hashtable.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_vtc6C[];
extern const void *st_ca_mcgill_sable_soot_jimp_vtc6C[];
extern Class xt_init_CT_FfN7l[];
extern Class xt_init_CR_sUhxT[];
extern Class xt_init_CA_eQXEg[];
extern Class xt_fixDescendants_i_4cmbW[];
extern Class xt_getId__SvSid[];
extern Class xt_getType__5MvoB[];
extern Class xt_hasAncestor_C_vEq1t[];
extern Class xt_hasDescendant_C_REhcv[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_vtc6C.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimp_vtc6C.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_vtc6C.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_vtc6C.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(51) nmchars = {&acl_char, 0, 51, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','C','l','a','s','s','H','i','e',
'r','a','r','c','h','y','$','T','y','p','e','N','o','d','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 51 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H','i',
'e','r','a','r','c','h','y',';'};
static const Char nmiv_1[] = {
'i','d'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
't','y','p','e'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
static const Char nmiv_3[] = {
'p','a','r','e','n','t','s'};
static const Char sgiv_3[] = {
'L','j','a','v','a','/','u','t','i','l','/','B','i','t','S','e','t',';'};
static const Char nmiv_4[] = {
'a','n','c','e','s','t','o','r','s'};
static const Char sgiv_4[] = {
'L','j','a','v','a','/','u','t','i','l','/','B','i','t','S','e','t',';'};
static const Char nmiv_5[] = {
'd','e','s','c','e','n','d','a','n','t','s'};
static const Char sgiv_5[] = {
'L','j','a','v','a','/','u','t','i','l','/','B','i','t','S','e','t',';'};
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
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','T','y','p','e',';',
')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','R','e','f','T','y',
'p','e',';',')','V'};
static const Char nmim_14[] = {
'<','i','n','i','t','>'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y',';','L','c','a','/','m','c','g','i','l',
'l','/','s','a','b','l','e','/','s','o','o','t','/','A','r','r','a','y',
'T','y','p','e',';',')','V'};
static const Char nmim_15[] = {
'f','i','x','D','e','s','c','e','n','d','a','n','t','s'};
static const Char sgim_15[] = {
'(','I',')','V'};
static const Char nmim_16[] = {
'g','e','t','I','d'};
static const Char sgim_16[] = {
'(',')','I'};
static const Char nmim_17[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_18[] = {
'h','a','s','A','n','c','e','s','t','o','r'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y','$','T','y','p','e','N','o','d','e',';',
')','Z'};
static const Char nmim_19[] = {
'h','a','s','D','e','s','c','e','n','d','a','n','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y','$','T','y','p','e','N','o','d','e',';',
')','Z'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_vtc6C, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,44,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_vtc6C, id), 0,(const Char *)&nmiv_1,2,(const Char *)&sgiv_1,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_vtc6C, type), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,27,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_vtc6C, parents), 0,(const Char *)&nmiv_3,7,(const Char *)&sgiv_3,18,1,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_vtc6C, ancestors), 0,(const Char *)&nmiv_4,9,(const Char *)&sgiv_4,18,1,0x2,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_vtc6C, descendants), 0,(const Char *)&nmiv_5,11,(const Char *)&sgiv_5,18,1,0x2,5}, 
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
} inr_ca_mcgill_sable_soot_jimp_vtc6C = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_vtc6C.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_vtc6C cl_ca_mcgill_sable_soot_jimp_vtc6C = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_vtc6C),
    20,
    0,
    6,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    13, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_vtc6C,
    st_ca_mcgill_sable_soot_jimp_vtc6C,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_vtc6C,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
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
	{TMIT_native_code, toString__4d9OF,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,0,0x8001,10,0},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_CT_FfN7l,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,74,1,0x0,0,xt_init_CT_FfN7l},
	{TMIT_native_code, init_CR_sUhxT,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,77,1,0x0,1,xt_init_CR_sUhxT},
	{TMIT_native_code, init_CA_eQXEg,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,79,1,0x0,2,xt_init_CA_eQXEg},
	{TMIT_native_code, fixDescendants_i_4cmbW,(const Char *)&nmim_15,14,
	(const Char *)&sgim_15,4,1,0x2,3,xt_fixDescendants_i_4cmbW},
	{TMIT_native_code, getId__SvSid,(const Char *)&nmim_16,5,
	(const Char *)&sgim_16,3,1,0x1,4,xt_getId__SvSid},
	{TMIT_native_code, getType__5MvoB,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,29,1,0x1,5,xt_getType__5MvoB},
	{TMIT_native_code, hasAncestor_C_vEq1t,(const Char *)&nmim_18,11,
	(const Char *)&sgim_18,56,1,0x1,6,xt_hasAncestor_C_vEq1t},
	{TMIT_native_code, hasDescendant_C_REhcv,(const Char *)&nmim_19,13,
	(const Char *)&sgim_19,56,1,0x1,7,xt_hasDescendant_C_REhcv},
    } /* end of methodsigs */
};


/*M init_CT_FfN7l: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.<init>(Lca/mcgill/sable/soot/jimple/ClassHierarchy;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_CT_FfN7l[] = { 0 };

Void init_CT_FfN7l(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

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
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = new(&cl_java_util_BitSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__wDgQm(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents = a2;
	a1 = av0;
	a2 = new(&cl_java_util_BitSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__wDgQm(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors = a2;
	a1 = av0;
	a2 = new(&cl_java_util_BitSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__wDgQm(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->type = a2;
	a1 = av0;
	a2 = av1;
	a2 = access0_C_CAKCW(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->id = i2;
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av1;
	a1 = access1_C_ivpII(a1);
	a2 = av2;
	a3 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_CR_sUhxT: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.<init>(Lca/mcgill/sable/soot/jimple/ClassHierarchy;Lca/mcgill/sable/soot/RefType;)V */

Class xt_init_CR_sUhxT[] = { 0 };

Void init_CR_sUhxT(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av7, av9;
Int i0, i1, i2, i3;
Int iv5, iv6, iv8;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_CT_FfN7l(a1,a2,a3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->classManager;
	a2 = av2;
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
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		hasSuperClass__VWCHC.f(a1);
	if (i1 == 0)
		GOTO(22,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getSuperClass__V2vll.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
L1:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getInterfaces__eiIjW.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av4 = a1;
	GOTO(60,L3);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(100,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		size__4ZBrx.f(a1);
	iv5 = i1;
	i1 = 0;
	iv6 = i1;
	GOTO(115,L6);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(127,L5);
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->ancestors;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
L5:	iv6 += 1;
L6:	i1 = iv6;
	i2 = iv5;
	if (i1 < i2)
		GOBACK(163,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
	a1 = av1;
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->class->M.
		getTypeNode_T_Dr1me.f(a1,a2);
	av7 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants;
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	i1 = 0;
	iv8 = i1;
	GOTO(213,L9);

L7:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(225,L8);
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	i2 = iv8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av9 = a1;
	a1 = av9;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	fixDescendants_i_4cmbW(a1,i2);
L8:	iv8 += 1;
L9:	i1 = iv8;
	i2 = iv5;
	if (i1 < i2)
		GOBACK(258,L7);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_CA_eQXEg: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.<init>(Lca/mcgill/sable/soot/jimple/ClassHierarchy;Lca/mcgill/sable/soot/ArrayType;)V */

Class xt_init_CA_eQXEg[] = { 0 };

Void init_CA_eQXEg(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av4, av5, av7, av8, av10;
Int i0, i1, i2, i3, i4;
Int iv3, iv4, iv6, iv7, iv9;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	a3 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_CT_FfN7l(a1,a2,a3);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->baseType;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(13,L10);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->baseType;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->classManager;
	a2 = av3;
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
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		hasSuperClass__VWCHC.f(a1);
	if (i1 == 0)
		GOTO(42,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getSuperClass__V2vll.f(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	a3 = v_S_k6iq0(a3);
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a4)->numDimensions;
	a3 = v_Bi_52nDH(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
L1:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getInterfaces__eiIjW.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av5 = a1;
	GOTO(89,L3);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_SootClass.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	a3 = v_S_k6iq0(a3);
	a4 = av2;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a4)->numDimensions;
	a3 = v_Bi_52nDH(a3,i4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
L3:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(136,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_vtc6C[1];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_vtc6C[2];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		size__4ZBrx.f(a1);
	iv6 = i1;
	i1 = 0;
	iv7 = i1;
	GOTO(189,L6);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(201,L5);
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->ancestors;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
L5:	iv7 += 1;
L6:	i1 = iv7;
	i2 = iv6;
	if (i1 < i2)
		GOBACK(237,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
	a1 = av1;
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->class->M.
		getTypeNode_T_Dr1me.f(a1,a2);
	av8 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	i1 = 0;
	iv9 = i1;
	GOTO(287,L9);

L7:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(299,L8);
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	i2 = iv9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av10 = a1;
	a1 = av10;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	fixDescendants_i_4cmbW(a1,i2);
L8:	iv9 += 1;
L9:	i1 = iv9;
	i2 = iv6;
	if (i1 < i2)
		GOBACK(332,L7);
	return;

L10:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_vtc6C[1];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	a2 = av1;
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_vtc6C[2];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		size__4ZBrx.f(a1);
	iv3 = i1;
	i1 = 0;
	iv4 = i1;
	GOTO(385,L13);

L11:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(397,L12);
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->ancestors;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
L12:	iv4 += 1;
L13:	i1 = iv4;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(432,L11);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
	a1 = av1;
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->class->M.
		getTypeNode_T_Dr1me.f(a1,a2);
	av5 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	i1 = 0;
	iv6 = i1;
	GOTO(482,L16);

L14:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(494,L15);
	a1 = av1;
	a1 = access0_C_CAKCW(a1);
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av7;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	fixDescendants_i_4cmbW(a1,i2);
L15:	iv6 += 1;
L16:	i1 = iv6;
	i2 = iv3;
	if (i1 < i2)
		GOBACK(526,L14);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M fixDescendants_i_4cmbW: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.fixDescendants(I)V */

Class xt_fixDescendants_i_4cmbW[] = { 0 };

Void fixDescendants_i_4cmbW(Object p0, Int p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av4;
Int i0, i1, i2;
Int iv1, iv2, iv3;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(8,L1);
	return;

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		size__4ZBrx.f(a1);
	iv2 = i1;
	i1 = 0;
	iv3 = i1;
	GOTO(22,L4);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->parents;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(33,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->this0_oYxUV;
	a1 = access0_C_CAKCW(a1);
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	fixDescendants_i_4cmbW(a1,i2);
L3:	iv3 += 1;
L4:	i1 = iv3;
	i2 = iv2;
	if (i1 < i2)
		GOBACK(63,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getId__SvSid: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.getId()I */

Class xt_getId__SvSid[] = { 0 };

Int getId__SvSid(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->id;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__5MvoB: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__5MvoB[] = { 0 };

Object getType__5MvoB(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasAncestor_C_vEq1t: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.hasAncestor(Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode;)Z */

Class xt_hasAncestor_C_vEq1t[] = { 0 };

Boolean hasAncestor_C_vEq1t(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->ancestors;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasDescendant_C_REhcv: ca.mcgill.sable.soot.jimple.ClassHierarchy$TypeNode.hasDescendant(Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode;)Z */

Class xt_hasDescendant_C_REhcv[] = { 0 };

Boolean hasDescendant_C_REhcv(Object p0, Object p1)
{
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->descendants;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_vtc6C[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','C','l','a','s','s','H','i','e',
'r','a','r','c','h','y','$','T','y','p','e','N','o','d','e','j','a','v',
'a','.','l','a','n','g','.','O','b','j','e','c','t','j','a','v','a','.',
'l','a','n','g','.','C','l','o','n','e','a','b','l','e'};

const void *st_ca_mcgill_sable_soot_jimp_vtc6C[] = {
    ch_ca_mcgill_sable_soot_jimp_vtc6C+51,	/* 0. ca.mcgill.sable.soot.jimple.ClassHierarc */
    ch_ca_mcgill_sable_soot_jimp_vtc6C+67,	/* 1. java.lang.Object */
    ch_ca_mcgill_sable_soot_jimp_vtc6C+86,	/* 2. java.lang.Cloneable */
    0};
