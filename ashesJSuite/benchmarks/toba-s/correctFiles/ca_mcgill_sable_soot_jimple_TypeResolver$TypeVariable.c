/*  ca_mcgill_sable_soot_jimple_TypeResolver$TypeVariable.c -- from Java class ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeVariable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_DoubleType.h"
#include "ca_mcgill_sable_soot_ErroneousType.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_LongType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_StmtAddressType.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$TypeNode.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$1$RecursiveFunction.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$ConstraintCollector.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$SCC.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeException.h"
#include "ca_mcgill_sable_util_IntSet.h"
#include "java_io_PrintStream.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_util_BitSet.h"
#include "java_util_Hashtable.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_DoubleType.C,
    &cl_ca_mcgill_sable_soot_ErroneousType.C,
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_LongType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_StmtAddressType.C,
    &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C,
    &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_TypeResolver.C,
    &cl_ca_mcgill_sable_soot_jimp_h9ITA.C,
    &cl_ca_mcgill_sable_soot_jimp_KfqdG.C,
    &cl_ca_mcgill_sable_soot_jimp_Hv6gk.C,
    &cl_ca_mcgill_sable_soot_jimp_VCk9q.C,
    &cl_ca_mcgill_sable_util_IntSet.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_util_BitSet.C,
    &cl_java_util_Hashtable.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimp_Ag6Jr[];
extern const void *st_ca_mcgill_sable_soot_jimp_Ag6Jr[];
extern Class xt_init_T_avP6R[];
extern Class xt_init_TL_gfAcf[];
extern Class xt_init_TC_E01uy[];
extern Class xt_ecr__8FqU0[];
extern Class xt_ecrUnion_T_SkRso[];
extern Class xt_merge_T_u0drW[];
extern Class xt_removeEcrIndirectRelatio__OMzuO[];
extern Class xt_ecrAddParent_T_BFTx8[];
extern Class xt_ecrAddChild_T_dY5SG[];
extern Class xt_ecrCannotBeInt__kNaLB[];
extern Class xt_ecrCannotBeLong__hrYrt[];
extern Class xt_ecrCannotBeFloat__j3rmg[];
extern Class xt_ecrCannotBeDouble__ojkpY[];
extern Class xt_ecrCannotBeAddress__lWATX[];
extern Class xt_ecrCannotBeRef__ubdjq[];
extern Class xt_getEcrId__zTCKM[];
extern Class xt_isEcrArray__QWHvw[];
extern Class xt_ecrArrayDepth__0oKFx[];
extern Class xt_getEcrIsArrayOf__SinWm[];
extern Class xt_getEcrParentIds__M0IPW[];
extern Class xt_getEcrParents__grNtf[];
extern Class xt_getEcrChildren__Kw3Kx[];
extern Class xt_getEcrTypeNode__nk5LZ[];
extern Class xt_setEcrTypeNode_C_5O4Ng[];
extern Class xt_unsetEcrTypeNode__UCiJs[];
extern Class xt_access0_T_5n5Ex[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.M.clone__dslwm, 0, 0,
    0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(53) nmchars = {&acl_char, 0, 53, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l','e'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 53 };
static const Char nmiv_0[] = {
't','h','i','s','$','0'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r',';'};
static const Char nmiv_1[] = {
'i','d'};
static const Char sgiv_1[] = {
'I'};
static const Char nmiv_2[] = {
'p','a','r','e','n','t','s'};
static const Char sgiv_2[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','I','n','t','S','e','t',';'};
static const Char nmiv_3[] = {
'c','h','i','l','d','r','e','n'};
static const Char sgiv_3[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','I','n','t','S','e','t',';'};
static const Char nmiv_4[] = {
't','y','p','e','N','o','d','e'};
static const Char sgiv_4[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H','i',
'e','r','a','r','c','h','y','$','T','y','p','e','N','o','d','e',';'};
static const Char nmiv_5[] = {
'c','a','n','n','o','t','B','e','I','n','t'};
static const Char sgiv_5[] = {
'Z'};
static const Char nmiv_6[] = {
'c','a','n','n','o','t','B','e','L','o','n','g'};
static const Char sgiv_6[] = {
'Z'};
static const Char nmiv_7[] = {
'c','a','n','n','o','t','B','e','F','l','o','a','t'};
static const Char sgiv_7[] = {
'Z'};
static const Char nmiv_8[] = {
'c','a','n','n','o','t','B','e','D','o','u','b','l','e'};
static const Char sgiv_8[] = {
'Z'};
static const Char nmiv_9[] = {
'c','a','n','n','o','t','B','e','A','d','d','r','e','s','s'};
static const Char sgiv_9[] = {
'Z'};
static const Char nmiv_10[] = {
'c','a','n','n','o','t','B','e','R','e','f'};
static const Char sgiv_10[] = {
'Z'};
static const Char nmiv_11[] = {
'i','s','A','r','r','a','y','O','f'};
static const Char sgiv_11[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l','e',
';'};
static const Char nmiv_12[] = {
'i','s','E','l','e','m','e','n','t','O','f'};
static const Char sgiv_12[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','I','n','t','S','e','t',';'};
static const Char nmiv_13[] = {
'a','r','r','a','y','D','e','p','t','h'};
static const Char sgiv_13[] = {
'I'};
static const Char nmiv_14[] = {
'b','a','s','e'};
static const Char sgiv_14[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l','e',
';'};
static const Char nmiv_15[] = {
'c','o','u','n','t'};
static const Char sgiv_15[] = {
'I'};
static const Char nmiv_16[] = {
'r','e','p'};
static const Char sgiv_16[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l','e',
';'};
static const Char nmiv_17[] = {
'r','a','n','k'};
static const Char sgiv_17[] = {
'I'};
static const Char nmiv_18[] = {
'a','n','c','e','s','t','o','r','s'};
static const Char sgiv_18[] = {
'L','j','a','v','a','/','u','t','i','l','/','B','i','t','S','e','t',';'};
static const Char nmsm_0[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';',')','I'};
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
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r',';',')','V'};
static const Char nmim_13[] = {
'<','i','n','i','t','>'};
static const Char sgim_13[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'L','o','c','a','l',';',')','V'};
static const Char nmim_14[] = {
'<','i','n','i','t','>'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r',';','L','c','a','/','m','c','g','i','l','l','/',
's','a','b','l','e','/','s','o','o','t','/','j','i','m','p','l','e','/',
'C','l','a','s','s','H','i','e','r','a','r','c','h','y','$','T','y','p',
'e','N','o','d','e',';',')','V'};
static const Char nmim_15[] = {
'e','c','r'};
static const Char sgim_15[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R',
'e','s','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b',
'l','e',';'};
static const Char nmim_16[] = {
'e','c','r','U','n','i','o','n'};
static const Char sgim_16[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e',
'R','e','s','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a',
'b','l','e',';'};
static const Char nmim_17[] = {
'm','e','r','g','e'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';',')','V'};
static const Char nmim_18[] = {
'r','e','m','o','v','e','E','c','r','I','n','d','i','r','e','c','t','R',
'e','l','a','t','i','o','n','s'};
static const Char sgim_18[] = {
'(',')','V'};
static const Char nmim_19[] = {
'e','c','r','A','d','d','P','a','r','e','n','t'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';',')','V'};
static const Char nmim_20[] = {
'e','c','r','A','d','d','C','h','i','l','d'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';',')','V'};
static const Char nmim_21[] = {
'e','c','r','C','a','n','n','o','t','B','e','I','n','t'};
static const Char sgim_21[] = {
'(',')','V'};
static const Char nmim_22[] = {
'e','c','r','C','a','n','n','o','t','B','e','L','o','n','g'};
static const Char sgim_22[] = {
'(',')','V'};
static const Char nmim_23[] = {
'e','c','r','C','a','n','n','o','t','B','e','F','l','o','a','t'};
static const Char sgim_23[] = {
'(',')','V'};
static const Char nmim_24[] = {
'e','c','r','C','a','n','n','o','t','B','e','D','o','u','b','l','e'};
static const Char sgim_24[] = {
'(',')','V'};
static const Char nmim_25[] = {
'e','c','r','C','a','n','n','o','t','B','e','A','d','d','r','e','s','s'};
static const Char sgim_25[] = {
'(',')','V'};
static const Char nmim_26[] = {
'e','c','r','C','a','n','n','o','t','B','e','R','e','f'};
static const Char sgim_26[] = {
'(',')','V'};
static const Char nmim_27[] = {
'g','e','t','E','c','r','I','d'};
static const Char sgim_27[] = {
'(',')','I'};
static const Char nmim_28[] = {
'i','s','E','c','r','A','r','r','a','y'};
static const Char sgim_28[] = {
'(',')','Z'};
static const Char nmim_29[] = {
'e','c','r','A','r','r','a','y','D','e','p','t','h'};
static const Char sgim_29[] = {
'(',')','I'};
static const Char nmim_30[] = {
'g','e','t','E','c','r','I','s','A','r','r','a','y','O','f'};
static const Char sgim_30[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R',
'e','s','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b',
'l','e',';'};
static const Char nmim_31[] = {
'g','e','t','E','c','r','P','a','r','e','n','t','I','d','s'};
static const Char sgim_31[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','u','t','i','l','/','I','n','t','S','e','t',';'};
static const Char nmim_32[] = {
'g','e','t','E','c','r','P','a','r','e','n','t','s'};
static const Char sgim_32[] = {
'(',')','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e',
'R','e','s','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a',
'b','l','e',';'};
static const Char nmim_33[] = {
'g','e','t','E','c','r','C','h','i','l','d','r','e','n'};
static const Char sgim_33[] = {
'(',')','[','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l',
'e','/','s','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e',
'R','e','s','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a',
'b','l','e',';'};
static const Char nmim_34[] = {
'g','e','t','E','c','r','T','y','p','e','N','o','d','e'};
static const Char sgim_34[] = {
'(',')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e',
'/','s','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s',
'H','i','e','r','a','r','c','h','y','$','T','y','p','e','N','o','d','e',
';'};
static const Char nmim_35[] = {
's','e','t','E','c','r','T','y','p','e','N','o','d','e'};
static const Char sgim_35[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y','$','T','y','p','e','N','o','d','e',';',
')','Z'};
static const Char nmim_36[] = {
'u','n','s','e','t','E','c','r','T','y','p','e','N','o','d','e'};
static const Char sgim_36[] = {
'(',')','V'};

static struct vt_generic cv_table[] = {
    {0}
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, this0_oYxUV), 0,(const Char *)&nmiv_0,6,(const Char *)&sgiv_0,42,1,0x12,0}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, id), 0,(const Char *)&nmiv_1,2,(const Char *)&sgiv_1,1,1,0x2,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, parents), 0,(const Char *)&nmiv_2,7,(const Char *)&sgiv_2,29,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, children), 0,(const Char *)&nmiv_3,8,(const Char *)&sgiv_3,29,1,0x0,3}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, typeNode), 0,(const Char *)&nmiv_4,8,(const Char *)&sgiv_4,53,1,0x2,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, cannotBeInt), 0,(const Char *)&nmiv_5,11,(const Char *)&sgiv_5,1,1,0x2,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, cannotBeLong), 0,(const Char *)&nmiv_6,12,(const Char *)&sgiv_6,1,1,0x2,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, cannotBeFloat), 0,(const Char *)&nmiv_7,13,(const Char *)&sgiv_7,1,1,0x2,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, cannotBeDouble), 0,(const Char *)&nmiv_8,14,(const Char *)&sgiv_8,1,1,0x2,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, cannotBeAddress), 0,(const Char *)&nmiv_9,15,(const Char *)&sgiv_9,1,1,0x2,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, cannotBeRef), 0,(const Char *)&nmiv_10,11,(const Char *)&sgiv_10,1,1,0x2,10}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, isArrayOf), 0,(const Char *)&nmiv_11,9,(const Char *)&sgiv_11,55,1,0x0,11}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, isElementOf), 0,(const Char *)&nmiv_12,11,(const Char *)&sgiv_12,29,1,0x0,12}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, arrayDepth), 0,(const Char *)&nmiv_13,10,(const Char *)&sgiv_13,1,1,0x0,13}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, base), 0,(const Char *)&nmiv_14,4,(const Char *)&sgiv_14,55,1,0x0,14}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, count), 0,(const Char *)&nmiv_15,5,(const Char *)&sgiv_15,1,1,0x0,15}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, rep), 0,(const Char *)&nmiv_16,3,(const Char *)&sgiv_16,55,1,0x2,16}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, rank), 0,(const Char *)&nmiv_17,4,(const Char *)&sgiv_17,1,1,0x2,17}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr, ancestors), 0,(const Char *)&nmiv_18,9,(const Char *)&sgiv_18,18,1,0x2,18}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())access0_T_5n5Ex,
	(const Char *)&nmsm_0,8,(const Char *)&sgsm_0,58,
	1,0x8,25,xt_access0_T_5n5Ex},
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
} inr_ca_mcgill_sable_soot_jimp_Ag6Jr = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimp_Ag6Jr cl_ca_mcgill_sable_soot_jimp_Ag6Jr = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimp_Ag6Jr),
    37,
    1,
    19,
    0,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    24, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr,
    st_ca_mcgill_sable_soot_jimp_Ag6Jr,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    0,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimp_Ag6Jr,
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
	{TMIT_native_code, init_T_avP6R,(const Char *)&nmim_12,6,
	(const Char *)&sgim_12,45,1,0x0,0,xt_init_T_avP6R},
	{TMIT_native_code, init_TL_gfAcf,(const Char *)&nmim_13,6,
	(const Char *)&sgim_13,80,1,0x0,1,xt_init_TL_gfAcf},
	{TMIT_native_code, init_TC_E01uy,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,98,1,0x0,2,xt_init_TC_E01uy},
	{TMIT_native_code, ecr__8FqU0,(const Char *)&nmim_15,3,
	(const Char *)&sgim_15,57,1,0x0,3,xt_ecr__8FqU0},
	{TMIT_native_code, ecrUnion_T_SkRso,(const Char *)&nmim_16,8,
	(const Char *)&sgim_16,112,1,0x0,4,xt_ecrUnion_T_SkRso},
	{TMIT_native_code, merge_T_u0drW,(const Char *)&nmim_17,5,
	(const Char *)&sgim_17,58,1,0x2,5,xt_merge_T_u0drW},
	{TMIT_native_code, removeEcrIndirectRelatio__OMzuO,(const Char *)&nmim_18,26,
	(const Char *)&sgim_18,3,1,0x0,6,xt_removeEcrIndirectRelatio__OMzuO},
	{TMIT_native_code, ecrAddParent_T_BFTx8,(const Char *)&nmim_19,12,
	(const Char *)&sgim_19,58,1,0x0,7,xt_ecrAddParent_T_BFTx8},
	{TMIT_native_code, ecrAddChild_T_dY5SG,(const Char *)&nmim_20,11,
	(const Char *)&sgim_20,58,1,0x0,8,xt_ecrAddChild_T_dY5SG},
	{TMIT_native_code, ecrCannotBeInt__kNaLB,(const Char *)&nmim_21,14,
	(const Char *)&sgim_21,3,1,0x0,9,xt_ecrCannotBeInt__kNaLB},
	{TMIT_native_code, ecrCannotBeLong__hrYrt,(const Char *)&nmim_22,15,
	(const Char *)&sgim_22,3,1,0x0,10,xt_ecrCannotBeLong__hrYrt},
	{TMIT_native_code, ecrCannotBeFloat__j3rmg,(const Char *)&nmim_23,16,
	(const Char *)&sgim_23,3,1,0x0,11,xt_ecrCannotBeFloat__j3rmg},
	{TMIT_native_code, ecrCannotBeDouble__ojkpY,(const Char *)&nmim_24,17,
	(const Char *)&sgim_24,3,1,0x0,12,xt_ecrCannotBeDouble__ojkpY},
	{TMIT_native_code, ecrCannotBeAddress__lWATX,(const Char *)&nmim_25,18,
	(const Char *)&sgim_25,3,1,0x0,13,xt_ecrCannotBeAddress__lWATX},
	{TMIT_native_code, ecrCannotBeRef__ubdjq,(const Char *)&nmim_26,14,
	(const Char *)&sgim_26,3,1,0x0,14,xt_ecrCannotBeRef__ubdjq},
	{TMIT_native_code, getEcrId__zTCKM,(const Char *)&nmim_27,8,
	(const Char *)&sgim_27,3,1,0x0,15,xt_getEcrId__zTCKM},
	{TMIT_native_code, isEcrArray__QWHvw,(const Char *)&nmim_28,10,
	(const Char *)&sgim_28,3,1,0x0,16,xt_isEcrArray__QWHvw},
	{TMIT_native_code, ecrArrayDepth__0oKFx,(const Char *)&nmim_29,13,
	(const Char *)&sgim_29,3,1,0x0,17,xt_ecrArrayDepth__0oKFx},
	{TMIT_native_code, getEcrIsArrayOf__SinWm,(const Char *)&nmim_30,15,
	(const Char *)&sgim_30,57,1,0x0,18,xt_getEcrIsArrayOf__SinWm},
	{TMIT_native_code, getEcrParentIds__M0IPW,(const Char *)&nmim_31,15,
	(const Char *)&sgim_31,31,1,0x0,19,xt_getEcrParentIds__M0IPW},
	{TMIT_native_code, getEcrParents__grNtf,(const Char *)&nmim_32,13,
	(const Char *)&sgim_32,58,1,0x0,20,xt_getEcrParents__grNtf},
	{TMIT_native_code, getEcrChildren__Kw3Kx,(const Char *)&nmim_33,14,
	(const Char *)&sgim_33,58,1,0x0,21,xt_getEcrChildren__Kw3Kx},
	{TMIT_native_code, getEcrTypeNode__nk5LZ,(const Char *)&nmim_34,14,
	(const Char *)&sgim_34,55,1,0x0,22,xt_getEcrTypeNode__nk5LZ},
	{TMIT_native_code, setEcrTypeNode_C_5O4Ng,(const Char *)&nmim_35,14,
	(const Char *)&sgim_35,56,1,0x0,23,xt_setEcrTypeNode_C_5O4Ng},
	{TMIT_native_code, unsetEcrTypeNode__UCiJs,(const Char *)&nmim_36,16,
	(const Char *)&sgim_36,3,1,0x0,24,xt_unsetEcrTypeNode__UCiJs},
    } /* end of methodsigs */
};


