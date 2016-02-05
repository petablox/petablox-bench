/*  ca_mcgill_sable_soot_Modifier.c -- from Java class ca.mcgill.sable.soot.Modifier  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_Modifier.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_Modifier.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_Modifier[];
extern const void *st_ca_mcgill_sable_soot_Modifier[];
extern Class xt_init__uC1b9[];
extern Class xt_isAbstract_i_9wghh[];
extern Class xt_isFinal_i_t7oPP[];
extern Class xt_isInterface_i_uUWV0[];
extern Class xt_isNative_i_c6Hg4[];
extern Class xt_isPrivate_i_oe55u[];
extern Class xt_isProtected_i_lfqN6[];
extern Class xt_isPublic_i_IE6Xb[];
extern Class xt_isStatic_i_fzZ1T[];
extern Class xt_isSynchronized_i_V8rGp[];
extern Class xt_isTransient_i_PpZxl[];
extern Class xt_isVolatile_i_zXCaN[];
extern Class xt_toString_i_bHTat[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0, -1992104095, &cl_ca_mcgill_sable_soot_Modifier.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_Modifier.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_Modifier.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_Modifier.M.toString__4d9OF, 0, 0,
};

static const CARRAY(29) nmchars = {&acl_char, 0, 29, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','M','o','d','i','f','i','e','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 29 };
static const Char nmcv_0[] = {
'A','B','S','T','R','A','C','T'};
static const Char sgcv_0[] = {
'I'};
static const Char nmcv_1[] = {
'F','I','N','A','L'};
static const Char sgcv_1[] = {
'I'};
static const Char nmcv_2[] = {
'I','N','T','E','R','F','A','C','E'};
static const Char sgcv_2[] = {
'I'};
static const Char nmcv_3[] = {
'N','A','T','I','V','E'};
static const Char sgcv_3[] = {
'I'};
static const Char nmcv_4[] = {
'P','R','I','V','A','T','E'};
static const Char sgcv_4[] = {
'I'};
static const Char nmcv_5[] = {
'P','R','O','T','E','C','T','E','D'};
static const Char sgcv_5[] = {
'I'};
static const Char nmcv_6[] = {
'P','U','B','L','I','C'};
static const Char sgcv_6[] = {
'I'};
static const Char nmcv_7[] = {
'S','T','A','T','I','C'};
static const Char sgcv_7[] = {
'I'};
static const Char nmcv_8[] = {
'S','Y','N','C','H','R','O','N','I','Z','E','D'};
static const Char sgcv_8[] = {
'I'};
static const Char nmcv_9[] = {
'T','R','A','N','S','I','E','N','T'};
static const Char sgcv_9[] = {
'I'};
static const Char nmcv_10[] = {
'V','O','L','A','T','I','L','E'};
static const Char sgcv_10[] = {
'I'};
static const Char nmsm_0[] = {
'i','s','A','b','s','t','r','a','c','t'};
static const Char sgsm_0[] = {
'(','I',')','Z'};
static const Char nmsm_1[] = {
'i','s','F','i','n','a','l'};
static const Char sgsm_1[] = {
'(','I',')','Z'};
static const Char nmsm_2[] = {
'i','s','I','n','t','e','r','f','a','c','e'};
static const Char sgsm_2[] = {
'(','I',')','Z'};
static const Char nmsm_3[] = {
'i','s','N','a','t','i','v','e'};
static const Char sgsm_3[] = {
'(','I',')','Z'};
static const Char nmsm_4[] = {
'i','s','P','r','i','v','a','t','e'};
static const Char sgsm_4[] = {
'(','I',')','Z'};
static const Char nmsm_5[] = {
'i','s','P','r','o','t','e','c','t','e','d'};
static const Char sgsm_5[] = {
'(','I',')','Z'};
static const Char nmsm_6[] = {
'i','s','P','u','b','l','i','c'};
static const Char sgsm_6[] = {
'(','I',')','Z'};
static const Char nmsm_7[] = {
'i','s','S','t','a','t','i','c'};
static const Char sgsm_7[] = {
'(','I',')','Z'};
static const Char nmsm_8[] = {
'i','s','S','y','n','c','h','r','o','n','i','z','e','d'};
static const Char sgsm_8[] = {
'(','I',')','Z'};
static const Char nmsm_9[] = {
'i','s','T','r','a','n','s','i','e','n','t'};
static const Char sgsm_9[] = {
'(','I',')','Z'};
static const Char nmsm_10[] = {
'i','s','V','o','l','a','t','i','l','e'};
static const Char sgsm_10[] = {
'(','I',')','Z'};
static const Char nmsm_11[] = {
't','o','S','t','r','i','n','g'};
static const Char sgsm_11[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
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

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.ABSTRACT,(const Char *)&nmcv_0,8,(const Char *)&sgcv_0,1,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.FINAL,(const Char *)&nmcv_1,5,(const Char *)&sgcv_1,1,1,0x19,1}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.INTERFACE,(const Char *)&nmcv_2,9,(const Char *)&sgcv_2,1,1,0x19,2}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.NATIVE,(const Char *)&nmcv_3,6,(const Char *)&sgcv_3,1,1,0x19,3}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.PRIVATE,(const Char *)&nmcv_4,7,(const Char *)&sgcv_4,1,1,0x19,4}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.PROTECTED,(const Char *)&nmcv_5,9,(const Char *)&sgcv_5,1,1,0x19,5}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.PUBLIC,(const Char *)&nmcv_6,6,(const Char *)&sgcv_6,1,1,0x19,6}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.STATIC,(const Char *)&nmcv_7,6,(const Char *)&sgcv_7,1,1,0x19,7}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.SYNCHRONIZED,(const Char *)&nmcv_8,12,(const Char *)&sgcv_8,1,1,0x19,8}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.TRANSIENT,(const Char *)&nmcv_9,9,(const Char *)&sgcv_9,1,1,0x19,9}, 
    {0,&cl_ca_mcgill_sable_soot_Modifier.V.VOLATILE,(const Char *)&nmcv_10,8,(const Char *)&sgcv_10,1,1,0x19,10}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    {0}
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())isAbstract_i_9wghh,
	(const Char *)&nmsm_0,10,(const Char *)&sgsm_0,4,
	1,0x9,1,xt_isAbstract_i_9wghh},
    {TMIT_native_code, (Void(*)())isFinal_i_t7oPP,
	(const Char *)&nmsm_1,7,(const Char *)&sgsm_1,4,
	1,0x9,2,xt_isFinal_i_t7oPP},
    {TMIT_native_code, (Void(*)())isInterface_i_uUWV0,
	(const Char *)&nmsm_2,11,(const Char *)&sgsm_2,4,
	1,0x9,3,xt_isInterface_i_uUWV0},
    {TMIT_native_code, (Void(*)())isNative_i_c6Hg4,
	(const Char *)&nmsm_3,8,(const Char *)&sgsm_3,4,
	1,0x9,4,xt_isNative_i_c6Hg4},
    {TMIT_native_code, (Void(*)())isPrivate_i_oe55u,
	(const Char *)&nmsm_4,9,(const Char *)&sgsm_4,4,
	1,0x9,5,xt_isPrivate_i_oe55u},
    {TMIT_native_code, (Void(*)())isProtected_i_lfqN6,
	(const Char *)&nmsm_5,11,(const Char *)&sgsm_5,4,
	1,0x9,6,xt_isProtected_i_lfqN6},
    {TMIT_native_code, (Void(*)())isPublic_i_IE6Xb,
	(const Char *)&nmsm_6,8,(const Char *)&sgsm_6,4,
	1,0x9,7,xt_isPublic_i_IE6Xb},
    {TMIT_native_code, (Void(*)())isStatic_i_fzZ1T,
	(const Char *)&nmsm_7,8,(const Char *)&sgsm_7,4,
	1,0x9,8,xt_isStatic_i_fzZ1T},
    {TMIT_native_code, (Void(*)())isSynchronized_i_V8rGp,
	(const Char *)&nmsm_8,14,(const Char *)&sgsm_8,4,
	1,0x9,9,xt_isSynchronized_i_V8rGp},
    {TMIT_native_code, (Void(*)())isTransient_i_PpZxl,
	(const Char *)&nmsm_9,11,(const Char *)&sgsm_9,4,
	1,0x9,10,xt_isTransient_i_PpZxl},
    {TMIT_native_code, (Void(*)())isVolatile_i_zXCaN,
	(const Char *)&nmsm_10,10,(const Char *)&sgsm_10,4,
	1,0x9,11,xt_isVolatile_i_zXCaN},
    {TMIT_native_code, (Void(*)())toString_i_bHTat,
	(const Char *)&nmsm_11,8,(const Char *)&sgsm_11,21,
	1,0x9,12,xt_toString_i_bHTat},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_Modifier.V.ABSTRACT = 1024;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.FINAL = 16;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.INTERFACE = 512;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.NATIVE = 256;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.PRIVATE = 2;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.PROTECTED = 4;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.PUBLIC = 1;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.STATIC = 8;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.SYNCHRONIZED = 32;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.TRANSIENT = 128;
   }
   {
   cl_ca_mcgill_sable_soot_Modifier.V.VOLATILE = 64;
   }
}

#ifndef h_toba_classfile_ClassRef
extern struct cl_generic cl_toba_classfile_ClassRef;
#endif /* h_toba_classfile_ClassRef */
static struct { /* pseudo in_toba_classfile_ClassRef */
   struct cl_generic *class;
   struct monitor *monitor;
   Object name;
   Object refClass;
   Object loadedRefdClasses;
} inr_ca_mcgill_sable_soot_Modifier = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_Modifier.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_Modifier cl_ca_mcgill_sable_soot_Modifier = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_Modifier),
    12,
    12,
    0,
    11,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_soot_Modifier,
    st_ca_mcgill_sable_soot_Modifier,
    0,
    init__uC1b9,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_Modifier,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__uC1b9,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x2,0,xt_init__uC1b9},
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
    } /* end of methodsigs */
};


