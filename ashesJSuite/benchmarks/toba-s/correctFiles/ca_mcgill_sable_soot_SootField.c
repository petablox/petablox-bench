/*  ca_mcgill_sable_soot_SootField.c -- from Java class ca.mcgill.sable.soot.SootField  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_SootField.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "ca_mcgill_sable_soot_NotDeclaredException.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_Type.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_SootField.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_ca_mcgill_sable_soot_NotDeclaredException.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_Type.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_SootField[];
extern const void *st_ca_mcgill_sable_soot_SootField[];
extern Class xt_init_STi_Iry4I[];
extern Class xt_init_ST_Dh6to[];
extern Class xt_getName__LfNQ7[];
extern Class xt_getSignature__yo9RG[];
extern Class xt_getDeclaringClass__Ddy5k[];
extern Class xt_isDeclared__gLGfe[];
extern Class xt_setName_S_t7l6D[];
extern Class xt_getType__NbCeK[];
extern Class xt_setType_T_j3zMu[];
extern Class xt_setModifiers_i_t81D7[];
extern Class xt_getModifiers__dRekS[];
extern Class xt_toString__ayov3[];
extern Class xt_getDeclaration__2OXsy[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
static const struct ihash htable[8] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_SootField.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_SootField.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_SootField.M.equals_O_Ba6e0, 0, 0,
};

static const CARRAY(30) nmchars = {&acl_char, 0, 30, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','F','i','e','l','d'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 30 };
static const Char nmiv_0[] = {
'n','a','m','e'};
static const Char sgiv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_1[] = {
't','y','p','e'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','T','y','p','e',';'};
static const Char nmiv_2[] = {
'm','o','d','i','f','i','e','r','s'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'i','s','D','e','c','l','a','r','e','d'};
static const Char sgiv_3[] = {
'Z'};
static const Char nmiv_4[] = {
'd','e','c','l','a','r','i','n','g','C','l','a','s','s'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
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
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';','I',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_14[] = {
'g','e','t','N','a','m','e'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'g','e','t','S','i','g','n','a','t','u','r','e'};
static const Char sgim_15[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_16[] = {
'g','e','t','D','e','c','l','a','r','i','n','g','C','l','a','s','s'};
static const Char sgim_16[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','S','o','o','t','C','l','a','s','s',';'};
static const Char nmim_17[] = {
'i','s','D','e','c','l','a','r','e','d'};
static const Char sgim_17[] = {
'(',')','Z'};
static const Char nmim_18[] = {
's','e','t','N','a','m','e'};
static const Char sgim_18[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmim_19[] = {
'g','e','t','T','y','p','e'};
static const Char sgim_19[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','T','y','p','e',';'};
static const Char nmim_20[] = {
's','e','t','T','y','p','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','V'};
static const Char nmim_21[] = {
's','e','t','M','o','d','i','f','i','e','r','s'};
static const Char sgim_21[] = {
'(','I',')','V'};
static const Char nmim_22[] = {
'g','e','t','M','o','d','i','f','i','e','r','s'};
static const Char sgim_22[] = {
'(',')','I'};
static const Char nmim_23[] = {
'g','e','t','D','e','c','l','a','r','a','t','i','o','n'};
static const Char sgim_23[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_SootField, name), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,18,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootField, type), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,27,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootField, modifiers), 0,(const Char *)&nmiv_2,9,(const Char *)&sgiv_2,1,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootField, isDeclared), 0,(const Char *)&nmiv_3,10,(const Char *)&sgiv_3,1,1,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_SootField, declaringClass), 0,(const Char *)&nmiv_4,14,(const Char *)&sgiv_4,32,1,0x0,4}, 
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
} inr_ca_mcgill_sable_soot_SootField = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_SootField.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_SootField cl_ca_mcgill_sable_soot_SootField = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_SootField),
    24,
    0,
    5,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    6, others,
    0, 0,
    ch_ca_mcgill_sable_soot_SootField,
    st_ca_mcgill_sable_soot_SootField,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_SootField,
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
	{TMIT_native_code, toString__ayov3,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,11,xt_toString__ayov3},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_STi_Iry4I,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,49,1,0x1,0,xt_init_STi_Iry4I},
	{TMIT_native_code, init_ST_Dh6to,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,48,1,0x1,1,xt_init_ST_Dh6to},
	{TMIT_native_code, getName__LfNQ7,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,20,1,0x1,2,xt_getName__LfNQ7},
	{TMIT_native_code, getSignature__yo9RG,(const Char *)&nmim_15,12,
	(const Char *)&sgim_15,20,1,0x1,3,xt_getSignature__yo9RG},
	{TMIT_native_code, getDeclaringClass__Ddy5k,(const Char *)&nmim_16,17,
	(const Char *)&sgim_16,34,1,0x1,4,xt_getDeclaringClass__Ddy5k},
	{TMIT_native_code, isDeclared__gLGfe,(const Char *)&nmim_17,10,
	(const Char *)&sgim_17,3,1,0x1,5,xt_isDeclared__gLGfe},
	{TMIT_native_code, setName_S_t7l6D,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,21,1,0x1,6,xt_setName_S_t7l6D},
	{TMIT_native_code, getType__NbCeK,(const Char *)&nmim_19,7,
	(const Char *)&sgim_19,29,1,0x1,7,xt_getType__NbCeK},
	{TMIT_native_code, setType_T_j3zMu,(const Char *)&nmim_20,7,
	(const Char *)&sgim_20,30,1,0x1,8,xt_setType_T_j3zMu},
	{TMIT_native_code, setModifiers_i_t81D7,(const Char *)&nmim_21,12,
	(const Char *)&sgim_21,4,1,0x1,9,xt_setModifiers_i_t81D7},
	{TMIT_native_code, getModifiers__dRekS,(const Char *)&nmim_22,12,
	(const Char *)&sgim_22,3,1,0x1,10,xt_getModifiers__dRekS},
	{TMIT_native_code, getDeclaration__2OXsy,(const Char *)&nmim_23,14,
	(const Char *)&sgim_23,20,1,0x1,12,xt_getDeclaration__2OXsy},
    } /* end of methodsigs */
};


