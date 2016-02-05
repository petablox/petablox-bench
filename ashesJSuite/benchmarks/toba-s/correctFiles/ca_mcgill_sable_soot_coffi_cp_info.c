/*  ca_mcgill_sable_soot_coffi_cp_info.c -- from Java class ca.mcgill.sable.soot.coffi.cp_info  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_coffi_cp_info.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.h"
#include "ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.h"
#include "ca_mcgill_sable_soot_coffi_ClassFile.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_util_StringTokenizer.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_coffi_cp_info.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
    &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
    &cl_ca_mcgill_sable_soot_coffi_ClassFile.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_util_StringTokenizer.C,
};

extern const Char ch_ca_mcgill_sable_soot_coffi_cp_info[];
extern const void *st_ca_mcgill_sable_soot_coffi_cp_info[];
extern Class xt_size__r1jXg[];
extern Class xt_toString_ac_vRhnB[];
extern Class xt_typeName__4UJn9[];
extern Class xt_compareTo_accac_zSCEu[];
extern Class xt_ints2long_ll_H0G5H[];
extern Class xt_printBits_i_lEkmH[];
extern Class xt_printBits_l_iyFur[];
extern Class xt_getClassname_aci_PyxPt[];
extern Class xt_getName_aci_7bz4S[];
extern Class xt_countParams_aci_Y1c0b[];
extern Class xt_getTypeDescr_aci_5fWXA[];
extern Class xt_fieldType_aci_eALis[];
extern Class xt_init__9KHck[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_coffi_cp_info.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_coffi_cp_info.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_coffi_cp_info.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_coffi_cp_info.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(34) nmchars = {&acl_char, 0, 34, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','c','p','_','i','n','f','o'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 34 };
static const Char nmcv_0[] = {
'C','O','N','S','T','A','N','T','_','U','t','f','8'};
static const Char sgcv_0[] = {
'B'};
static const Char nmcv_1[] = {
'C','O','N','S','T','A','N','T','_','I','n','t','e','g','e','r'};
static const Char sgcv_1[] = {
'B'};
static const Char nmcv_2[] = {
'C','O','N','S','T','A','N','T','_','F','l','o','a','t'};
static const Char sgcv_2[] = {
'B'};
static const Char nmcv_3[] = {
'C','O','N','S','T','A','N','T','_','L','o','n','g'};
static const Char sgcv_3[] = {
'B'};
static const Char nmcv_4[] = {
'C','O','N','S','T','A','N','T','_','D','o','u','b','l','e'};
static const Char sgcv_4[] = {
'B'};
static const Char nmcv_5[] = {
'C','O','N','S','T','A','N','T','_','C','l','a','s','s'};
static const Char sgcv_5[] = {
'B'};
static const Char nmcv_6[] = {
'C','O','N','S','T','A','N','T','_','S','t','r','i','n','g'};
static const Char sgcv_6[] = {
'B'};
static const Char nmcv_7[] = {
'C','O','N','S','T','A','N','T','_','F','i','e','l','d','r','e','f'};
static const Char sgcv_7[] = {
'B'};
static const Char nmcv_8[] = {
'C','O','N','S','T','A','N','T','_','M','e','t','h','o','d','r','e','f'};
static const Char sgcv_8[] = {
'B'};
static const Char nmcv_9[] = {
'C','O','N','S','T','A','N','T','_','I','n','t','e','r','f','a','c','e',
'M','e','t','h','o','d','r','e','f'};
static const Char sgcv_9[] = {
'B'};
static const Char nmcv_10[] = {
'C','O','N','S','T','A','N','T','_','N','a','m','e','A','n','d','T','y',
'p','e'};
static const Char sgcv_10[] = {
'B'};
static const Char nmiv_0[] = {
't','a','g'};
static const Char sgiv_0[] = {
'B'};
static const Char nmsm_0[] = {
'i','n','t','s','2','l','o','n','g'};
static const Char sgsm_0[] = {
'(','J','J',')','J'};
static const Char nmsm_1[] = {
'p','r','i','n','t','B','i','t','s'};
static const Char sgsm_1[] = {
'(','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmsm_2[] = {
'p','r','i','n','t','B','i','t','s'};
static const Char sgsm_2[] = {
'(','J',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i',
'n','g',';'};
static const Char nmsm_3[] = {
'g','e','t','C','l','a','s','s','n','a','m','e'};
static const Char sgsm_3[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';'};
static const Char nmsm_4[] = {
'g','e','t','N','a','m','e'};
static const Char sgsm_4[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';'};
static const Char nmsm_5[] = {
'c','o','u','n','t','P','a','r','a','m','s'};
static const Char sgsm_5[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','I'};
static const Char nmsm_6[] = {
'g','e','t','T','y','p','e','D','e','s','c','r'};
static const Char sgsm_6[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';'};
static const Char nmsm_7[] = {
'f','i','e','l','d','T','y','p','e'};
static const Char sgsm_7[] = {
'(','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','c','o','f','f','i','/','c','p','_','i','n','f',
'o',';','I',')','L','j','a','v','a','/','l','a','n','g','/','S','t','r',
'i','n','g',';'};
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
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Utf8,(const Char *)&nmcv_0,13,(const Char *)&sgcv_0,1,1,0x19,0}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Integer,(const Char *)&nmcv_1,16,(const Char *)&sgcv_1,1,1,0x19,1}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Float,(const Char *)&nmcv_2,14,(const Char *)&sgcv_2,1,1,0x19,2}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Long,(const Char *)&nmcv_3,13,(const Char *)&sgcv_3,1,1,0x19,3}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Double,(const Char *)&nmcv_4,15,(const Char *)&sgcv_4,1,1,0x19,4}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Class,(const Char *)&nmcv_5,14,(const Char *)&sgcv_5,1,1,0x19,5}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_String,(const Char *)&nmcv_6,15,(const Char *)&sgcv_6,1,1,0x19,6}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Fieldref,(const Char *)&nmcv_7,17,(const Char *)&sgcv_7,1,1,0x19,7}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Methodref,(const Char *)&nmcv_8,18,(const Char *)&sgcv_8,1,1,0x19,8}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_InterfaceMethodref,(const Char *)&nmcv_9,27,(const Char *)&sgcv_9,1,1,0x19,9}, 
    {0,&cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_NameAndType,(const Char *)&nmcv_10,20,(const Char *)&sgcv_10,1,1,0x19,10}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_coffi_cp_info, tag), 0,(const Char *)&nmiv_0,3,(const Char *)&sgiv_0,1,1,0x1,11}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())ints2long_ll_H0G5H,
	(const Char *)&nmsm_0,9,(const Char *)&sgsm_0,5,
	1,0x9,4,xt_ints2long_ll_H0G5H},
    {TMIT_native_code, (Void(*)())printBits_i_lEkmH,
	(const Char *)&nmsm_1,9,(const Char *)&sgsm_1,21,
	1,0x9,5,xt_printBits_i_lEkmH},
    {TMIT_native_code, (Void(*)())printBits_l_iyFur,
	(const Char *)&nmsm_2,9,(const Char *)&sgsm_2,21,
	1,0x9,6,xt_printBits_l_iyFur},
    {TMIT_native_code, (Void(*)())getClassname_aci_PyxPt,
	(const Char *)&nmsm_3,12,(const Char *)&sgsm_3,58,
	1,0x9,7,xt_getClassname_aci_PyxPt},
    {TMIT_native_code, (Void(*)())getName_aci_7bz4S,
	(const Char *)&nmsm_4,7,(const Char *)&sgsm_4,58,
	1,0x9,8,xt_getName_aci_7bz4S},
    {TMIT_native_code, (Void(*)())countParams_aci_Y1c0b,
	(const Char *)&nmsm_5,11,(const Char *)&sgsm_5,41,
	1,0x9,9,xt_countParams_aci_Y1c0b},
    {TMIT_native_code, (Void(*)())getTypeDescr_aci_5fWXA,
	(const Char *)&nmsm_6,12,(const Char *)&sgsm_6,58,
	1,0x9,10,xt_getTypeDescr_aci_5fWXA},
    {TMIT_native_code, (Void(*)())fieldType_aci_eALis,
	(const Char *)&nmsm_7,9,(const Char *)&sgsm_7,58,
	1,0x9,11,xt_fieldType_aci_eALis},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Utf8 = 1;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Integer = 3;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Float = 4;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Long = 5;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Double = 6;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Class = 7;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_String = 8;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Fieldref = 9;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_Methodref = 10;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_InterfaceMethodref = 11;
   }
   {
   cl_ca_mcgill_sable_soot_coffi_cp_info.V.CONSTANT_NameAndType = 12;
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
} inr_ca_mcgill_sable_soot_coffi_cp_info = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_coffi_cp_info.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_coffi_cp_info cl_ca_mcgill_sable_soot_coffi_cp_info = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_coffi_cp_info),
    16,
    8,
    1,
    11,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    10, others,
    0, 0,
    ch_ca_mcgill_sable_soot_coffi_cp_info,
    st_ca_mcgill_sable_soot_coffi_cp_info,
    0,
    throwInstantiationException,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x420,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_coffi_cp_info,
    iv_table, cv_table,
    sm_table},
    { /* methodsigs */
	{TMIT_native_code, init__9KHck,(const Char *)&nmim_0,6,
	(const Char *)&sgim_0,3,1,0x0,12,xt_init__9KHck},
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
	{TMIT_abstract, 0,(const Char *)&nmim_12,4,
	(const Char *)&sgim_12,3,1,0x401,0,xt_size__r1jXg},
	{TMIT_abstract, 0,(const Char *)&nmim_13,8,
	(const Char *)&sgim_13,57,1,0x401,1,xt_toString_ac_vRhnB},
	{TMIT_abstract, 0,(const Char *)&nmim_14,8,
	(const Char *)&sgim_14,20,1,0x401,2,xt_typeName__4UJn9},
	{TMIT_abstract, 0,(const Char *)&nmim_15,9,
	(const Char *)&sgim_15,113,1,0x401,3,xt_compareTo_accac_zSCEu},
    } /* end of methodsigs */
};


