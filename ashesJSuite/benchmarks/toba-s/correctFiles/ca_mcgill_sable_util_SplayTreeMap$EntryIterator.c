/*  ca_mcgill_sable_util_SplayTreeMap$EntryIterator.c -- from Java class ca.mcgill.sable.util.SplayTreeMap$EntryIterator  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_SplayTreeMap$EntryIterator.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_ConcurrentModificationException.h"
#include "ca_mcgill_sable_util_SplayTreeMap.h"
#include "ca_mcgill_sable_util_SplayTreeMap$EntryCollection.h"
#include "ca_mcgill_sable_util_SplayTreeMap$Node.h"
#include "java_util_NoSuchElementException.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Spla_gQTcK.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_ca_mcgill_sable_util_Iterator.C,
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_ConcurrentModificationException.C,
    &cl_ca_mcgill_sable_util_SplayTreeMap.C,
    &cl_ca_mcgill_sable_util_Spla_8RYAj.C,
    &cl_ca_mcgill_sable_util_Spla_Cgwz5.C,
    &cl_java_util_NoSuchElementException.C,
};

extern const Char ch_ca_mcgill_sable_util_Spla_gQTcK[];
extern const void *st_ca_mcgill_sable_util_Spla_gQTcK[];
extern Class xt_init_S_enfko[];
extern Class xt_hasNext__EhmZy[];
extern Class xt_next__ibDjn[];
extern Class xt_remove__v3SLw[];

#define HASHMASK 0xf
/*  0.  36e9ff20  (0)  next  */
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  697034e6  (6)  hasNext  */
/*  9.  9bb4ac89  (9)  remove  */
/*  e.  c2aafd4e  (e)  equals  */
/*  f.  489f8e6f  (f)  toString  */
static const struct ihash htable[17] = {
    921304864, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.next__ibDjn,
    -1992104095, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    1768961254, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.hasNext__EhmZy, 0, 0,
    0, 0, -1682658167, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.remove__v3SLw,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Spla_gQTcK.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(47) nmchars = {&acl_char, 0, 47, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','p','l','a','y','T','r','e','e','M','a','p','$','E','n',
't','r','y','I','t','e','r','a','t','o','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 47 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',';'};
static const Char nmiv_1[] = {
'n','o','d','e'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p','$','N',
'o','d','e',';'};
static const Char nmiv_2[] = {
'l','a','s','t','K','e','y'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';'};
static const Char nmiv_3[] = {
'l','o','c','a','l','M','o','d','C','o','u','n','t'};
static const Char sgiv_3[] = {
'I'};
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
'u','t','i','l','/','S','p','l','a','y','T','r','e','e','M','a','p',';',
')','V'};
static const Char nmim_13[] = {
'h','a','s','N','e','x','t'};
static const Char sgim_13[] = {
'(',')','Z'};
static const Char nmim_14[] = {
'n','e','x','t'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_15[] = {
'r','e','m','o','v','e'};
static const Char sgim_15[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Spla_gQTcK, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,35,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_gQTcK, node), 0,(const Char *)&nmiv_1,4,(const Char *)&sgiv_1,40,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_gQTcK, lastKey), 0,(const Char *)&nmiv_2,7,(const Char *)&sgiv_2,18,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_Spla_gQTcK, localModCount), 0,(const Char *)&nmiv_3,13,(const Char *)&sgiv_3,1,1,0x2,3}, 
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
} inr_ca_mcgill_sable_util_Spla_gQTcK = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Spla_gQTcK.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Spla_gQTcK cl_ca_mcgill_sable_util_Spla_gQTcK = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Spla_gQTcK),
    16,
    0,
    4,
    0,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_util_Spla_gQTcK,
    st_ca_mcgill_sable_util_Spla_gQTcK,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Spla_gQTcK,
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
	{TMIT_native_code, init_S_enfko,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,38,1,0x0,0,xt_init_S_enfko},
	{TMIT_native_code, hasNext__EhmZy,(const Char *)&nmim_13,7,
	(const Char *)&sgim_13,3,1,0x8001,1,xt_hasNext__EhmZy},
	{TMIT_native_code, next__ibDjn,(const Char *)&nmim_14,4,
	(const Char *)&sgim_14,20,1,0x8001,2,xt_next__ibDjn},
	{TMIT_native_code, remove__v3SLw,(const Char *)&nmim_15,6,
	(const Char *)&sgim_15,3,1,0x8001,3,xt_remove__v3SLw},
    } /* end of methodsigs */
};