/*M init_T_avP6R: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.<init>(Lca/mcgill/sable/soot/jimple/TypeResolver;)V */

Class xt_init_T_avP6R[] = { 0 };

Void init_T_avP6R(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
Int i0, i1, i2, i3;
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
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf = a2;
	a1 = av0;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rep = a2;
	a1 = av0;
	a2 = new(&cl_java_util_BitSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__wDgQm(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->ancestors = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->typeVariableInstances;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_java_util_Vector*)a2)->class->M.
		size__IEjK1.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->id = i2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_TL_gfAcf: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.<init>(Lca/mcgill/sable/soot/jimple/TypeResolver;Lca/mcgill/sable/soot/jimple/Local;)V */

Class xt_init_TL_gfAcf[] = { 0 };

Void init_TL_gfAcf(Object p0, Object p1, Object p2)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_T_avP6R(a1,a2);
	a1 = av1;
	a1 = access0_T_xUZ4S(a1);
	a2 = av2;
	a3 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av1;
	a1 = access1_T_or0Py(a1);
	a2 = av0;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_Local*)a3)->class->M.
		toString__gE0Kb.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_TC_E01uy: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.<init>(Lca/mcgill/sable/soot/jimple/TypeResolver;Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode;)V */

Class xt_init_TC_E01uy[] = { 0 };

