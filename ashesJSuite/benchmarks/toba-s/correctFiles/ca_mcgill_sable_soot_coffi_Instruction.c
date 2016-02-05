/*  ca_mcgill_sable_soot_coffi_Instruction.c -- from Java class ca.mcgill.sable.soot.coffi.Instruction  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_Instruction.h"
#include "java_lang_Cloneable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "java_lang_CloneNotSupportedException.h"
#include "java_lang_Integer.h"
#include "java_lang_StringBuffer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_Instruction.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    &cl_java_lang_Cloneable.C,
};

static const Class others[] = {
    &cl_java_lang_CloneNotSupportedException.C,
    &cl_java_lang_Integer.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_Instruction[];
extern const void *st_ca_mcgill_sable_soot_coffi_Instruction[];
extern Class xt_init_b_xOkBJ[];
extern Class xt_clone__C5Kdq[];
extern Class xt_toString__dkN89[];
extern Class xt_parse_abi_5QrDe[];
extern Class xt_compile_abi_zqEDQ[];
extern Class xt_offsetToPointer_B_Myq1j[];
extern Class xt_nextOffset_i_BhJRD[];
extern Class xt_branchpoints_I_dvskP[];
extern Class xt_markCPRefs_az_4cO9Q[];
extern Class xt_redirectCPRefs_as_4OU8w[];
extern Class xt_hashCode__P84mQ[];
extern Class xt_equals_I_LuRCj[];
extern Class xt_getShort_abi_Q4Xxk[];
extern Class xt_getInt_abi_HPXjS[];
extern Class xt_shortToBytes_sabi_JlXoz[];
extern Class xt_intToBytes_iabi_GBHJj[];
extern Class xt_toString_ac_9JP2g[];

#define HASHMASK 0x0
/*  0.  c2aafd4e  (0)  equals  */
static const struct ihash htable[2] = {
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_Instruction.M.equals_O_Ba6e0,
    0, 0,
};

