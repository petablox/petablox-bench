/*  ca_mcgill_sable_soot_jimple_ClassHierarchy.c -- from Java class ca.mcgill.sable.soot.jimple.ClassHierarchy  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$ConstructorChooser.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$ToInt.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$TypeNode.h"
#include "java_lang_NullPointerException.h"
#include "java_lang_StringBuffer.h"
#include "java_util_Enumeration.h"
#include "java_util_Hashtable.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_jimp_OGkBH.C,
    &cl_ca_mcgill_sable_soot_jimp_fo53n.C,
    &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
    &cl_java_lang_NullPointerException.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_util_Enumeration.C,
    &cl_java_util_Hashtable.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_ClassHierarchy[];
extern const void *st_ca_mcgill_sable_soot_jimple_ClassHierarchy[];
extern Class xt_init_S_P3qYX[];
extern Class xt_getClassHierarchy_S_6aZ1Q[];
extern Class xt_getTypeNode_T_Dr1me[];
extern Class xt_toString__S21U1[];
extern Class xt_access0_C_CAKCW[];
extern Class xt_access1_C_ivpII[];
extern Class xt_clinit__XakR4[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(42) nmchars = {&acl_char, 0, 42, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','C','l','a','s','s','H','i','e',
'r','a','r','c','h','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 42 };
static const Char nmcv_0[] = {
'c','l','a','s','s','H','i','e','r','a','r','c','h','y','H','a','s','h',
't','a','b','l','e'};
static const Char sgcv_0[] = {
'L','j','a','v','a','/','u','t','i','l','/','H','a','s','h','t','a','b',
'l','e',';'};
static const Char nmiv_0[] = {
'c','l','a','s','s','M','a','n','a','g','e','r'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a','g',
'e','r',';'};
static const Char nmiv_1[] = {
't','y','p','e','N','o','d','e','I','n','s','t','a','n','c','e','s'};
static const Char sgiv_1[] = {
'L','j','a','v','a','/','u','t','i','l','/','V','e','c','t','o','r',';'};
static const Char nmiv_2[] = {
't','y','p','e','N','o','d','e','H','a','s','h','t','a','b','l','e'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','u','t','i','l','/','H','a','s','h','t','a','b',
'l','e',';'};
static const Char nmiv_3[] = {
't','r','a','n','s','f','o','r','m'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H','i',
'e','r','a','r','c','h','y','$','T','o','I','n','t',';'};
static const Char nmiv_4[] = {
'm','a','k','e'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H','i',
'e','r','a','r','c','h','y','$','C','o','n','s','t','r','u','c','t','o',
'r','C','h','o','o','s','e','r',';'};
static const Char nmsm_0[] = {
'g','e','t','C','l','a','s','s','H','i','e','r','a','r','c','h','y'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/','C','l',
'a','s','s','H','i','e','r','a','r','c','h','y',';'};
static const Char nmsm_1[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_1[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y',';',')','L','j','a','v','a','/','u','t',
'i','l','/','V','e','c','t','o','r',';'};
static const Char nmsm_2[] = {
'a','c','c','e','s','s','$','1'};
static const Char sgsm_2[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y',';',')','L','j','a','v','a','/','u','t',
'i','l','/','H','a','s','h','t','a','b','l','e',';'};
static const Char nmsm_3[] = {
'<','c','l','i','n','i','t','>'};
static const Char sgsm_3[] = {
'(',')','V'};
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
's','o','o','t','/','S','o','o','t','C','l','a','s','s','M','a','n','a',
'g','e','r',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','T','y','p','e','N','o','d','e'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','C','l','a','s','s','H','i','e','r','a','r','c','h','y',
'$','T','y','p','e','N','o','d','e',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.V.classHierarchyHashtable,(const Char *)&nmcv_0,23,(const Char *)&sgcv_0,21,1,0xa,0}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy, classManager), 0,(const Char *)&nmiv_0,12,(const Char *)&sgiv_0,39,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy, typeNodeInstances), 0,(const Char *)&nmiv_1,17,(const Char *)&sgiv_1,18,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy, typeNodeHashtable), 0,(const Char *)&nmiv_2,17,(const Char *)&sgiv_2,21,1,0x2,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy, transform), 0,(const Char *)&nmiv_3,9,(const Char *)&sgiv_3,50,1,0x2,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy, make), 0,(const Char *)&nmiv_4,4,(const Char *)&sgiv_4,63,1,0x2,5}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())getClassHierarchy_S_6aZ1Q,
	(const Char *)&nmsm_0,17,(const Char *)&sgsm_0,85,
	1,0x9,1,xt_getClassHierarchy_S_6aZ1Q},
    {TMIT_native_code, (Void(*)())access0_C_CAKCW,
	(const Char *)&nmsm_1,8,(const Char *)&sgsm_1,64,
	1,0x8,4,xt_access0_C_CAKCW},
    {TMIT_native_code, (Void(*)())access1_C_ivpII,
	(const Char *)&nmsm_2,8,(const Char *)&sgsm_2,67,
	1,0x8,5,xt_access1_C_ivpII},
    {TMIT_native_code, (Void(*)())clinit__XakR4,
	(const Char *)&nmsm_3,8,(const Char *)&sgsm_3,3,
	1,0x8,6,xt_clinit__XakR4},
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
} inr_ca_mcgill_sable_soot_jimple_ClassHierarchy = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_ClassHierarchy cl_ca_mcgill_sable_soot_jimple_ClassHierarchy = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy),
    14,
    4,
    5,
    1,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    8, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_ClassHierarchy,
    st_ca_mcgill_sable_soot_jimple_ClassHierarchy,
    clinit__XakR4,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_ClassHierarchy,
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
	{TMIT_native_code, toString__S21U1,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,3,xt_toString__S21U1},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_S_P3qYX,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,42,1,0x2,0,xt_init_S_P3qYX},
	{TMIT_native_code, getTypeNode_T_Dr1me,(const Char *)&nmim_13,11,
	(const Char *)&sgim_13,82,1,0x1,2,xt_getTypeNode_T_Dr1me},
    } /* end of methodsigs */
};