Void init_TC_E01uy(Object p0, Object p1, Object p2)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;
	av1 = p1;
	av2 = p2;

L0:	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_T_avP6R(a1,a2);
	a1 = av1;
	a1 = access0_T_xUZ4S(a1);
	a2 = av2;
	a3 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av1;
	a1 = access1_T_or0Py(a1);
	a2 = av0;
	a3 = av2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_lang_Object*)a3)->class->M.
		toString__4d9OF.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		put_OO_4Xy3U.f(a1,a2,a3);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(51,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->numDimensions;
	i2 = 1;
	if (i1 <= i2)
		GOTO(67,L1);
	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation = i2;
	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a3)->numDimensions;
	i4 = 1;
	i3 = i3 - i4;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrIsArrayOf__SinWm.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
	return;

L1:	a1 = av1;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation = i2;
	a1 = av1;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrIsArrayOf__SinWm.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecr__8FqU0: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecr()Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_ecr__8FqU0[] = { 0 };

Object ecr__8FqU0(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rep;
	a2 = av0;
	if (a1 == a2)
		GOTO(5,L1);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->rep;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rep = a2;
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rep;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrUnion_T_SkRso: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrUnion(Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;)Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_ecrUnion_T_SkRso[] = { 0 };

Object ecrUnion_T_SkRso(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av3 = a1;
	a1 = av2;
	a2 = av3;
	if (a1 != a2)
		GOTO(20,L1);
	a1 = av2;
	return a1;

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rank;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->rank;
	if (i1 <= i2)
		GOTO(33,L2);
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	merge_T_u0drW(a1,a2);
	a1 = av3;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rep = a2;
	a1 = av2;
	return a1;

L2:	a1 = av3;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	merge_T_u0drW(a1,a2);
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rep = a2;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rank;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->rank;
	if (i1 != i2)
		GOTO(66,L3);
	a1 = av3;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->rank;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->rank = i2;
L3:	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M merge_T_u0drW: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.merge(Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;)V */

Class xt_merge_T_u0drW[] = { 0 };

Void merge_T_u0drW(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av4, av5, av6, av7;
Int i0, i1, i2, i3, i4;
Int iv3, iv4, iv5, iv6;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 != 0)
		GOTO(12,L1);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	GOTO(23,L2);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(30,L2);
	a1 = av1;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a3)->classHierarchy;
	a4 = v__43yOC();
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a3)->class->M.
		getTypeNode_T_Dr1me.f(a3,a4);
	a4 = a3;
	a3 = a2;
	a2 = a4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->typeNode = a4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[1];
	access2_S_Hv7tK(a1);
