/*  ca_mcgill_sable_soot_coffi_Code_attribute.c -- from Java class ca.mcgill.sable.soot.coffi.Code_attribute  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Code_attribute.h"
#include "ca_mcgill_sable_soot_coffi_attribute_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_attribute_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Code_attribute[];
extern const void *st_ca_mcgill_sable_soot_coffi_Code_attribute[];
extern Class xt_findLocalVariableTable__CQucG[];
extern Class xt_init__rw5Dx[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_Code_attribute.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_Code_attribute.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Code_attribute.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_Code_attribute.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(41) nmchars = {&acl_char, 0, 41, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','o','d','e','_','a','t','t','r',
'i','b','u','t','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 41 };
static const Char nmiv_0[] = {
'a','t','t','r','i','b','u','t','e','_','n','a','m','e'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'a','t','t','r','i','b','u','t','e','_','l','e','n','g','t','h'};
static const Char sgiv_1[] = {
'J'};
static const Char nmiv_2[] = {
'm','a','x','_','s','t','a','c','k'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'm','a','x','_','l','o','c','a','l','s'};
static const Char sgiv_3[] = {
'I'};
static const Char nmiv_4[] = {
'c','o','d','e','_','l','e','n','g','t','h'};
static const Char sgiv_4[] = {
'J'};
static const Char nmiv_5[] = {
'c','o','d','e'};
static const Char sgiv_5[] = {
'[','B'};
static const Char nmiv_6[] = {
'e','x','c','e','p','t','i','o','n','_','t','a','b','l','e','_','l','e',
'n','g','t','h'};
static const Char sgiv_6[] = {
'I'};
static const Char nmiv_7[] = {
'e','x','c','e','p','t','i','o','n','_','t','a','b','l','e'};
static const Char sgiv_7[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','e','x','c','e','p','t','i',
'o','n','_','t','a','b','l','e','_','e','n','t','r','y',';'};
static const Char nmiv_8[] = {
'a','t','t','r','i','b','u','t','e','s','_','c','o','u','n','t'};
static const Char sgiv_8[] = {
'I'};
static const Char nmiv_9[] = {
'a','t','t','r','i','b','u','t','e','s'};
static const Char sgiv_9[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','a','t','t','r','i','b','u',
't','e','_','i','n','f','o',';'};
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
'f','i','n','d','L','o','c','a','l','V','a','r','i','a','b','l','e','T',
'a','b','l','e'};
static const Char sgim_12[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','L','o','c','a','l','V',
'a','r','i','a','b','l','e','T','a','b','l','e','_','a','t','t','r','i',
'b','u','t','e',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, attribute_name), 0,(const Char *)&nmiv_0,14,(const Char *)&sgiv_0,1,0,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, attribute_length), 0,(const Char *)&nmiv_1,16,(const Char *)&sgiv_1,1,0,0x1,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, max_stack), 0,(const Char *)&nmiv_2,9,(const Char *)&sgiv_2,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, max_locals), 0,(const Char *)&nmiv_3,10,(const Char *)&sgiv_3,1,1,0x1,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, code_length), 0,(const Char *)&nmiv_4,11,(const Char *)&sgiv_4,1,1,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, code), 0,(const Char *)&nmiv_5,4,(const Char *)&sgiv_5,2,1,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, exception_table_length), 0,(const Char *)&nmiv_6,22,(const Char *)&sgiv_6,1,1,0x1,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, exception_table), 0,(const Char *)&nmiv_7,15,(const Char *)&sgiv_7,51,1,0x1,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, attributes_count), 0,(const Char *)&nmiv_8,16,(const Char *)&sgiv_8,1,1,0x0,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute, attributes), 0,(const Char *)&nmiv_9,10,(const Char *)&sgiv_9,44,1,0x0,7}, 
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
} inr_ca_mcgill_sable_soot_coffi_Code_attribute = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Code_attribute cl_ca_mcgill_sable_soot_coffi_Code_attribute = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Code_attribute),
    13,
    0,
    10,
    0,
    3, supers,
    0, 0, inters, HASHMASK, htable,
    1, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Code_attribute,
    st_ca_mcgill_sable_soot_coffi_Code_attribute,
    0,
    init__rw5Dx,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Code_attribute,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__rw5Dx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,1,xt_init__rw5Dx},
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
	{TMIT_native_code, findLocalVariableTable__CQucG,(const Char *)&nmim_12,22,
	(const Char *)&sgim_12,59,1,0x1,0,xt_findLocalVariableTable__CQucG},
    } /* end of methodsigs */
};


/*M findLocalVariableTable__CQucG: ca.mcgill.sable.soot.coffi.Code_attribute.findLocalVariableTable()Lca/mcgill/sable/soot/coffi/LocalVariableTable_attribute; */

Class xt_findLocalVariableTable__CQucG[] = { 0 };

Object findLocalVariableTable__CQucG(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->attributes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(14,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a1)->attributes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

L2:	iv1 += 1;
L3:	i1 = iv1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Code_attribute*)a2)->attributes_count;
	if (i1 < i2)
		GOBACK(35,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__rw5Dx: ca.mcgill.sable.soot.coffi.Code_attribute.<init>()V */

Class xt_init__rw5Dx[] = { 0 };

Void init__rw5Dx(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__ua7Tq(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_Code_attribute[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','o','d','e','_','a','t','t','r',
'i','b','u','t','e'};

const void *st_ca_mcgill_sable_soot_coffi_Code_attribute[] = {
    ch_ca_mcgill_sable_soot_coffi_Code_attribute+41,	/* 0. ca.mcgill.sable.soot.coffi.Code_attribut */
    0};
