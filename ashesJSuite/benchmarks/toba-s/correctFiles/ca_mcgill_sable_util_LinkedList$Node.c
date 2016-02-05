/*  ca_mcgill_sable_util_LinkedList$Node.c -- from Java class ca.mcgill.sable.util.LinkedList$Node  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_util_LinkedList$Node.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_LinkedList$LinkedListIterator.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_util_Link_cHLND.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_Link_hcQ5L.C,
};

extern const Char ch_ca_mcgill_sable_util_Link_cHLND[];
extern const void *st_ca_mcgill_sable_util_Link_cHLND[];
extern Class xt_init_LO_aAUSu[];
extern Class xt_getElement__7hCh6[];
extern Class xt_setElement_O_pzg8R[];
extern Class xt_getPrevious__xcmt2[];
extern Class xt_setPrevious_L_hdLrK[];
extern Class xt_getNext__j2NKA[];
extern Class xt_setNext_L_vf7Yh[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_util_Link_cHLND.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_util_Link_cHLND.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_util_Link_cHLND.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_util_Link_cHLND.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(36) nmchars = {&acl_char, 0, 36, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','n','k','e','d','L','i','s','t','$','N','o','d','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 36 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t',';'};
static const Char nmiv_1[] = {
'p','r','e','v','i','o','u','s'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmiv_2[] = {
'n','e','x','t'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o','d',
'e',';'};
static const Char nmiv_3[] = {
'e','l','e','m','e','n','t'};
static const Char sgiv_3[] = {
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
'u','t','i','l','/','L','i','n','k','e','d','L','i','s','t',';','L','j',
'a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',';',')','V'};
static const Char nmim_13[] = {
'g','e','t','E','l','e','m','e','n','t'};
static const Char sgim_13[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c',
't',';'};
static const Char nmim_14[] = {
's','e','t','E','l','e','m','e','n','t'};
static const Char sgim_14[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','O','b','j','e','c','t',
';',')','V'};
static const Char nmim_15[] = {
'g','e','t','P','r','e','v','i','o','u','s'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N',
'o','d','e',';'};
static const Char nmim_16[] = {
's','e','t','P','r','e','v','i','o','u','s'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o',
'd','e',';',')','V'};
static const Char nmim_17[] = {
'g','e','t','N','e','x','t'};
static const Char sgim_17[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N',
'o','d','e',';'};
static const Char nmim_18[] = {
's','e','t','N','e','x','t'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
'u','t','i','l','/','L','i','n','k','e','d','L','i','s','t','$','N','o',
'd','e',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_util_Link_cHLND, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,33,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_cHLND, previous), 0,(const Char *)&nmiv_1,8,(const Char *)&sgiv_1,38,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_cHLND, next), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,38,1,0x2,2}, 
    { offsetof(struct in_ca_mcgill_sable_util_Link_cHLND, element), 0,(const Char *)&nmiv_3,7,(const Char *)&sgiv_3,18,1,0x2,3}, 
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
} inr_ca_mcgill_sable_util_Link_cHLND = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_util_Link_cHLND.C.classclass, 0};

struct cl_ca_mcgill_sable_util_Link_cHLND cl_ca_mcgill_sable_util_Link_cHLND = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_util_Link_cHLND),
    19,
    0,
    4,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    2, others,
    0, 0,
    ch_ca_mcgill_sable_util_Link_cHLND,
    st_ca_mcgill_sable_util_Link_cHLND,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_util_Link_cHLND,
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
	{TMIT_native_code, init_LO_aAUSu,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,54,1,0x0,0,xt_init_LO_aAUSu},
	{TMIT_native_code, getElement__7hCh6,(const Char *)&nmim_13,10,
	(const Char *)&sgim_13,20,1,0x0,1,xt_getElement__7hCh6},
	{TMIT_native_code, setElement_O_pzg8R,(const Char *)&nmim_14,10,
	(const Char *)&sgim_14,21,1,0x0,2,xt_setElement_O_pzg8R},
	{TMIT_native_code, getPrevious__xcmt2,(const Char *)&nmim_15,11,
	(const Char *)&sgim_15,40,1,0x0,3,xt_getPrevious__xcmt2},
	{TMIT_native_code, setPrevious_L_hdLrK,(const Char *)&nmim_16,11,
	(const Char *)&sgim_16,41,1,0x0,4,xt_setPrevious_L_hdLrK},
	{TMIT_native_code, getNext__j2NKA,(const Char *)&nmim_17,7,
	(const Char *)&sgim_17,40,1,0x0,5,xt_getNext__j2NKA},
	{TMIT_native_code, setNext_L_vf7Yh,(const Char *)&nmim_18,7,
	(const Char *)&sgim_18,41,1,0x0,6,xt_setNext_L_vf7Yh},
    } /* end of methodsigs */
};


/*M init_LO_aAUSu: ca.mcgill.sable.util.LinkedList$Node.<init>(Lca/mcgill/sable/util/LinkedList;Ljava/lang/Object;)V */

Class xt_init_LO_aAUSu[] = { 0 };

Void init_LO_aAUSu(Object p0, Object p1, Object p2)
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
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->element = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getElement__7hCh6: ca.mcgill.sable.util.LinkedList$Node.getElement()Ljava/lang/Object; */

Class xt_getElement__7hCh6[] = { 0 };

Object getElement__7hCh6(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->element;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setElement_O_pzg8R: ca.mcgill.sable.util.LinkedList$Node.setElement(Ljava/lang/Object;)V */

Class xt_setElement_O_pzg8R[] = { 0 };

Void setElement_O_pzg8R(Object p0, Object p1)
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
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->element = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getPrevious__xcmt2: ca.mcgill.sable.util.LinkedList$Node.getPrevious()Lca/mcgill/sable/util/LinkedList$Node; */

Class xt_getPrevious__xcmt2[] = { 0 };

Object getPrevious__xcmt2(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setPrevious_L_hdLrK: ca.mcgill.sable.util.LinkedList$Node.setPrevious(Lca/mcgill/sable/util/LinkedList$Node;)V */

Class xt_setPrevious_L_hdLrK[] = { 0 };

Void setPrevious_L_hdLrK(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous;
	if (a1 == 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next = a2;
L1:	a1 = av1;
	if (a1 == 0)
		GOTO(16,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next;
	if (a1 == 0)
		GOTO(23,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous = a2;
L2:	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next = a2;
L3:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getNext__j2NKA: ca.mcgill.sable.util.LinkedList$Node.getNext()Lca/mcgill/sable/util/LinkedList$Node; */

Class xt_getNext__j2NKA[] = { 0 };

Object getNext__j2NKA(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setNext_L_vf7Yh: ca.mcgill.sable.util.LinkedList$Node.setNext(Lca/mcgill/sable/util/LinkedList$Node;)V */

Class xt_setNext_L_vf7Yh[] = { 0 };

Void setNext_L_vf7Yh(Object p0, Object p1)
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
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next;
	if (a1 == 0)
		GOTO(4,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous = a2;
L1:	a1 = av1;
	if (a1 == 0)
		GOTO(16,L3);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous;
	if (a1 == 0)
		GOTO(23,L2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next = a2;
L2:	a1 = av1;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->previous = a2;
L3:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_Link_cHLND*)a1)->next = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_util_Link_cHLND[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','u','t',
'i','l','.','L','i','n','k','e','d','L','i','s','t','$','N','o','d','e'};

const void *st_ca_mcgill_sable_util_Link_cHLND[] = {
    ch_ca_mcgill_sable_util_Link_cHLND+36,	/* 0. ca.mcgill.sable.util.LinkedList$Node */
    0};