L2:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(78,L3);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
L3:	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->cannotBeInt;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->cannotBeInt;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeInt = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->cannotBeLong;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->cannotBeLong;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeLong = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->cannotBeFloat;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->cannotBeFloat;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeFloat = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->cannotBeDouble;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->cannotBeDouble;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeDouble = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->cannotBeAddress;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->cannotBeAddress;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeAddress = i2;
	a1 = av0;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->cannotBeRef;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->cannotBeRef;
	i2 = i2 | i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeRef = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isElementOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		or_I_bGKQH.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 != 0)
		GOTO(188,L4);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 == 0)
		GOTO(195,L5);
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	GOTO(237,L5);

L4:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 == 0)
		GOTO(244,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		or_I_bGKQH.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(327,L7);

L6:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av2;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	iv3 += 1;
L7:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(378,L6);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->children;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		or_I_bGKQH.f(a1,a2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(403,L9);

L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	iv4 += 1;
L9:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(456,L8);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(507,L23);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeInt;
	if (i1 == 0)
		GOTO(514,L10);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_IntType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(527,L10);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = v__43yOC();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[2];
	access2_S_Hv7tK(a1);
L10:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeLong;
	if (i1 == 0)
		GOTO(556,L11);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_LongType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(569,L11);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = v__43yOC();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[3];
	access2_S_Hv7tK(a1);
L11:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeFloat;
	if (i1 == 0)
		GOTO(598,L12);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_FloatType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(611,L12);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = v__43yOC();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[4];
	access2_S_Hv7tK(a1);
L12:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeDouble;
	if (i1 == 0)
		GOTO(640,L13);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_DoubleType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(653,L13);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = v__43yOC();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[5];
	access2_S_Hv7tK(a1);
L13:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeAddress;
	if (i1 == 0)
		GOTO(682,L14);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_StmtAddressType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(695,L14);
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = v__43yOC();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[6];
	access2_S_Hv7tK(a1);
L14:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeRef;
	if (i1 == 0)
		GOTO(724,L16);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(737,L15);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(750,L16);
L15:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->this0_oYxUV;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = v__43yOC();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[7];
	access2_S_Hv7tK(a1);
L16:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(786,L19);

L17:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av2;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(813,L18);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		hasAncestor_C_vEq1t.f(a1,a2);
	if (i1 != 0)
		GOTO(828,L18);
	a1 = av6;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a3)->classHierarchy;
	a4 = v__43yOC();
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a3)->class->M.
		getTypeNode_T_Dr1me.f(a3,a4);
	a4 = a3;
	a3 = a2;
	a2 = a4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->typeNode = a4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[8];
	access2_S_Hv7tK(a1);
