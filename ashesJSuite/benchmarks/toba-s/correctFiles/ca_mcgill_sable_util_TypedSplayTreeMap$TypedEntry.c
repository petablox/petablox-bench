/*  ca_mcgill_sable_util_TypedSplayTreeMap$TypedEntry.c -- from Java class ca.mcgill.sable.util.TypedSplayTreeMap$TypedEntry  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$TypedEntry.h"
#include "ca_mcgill_sable_util_AbstractMap$AbstractEntry.h"
#include "ca_mcgill_sable_util_Map$Entry.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_Cast.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$EntryCollection.h"
#include "ca_mcgill_sable_util_TypedSplayTreeMap$EntryIterator.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Type_6y11S.C,
    &cl_ca_mcgill_sable_util_Abst_FQuSs.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_MapE_PL383.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_Cast.C,
    &cl_ca_mcgill_sable_util_TypedSplayTreeMap.C,
    &cl_ca_mcgill_sable_util_Type_AiLCg.C,
    &cl_ca_mcgill_sable_util_Type_KCE6Q.C,
};

extern const Char ch_ca_mcgill_sable_util_Type_6y11S[];
extern const void *st_ca_mcgill_sable_util_Type_6y11S[];
extern Class xt_init_TM_6iptR[];
extern Class xt_getKey__wh0DC[];
extern Class xt_getValue__OGRgh[];
extern Class xt_setValue_O_642Vb[];

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
    -1992104095, &cl_ca_mcgill_sable_util_Type_6y11S.M.hashCode__mOf3l,
    -508153438, &cl_ca_mcgill_sable_util_Type_6y11S.M.setValue_O_642Vb,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Type_6y11S.M.equals_O_pR9rc,
    1218416239, &cl_ca_mcgill_sable_util_Type_6y11S.M.toString__4d9OF,
    0, 0, 0, 0,
    1275949010, &cl_ca_mcgill_sable_util_Type_6y11S.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    187019670, &cl_ca_mcgill_sable_util_Type_6y11S.M.getValue__OGRgh, 0, 0,
    0, 0, 0, 0,
    1867935226, &cl_ca_mcgill_sable_util_Type_6y11S.M.getKey__wh0DC, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
};

static const CARRAY(49) nmchars = {&acl_char, 0, 49, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','S','p','l','a','y','T','r','e','e','M',
'a','p','$','T','y','p','e','d','E','n','t','r','y'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 49 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','T','y','p','e','d','S','p','l','a','y','T','r','e','e',
'M','a','p',';'};
static const Char nmiv_1[] = {
'e','n','t','r','y'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','M','a','p','$','E','n','t','r','y',';'};
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
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','T','y','p','e','d','S','p','l','a','y','T','r','e',
'e','M','a','p',';','L','c','a','/','m','c','g','i','l','l','/','s','a',
'b','l','e','/','u','t','i','l','/','M','a','p','$','E','n','t','r','y',
';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Type_6y11S, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,40,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Type_6y11S, entry_shaQj), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,32,1,0x2,1}, 
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
} inr_ca_mcgill_sable_util_Type_6y11S = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Type_6y11S.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Type_6y11S cl_ca_mcgill_sable_util_Type_6y11S = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Type_6y11S),
    16,
    0,
    2,
    0,
    3, supers,
    1, 0, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_util_Type_6y11S,
    st_ca_mcgill_sable_util_Type_6y11S,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Type_6y11S,
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
	{TMIT_native_code, getKey__wh0DC,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,20,1,0x8001,1,xt_getKey__wh0DC},
	{TMIT_native_code, getValue__OGRgh,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,20,1,0x8001,2,xt_getValue__OGRgh},
	{TMIT_native_code, setValue_O_642Vb,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,38,1,0x8001,3,xt_setValue_O_642Vb},
	{TMIT_native_code, init_TM_6iptR,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,75,1,0x0,0,xt_init_TM_6iptR},
    } /* end of methodsigs */
};


/*M init_TM_6iptR: ca.mcgill.sable.util.TypedSplayTreeMap$TypedEntry.<init>(Lca/mcgill/sable/util/TypedSplayTreeMap;Lca/mcgill/sable/util/Map$Entry;)V */

Class xt_init_TM_6iptR[] = { 0 };

Void init_TM_6iptR(Object p0, Object p1, Object p2)
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
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_6y11S*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_6y11S*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Type_6y11S*)a1)->entry_shaQj = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getKey__wh0DC: ca.mcgill.sable.util.TypedSplayTreeMap$TypedEntry.getKey()Ljava/lang/Object; */

Class xt_getKey__wh0DC[] = { 0 };

Object getKey__wh0DC(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_6y11S*)a1)->entry_shaQj;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1867935226)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getValue__OGRgh: ca.mcgill.sable.util.TypedSplayTreeMap$TypedEntry.getValue()Ljava/lang/Object; */

Class xt_getValue__OGRgh[] = { 0 };

Object getValue__OGRgh(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Type_6y11S*)a1)->entry_shaQj;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,187019670)->f)(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setValue_O_642Vb: ca.mcgill.sable.util.TypedSplayTreeMap$TypedEntry.setValue(Ljava/lang/Object;)Ljava/lang/Object; */

Class xt_setValue_O_642Vb[] = { 0 };

Object setValue_O_642Vb(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Type_6y11S*)a1)->entry_shaQj;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Type_6y11S*)a2)->this0_oYxUV;
	a2 = access0_T_JjG4a(a2);
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = (*(Object(*)())findinterface(a2,-1063132180)->f)(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-508153438)->f)(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Type_6y11S[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','T','y','p','e','d','S','p','l','a','y','T','r','e','e','M',
'a','p','$','T','y','p','e','d','E','n','t','r','y'};

const void *st_ca_mcgill_sable_util_Type_6y11S[] = {
    ch_ca_mcgill_sable_util_Type_6y11S+49,	/* 0. ca.mcgill.sable.util.TypedSplayTreeMap$T */
    0};