/*M init_STi_Iry4I: ca.mcgill.sable.soot.SootField.<init>(Ljava/lang/String;Lca/mcgill/sable/soot/Type;I)V */

Class xt_init_STi_Iry4I[] = { 0 };

Void init_STi_Iry4I(Object p0, Object p1, Object p2, Int p3)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	iv3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->isDeclared = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->name = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->type = a2;
	a1 = av0;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->modifiers = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_ST_Dh6to: ca.mcgill.sable.soot.SootField.<init>(Ljava/lang/String;Lca/mcgill/sable/soot/Type;)V */

Class xt_init_ST_Dh6to[] = { 0 };

Void init_ST_Dh6to(Object p0, Object p1, Object p2)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
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
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->isDeclared = i2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->name = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->type = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->modifiers = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getName__LfNQ7: ca.mcgill.sable.soot.SootField.getName()Ljava/lang/String; */

Class xt_getName__LfNQ7[] = { 0 };

Object getName__LfNQ7(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->name;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getSignature__yo9RG: ca.mcgill.sable.soot.SootField.getSignature()Ljava/lang/String; */

Class xt_getSignature__yo9RG[] = { 0 };

Object getSignature__yo9RG(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->class->M.
		getDeclaringClass__Ddy5k.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getName__xn8ku.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootField[1];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getName__LfNQ7.f(a3);
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
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a1 = av1;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_SootField[2];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->class->M.
		getType__NbCeK.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
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

/*M getDeclaringClass__Ddy5k: ca.mcgill.sable.soot.SootField.getDeclaringClass()Lca/mcgill/sable/soot/SootClass; */

Class xt_getDeclaringClass__Ddy5k[] = { &cl_ca_mcgill_sable_soot_NotDeclaredException.C, 0 };

Object getDeclaringClass__Ddy5k(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->isDeclared;
	if (i1 != 0)
		GOTO(4,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_NotDeclaredException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__njmpY(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->declaringClass;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isDeclared__gLGfe: ca.mcgill.sable.soot.SootField.isDeclared()Z */

Class xt_isDeclared__gLGfe[] = { 0 };

Boolean isDeclared__gLGfe(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->isDeclared;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setName_S_t7l6D: ca.mcgill.sable.soot.SootField.setName(Ljava/lang/String;)V */

Class xt_setName_S_t7l6D[] = { 0 };

Void setName_S_t7l6D(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->name = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getType__NbCeK: ca.mcgill.sable.soot.SootField.getType()Lca/mcgill/sable/soot/Type; */

Class xt_getType__NbCeK[] = { 0 };

Object getType__NbCeK(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->type;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setType_T_j3zMu: ca.mcgill.sable.soot.SootField.setType(Lca/mcgill/sable/soot/Type;)V */

Class xt_setType_T_j3zMu[] = { 0 };

Void setType_T_j3zMu(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->type = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setModifiers_i_t81D7: ca.mcgill.sable.soot.SootField.setModifiers(I)V */

Class xt_setModifiers_i_t81D7[] = { 0 };

Void setModifiers_i_t81D7(Object p0, Int p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_SootField*)a1)->modifiers = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getModifiers__dRekS: ca.mcgill.sable.soot.SootField.getModifiers()I */

Class xt_getModifiers__dRekS[] = { 0 };

Int getModifiers__dRekS(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->modifiers;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__ayov3: ca.mcgill.sable.soot.SootField.toString()Ljava/lang/String; */

Class xt_toString__ayov3[] = { 0 };

Object toString__ayov3(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->class->M.
		getSignature__yo9RG.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getDeclaration__2OXsy: ca.mcgill.sable.soot.SootField.getDeclaration()Ljava/lang/String; */

Class xt_getDeclaration__2OXsy[] = { 0 };

Object getDeclaration__2OXsy(Object p0)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_SootField*)a3)->modifiers;
	a3 = toString_i_bHTat(i3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_SootField[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->type;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_Type*)a2)->class->M.
		toString__J7Vel.f(a2);
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
	av1 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		trim__6ufYg.f(a1);
	av1 = a1;
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_SootField[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 == 0)
		GOTO(47,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootField*)a1)->name;
	return a1;

L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av1;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_SootField[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootField*)a2)->name;
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



const Char ch_ca_mcgill_sable_soot_SootField[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','S','o','o','t','F','i','e','l','d','.',':',' '};

const void *st_ca_mcgill_sable_soot_SootField[] = {
    ch_ca_mcgill_sable_soot_SootField+30,	/* 0. ca.mcgill.sable.soot.SootField */
    ch_ca_mcgill_sable_soot_SootField+31,	/* 1. . */
    ch_ca_mcgill_sable_soot_SootField+32,	/* 2. : */
    ch_ca_mcgill_sable_soot_SootField+33,	/* 3.   */
    ch_ca_mcgill_sable_soot_SootField+33,	/* 4.  */
    0};