/*M init_S_P3qYX: ca.mcgill.sable.soot.jimple.ClassHierarchy.<init>(Lca/mcgill/sable/soot/SootClassManager;)V */

Class xt_init_S_P3qYX[] = { 0 };

Void init_S_P3qYX(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
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
	a2 = new(&cl_java_util_Vector.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__kkKK3(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->typeNodeInstances = a2;
	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lkK9b(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->typeNodeHashtable = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_fo53n.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_C_k8vnE(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->transform = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_OGkBH.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_C_femWZ(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->make = a2;
	a1 = av1;
	if (a1 != 0)
		GOTO(51,L1);
	a1 = new(&cl_java_lang_NullPointerException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__iQiCT(a2);
	athrow(a1);

L1:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->classManager = a2;
	a1 = cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.V.classHierarchyHashtable;
	a2 = av1;
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

/*M getClassHierarchy_S_6aZ1Q: ca.mcgill.sable.soot.jimple.ClassHierarchy.getClassHierarchy(Lca/mcgill/sable/soot/SootClassManager;)Lca/mcgill/sable/soot/jimple/ClassHierarchy; */

Class xt_getClassHierarchy_S_6aZ1Q[] = { 0 };

Object getClassHierarchy_S_6aZ1Q(Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C);

L0:	a1 = cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.V.classHierarchyHashtable;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av1 = a1;
	a1 = av1;
	if (a1 != 0)
		GOTO(12,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C);
	a2 = a1;
	a3 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_P3qYX(a2,a3);
	av1 = a1;
L1:	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTypeNode_T_Dr1me: ca.mcgill.sable.soot.jimple.ClassHierarchy.getTypeNode(Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode; */

Class xt_getTypeNode_T_Dr1me[] = { 0 };

Object getTypeNode_T_Dr1me(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->transform;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_fo53n*)a1)->class->M.
		toInt_T_OVMBo.f(a1,a2);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->typeNodeHashtable;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(22,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->make;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_OGkBH*)a1)->class->M.
		typeNode_T_08GxW.f(a1,a2);
	av2 = a1;
L1:	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__S21U1: ca.mcgill.sable.soot.jimple.ClassHierarchy.toString()Ljava/lang/String; */

Class xt_toString__S21U1[] = { 0 };

Object toString__S21U1(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av3;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	i1 = 0;
	iv2 = i1;
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_ClassHierarchy[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->typeNodeInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av3 = a1;
	GOTO(25,L4);

L1:	i1 = iv2;
	if (i1 == 0)
		GOTO(29,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_ClassHierarchy[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(39,L3);

L2:	i1 = 1;
	iv2 = i1;
L3:	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,1715937210)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(61,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_ClassHierarchy[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
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

/*M access0_C_CAKCW: ca.mcgill.sable.soot.jimple.ClassHierarchy.access$0(Lca/mcgill/sable/soot/jimple/ClassHierarchy;)Ljava/util/Vector; */

Class xt_access0_C_CAKCW[] = { 0 };

Object access0_C_CAKCW(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C);

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->typeNodeInstances;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access1_C_ivpII: ca.mcgill.sable.soot.jimple.ClassHierarchy.access$1(Lca/mcgill/sable/soot/jimple/ClassHierarchy;)Ljava/util/Hashtable; */

Class xt_access1_C_ivpII[] = { 0 };

Object access1_C_ivpII(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

	if (cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C.needinit)
		initclass(&cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C);

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->typeNodeHashtable;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clinit__XakR4: ca.mcgill.sable.soot.jimple.ClassHierarchy.<clinit>()V */

Class xt_clinit__XakR4[] = { 0 };

Void clinit__XakR4(void)
{
Object a0, a1, a2;
PROLOGUE;


L0:	a1 = new(&cl_java_util_Hashtable.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__lkK9b(a2);
	cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.V.classHierarchyHashtable = a1;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_ClassHierarchy[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','C','l','a','s','s','H','i','e',
'r','a','r','c','h','y','C','l','a','s','s','H','i','e','r','a','r','c',
'h','y',':','{',',','}'};

const void *st_ca_mcgill_sable_soot_jimple_ClassHierarchy[] = {
    ch_ca_mcgill_sable_soot_jimple_ClassHierarchy+42,	/* 0. ca.mcgill.sable.soot.jimple.ClassHierarc */
    ch_ca_mcgill_sable_soot_jimple_ClassHierarchy+58,	/* 1. ClassHierarchy:{ */
    ch_ca_mcgill_sable_soot_jimple_ClassHierarchy+59,	/* 2. , */
    ch_ca_mcgill_sable_soot_jimple_ClassHierarchy+60,	/* 3. } */
    0};
