/*  ca_mcgill_sable_soot_coffi_method_info.c -- from Java class ca.mcgill.sable.soot.coffi.method_info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_method_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_ByteCode.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "ca_mcgill_sable_soot_coffi_Code_attribute.h"
#include "ca_mcgill_sable_soot_coffi_cp_info.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_method_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_ByteCode.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
    &cl_ca_mcgill_sable_soot_coffi_cp_info.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_method_info[];
extern const void *st_ca_mcgill_sable_soot_coffi_method_info[];
extern Class xt_toName_ac_jIKKE[];
extern Class xt_locate_code_attribute__LvMHE[];
extern Class xt_prototype_ac_HpBd8[];
extern Class xt_print_ac_qY09D[];
extern Class xt_init__RUPx0[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_method_info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_method_info.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_method_info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_method_info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','m','e','t','h','o','d','_','i','n',
'f','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
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
static const Char nmiv_5[] = {
'i','n','s','t','r','u','c','t','i','o','n','s'};
static const Char sgiv_5[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_6[] = {
'c','f','g'};
static const Char sgiv_6[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','C','F','G',';'};
static const Char nmiv_7[] = {
'j','m','e','t','h','o','d'};
static const Char sgiv_7[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_8[] = {
'i','n','s','t','r','u','c','t','i','o','n','L','i','s','t'};
static const Char sgiv_8[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','L','i','s','t',';'};
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
'l','o','c','a','t','e','_','c','o','d','e','_','a','t','t','r','i','b',
'u','t','e'};
static const Char sgim_13[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','C','o','d','e','_','a',
't','t','r','i','b','u','t','e',';'};
static const Char nmim_14[] = {
'p','r','o','t','o','t','y','p','e'};
static const Char sgim_14[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmim_15[] = {
'p','r','i','n','t'};
static const Char sgim_15[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, access_flags), 0,(const Char *)&nmiv_0,12,(const Char *)&sgiv_0,1,1,0x0,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, name_index), 0,(const Char *)&nmiv_1,10,(const Char *)&sgiv_1,1,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, descriptor_index), 0,(const Char *)&nmiv_2,16,(const Char *)&sgiv_2,1,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, attributes_count), 0,(const Char *)&nmiv_3,16,(const Char *)&sgiv_3,1,1,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, attributes), 0,(const Char *)&nmiv_4,10,(const Char *)&sgiv_4,44,1,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, instructions), 0,(const Char *)&nmiv_5,12,(const Char *)&sgiv_5,40,1,0x0,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, cfg), 0,(const Char *)&nmiv_6,3,(const Char *)&sgiv_6,32,1,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, jmethod), 0,(const Char *)&nmiv_7,7,(const Char *)&sgiv_7,33,1,0x0,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_method_info, instructionList), 0,(const Char *)&nmiv_8,15,(const Char *)&sgiv_8,27,1,0x0,8}, 
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
} inr_ca_mcgill_sable_soot_coffi_method_info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_method_info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_method_info cl_ca_mcgill_sable_soot_coffi_method_info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_method_info),
    16,
    0,
    9,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    9, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_method_info,
    st_ca_mcgill_sable_soot_coffi_method_info,
    0,
    init__RUPx0,
    finalize__UKxhs,
    0,
    0,
    43,
    0x21,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_method_info,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__RUPx0,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x1,4,xt_init__RUPx0},
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
	{TMIT_native_code, toName_ac_jIKKE,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,57,1,0x0,0,xt_toName_ac_jIKKE},
	{TMIT_native_code, locate_code_attribute__LvMHE,(const Char *)&nmim_13,21,
	(const Char *)&sgim_13,45,1,0x0,1,xt_locate_code_attribute__LvMHE},
	{TMIT_native_code, prototype_ac_HpBd8,(const Char *)&nmim_14,9,
	(const Char *)&sgim_14,57,1,0x0,2,xt_prototype_ac_HpBd8},
	{TMIT_native_code, print_ac_qY09D,(const Char *)&nmim_15,5,
	(const Char *)&sgim_15,40,1,0x0,3,xt_print_ac_qY09D},
    } /* end of methodsigs */
};


/*M toName_ac_jIKKE: ca.mcgill.sable.soot.coffi.method_info.toName([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toName_ac_jIKKE[] = { 0 };

Object toName_ac_jIKKE(Object p0, Object p1)
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
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->name_index;
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

/*M locate_code_attribute__LvMHE: ca.mcgill.sable.soot.coffi.method_info.locate_code_attribute()Lca/mcgill/sable/soot/coffi/Code_attribute; */

Class xt_locate_code_attribute__LvMHE[] = { 0 };

Object locate_code_attribute__LvMHE(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1;
Int i0, i1, i2;
Int iv2;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv2 = i1;
	GOTO(2,L3);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->attributes;
	i2 = iv2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av1 = a1;
	a1 = av1;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(16,L2);
	a1 = av1;
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_Code_attribute.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

L2:	iv2 += 1;
L3:	i1 = iv2;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->attributes_count;
	if (i1 < i2)
		GOBACK(32,L1);
	a1 = 0;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M prototype_ac_HpBd8: ca.mcgill.sable.soot.coffi.method_info.prototype([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_prototype_ac_HpBd8[] = { 0 };

Object prototype_ac_HpBd8(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av5;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		locate_code_attribute__LvMHE.f(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->access_flags;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[1];
	a1 = access_string_iS_ghPag(i1,a2);
	av2 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->descriptor_index;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	a1 = parseMethodDesc_return_S_LCBlG(a1);
	av3 = a1;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->class->M.
		toName_ac_jIKKE.f(a1,a2);
	av4 = a1;
	a1 = av1;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->descriptor_index;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	a1 = parseMethodDesc_params_S_htzZ7(a1);
	av5 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		length__rpuzQ.f(a1);
	if (i1 <= 0)
		GOTO(51,L1);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av2;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[3];
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

L1:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av3;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_method_info[3];
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

/*M print_ac_qY09D: ca.mcgill.sable.soot.coffi.method_info.print([Lca/mcgill/sable/soot/coffi/cp_info;)V */

Class xt_print_ac_qY09D[] = { 0 };

Void print_ac_qY09D(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = av0;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a2)->class->M.
		prototype_ac_HpBd8.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_method_info*)a1)->instructions;
	a2 = av1;
	showCode_Iac_5QnNU(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init__RUPx0: ca.mcgill.sable.soot.coffi.method_info.<init>()V */

Class xt_init__RUPx0[] = { 0 };

Void init__RUPx0(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_method_info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','m','e','t','h','o','d','_','i','n',
'f','o',' ','(',')'};

const void *st_ca_mcgill_sable_soot_coffi_method_info[] = {
    ch_ca_mcgill_sable_soot_coffi_method_info+38,	/* 0. ca.mcgill.sable.soot.coffi.method_info */
    ch_ca_mcgill_sable_soot_coffi_method_info+39,	/* 1.   */
    ch_ca_mcgill_sable_soot_coffi_method_info+40,	/* 2. ( */
    ch_ca_mcgill_sable_soot_coffi_method_info+41,	/* 3. ) */
    0};