/*M size__r1jXg: ca.mcgill.sable.soot.coffi.cp_info.size()I */

Class xt_size__r1jXg[] = { 0 };

/*M toString_ac_vRhnB: ca.mcgill.sable.soot.coffi.cp_info.toString([Lca/mcgill/sable/soot/coffi/cp_info;)Ljava/lang/String; */

Class xt_toString_ac_vRhnB[] = { 0 };

/*M typeName__4UJn9: ca.mcgill.sable.soot.coffi.cp_info.typeName()Ljava/lang/String; */

Class xt_typeName__4UJn9[] = { 0 };

/*M compareTo_accac_zSCEu: ca.mcgill.sable.soot.coffi.cp_info.compareTo([Lca/mcgill/sable/soot/coffi/cp_info;Lca/mcgill/sable/soot/coffi/cp_info;[Lca/mcgill/sable/soot/coffi/cp_info;)I */

Class xt_compareTo_accac_zSCEu[] = { 0 };

/*M ints2long_ll_H0G5H: ca.mcgill.sable.soot.coffi.cp_info.ints2long(JJ)J */

Class xt_ints2long_ll_H0G5H[] = { 0 };

Long ints2long_ll_H0G5H(Long p1, Long p2)
{
Int i0, i1, i2, i3, i4;
Long l0, l1, l2, l3, l4;
Long lv0, lv2, lv4, lv6;
PROLOGUE;

	lv0 = p1;
	lv2 = p2;

L0:	l2 = lv0;
	lv4 = l2;
	l2 = lv2;
	lv6 = l2;
	l2 = lv4;
	i3 = 32;
	l2 = l2 << (i3 & 63);
	l4 = lv6;
	l2 = l2 + l4;
	return l2;

	/*NOTREACHED*/
}