L18:	iv5 += 1;
L19:	i1 = iv5;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(866,L17);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	i1 = 0;
	iv6 = i1;
	GOTO(880,L22);

L20:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av2;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct iarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	i2 = ((struct iarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elementAt_i_kG7lR.f(a1,i2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(907,L21);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	a2 = av7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		hasDescendant_C_REhcv.f(a1,a2);
	if (i1 != 0)
		GOTO(922,L21);
	a1 = av7;
	a2 = av0;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a3)->classHierarchy;
	a4 = v__43yOC();
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a3)->class->M.
		getTypeNode_T_Dr1me.f(a3,a4);
	a4 = a3;
	a3 = a2;
	a2 = a4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->typeNode = a4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	a1 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[9];
	access2_S_Hv7tK(a1);
L21:	iv6 += 1;
L22:	i1 = iv6;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(960,L20);
L23:	a1 = av1;
	a2 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents = a2;
	a1 = av1;
	a2 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children = a2;
	a1 = av1;
	a2 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf = a2;
	a1 = av1;
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeEcrIndirectRelatio__OMzuO: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.removeEcrIndirectRelations()V */

Class xt_removeEcrIndirectRelatio__OMzuO[] = { 0 };

Void removeEcrIndirectRelatio__OMzuO(Object p0)
{
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
Int iv3, iv4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av1 = a1;
	a1 = av1;
	a2 = new(&cl_java_util_BitSet.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__wDgQm(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->ancestors = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParents__grNtf.f(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(23,L2);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->ancestors;
	a2 = av2;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->ancestors;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		or_B_fxycd.f(a1,a2);
	iv3 += 1;
L2:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(45,L1);
	i1 = 0;
	iv4 = i1;
	GOTO(51,L6);

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->ancestors;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_BitSet*)a1)->class->M.
		get_i_hiyI5.f(a1,i2);
	if (i1 == 0)
		GOTO(68,L4);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
	GOTO(99,L5);

L4:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->ancestors;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_BitSet*)a1)->class->M.
		set_i_vNGfa.f(a1,i2);
L5:	iv4 += 1;
L6:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(123,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrAddParent_T_BFTx8: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrAddParent(Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;)V */

Class xt_ecrAddParent_T_BFTx8[] = { 0 };

Void ecrAddParent_T_BFTx8(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 == a2)
		GOTO(8,L2);
	i1 = access3__KSdbE();
	if (i1 == 0)
		GOTO(14,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a4)->this0_oYxUV;
	a4 = access1_T_or0Py(a4);
	a5 = av1;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a5)->class->M.
		ecr__8FqU0.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_util_Hashtable*)a4)->class->M.
		get_O_doAa7.f(a4,a5);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[10];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	a3 = access1_T_or0Py(a3);
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a4)->class->M.
		ecr__8FqU0.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Hashtable*)a3)->class->M.
		get_O_doAa7.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrAddChild_T_dY5SG: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrAddChild(Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;)V */