static const CARRAY(38) nmchars = {&acl_char, 0, 38, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','I','n','s','t','r','u','c','t','i',
'o','n'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 38 };
static const Char nmcv_0[] = {
'a','r','g','s','e','p'};
static const Char sgcv_0[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmcv_1[] = {
'L','O','C','A','L','P','R','E','F','I','X'};
static const Char sgcv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_0[] = {
'c','o','d','e'};
static const Char sgiv_0[] = {
'B'};
static const Char nmiv_1[] = {
'l','a','b','e','l'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'n','a','m','e'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_3[] = {
'n','e','x','t'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c','t',
'i','o','n',';'};
static const Char nmiv_4[] = {
'l','a','b','e','l','l','e','d'};
static const Char sgiv_4[] = {
'Z'};
static const Char nmiv_5[] = {
'b','r','a','n','c','h','e','s'};
static const Char sgiv_5[] = {
'Z'};
static const Char nmiv_6[] = {
'c','a','l','l','s'};
static const Char sgiv_6[] = {
'Z'};
static const Char nmiv_7[] = {
'r','e','t','u','r','n','s'};
static const Char sgiv_7[] = {
'Z'};
static const Char nmiv_8[] = {
'o','r','i','g','i','n','a','l','I','n','d','e','x'};
static const Char sgiv_8[] = {
'I'};
static const Char nmsm_0[] = {
'g','e','t','S','h','o','r','t'};
static const Char sgsm_0[] = {
'(','[','B','I',')','S'};
static const Char nmsm_1[] = {
'g','e','t','I','n','t'};
static const Char sgsm_1[] = {
'(','[','B','I',')','I'};
static const Char nmsm_2[] = {
's','h','o','r','t','T','o','B','y','t','e','s'};
static const Char sgsm_2[] = {
'(','S','[','B','I',')','I'};
static const Char nmsm_3[] = {
'i','n','t','T','o','B','y','t','e','s'};
static const Char sgsm_3[] = {
'(','I','[','B','I',')','I'};
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
'(','B',')','V'};
static const Char nmim_13[] = {
'p','a','r','s','e'};
static const Char sgim_13[] = {
'(','[','B','I',')','I'};
static const Char nmim_14[] = {
'c','o','m','p','i','l','e'};
static const Char sgim_14[] = {
'(','[','B','I',')','I'};
static const Char nmim_15[] = {
'o','f','f','s','e','t','T','o','P','o','i','n','t','e','r'};
static const Char sgim_15[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','B','y','t','e','C','o','d',
'e',';',')','V'};
static const Char nmim_16[] = {
'n','e','x','t','O','f','f','s','e','t'};
static const Char sgim_16[] = {
'(','I',')','I'};
static const Char nmim_17[] = {
'b','r','a','n','c','h','p','o','i','n','t','s'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','[','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','c','o','f','f','i','/','I',
'n','s','t','r','u','c','t','i','o','n',';'};
static const Char nmim_18[] = {
'm','a','r','k','C','P','R','e','f','s'};
static const Char sgim_18[] = {
'(','[','Z',')','V'};
static const Char nmim_19[] = {
'r','e','d','i','r','e','c','t','C','P','R','e','f','s'};
static const Char sgim_19[] = {
'(','[','S',')','V'};
static const Char nmim_20[] = {
'e','q','u','a','l','s'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','c','o','f','f','i','/','I','n','s','t','r','u','c',
't','i','o','n',';',')','Z'};
static const Char nmim_21[] = {
't','o','S','t','r','i','n','g'};
static const Char sgim_21[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_coffi_Instruction.V.argsep,(const Char *)&nmcv_0,6,(const Char *)&sgcv_0,18,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_Instruction.V.LOCALPREFIX,(const Char *)&nmcv_1,11,(const Char *)&sgcv_1,18,1,0x19,1}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, code), 0,(const Char *)&nmiv_0,4,(const Char *)&sgiv_0,1,1,0x1,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, label), 0,(const Char *)&nmiv_1,5,(const Char *)&sgiv_1,1,1,0x1,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, name), 0,(const Char *)&nmiv_2,4,(const Char *)&sgiv_2,18,1,0x1,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, next), 0,(const Char *)&nmiv_3,4,(const Char *)&sgiv_3,40,1,0x1,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, labelled), 0,(const Char *)&nmiv_4,8,(const Char *)&sgiv_4,1,1,0x1,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, branches), 0,(const Char *)&nmiv_5,8,(const Char *)&sgiv_5,1,1,0x1,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, calls), 0,(const Char *)&nmiv_6,5,(const Char *)&sgiv_6,1,1,0x1,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, returns), 0,(const Char *)&nmiv_7,7,(const Char *)&sgiv_7,1,1,0x1,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_Instruction, originalIndex), 0,(const Char *)&nmiv_8,13,(const Char *)&sgiv_8,1,1,0x0,10}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())getShort_abi_Q4Xxk,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,6,
	1,0x9,12,xt_getShort_abi_Q4Xxk},
    {TMIT_native_code, (Void(*)())getInt_abi_HPXjS,
	(const Char *)&nmsm_1,6,(const Char *)&sgsm_1,6,
	1,0x9,13,xt_getInt_abi_HPXjS},
    {TMIT_native_code, (Void(*)())shortToBytes_sabi_JlXoz,
	(const Char *)&nmsm_2,12,(const Char *)&sgsm_2,7,
	1,0x9,14,xt_shortToBytes_sabi_JlXoz},
    {TMIT_native_code, (Void(*)())intToBytes_iabi_GBHJj,
	(const Char *)&nmsm_3,10,(const Char *)&sgsm_3,7,
	1,0x9,15,xt_intToBytes_iabi_GBHJj},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
    static const CARRAY(1) _svchars = {&acl_char, 0, 1, 0,
' '    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 1};
   cl_ca_mcgill_sable_soot_coffi_Instruction.V.argsep = intern_string (&_svjls);
   }
   {
    static const CARRAY(6) _svchars = {&acl_char, 0, 6, 0,
'l','o','c','a','l','_'    };
    static struct in_java_lang_String _svjls =
    { &cl_java_lang_String, 0, (Object) &_svchars, 0, 6};
   cl_ca_mcgill_sable_soot_coffi_Instruction.V.LOCALPREFIX = intern_string (&_svjls);
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
} inr_ca_mcgill_sable_soot_coffi_Instruction = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_Instruction.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_Instruction cl_ca_mcgill_sable_soot_coffi_Instruction = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_Instruction),
    22,
    4,
    9,
    2,
    2, supers,
    1, 1, inters, HASHMASK, htable,
    4, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_Instruction,
    st_ca_mcgill_sable_soot_coffi_Instruction,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x420,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_Instruction,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__AAyKx,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,0,0x1,1,0},
	{TMIT_native_code, clone__C5Kdq,(const Char *)&nmim_1,5,
	(const Char *)&sgim_1,20,1,0x4,1,xt_clone__C5Kdq},
	{TMIT_native_code, equals_O_Ba6e0,(const Char *)&nmim_2,6,
	(const Char *)&sgim_2,21,0,0x8001,3,0},
	{TMIT_native_code, finalize__UKxhs,(const Char *)&nmim_3,8,
	(const Char *)&sgim_3,3,0,0x4,4,0},
	{TMIT_native_code, getClass__zh19H,(const Char *)&nmim_4,8,
	(const Char *)&sgim_4,19,0,0x111,5,0},
	{TMIT_native_code, hashCode__P84mQ,(const Char *)&nmim_5,8,
	(const Char *)&sgim_5,3,1,0x1,10,xt_hashCode__P84mQ},
	{TMIT_native_code, notify__ne4bk,(const Char *)&nmim_6,6,
	(const Char *)&sgim_6,3,0,0x111,7,0},
	{TMIT_native_code, notifyAll__iTnlk,(const Char *)&nmim_7,9,
	(const Char *)&sgim_7,3,0,0x111,8,0},
	{TMIT_native_code, toString__dkN89,(const Char *)&nmim_8,8,
	(const Char *)&sgim_8,20,1,0x1,2,xt_toString__dkN89},
	{TMIT_native_code, wait__Zlr2b,(const Char *)&nmim_9,4,
	(const Char *)&sgim_9,3,0,0x11,11,0},
	{TMIT_native_code, wait_l_1Iito,(const Char *)&nmim_10,4,
	(const Char *)&sgim_10,4,0,0x111,12,0},
	{TMIT_native_code, wait_li_07Ea2,(const Char *)&nmim_11,4,
	(const Char *)&sgim_11,5,0,0x11,13,0},
	{TMIT_native_code, init_b_xOkBJ,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,4,1,0x1,0,xt_init_b_xOkBJ},
	{TMIT_abstract, 0,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,6,1,0x401,3,xt_parse_abi_5QrDe},
	{TMIT_abstract, 0,(const Char *)&nmim_14,7,
	(const Char *)&sgim_14,6,1,0x401,4,xt_compile_abi_zqEDQ},
	{TMIT_native_code, offsetToPointer_B_Myq1j,(const Char *)&nmim_15,15,
	(const Char *)&sgim_15,40,1,0x1,5,xt_offsetToPointer_B_Myq1j},
	{TMIT_native_code, nextOffset_i_BhJRD,(const Char *)&nmim_16,10,
	(const Char *)&sgim_16,4,1,0x1,6,xt_nextOffset_i_BhJRD},
	{TMIT_native_code, branchpoints_I_dvskP,(const Char *)&nmim_17,12,
	(const Char *)&sgim_17,83,1,0x1,7,xt_branchpoints_I_dvskP},
	{TMIT_native_code, markCPRefs_az_4cO9Q,(const Char *)&nmim_18,10,
	(const Char *)&sgim_18,5,1,0x1,8,xt_markCPRefs_az_4cO9Q},
	{TMIT_native_code, redirectCPRefs_as_4OU8w,(const Char *)&nmim_19,14,
	(const Char *)&sgim_19,5,1,0x1,9,xt_redirectCPRefs_as_4OU8w},
	{TMIT_native_code, equals_I_LuRCj,(const Char *)&nmim_20,6,
	(const Char *)&sgim_20,43,1,0x1,11,xt_equals_I_LuRCj},
	{TMIT_native_code, toString_ac_9JP2g,(const Char *)&nmim_21,8,
	(const Char *)&sgim_21,57,1,0x1,16,xt_toString_ac_9JP2g},
    } /* end of methodsigs */
};