/*M printBits_i_lEkmH: ca.mcgill.sable.soot.coffi.cp_info.printBits(I)Ljava/lang/String; */

Class xt_printBits_i_lEkmH[] = { 0 };

Object printBits_i_lEkmH(Int p1)
{
Object a0, a1, a2, a3;
Object av1;
Int i0, i1, i2, i3;
Int iv0, iv2, iv3;
PROLOGUE;

	iv0 = p1;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[1];
	av1 = a1;
	i1 = 1;
	iv3 = i1;
	i1 = 0;
	iv2 = i1;
	GOTO(7,L4);

L1:	i1 = iv0;
	i2 = iv3;
	i1 = i1 & i2;
	if (i1 == 0)
		GOTO(13,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[2];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av1 = a1;
	GOTO(33,L3);

L2:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av1;
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
	av1 = a1;
L3:	i1 = iv3;
	i2 = 1;
	i1 = i1 << (i2 & 31);
	iv3 = i1;
	iv2 += 1;
L4:	i1 = iv2;
	i2 = 32;
	if (i1 < i2)
		GOBACK(63,L1);
	a1 = av1;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M printBits_l_iyFur: ca.mcgill.sable.soot.coffi.cp_info.printBits(J)Ljava/lang/String; */

Class xt_printBits_l_iyFur[] = { 0 };

Object printBits_l_iyFur(Long p1)
{
Object a0, a1, a2, a3, a4;
Object av2;
Int i0, i1, i2, i3, i4;
Long l0, l1, l2, l3, l4;
Long lv0, lv3, lv5;
PROLOGUE;

	lv0 = p1;

L0:	a1 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[1];
	av2 = a1;
	l2 = 1;
	lv5 = l2;
	l2 = 0;
	lv3 = l2;
	GOTO(8,L4);

L1:	l2 = lv0;
	l4 = lv5;
	l2 = l2 & l4;
	l4 = 0;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 == 0)
		GOTO(17,L2);
	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[2];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av2;
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
	av2 = a1;
	GOTO(37,L3);

L2:	a1 = new(&cl_java_lang_StringBuffer.C);
	a2 = a1;
	a3 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a2,a3);
	a2 = av2;
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
	av2 = a1;
L3:	l2 = lv5;
	i3 = 1;
	l2 = l2 << (i3 & 63);
	lv5 = l2;
	l2 = lv3;
	l4 = 1;
	l2 = l2 + l4;
	lv3 = l2;
L4:	l2 = lv3;
	l4 = 64;
	i1 = (l2 < l4) ? -1 : ((l2 == l4) ? 0 : 1);
	if (i1 < 0)
		GOBACK(72,L1);
	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getClassname_aci_PyxPt: ca.mcgill.sable.soot.coffi.cp_info.getClassname([Lca/mcgill/sable/soot/coffi/cp_info;I)Ljava/lang/String; */

Class xt_getClassname_aci_PyxPt[] = { 0 };

Object getClassname_aci_PyxPt(Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av2;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	switch (i1) {
		case 7: 	GOTO(8,L1);
		case 8: 	GOTO(8,L5);
		case 9: 	GOTO(8,L2);
		case 10: 	GOTO(8,L3);
		case 11: 	GOTO(8,L4);
		default:	GOTO(8,L5);
	}

L1:	a1 = av2;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	return a1;

L2:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->class_index;
	a1 = getClassname_aci_PyxPt(a1,i2);
	return a1;

L3:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->class_index;
	a1 = getClassname_aci_PyxPt(a1,i2);
	return a1;

L4:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->class_index;
	a1 = getClassname_aci_PyxPt(a1,i2);
	return a1;

L5:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[4];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[5];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getName_aci_7bz4S: ca.mcgill.sable.soot.coffi.cp_info.getName([Lca/mcgill/sable/soot/coffi/cp_info;I)Ljava/lang/String; */

Class xt_getName_aci_7bz4S[] = { 0 };

Object getName_aci_7bz4S(Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av2;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->tag;
	switch (i1) {
		case 1: 	GOTO(8,L1);
		case 9: 	GOTO(8,L3);
		case 10: 	GOTO(8,L4);
		case 11: 	GOTO(8,L5);
		case 12: 	GOTO(8,L2);
		default:	GOTO(8,L6);
	}

L1:	a1 = av2;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	return a1;

L2:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->name_index;
	a1 = getName_aci_7bz4S(a1,i2);
	return a1;

L3:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	a1 = getName_aci_7bz4S(a1,i2);
	return a1;

L4:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	a1 = getName_aci_7bz4S(a1,i2);
	return a1;

L5:	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	a1 = getName_aci_7bz4S(a1,i2);
	return a1;

L6:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[7];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M countParams_aci_Y1c0b: ca.mcgill.sable.soot.coffi.cp_info.countParams([Lca/mcgill/sable/soot/coffi/cp_info;I)I */

Class xt_countParams_aci_Y1c0b[] = { 0 };

Int countParams_aci_Y1c0b(Object p1, Int p2)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	av3 = a1;
	a1 = av3;
	a1 = parseMethodDesc_params_S_htzZ7(a1);
	av3 = a1;
	a1 = new(&cl_java_util_StringTokenizer.C);
	a2 = a1;
	a3 = av3;
	a4 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[8];
	i5 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_SSz_XVdSj(a2,a3,a4,i5);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_StringTokenizer*)a1)->class->M.
		countTokens__dQPQv.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTypeDescr_aci_5fWXA: ca.mcgill.sable.soot.coffi.cp_info.getTypeDescr([Lca/mcgill/sable/soot/coffi/cp_info;I)Ljava/lang/String; */

Class xt_getTypeDescr_aci_5fWXA[] = { 0 };

Object getTypeDescr_aci_5fWXA(Object p1, Int p2)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av2;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av2 = a1;
	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Utf8_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(8,L1);
	a1 = av2;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_coffi_cp_info*)a1)->class->M.
		toString_ac_vRhnB.f(a1,a2);
	return a1;

L1:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(21,L2);
	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_NameAndType_info*)a2)->descriptor_index;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	return a1;

L2:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(40,L3);
	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Methodref_info*)a2)->name_and_type_index;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	return a1;