/*M init__uC1b9: ca.mcgill.sable.soot.Modifier.<init>()V */

Class xt_init__uC1b9[] = { 0 };

Void init__uC1b9(Object p0)
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

/*M isAbstract_i_9wghh: ca.mcgill.sable.soot.Modifier.isAbstract(I)Z */

Class xt_isAbstract_i_9wghh[] = { 0 };

Boolean isAbstract_i_9wghh(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 1024;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(5,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isFinal_i_t7oPP: ca.mcgill.sable.soot.Modifier.isFinal(I)Z */

Class xt_isFinal_i_t7oPP[] = { 0 };

Boolean isFinal_i_t7oPP(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 16;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isInterface_i_uUWV0: ca.mcgill.sable.soot.Modifier.isInterface(I)Z */

Class xt_isInterface_i_uUWV0[] = { 0 };

Boolean isInterface_i_uUWV0(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 512;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(5,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isNative_i_c6Hg4: ca.mcgill.sable.soot.Modifier.isNative(I)Z */

Class xt_isNative_i_c6Hg4[] = { 0 };

Boolean isNative_i_c6Hg4(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 256;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(5,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isPrivate_i_oe55u: ca.mcgill.sable.soot.Modifier.isPrivate(I)Z */

Class xt_isPrivate_i_oe55u[] = { 0 };

Boolean isPrivate_i_oe55u(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 2;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(3,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isProtected_i_lfqN6: ca.mcgill.sable.soot.Modifier.isProtected(I)Z */

Class xt_isProtected_i_lfqN6[] = { 0 };

Boolean isProtected_i_lfqN6(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 4;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(3,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isPublic_i_IE6Xb: ca.mcgill.sable.soot.Modifier.isPublic(I)Z */

Class xt_isPublic_i_IE6Xb[] = { 0 };

Boolean isPublic_i_IE6Xb(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 1;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(3,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isStatic_i_fzZ1T: ca.mcgill.sable.soot.Modifier.isStatic(I)Z */

Class xt_isStatic_i_fzZ1T[] = { 0 };

Boolean isStatic_i_fzZ1T(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 8;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isSynchronized_i_V8rGp: ca.mcgill.sable.soot.Modifier.isSynchronized(I)Z */

Class xt_isSynchronized_i_V8rGp[] = { 0 };

Boolean isSynchronized_i_V8rGp(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 32;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isTransient_i_PpZxl: ca.mcgill.sable.soot.Modifier.isTransient(I)Z */

Class xt_isTransient_i_PpZxl[] = { 0 };

Boolean isTransient_i_PpZxl(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 128;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(5,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M isVolatile_i_zXCaN: ca.mcgill.sable.soot.Modifier.isVolatile(I)Z */

Class xt_isVolatile_i_zXCaN[] = { 0 };

Boolean isVolatile_i_zXCaN(Int p1)
{
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	i1 = iv0;
	i2 = 64;
	i1 = i1 & i2;
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

	/*NOTREACHED*/
}

/*M toString_i_bHTat: ca.mcgill.sable.soot.Modifier.toString(I)Ljava/lang/String; */

Class xt_toString_i_bHTat[] = { 0 };

Object toString_i_bHTat(Int p1)
{
Object a0, a1, a2;
Object av1;
Int i0, i1, i2;
Int iv0;
PROLOGUE;

	iv0 = p1;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__mSrU0(a2);
	av1 = a1;
	i1 = iv0;
	i1 = isPublic_i_IE6Xb(i1);
	if (i1 == 0)
		GOTO(12,L1);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(22,L3);

L1:	i1 = iv0;
	i1 = isPrivate_i_oe55u(i1);
	if (i1 == 0)
		GOTO(29,L2);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	GOTO(39,L3);

L2:	i1 = iv0;
	i1 = isProtected_i_lfqN6(i1);
	if (i1 == 0)
		GOTO(46,L3);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L3:	i1 = iv0;
	i1 = isAbstract_i_9wghh(i1);
	if (i1 == 0)
		GOTO(60,L4);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L4:	i1 = iv0;
	i1 = isInterface_i_uUWV0(i1);
	if (i1 == 0)
		GOTO(74,L5);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[5];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L5:	i1 = iv0;
	i1 = isStatic_i_fzZ1T(i1);
	if (i1 == 0)
		GOTO(88,L6);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L6:	i1 = iv0;
	i1 = isFinal_i_t7oPP(i1);
	if (i1 == 0)
		GOTO(102,L7);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L7:	i1 = iv0;
	i1 = isSynchronized_i_V8rGp(i1);
	if (i1 == 0)
		GOTO(116,L8);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[8];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L8:	i1 = iv0;
	i1 = isNative_i_c6Hg4(i1);
	if (i1 == 0)
		GOTO(130,L9);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L9:	i1 = iv0;
	i1 = isTransient_i_PpZxl(i1);
	if (i1 == 0)
		GOTO(144,L10);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[10];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L10:	i1 = iv0;
	i1 = isVolatile_i_zXCaN(i1);
	if (i1 == 0)
		GOTO(158,L11);
	a1 = av1;
	a2 = (Object)st_ca_mcgill_sable_soot_Modifier[11];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
L11:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		toString__GjBaS.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_String*)a1)->class->M.
		trim__6ufYg.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_Modifier[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','M','o','d','i','f','i','e','r','p','u','b','l','i','c',' ',
'p','r','i','v','a','t','e',' ','p','r','o','t','e','c','t','e','d',' ',
'a','b','s','t','r','a','c','t',' ','i','n','t','e','r','f','a','c','e',
' ','s','t','a','t','i','c',' ','f','i','n','a','l',' ','s','y','n','c',
'h','r','o','n','i','z','e','d',' ','n','a','t','i','v','e',' ','t','r',
'a','n','s','i','e','n','t',' ','v','o','l','a','t','i','l','e',' '};

const void *st_ca_mcgill_sable_soot_Modifier[] = {
    ch_ca_mcgill_sable_soot_Modifier+29,	/* 0. ca.mcgill.sable.soot.Modifier */
    ch_ca_mcgill_sable_soot_Modifier+36,	/* 1. public  */
    ch_ca_mcgill_sable_soot_Modifier+44,	/* 2. private  */
    ch_ca_mcgill_sable_soot_Modifier+54,	/* 3. protected  */
    ch_ca_mcgill_sable_soot_Modifier+63,	/* 4. abstract  */
    ch_ca_mcgill_sable_soot_Modifier+73,	/* 5. interface  */
    ch_ca_mcgill_sable_soot_Modifier+80,	/* 6. static  */
    ch_ca_mcgill_sable_soot_Modifier+86,	/* 7. final  */
    ch_ca_mcgill_sable_soot_Modifier+99,	/* 8. synchronized  */
    ch_ca_mcgill_sable_soot_Modifier+106,	/* 9. native  */
    ch_ca_mcgill_sable_soot_Modifier+116,	/* 10. transient  */
    ch_ca_mcgill_sable_soot_Modifier+125,	/* 11. volatile  */
    0};