/*M init_b_xOkBJ: ca.mcgill.sable.soot.coffi.Instruction.<init>(B)V */

Class xt_init_b_xOkBJ[] = { 0 };

Void init_b_xOkBJ(Object p0, Byte p1)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->code = i2;
	a1 = av0;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->next = a2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->branches = i2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->calls = i2;
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->returns = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M clone__C5Kdq: ca.mcgill.sable.soot.coffi.Instruction.clone()Ljava/lang/Object; */

Class xt_clone__C5Kdq[] = { &cl_java_lang_CloneNotSupportedException.C, 0 };

Object clone__C5Kdq(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = clone__dslwm(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString__dkN89: ca.mcgill.sable.soot.coffi.Instruction.toString()Ljava/lang/String; */

Class xt_toString__dkN89[] = { 0 };

Object toString__dkN89(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->name;
	a3 = valueOf_O_6F80r(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction[1];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_S_6tRW4.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->originalIndex;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_lang_StringBuffer*)a1)->class->M.
		append_i_ZQIqx.f(a1,i2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction[2];
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

/*M parse_abi_5QrDe: ca.mcgill.sable.soot.coffi.Instruction.parse([BI)I */

Class xt_parse_abi_5QrDe[] = { 0 };

/*M compile_abi_zqEDQ: ca.mcgill.sable.soot.coffi.Instruction.compile([BI)I */

Class xt_compile_abi_zqEDQ[] = { 0 };

/*M offsetToPointer_B_Myq1j: ca.mcgill.sable.soot.coffi.Instruction.offsetToPointer(Lca/mcgill/sable/soot/coffi/ByteCode;)V */

Class xt_offsetToPointer_B_Myq1j[] = { 0 };

Void offsetToPointer_B_Myq1j(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M nextOffset_i_BhJRD: ca.mcgill.sable.soot.coffi.Instruction.nextOffset(I)I */

Class xt_nextOffset_i_BhJRD[] = { 0 };

Int nextOffset_i_BhJRD(Object p0, Int p1)
{
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;
	iv1 = p1;

L0:	i1 = iv1;
	i2 = 1;
	i1 = i1 + i2;
	return i1;

	/*NOTREACHED*/
}

/*M branchpoints_I_dvskP: ca.mcgill.sable.soot.coffi.Instruction.branchpoints(Lca/mcgill/sable/soot/coffi/Instruction;)[Lca/mcgill/sable/soot/coffi/Instruction; */

Class xt_branchpoints_I_dvskP[] = { 0 };

Object branchpoints_I_dvskP(Object p0, Object p1)
{
Object a0, a1;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = 0;
	return a1;

	/*NOTREACHED*/
}

/*M markCPRefs_az_4cO9Q: ca.mcgill.sable.soot.coffi.Instruction.markCPRefs([Z)V */

Class xt_markCPRefs_az_4cO9Q[] = { 0 };

Void markCPRefs_az_4cO9Q(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M redirectCPRefs_as_4OU8w: ca.mcgill.sable.soot.coffi.Instruction.redirectCPRefs([S)V */

Class xt_redirectCPRefs_as_4OU8w[] = { 0 };

Void redirectCPRefs_as_4OU8w(Object p0, Object p1)
{
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	return;

	/*NOTREACHED*/
}

/*M hashCode__P84mQ: ca.mcgill.sable.soot.coffi.Instruction.hashCode()I */

Class xt_hashCode__P84mQ[] = { 0 };

Int hashCode__P84mQ(Object p0)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_java_lang_Integer.C);
	a2 = a1;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a3)->label;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_i_oO9cr(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Integer*)a1)->class->M.
		hashCode__NNIVS.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M equals_I_LuRCj: ca.mcgill.sable.soot.coffi.Instruction.equals(Lca/mcgill/sable/soot/coffi/Instruction;)Z */

Class xt_equals_I_LuRCj[] = { 0 };

Boolean equals_I_LuRCj(Object p0, Object p1)
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
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->label;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a2)->label;
	if (i1 != i2)
		GOTO(8,L1);
	i1 = 1;
	return i1;

L1:	i1 = 0;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getShort_abi_Q4Xxk: ca.mcgill.sable.soot.coffi.Instruction.getShort([BI)S */

Class xt_getShort_abi_Q4Xxk[] = { 0 };

Short getShort_abi_Q4Xxk(Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2, iv3, iv4;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i1 = (Short)i1;
	iv3 = i1;
	a1 = av0;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i1 = (Short)i1;
	iv4 = i1;
	i1 = iv3;
	i2 = 8;
	i1 = i1 << (i2 & 31);
	i2 = 65280;
	i1 = i1 & i2;
	i2 = iv4;
	i3 = 255;
	i2 = i2 & i3;
	i1 = i1 | i2;
	i1 = (Short)i1;
	iv2 = i1;
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getInt_abi_HPXjS: ca.mcgill.sable.soot.coffi.Instruction.getInt([BI)I */

Class xt_getInt_abi_HPXjS[] = { 0 };

Int getInt_abi_HPXjS(Object p1, Int p2)
{
Object a0, a1, a2, a3;
Object av0;
Int i0, i1, i2, i3;
Int iv1, iv2, iv3, iv4, iv5, iv6;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i2 = 24;
	i1 = i1 << (i2 & 31);
	i2 = -16777216;
	i1 = i1 & i2;
	iv3 = i1;
	a1 = av0;
	i2 = iv1;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i2 = 16;
	i1 = i1 << (i2 & 31);
	i2 = 16711680;
	i1 = i1 & i2;
	iv4 = i1;
	a1 = av0;
	i2 = iv1;
	i3 = 2;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i2 = 8;
	i1 = i1 << (i2 & 31);
	i2 = 65280;
	i1 = i1 & i2;
	iv5 = i1;
	a1 = av0;
	i2 = iv1;
	i3 = 3;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	i1 = ((struct barray*)a1)->data[i2];
	i2 = 255;
	i1 = i1 & i2;
	iv6 = i1;
	i1 = iv3;
	i2 = iv4;
	i1 = i1 | i2;
	i2 = iv5;
	i1 = i1 | i2;
	i2 = iv6;
	i1 = i1 | i2;
	iv2 = i1;
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M shortToBytes_sabi_JlXoz: ca.mcgill.sable.soot.coffi.Instruction.shortToBytes(S[BI)I */

Class xt_shortToBytes_sabi_JlXoz[] = { 0 };

Int shortToBytes_sabi_JlXoz(Short p1, Object p2, Int p3)
{
Object a0, a1, a2, a3, a4;
Object av1;
Int i0, i1, i2, i3, i4;
Int iv0, iv2;
PROLOGUE;

	iv0 = p1;
	av1 = p2;
	iv2 = p3;

L0:	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = iv0;
	i4 = 8;
	i3 = i3 >> (i4 & 31);
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = iv0;
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M intToBytes_iabi_GBHJj: ca.mcgill.sable.soot.coffi.Instruction.intToBytes(I[BI)I */

Class xt_intToBytes_iabi_GBHJj[] = { 0 };

Int intToBytes_iabi_GBHJj(Int p1, Object p2, Int p3)
{
Object a0, a1, a2, a3, a4;
Object av1;
Int i0, i1, i2, i3, i4;
Int iv0, iv2;
PROLOGUE;

	iv0 = p1;
	av1 = p2;
	iv2 = p3;

L0:	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = iv0;
	i4 = 24;
	i3 = i3 >> (i4 & 31);
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = iv0;
	i4 = 16;
	i3 = i3 >> (i4 & 31);
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = iv0;
	i4 = 8;
	i3 = i3 >> (i4 & 31);
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	a1 = av1;
	i2 = iv2;
	iv2 += 1;
	i3 = iv0;
	i4 = 255;
	i3 = i3 & i4;
	i3 = (Byte)i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct barray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct barray*)a1)->data[i2] = i3;
	i1 = iv2;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M toString_ac_9JP2g: ca.mcgill.sable.soot.coffi.Instruction.toString([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toString_ac_9JP2g[] = { 0 };

Object toString_ac_9JP2g(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
Int iv2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->code;
	i2 = 255;
	i1 = i1 & i2;
	iv2 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->name;
	if (a1 != 0)
		GOTO(13,L1);
	a1 = av0;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_Instruction[3];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	i3 = iv2;
	a3 = toString_i_Uv8XM(i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->name = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_Instruction*)a1)->name;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_coffi_Instruction[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','I','n','s','t','r','u','c','t','i',
'o','n','[',']','n','u','l','l','?','?','?','='};

const void *st_ca_mcgill_sable_soot_coffi_Instruction[] = {
    ch_ca_mcgill_sable_soot_coffi_Instruction+38,	/* 0. ca.mcgill.sable.soot.coffi.Instruction */
    ch_ca_mcgill_sable_soot_coffi_Instruction+39,	/* 1. [ */
    ch_ca_mcgill_sable_soot_coffi_Instruction+40,	/* 2. ] */
    ch_ca_mcgill_sable_soot_coffi_Instruction+48,	/* 3. null%%%= */
    0};