/*M init_S_enfko: ca.mcgill.sable.util.SplayTreeMap$EntryIterator.<init>(Lca/mcgill/sable/util/SplayTreeMap;)V */

Class xt_init_S_enfko[] = { 0 };

Void init_S_enfko(Object p0, Object p1)
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
	init__AAyKx(a1);
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->this0_oYxUV;
	i2 = access0_S_7aikG(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->localModCount = i2;
	a1 = av0;
	a2 = av1;
	a2 = access1_S_oa8DE(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node = a2;
	GOTO(33,L2);

L1:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node = a2;
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	if (a1 == 0)
		GOTO(51,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	if (a1 != 0)
		GOBACK(61,L1);
L3:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M hasNext__EhmZy: ca.mcgill.sable.util.SplayTreeMap$EntryIterator.hasNext()Z */

Class xt_hasNext__EhmZy[] = { 0 };

Boolean hasNext__EhmZy(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->this0_oYxUV;
	i2 = access0_S_7aikG(a2);
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	if (a1 != 0)
		GOTO(26,L2);
	i1 = 0;
	return i1;

L2:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M next__ibDjn: ca.mcgill.sable.util.SplayTreeMap$EntryIterator.next()Ljava/lang/Object; */

Class xt_next__ibDjn[] = { 0 };

Object next__ibDjn(Object p0)
{
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->this0_oYxUV;
	i2 = access0_S_7aikG(a2);
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getKey__azarQ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->lastKey = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getRight__Ut8tS.f(a1);
	if (a1 == 0)
		GOTO(45,L4);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node = a2;
	GOTO(59,L3);

L2:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getLeft__7iwoc.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node = a2;
L3:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a1)->class->M.
		getLeft__7iwoc.f(a1);
	if (a1 != 0)
		GOBACK(80,L2);
	GOTO(83,L7);

L4:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	av2 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getParent__MZBKw.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node = a2;
	GOTO(102,L6);

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	av2 = a1;
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getParent__MZBKw.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node = a2;
L6:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->node;
	if (a1 == 0)
		GOTO(125,L7);
	a1 = av2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->node;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_Cgwz5*)a2)->class->M.
		getRight__Ut8tS.f(a2);
	if (a1 == a2)
		GOBACK(136,L5);
L7:	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M remove__v3SLw: ca.mcgill.sable.util.SplayTreeMap$EntryIterator.remove()V */

Class xt_remove__v3SLw[] = { 0 };

Void remove__v3SLw(Object p0)
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
	i1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->localModCount;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->this0_oYxUV;
	i2 = access0_S_7aikG(a2);
	if (i1 == i2)
		GOTO(11,L1);
	a1 = new(&cl_ca_mcgill_sable_util_ConcurrentModificationException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__uTqZE(a2);
	athrow(a1);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->lastKey;
	if (a1 != 0)
		GOTO(26,L2);
	a1 = new(&cl_java_util_NoSuchElementException.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__4We0m(a2);
	athrow(a1);

L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->this0_oYxUV;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->lastKey;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_SplayTreeMap*)a1)->class->M.
		remove_O_boW7c.f(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a2)->this0_oYxUV;
	i2 = access0_S_7aikG(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->localModCount = i2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Spla_gQTcK*)a1)->lastKey = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Spla_gQTcK[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','S','p','l','a','y','T','r','e','e','M','a','p','$','E','n',
't','r','y','I','t','e','r','a','t','o','r'};

const void *st_ca_mcgill_sable_util_Spla_gQTcK[] = {
    ch_ca_mcgill_sable_util_Spla_gQTcK+47,	/* 0. ca.mcgill.sable.util.SplayTreeMap$EntryI */
    0};
