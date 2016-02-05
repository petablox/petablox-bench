/*  ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.c -- from Java class ca.mcgill.sable.soot.coffi.CONSTANT_InterfaceMethodref_info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.h"
#include "ca_mcgill_sable_soot_coffi_cp_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_cp_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info[];
extern const void *st_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info[];
extern Class xt_size__m4hmX[];
extern Class xt_toString_ac_aslrn[];
extern Class xt_typeName__hGjwt[];
extern Class xt_compareTo_accac_WjAK3[];
extern Class xt_init__wHZcZ[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(59) nmchars = {&acl_char, 0, 59, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','O','N','S','T','A','N','T','_',
'I','n','t','e','r','f','a','c','e','M','e','t','h','o','d','r','e','f',
'_','i','n','f','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 59 };
static const Char nmiv_0[] = {
't','a','g'};
static const Char sgiv_0[] = {
'B'};
static const Char nmiv_1[] = {
'c','l','a','s','s','_','i','n','d','e','x'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'n','a','m','e','_','a','n','d','_','t','y','p','e','_','i','n','d','e',
'x'};
static const Char sgiv_2[] = {
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
's','i','z','e'};
static const Char sgim_12[] = {
'(',')','I'};
static const Char nmim_13[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_13[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmim_14[] = {
't','y','p','e','N','a','m','e'};
static const Char sgim_14[] = {
'(',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n',
'g',';'};
static const Char nmim_15[] = {
'c','o','m','p','a','r','e','T','o'};
static const Char sgim_15[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n',
'f','o',';',')','I'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info, tag), 0,(const Char *)&nmiv_0,3,(const Char *)&sgiv_0,1,0,0x1,11}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info, class_index), 0,(const Char *)&nmiv_1,11,(const Char *)&sgiv_1,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info, name_and_type_index), 0,(const Char *)&nmiv_2,19,(const Char *)&sgiv_2,1,1,0x1,1}, 
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
} inr_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info),
    16,
    0,
    3,
    0,
    3, supers,
    0, 0, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info,
    st_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info,
    0,
    init__wHZcZ,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__wHZcZ,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,4,xt_init__wHZcZ},
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
	{TMIT_native_code, size__m4hmX,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x1,0,xt_size__m4hmX},
	{TMIT_native_code, toString_ac_aslrn,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,57,1,0x1,1,xt_toString_ac_aslrn},
	{TMIT_native_code, typeName__hGjwt,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,20,1,0x1,2,xt_typeName__hGjwt},
	{TMIT_native_code, compareTo_accac_WjAK3,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,113,1,0x1,3,xt_compareTo_accac_WjAK3},
    } /* end of methodsigs */
};


/*M size__m4hmX: ca.mcgill.sable.soot.coffi.CONSTANT_InterfaceMethodref_info.size()I */

Class xt_size__m4hmX[] = { 0 };

Int size__m4hmX(Object p0)
{
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 5;
	return i1;

	/*NOTREACHED*/
}

/*M toString_ac_aslrn: ca.mcgill.sable.soot.coffi.CONSTANT_InterfaceMethodref_info.toString([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toString_ac_aslrn[] = { 0 };

Object toString_ac_aslrn(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a4 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Class_info*)a3)->class->M.
		toString_ac_RCOT4.f(a3,a4);
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av3;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->class->M.
		toString_ac_TYQ5w.f(a2,a3);
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

/*M typeName__hGjwt: ca.mcgill.sable.soot.coffi.CONSTANT_InterfaceMethodref_info.typeName()Ljava/lang/String; */

Class xt_typeName__hGjwt[] = { 0 };

Object typeName__hGjwt(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info[2];
	return a1;

	/*NOTREACHED*/
}

/*M compareTo_accac_WjAK3: ca.mcgill.sable.soot.coffi.CONSTANT_InterfaceMethodref_info.compareTo([Lca/mcgill/sable/soot/coffi/cp_info;Lca/mcgill/sable/soot/coffi/cp_info;[Lca/mcgill/sable/soot/coffi/cp_info;)I */

Class xt_compareTo_accac_WjAK3[] = { 0 };

Int compareTo_accac_WjAK3(Object p0, Object p1, Object p2, Object p3)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av5;
Int i0, i1, i2, i3, i4;
Int iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;
	av3 = p3;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a2)->tag;
	if (i1 == i2)
		GOTO(8,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a2)->tag;
	i1 = i1 - i2;
	return i1;

L1:	a1 = av2;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->class_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	a3 = av3;
	a4 = av5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a4)->class_index;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	a4 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		compareTo_accac_zSCEu.f(a1,a2,a3,a4);
	iv4 = i1;
	i1 = iv4;
	if (i1 == 0)
		GOTO(49,L2);
	i1 = iv4;
	return i1;

L2:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av1;
	a3 = av3;
	a4 = av5;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	i4 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a4)->name_and_type_index;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	a4 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		compareTo_accac_zSCEu.f(a1,a2,a3,a4);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__wHZcZ: ca.mcgill.sable.soot.coffi.CONSTANT_InterfaceMethodref_info.<init>()V */

Class xt_init__wHZcZ[] = { 0 };

Void init__wHZcZ(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__9KHck(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','C','O','N','S','T','A','N','T','_',
'I','n','t','e','r','f','a','c','e','M','e','t','h','o','d','r','e','f',
'_','i','n','f','o','.','i','n','t','e','r','f','a','c','e','m','e','t',
'h','o','d','r','e','f'};

const void *st_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info[] = {
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info+59,	/* 0. ca.mcgill.sable.soot.coffi.CONSTANT_Inte */
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info+60,	/* 1. . */
    ch_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info+78,	/* 2. interfacemethodref */
    0};
