/*  ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.c -- from Java class ca.mcgill.sable.soot.coffi.LocalVariableTable_attribute  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.h"
#include "ca_mcgill_sable_soot_coffi_attribute_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_local_variable_table_entry.h"
#include "java_io_PrintStream.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_attribute_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_local_variable_table_entry.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute[];
extern const void *st_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute[];
extern Class xt_getLocalVariableName_aci_Ifqmv[];
extern Class xt_getLocalVariableName_acii_LKd7T[];
extern Class xt_init__vnAaj[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(55) nmchars = {&acl_char, 0, 55, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','L','o','c','a','l','V','a','r','i',
'a','b','l','e','T','a','b','l','e','_','a','t','t','r','i','b','u','t',
'e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 55 };
static const Char nmiv_0[] = {
'a','t','t','r','i','b','u','t','e','_','n','a','m','e'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'a','t','t','r','i','b','u','t','e','_','l','e','n','g','t','h'};
static const Char sgiv_1[] = {
'J'};
static const Char nmiv_2[] = {
'l','o','c','a','l','_','v','a','r','i','a','b','l','e','_','t','a','b',
'l','e','_','l','e','n','g','t','h'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'l','o','c','a','l','_','v','a','r','i','a','b','l','e','_','t','a','b',
'l','e'};
static const Char sgiv_3[] = {
'[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','l','o','c','a','l','_','v',
'a','r','i','a','b','l','e','_','t','a','b','l','e','_','e','n','t','r',
'y',';'};
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
'g','e','t','L','o','c','a','l','V','a','r','i','a','b','l','e','N','a',
'm','e'};
static const Char sgim_12[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';'};
static const Char nmim_13[] = {
'g','e','t','L','o','c','a','l','V','a','r','i','a','b','l','e','N','a',
'm','e'};
static const Char sgim_13[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t',
'r','i','n','g',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute, attribute_name), 0,(const Char *)&nmiv_0,14,(const Char *)&sgiv_0,1,0,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute, attribute_length), 0,(const Char *)&nmiv_1,16,(const Char *)&sgiv_1,1,0,0x1,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute, local_variable_table_length), 0,(const Char *)&nmiv_2,27,(const Char *)&sgiv_2,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute, local_variable_table), 0,(const Char *)&nmiv_3,20,(const Char *)&sgiv_3,56,1,0x1,1}, 
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
} inr_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute cl_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute),
    14,
    0,
    4,
    0,
    3, supers,
    0, 0, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute,
    st_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute,
    0,
    init__vnAaj,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__vnAaj,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,2,xt_init__vnAaj},
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
	{TMIT_native_code, getLocalVariableName_aci_Ifqmv,(const Char *)&nmim_12,20,
	(const Char *)&sgim_12,58,1,0x1,0,xt_getLocalVariableName_aci_Ifqmv},
	{TMIT_native_code, getLocalVariableName_acii_LKd7T,(const Char *)&nmim_13,20,
	(const Char *)&sgim_13,59,1,0x1,1,xt_getLocalVariableName_acii_LKd7T},
    } /* end of methodsigs */
};


/*M getLocalVariableName_aci_Ifqmv: ca.mcgill.sable.soot.coffi.LocalVariableTable_attribute.getLocalVariableName([Lca/mcgill/sable/soot/coffi/cp_info;I)Ljava/lang/String; */

Class xt_getLocalVariableName_aci_Ifqmv[] = { 0 };

Object getLocalVariableName_aci_Ifqmv(Object p0, Object p1, Int p2)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;

L0:	a1 = av0;
	a2 = av1;
	i3 = iv2;
	i4 = -1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->class->M.
		getLocalVariableName_acii_LKd7T.f(a1,a2,i3,i4);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getLocalVariableName_acii_LKd7T: ca.mcgill.sable.soot.coffi.LocalVariableTable_attribute.getLocalVariableName([Lca/mcgill/sable/soot/coffi/cp_info;II)Ljava/lang/String; */

Class xt_getLocalVariableName_acii_LKd7T[] = { 0 };

Object getLocalVariableName_acii_LKd7T(Object p0, Object p1, Int p2, Int p3)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av4;
Int i0, i1, i2, i3;
Int iv2, iv3, iv5;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	iv2 = p2;
	iv3 = p3;

L0:	i1 = 0;
	iv5 = i1;
	GOTO(3,L5);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a1)->local_variable_table;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a1)->index;
	i2 = iv2;
	if (i1 != i2)
		GOTO(21,L4);
	i1 = iv3;
	i2 = -1;
	if (i1 == i2)
		GOTO(26,L2);
	i1 = iv3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->start_pc;
	if (i1 < i2)
		GOTO(35,L4);
	i1 = iv3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->start_pc;
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a3)->length;
	i2 = i2 + i3;
	if (i1 >= i2)
		GOTO(50,L4);
L2:	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(63,L3);
	a1 = av1;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_local_variable_table_entry*)a2)->name_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	return a1;

L3:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	i1 = 1;
	exit_i_d4JE9(i1);
L4:	iv5 += 1;
L5:	i1 = iv5;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute*)a2)->local_variable_table_length;
	if (i1 < i2)
		GOBACK(101,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__vnAaj: ca.mcgill.sable.soot.coffi.LocalVariableTable_attribute.<init>()V */

Class xt_init__vnAaj[] = { 0 };

Void init__vnAaj(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','L','o','c','a','l','V','a','r','i',
'a','b','l','e','T','a','b','l','e','_','a','t','t','r','i','b','u','t',
'e','W','h','a','t','?',' ','A',' ','l','o','c','a','l',' ','v','a','r',
'i','a','b','l','e',' ','t','a','b','l','e',' ','n','a','m','e','_','i',
'n','d','e','x',' ','i','s','n',39,'t',' ','a',' ','U','T','F','8',' ',
'e','n','t','r','y','?'};

const void *st_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute[] = {
    ch_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute+55,	/* 0. ca.mcgill.sable.soot.coffi.LocalVariable */
    ch_ca_mcgill_sable_soot_coffi_LocalVariableTable_attribute+114,	/* 1. What% A local variable table name_index  */
    0};