L3:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(59,L4);
	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_InterfaceMethodref_info*)a2)->name_and_type_index;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	return a1;

L4:	a1 = av2;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(78,L5);
	a1 = av0;
	a2 = av2;
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_coffi_CONSTANT_Fieldref_info*)a2)->name_and_type_index;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	return a1;

L5:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[9];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[10];
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M fieldType_aci_eALis: ca.mcgill.sable.soot.coffi.cp_info.fieldType([Lca/mcgill/sable/soot/coffi/cp_info;I)Ljava/lang/String; */

Class xt_fieldType_aci_eALis[] = { 0 };

Object fieldType_aci_eALis(Object p1, Int p2)
{
Object a0, a1, a2;
Object av0;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p1;
	iv1 = p2;

L0:	a1 = av0;
	i2 = iv1;
	a1 = getTypeDescr_aci_5fWXA(a1,i2);
	a2 = (Object)st_ca_mcgill_sable_soot_coffi_cp_info[1];
	a1 = parseDesc_SS_ra14s(a1,a2);
	return a1;

	/*NOTREACHED*/
}

/*M init__9KHck: ca.mcgill.sable.soot.coffi.cp_info.<init>()V */

Class xt_init__9KHck[] = { 0 };

Void init__9KHck(Object p0)
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



const Char ch_ca_mcgill_sable_soot_coffi_cp_info[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','c','o','f','f','i','.','c','p','_','i','n','f','o','1','0',
'R','e','q','u','e','s','t',' ','f','o','r',' ','c','l','a','s','s','n',
'a','m','e',' ','f','o','r',' ','n','o','n','-','c','l','a','s','s',' ',
'o','b','j','e','c','t','!','C','a','n',39,'t',' ','f','i','n','d',' ',
'c','l','a','s','s','n','a','m','e','.',' ','S','o','r','r','y','.','R',
'e','q','u','e','s','t',' ','f','o','r',' ','n','a','m','e',' ','f','o',
'r',' ','n','o','n','-','n','a','m','e','d',' ','o','b','j','e','c','t',
'!','C','a','n',39,'t',' ','f','i','n','d',' ','n','a','m','e',' ','o',
'f',' ','t','h','a','t',' ','o','b','j','e','c','t','.',' ','S','o','r',
'r','y','.',',','I','n','v','a','l','i','d',' ','r','e','q','u','e','s',
't',' ','f','o','r',' ','t','y','p','e',' ','d','e','s','c','r','!','I',
'n','v','a','l','i','d',' ','t','y','p','e',' ','d','e','s','c','r','i',
'p','t','o','r',' ','r','e','q','u','e','s','t','.'};

const void *st_ca_mcgill_sable_soot_coffi_cp_info[] = {
    ch_ca_mcgill_sable_soot_coffi_cp_info+34,	/* 0. ca.mcgill.sable.soot.coffi.cp_info */
    ch_ca_mcgill_sable_soot_coffi_cp_info+34,	/* 1.  */
    ch_ca_mcgill_sable_soot_coffi_cp_info+35,	/* 2. 1 */
    ch_ca_mcgill_sable_soot_coffi_cp_info+36,	/* 3. 0 */
    ch_ca_mcgill_sable_soot_coffi_cp_info+79,	/* 4. Request for classname for non-class obje */
    ch_ca_mcgill_sable_soot_coffi_cp_info+107,	/* 5. Can't find classname. Sorry. */
    ch_ca_mcgill_sable_soot_coffi_cp_info+145,	/* 6. Request for name for non-named object! */
    ch_ca_mcgill_sable_soot_coffi_cp_info+183,	/* 7. Can't find name of that object. Sorry. */
    ch_ca_mcgill_sable_soot_coffi_cp_info+184,	/* 8. , */
    ch_ca_mcgill_sable_soot_coffi_cp_info+215,	/* 9. Invalid request for type descr! */
    ch_ca_mcgill_sable_soot_coffi_cp_info+247,	/* 10. Invalid type descriptor request. */
    0};
