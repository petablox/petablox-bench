/*  ca_mcgill_sable_soot_coffi_field_info.c -- from Java class ca.mcgill.sable.soot.coffi.field_info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_field_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "ca_mcgill_sable_soot_coffi_ConstantValue_attribute.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_field_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_field_info[];
extern const void *st_ca_mcgill_sable_soot_coffi_field_info[];
extern Class xt_toName_ac_OGsWB[];
extern Class xt_prototype_ac_OB6r3[];
extern Class xt_findConstantValue_attrib__Y9C7h[];
extern Class xt_init__mfdof[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_field_info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_field_info.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_field_info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_field_info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(37) nmchars = {&acl_char, 0, 37, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','f','i','e','l','d','_','i','n','f',
'o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 37 };
static const Char nmiv_0[] = {
'a','c','c','e','s','s','_','f','l','a','g','s'};
static const Char sgiv_0[] = {
'I'};
static const Char nmiv_1[] = {
'n','a','m','e','_','i','n','d','e','x'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'd','e','s','c','r','i','p','t','o','r','_','i','n','d','e','x'};
static const Char sgiv_2[] = {
'I'};
static const Char nmiv_3[] = {
'a','t','t','r','i','b','u','t','e','s','_','c','o','u','n','t'};
static const Char sgiv_3[] = {
'I'};
static const Char nmiv_4[] = {
'a','t','t','r','i','b','u','t','e','s'};
static const Char sgiv_4[] = {
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
't','o','N','a','m','e'};
static const Char sgim_12[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmim_13[] = {
'p','r','o','t','o','t','y','p','e'};
static const Char sgim_13[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmim_14[] = {
'f','i','n','d','C','o','n','s','t','a','n','t','V','a','l','u','e','_',
'a','t','t','r','i','b','u','t','e'};
static const Char sgim_14[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','C','o','n','s','t','a',
'n','t','V','a','l','u','e','_','a','t','t','r','i','b','u','t','e',';'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_field_info, access_flags), 0,(const Char *)&nmiv_0,12,(const Char *)&sgiv_0,1,1,0x1,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_field_info, name_index), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,1,1,0x1,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_field_info, descriptor_index), 0,(const Char *)&nmiv_2,16,(const Char *)&sgiv_2,1,1,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_field_info, attributes_count), 0,(const Char *)&nmiv_3,16,(const Char *)&sgiv_3,1,1,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_field_info, attributes), 0,(const Char *)&nmiv_4,10,(const Char *)&sgiv_4,44,1,0x1,4}, 
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
} inr_ca_mcgill_sable_soot_coffi_field_info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_field_info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_field_info cl_ca_mcgill_sable_soot_coffi_field_info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_field_info),
    15,
    0,
    5,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    5, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_field_info,
    st_ca_mcgill_sable_soot_coffi_field_info,
    0,
    init__mfdof,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_field_info,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__mfdof,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,3,xt_init__mfdof},
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
	{TMIT_native_code, toName_ac_OGsWB,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,57,1,0x1,0,xt_toName_ac_OGsWB},
	{TMIT_native_code, prototype_ac_OB6r3,(const Char *)&nmim_13,9,
	(const Char *)&sgim_13,57,1,0x1,1,xt_prototype_ac_OB6r3},
	{TMIT_native_code, findConstantValue_attrib__Y9C7h,(const Char *)&nmim_14,27,
	(const Char *)&sgim_14,54,1,0x1,2,xt_findConstantValue_attrib__Y9C7h},
    } /* end of methodsigs */
};


/*M toName_ac_OGsWB: ca.mcgill.sable.soot.coffi.field_info.toName([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toName_ac_OGsWB[] = { 0 };

Object toName_ac_OGsWB(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2;
Int i0, i1, i2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->name_index;
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
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a1)->class->M.
		convert__7aF4O.f(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M prototype_ac_OB6r3: ca.mcgill.sable.soot.coffi.field_info.prototype([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_prototype_ac_OB6r3[] = { 0 };

Object prototype_ac_OB6r3(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->name_index;
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
	av2 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->descriptor_index;
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
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->access_flags;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_field_info[1];
	a1 = access_string_iS_ghPag(i1,a2);
	av4 = a1;
	a1 = av4;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_field_info[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		compareTo_S_zLu8m.f(a1,a2);
	if (i1 == 0)
		GOTO(38,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av4;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_field_info[1];
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
	av4 = a1;
L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av4;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->class->M.
		convert__7aF4O.f(a2);
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_field_info[2];
	a2 = parseDesc_SS_ra14s(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_field_info[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info*)a2)->class->M.
		convert__7aF4O.f(a2);
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

/*M findConstantValue_attrib__Y9C7h: ca.mcgill.sable.soot.coffi.field_info.findConstantValue_attribute()Lca/mcgill/sable/soot/coffi/ConstantValue_attribute; */

Class xt_findConstantValue_attrib__Y9C7h[] = { 0 };

Object findConstantValue_attrib__Y9C7h(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(14,L2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a1)->attributes;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_ConstantValue_attribute.C,
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
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_field_info*)a2)->attributes_count;
	if (i1 < i2)
		GOBACK(35,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__mfdof: ca.mcgill.sable.soot.coffi.field_info.<init>()V */

Class xt_init__mfdof[] = { 0 };

Void init__mfdof(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_field_info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','f','i','e','l','d','_','i','n','f',
'o',' '};

const void *st_ca_mcgill_sable_soot_coffi_field_info[] = {
    ch_ca_mcgill_sable_soot_coffi_field_info+37,	/* 0. ca.mcgill.sable.soot.coffi.field_info */
    ch_ca_mcgill_sable_soot_coffi_field_info+38,	/* 1.   */
    ch_ca_mcgill_sable_soot_coffi_field_info+38,	/* 2.  */
    0};