Class xt_ecrAddChild_T_dY5SG[] = { 0 };

Void ecrAddChild_T_dY5SG(Object p0, Object p1)
{
Object a0, a1, a2, a3, a4, a5;
Object av0, av1;
Int i0, i1, i2, i3, i4, i5;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 == a2)
		GOTO(8,L2);
	i1 = access3__KSdbE();
	if (i1 == 0)
		GOTO(14,L1);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a4)->this0_oYxUV;
	a4 = access1_T_or0Py(a4);
	a5 = av0;
	if (!a5) { 
		SetNPESource(); goto NULLX;
	}
	a5 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a5)->class->M.
		ecr__8FqU0.f(a5);
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_java_util_Hashtable*)a4)->class->M.
		get_O_doAa7.f(a4,a5);
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimp_Ag6Jr[10];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_S_6tRW4.f(a2,a3);
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	a3 = access1_T_or0Py(a3);
	a4 = av1;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a4)->class->M.
		ecr__8FqU0.f(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Hashtable*)a3)->class->M.
		get_O_doAa7.f(a3,a4);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_O_wO0jp.f(a2,a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
L2:	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrCannotBeInt__kNaLB: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrCannotBeInt()V */

Class xt_ecrCannotBeInt__kNaLB[] = { 0 };

Void ecrCannotBeInt__kNaLB(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeInt = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrCannotBeLong__hrYrt: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrCannotBeLong()V */

Class xt_ecrCannotBeLong__hrYrt[] = { 0 };

Void ecrCannotBeLong__hrYrt(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeLong = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrCannotBeFloat__j3rmg: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrCannotBeFloat()V */

Class xt_ecrCannotBeFloat__j3rmg[] = { 0 };

Void ecrCannotBeFloat__j3rmg(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeFloat = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrCannotBeDouble__ojkpY: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrCannotBeDouble()V */

Class xt_ecrCannotBeDouble__ojkpY[] = { 0 };

Void ecrCannotBeDouble__ojkpY(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeDouble = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrCannotBeAddress__lWATX: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrCannotBeAddress()V */

Class xt_ecrCannotBeAddress__lWATX[] = { 0 };

Void ecrCannotBeAddress__lWATX(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeAddress = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrCannotBeRef__ubdjq: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrCannotBeRef()V */

Class xt_ecrCannotBeRef__ubdjq[] = { 0 };

Void ecrCannotBeRef__ubdjq(Object p0)
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	i2 = 1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->cannotBeRef = i2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEcrId__zTCKM: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.getEcrId()I */

Class xt_getEcrId__zTCKM[] = { 0 };

Int getEcrId__zTCKM(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->id;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M isEcrArray__QWHvw: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.isEcrArray()Z */

Class xt_isEcrArray__QWHvw[] = { 0 };

Boolean isEcrArray__QWHvw(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 != 0)
		GOTO(7,L1);
	i1 = 0;
	return i1;

L1:	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M ecrArrayDepth__0oKFx: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.ecrArrayDepth()I */

Class xt_ecrArrayDepth__0oKFx[] = { 0 };

Int ecrArrayDepth__0oKFx(Object p0)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEcrIsArrayOf__SinWm: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.getEcrIsArrayOf()Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getEcrIsArrayOf__SinWm[] = { 0 };

Object getEcrIsArrayOf__SinWm(Object p0)
{
Object a0, a1, a2, a3, a4;
Object av0, av1;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av1 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 != 0)
		GOTO(9,L1);
	a1 = av1;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C);
	a3 = a2;
	a4 = av0;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	a4 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a4)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_T_avP6R(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->id;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEcrParentIds__M0IPW: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.getEcrParentIds()Lca/mcgill/sable/util/IntSet; */

Class xt_getEcrParentIds__M0IPW[] = { 0 };

Object getEcrParentIds__M0IPW(Object p0)
{
Class c0, c1;
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clone__4jRwz.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_util_IntSet.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEcrParents__grNtf: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.getEcrParents()[Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getEcrParents__grNtf[] = { 0 };

Object getEcrParents__grNtf(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av1 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(22,L2);

L1:	a1 = av3;
	i2 = iv4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a3)->typeVariableInstances;
	a4 = av2;
	i5 = iv4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Vector*)a3)->class->M.
		elementAt_i_kG7lR.f(a3,i4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv4 += 1;
L2:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(53,L1);
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEcrChildren__Kw3Kx: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.getEcrChildren()[Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getEcrChildren__Kw3Kx[] = { 0 };

Object getEcrChildren__Kw3Kx(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4, i5;
Int iv4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av1 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,i1);
	av3 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(22,L2);

L1:	a1 = av3;
	i2 = iv4;
	a3 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->this0_oYxUV;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a3)->typeVariableInstances;
	a4 = av2;
	i5 = iv4;
	if (!a4) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i5 >= ((struct iarray*)a4)->length)
		throwArrayIndexOutOfBoundsException(a4,i5);
	i4 = ((struct iarray*)a4)->data[i5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_java_util_Vector*)a3)->class->M.
		elementAt_i_kG7lR.f(a3,i4);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
	iv4 += 1;
L2:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(53,L1);
	a1 = av3;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getEcrTypeNode__nk5LZ: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.getEcrTypeNode()Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode; */

Class xt_getEcrTypeNode__nk5LZ[] = { 0 };

Object getEcrTypeNode__nk5LZ(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M setEcrTypeNode_C_5O4Ng: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.setEcrTypeNode(Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode;)Z */

Class xt_setEcrTypeNode_C_5O4Ng[] = { 0 };

Boolean setEcrTypeNode_C_5O4Ng(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av5, av6;
Int i0, i1, i2, i3, i4;
Int iv3, iv4;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParents__grNtf.f(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(7,L3);

L1:	a1 = av2;
	i2 = iv3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(16,L2);
	a1 = av1;
	a2 = av2;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		hasAncestor_C_vEq1t.f(a1,a2);
	if (i1 != 0)
		GOTO(29,L2);
	a1 = av1;
	a2 = av2;
	i3 = iv3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (a1 == a2)
		GOTO(39,L2);
	i1 = 0;
	return i1;

L2:	iv3 += 1;
L3:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(50,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrChildren__Kw3Kx.f(a1);
	av2 = a1;
	i1 = 0;
	iv4 = i1;
	GOTO(61,L6);

L4:	a1 = av2;
	i2 = iv4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode;
	if (a1 == 0)
		GOTO(71,L5);
	a1 = av1;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		hasDescendant_C_REhcv.f(a1,a2);
	if (i1 != 0)
		GOTO(85,L5);
	a1 = av1;
	a2 = av2;
	i3 = iv4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->typeNode;
	if (a1 == a2)
		GOTO(96,L5);
	i1 = 0;
	return i1;

L5:	iv4 += 1;
L6:	i1 = iv4;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(108,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		isEcrArray__QWHvw.f(a1);
	if (i1 == 0)
		GOTO(115,L10);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(125,L7);
	i1 = 0;
	return i1;

L7:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ArrayType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->numDimensions;
	i2 = 1;
	if (i1 <= i2)
		GOTO(145,L8);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->classHierarchy;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a3)->numDimensions;
	i4 = 1;
	i3 = i3 - i4;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->class->M.
		getTypeNode_T_Dr1me.f(a1,a2);
	GOTO(173,L9);

L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->this0_oYxUV;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->classHierarchy;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a2)->baseType;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a1)->class->M.
		getTypeNode_T_Dr1me.f(a1,a2);
L9:	av6 = a1;
	a1 = av6;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrIsArrayOf__SinWm.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrTypeNode__nk5LZ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		hasDescendant_C_REhcv.f(a1,a2);
	if (i1 != 0)
		GOTO(205,L10);
	i1 = 0;
	return i1;

L10:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	i1 = 1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M unsetEcrTypeNode__UCiJs: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.unsetEcrTypeNode()V */

Class xt_unsetEcrTypeNode__UCiJs[] = { 0 };

Void unsetEcrTypeNode__UCiJs(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->typeNode = a2;
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access0_T_5n5Ex: ca.mcgill.sable.soot.jimple.TypeResolver$TypeVariable.access$0(Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;)I */

Class xt_access0_T_5n5Ex[] = { 0 };

Int access0_T_5n5Ex(Object p1)
{
Object a0, a1;
Object av0;
Int i0, i1;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->id;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimp_Ag6Jr[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l','e','T',
'y','p','e',' ','E','r','r','o','r','(','1',')',':',' ','A','t','t','e',
'm','p','t',' ','t','o',' ','m','e','r','g','e',' ','i','n','c','o','m',
'p','a','t','i','b','l','e',' ','t','y','p','e','s','.','T','y','p','e',
' ','E','r','r','o','r','(','2',')',':',' ','S','h','o','u','l','d',' ',
'n','o','t',' ','b','e',' ','a','n',' ','I','n','t','T','y','p','e','.',
'T','y','p','e',' ','E','r','r','o','r','(','3',')',':',' ','S','h','o',
'u','l','d',' ','n','o','t',' ','b','e',' ','a',' ','L','o','n','g','T',
'y','p','e','.','T','y','p','e',' ','E','r','r','o','r','(','4',')',':',
' ','S','h','o','u','l','d',' ','n','o','t',' ','b','e',' ','a',' ','F',
'l','o','a','t','T','y','p','e','.','T','y','p','e',' ','E','r','r','o',
'r','(','5',')',':',' ','S','h','o','u','l','d',' ','n','o','t',' ','b',
'e',' ','a',' ','D','o','u','b','l','e','T','y','p','e','.','T','y','p',
'e',' ','E','r','r','o','r','(','6',')',':',' ','S','h','o','u','l','d',
' ','n','o','t',' ','b','e',' ','a',' ','S','t','m','t','A','d','d','r',
'e','s','s','T','y','p','e','.','T','y','p','e',' ','E','r','r','o','r',
'(','7',')',':',' ','S','h','o','u','l','d',' ','n','o','t',' ','b','e',
' ','a',' ','R','e','f','T','y','p','e',' ','n','o','r',' ','a','n',' ',
'A','r','r','a','y','T','y','p','e','.','T','y','p','e',' ','E','r','r',
'o','r','(','8',')',':',' ','P','a','r','e','n','t',' ','t','y','p','e',
' ','i','s',' ','n','o','t',' ','a',' ','v','a','l','i','d',' ','a','n',
'c','e','s','t','o','r','.','T','y','p','e',' ','E','r','r','o','r','(',
'9',')',':',' ','C','h','i','l','d',' ','t','y','p','e',' ','i','s',' ',
'n','o','t',' ','a',' ','v','a','l','i','d',' ','d','e','s','c','e','n',
'd','a','n','t','.',' ','<',' '};

const void *st_ca_mcgill_sable_soot_jimp_Ag6Jr[] = {
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+53,	/* 0. ca.mcgill.sable.soot.jimple.TypeResolver */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+104,	/* 1. Type Error(1): Attempt to merge incompat */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+144,	/* 2. Type Error(2): Should not be an IntType. */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+184,	/* 3. Type Error(3): Should not be a LongType. */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+225,	/* 4. Type Error(4): Should not be a FloatType */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+267,	/* 5. Type Error(5): Should not be a DoubleTyp */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+314,	/* 6. Type Error(6): Should not be a StmtAddre */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+370,	/* 7. Type Error(7): Should not be a RefType n */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+421,	/* 8. Type Error(8): Parent type is not a vali */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+473,	/* 9. Type Error(9): Child type is not a valid */
    ch_ca_mcgill_sable_soot_jimp_Ag6Jr+476,	/* 10.  <  */
    0};
