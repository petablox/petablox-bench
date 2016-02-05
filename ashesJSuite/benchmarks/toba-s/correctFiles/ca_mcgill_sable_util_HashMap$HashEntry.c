/*  ca_mcgill_sable_util_HashMap$HashEntry.c -- from Java class ca.mcgill.sable.util.HashMap$HashEntry  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_HashMap$HashEntry.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_HashMap.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Hash_rJAjz.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_HashMap.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_util_Hash_rJAjz[];
extern const void *st_ca_mcgill_sable_util_Hash_rJAjz[];
extern Class xt_init_HO_atRUL[];
extern Class xt_equals_O_D8Li8[];
extern Class xt_getKey__ZDd3e[];
extern Class xt_getValue__fuXvD[];
extern Class xt_setValue_O_h7KO5[];
extern Class xt_hashCode__QND0c[];
extern Class xt_toString__MQAjL[];

#define HASHMASK 0x1f
/*  1.  8942e761  (1)  hashCode  */
/*  2.  e1b631a2  (2)  setValue  */
/*  e.  c2aafd4e  (e)  equals  */
/*  12.  4c0d6fd2  (12)  clone  */
/*  16.  b25b196  (16)  getValue  */
/*  1a.  6f566dfa  (1a)  getKey  */
static const struct ihash htable[32] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Hash_rJAjz.M.hashCode__QND0c,
    -508153438, &cl_ca_mcgill_sable_util_Hash_rJAjz.M.setValue_O_h7KO5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Hash_rJAjz.M.equals_O_D8Li8,
    0, 0, 0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Hash_rJAjz.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    187019670, &cl_ca_mcgill_sable_util_Hash_rJAjz.M.getValue__fuXvD, 0, 0,
    0, 0, 0, 0,
    1867935226, &cl_ca_mcgill_sable_util_Hash_rJAjz.M.getKey__ZDd3e, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','H','a','s','h','M','a','p','$','H','a','s','h','E','n','t',
'r','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','H','a','s','h','M','a','p',';'};
static const Char nmiv_1[] = {
'k','e','y'};
static const Char sgiv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
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
'u','t','i','l','/','H','a','s','h','M','a','p',';','L','j','a','v','a',
'/','l','a','n','g','/','O','b','j','e','c','t',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','K','e','y'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
'g','e','t','V','a','l','u','e'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_15[] = {
's','e','t','V','a','l','u','e'};
static const Char sgim_15[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Hash_rJAjz, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,30,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Hash_rJAjz, key), 0,(const Char *)&nmiv_1,3,(const Char *)&sgiv_1,18,1,0x2,1}, 
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
} inr_ca_mcgill_sable_util_Hash_rJAjz = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Hash_rJAjz.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Hash_rJAjz cl_ca_mcgill_sable_util_Hash_rJAjz = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Hash_rJAjz),
    16,
    0,
    2,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    3, others,
    0, 0,
    ch_ca_mcgill_sable_util_Hash_rJAjz,
    st_ca_mcgill_sable_util_Hash_rJAjz,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Hash_rJAjz,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__dslwm,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,0,0x8104,2,0},
	{TMIT_native_code, equals_O_D8Li8,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,1,0x8001,1,xt_equals_O_D8Li8},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__QND0c,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x8001,5,xt_hashCode__QND0c},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__MQAjL,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,6,xt_toString__MQAjL},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_HO_atRUL,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,51,1,0x1,0,xt_init_HO_atRUL},
	{TMIT_native_code, getKey__ZDd3e,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_getKey__ZDd3e},
	{TMIT_native_code, getValue__fuXvD,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,20,1,0x8001,3,xt_getValue__fuXvD},
	{TMIT_native_code, setValue_O_h7KO5,(const Char *)&nmim_15,8,
	(const Char *)&sgim_15,38,1,0x8001,4,xt_setValue_O_h7KO5},
    } /* end of methodsigs */
};


/*M init_HO_atRUL: ca.mcgill.sable.util.HashMap$HashEntry.<init>(Lca/mcgill/sable/util/HashMap;Ljava/lang/Object;)V */

Class xt_init_HO_atRUL[] = { 0 };

Void init_HO_atRUL(Object p0, Object p1, Object p2)
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
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->key = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_O_D8Li8: ca.mcgill.sable.util.HashMap$HashEntry.equals(Ljava/lang/Object;)Z */

Class xt_equals_O_D8Li8[] = { 0 };

Boolean equals_O_D8Li8(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(4,L1);
	i1 = 0;
	return i1;

L1:	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_MapE_PL383.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a2)->key;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(27,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->class->M.
		getValue__fuXvD.f(a1);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,187019670)->f)(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 != 0)
		GOTO(43,L3);
L2:	i1 = 0;
	return i1;

L3:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getKey__ZDd3e: ca.mcgill.sable.util.HashMap$HashEntry.getKey()Ljava/lang/Object; */

Class xt_getKey__ZDd3e[] = { 0 };

Object getKey__ZDd3e(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->key;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getValue__fuXvD: ca.mcgill.sable.util.HashMap$HashEntry.getValue()Ljava/lang/Object; */

Class xt_getValue__fuXvD[] = { 0 };

Object getValue__fuXvD(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a2)->key;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		get_O_qmciZ.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setValue_O_h7KO5: ca.mcgill.sable.util.HashMap$HashEntry.setValue(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_setValue_O_h7KO5[] = { 0 };

Object setValue_O_h7KO5(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a2)->key;
	a3 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_HashMap*)a1)->class->M.
		put_OO_TYElP.f(a1,a2,a3);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hashCode__QND0c: ca.mcgill.sable.util.HashMap$HashEntry.hashCode()I */

Class xt_hashCode__QND0c[] = { 0 };

Int hashCode__QND0c(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->class->M.
		getKey__ZDd3e.f(a1);
	if (a1 != 0)
		GOTO(4,L1);
	i1 = 0;
	GOTO(8,L2);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a1)->class->M.
		getKey__ZDd3e.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		hashCode__8wJNW.f(a1);
L2:	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a2)->class->M.
		getValue__fuXvD.f(a2);
	if (a2 != 0)
		GOTO(22,L3);
	i2 = 0;
	GOTO(26,L4);

L3:	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a2)->class->M.
		getValue__fuXvD.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_lang_Object*)a2)->class->M.
		hashCode__8wJNW.f(a2);
L4:	i1 = i1 ^ i2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__MQAjL: ca.mcgill.sable.util.HashMap$HashEntry.toString()Ljava/lang/String; */

Class xt_toString__MQAjL[] = { 0 };

Object toString__MQAjL(Object p0)
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
	a3 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a3)->key;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Object*)a3)->class->M.
		toString__4d9OF.f(a3);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_util_Hash_rJAjz[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a2)->this0_oYxUV;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_util_Hash_rJAjz*)a3)->key;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_HashMap*)a2)->class->M.
		get_O_qmciZ.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_O_wO0jp.f(a1,a2);
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



const Char ch_ca_mcgill_sable_util_Hash_rJAjz[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','H','a','s','h','M','a','p','$','H','a','s','h','E','n','t',
'r','y',' ','-','>',' '};

const void *st_ca_mcgill_sable_util_Hash_rJAjz[] = {
    ch_ca_mcgill_sable_util_Hash_rJAjz+38,	/* 0. ca.mcgill.sable.util.HashMap$HashEntry */
    ch_ca_mcgill_sable_util_Hash_rJAjz+42,	/* 1.  ->  */
    0};
