/*  ca_mcgill_sable_soot_jimple_TypeResolver.c -- from Java class ca.mcgill.sable.soot.jimple.TypeResolver  */
/*  created by Toba  */

#include "toba.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Class.h"
#include "ca_mcgill_sable_soot_ArrayType.h"
#include "ca_mcgill_sable_soot_BaseType.h"
#include "ca_mcgill_sable_soot_DoubleType.h"
#include "ca_mcgill_sable_soot_ErroneousType.h"
#include "ca_mcgill_sable_soot_FloatType.h"
#include "ca_mcgill_sable_soot_IntType.h"
#include "ca_mcgill_sable_soot_LongType.h"
#include "ca_mcgill_sable_soot_NullType.h"
#include "ca_mcgill_sable_soot_RefType.h"
#include "ca_mcgill_sable_soot_SootClass.h"
#include "ca_mcgill_sable_soot_SootMethod.h"
#include "ca_mcgill_sable_soot_StmtAddressType.h"
#include "ca_mcgill_sable_soot_UnknownType.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy.h"
#include "ca_mcgill_sable_soot_jimple_ClassHierarchy$TypeNode.h"
#include "ca_mcgill_sable_soot_jimple_JimpleBody.h"
#include "ca_mcgill_sable_soot_jimple_Local.h"
#include "ca_mcgill_sable_soot_jimple_Stmt.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$1$RecursiveFunction.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$ConstraintCollector.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$SCC.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeException.h"
#include "ca_mcgill_sable_soot_jimple_TypeResolver$TypeVariable.h"
#include "ca_mcgill_sable_util_AbstractCollection.h"
#include "ca_mcgill_sable_util_AbstractList.h"
#include "ca_mcgill_sable_util_ArrayList.h"
#include "ca_mcgill_sable_util_IntSet.h"
#include "ca_mcgill_sable_util_Iterator.h"
#include "ca_mcgill_sable_util_LinkedList.h"
#include "ca_mcgill_sable_util_List.h"
#include "java_io_PrintStream.h"
#include "java_lang_Math.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_util_Enumeration.h"
#include "java_util_Hashtable.h"
#include "java_util_Vector.h"

static const Class supers[] = {
    &cl_ca_mcgill_sable_soot_jimple_TypeResolver.C,
    &cl_java_lang_Object.C,
};

static const Class inters[] = {
    0
};

static const Class others[] = {
    &cl_ca_mcgill_sable_soot_ArrayType.C,
    &cl_ca_mcgill_sable_soot_BaseType.C,
    &cl_ca_mcgill_sable_soot_DoubleType.C,
    &cl_ca_mcgill_sable_soot_ErroneousType.C,
    &cl_ca_mcgill_sable_soot_FloatType.C,
    &cl_ca_mcgill_sable_soot_IntType.C,
    &cl_ca_mcgill_sable_soot_LongType.C,
    &cl_ca_mcgill_sable_soot_NullType.C,
    &cl_ca_mcgill_sable_soot_RefType.C,
    &cl_ca_mcgill_sable_soot_SootClass.C,
    &cl_ca_mcgill_sable_soot_SootMethod.C,
    &cl_ca_mcgill_sable_soot_StmtAddressType.C,
    &cl_ca_mcgill_sable_soot_UnknownType.C,
    &cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C,
    &cl_ca_mcgill_sable_soot_jimp_vtc6C.C,
    &cl_ca_mcgill_sable_soot_jimple_JimpleBody.C,
    &cl_ca_mcgill_sable_soot_jimple_Local.C,
    &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
    &cl_ca_mcgill_sable_soot_jimp_h9ITA.C,
    &cl_ca_mcgill_sable_soot_jimp_KfqdG.C,
    &cl_ca_mcgill_sable_soot_jimp_Hv6gk.C,
    &cl_ca_mcgill_sable_soot_jimp_VCk9q.C,
    &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
    &cl_ca_mcgill_sable_util_AbstractCollection.C,
    &cl_ca_mcgill_sable_util_AbstractList.C,
    &cl_ca_mcgill_sable_util_ArrayList.C,
    &cl_ca_mcgill_sable_util_IntSet.C,
    &cl_ca_mcgill_sable_util_Iterator.C,
    &cl_ca_mcgill_sable_util_LinkedList.C,
    &cl_ca_mcgill_sable_util_List.C,
    &cl_java_io_PrintStream.C,
    &cl_java_lang_Math.C,
    &cl_java_lang_String.C,
    &cl_java_lang_StringBuffer.C,
    &cl_java_lang_System.C,
    &cl_java_util_Enumeration.C,
    &cl_java_util_Hashtable.C,
    &cl_java_util_Vector.C,
};

extern const Char ch_ca_mcgill_sable_soot_jimple_TypeResolver[];
extern const void *st_ca_mcgill_sable_soot_jimple_TypeResolver[];
extern Class xt_debug_locals__hajBy[];
extern Class xt_debug__6V56c[];
extern Class xt_init_J_pMscf[];
extern Class xt_removeRelationsBetweenNo__cXPey[];
extern Class xt_addRelationsBetweenHardN__J074f[];
extern Class xt_assignTypesToLocals_J_mCKHq[];
extern Class xt_getTypeVariable_L_kY55E[];
extern Class xt_getTypeVariable_C_WeRjk[];
extern Class xt_getTypeVariable_S_0ytVQ[];
extern Class xt_getTypeVariable_T_bKxDy[];
extern Class xt_collapseStronglyConnecte__ry1nt[];
extern Class xt_mergeAll_T_7pkpt[];
extern Class xt_propagateArrayConstraint__HOgZ5[];
extern Class xt_mergeBaseTypeArrays__abBmh[];
extern Class xt_propagateConstrains__2TXK8[];
extern Class xt_computeArrayDepths__pUQw1[];
extern Class xt_resolveSingleRelations__KDeE7[];
extern Class xt_removeIndirectRelations__qWh4w[];
extern Class xt_resolveComplexRelations__0p2Vt[];
extern Class xt_error_S_vm81s[];
extern Class xt_access0_T_xUZ4S[];
extern Class xt_access1_T_or0Py[];
extern Class xt_access2_S_Hv7tK[];
extern Class xt_access3__KSdbE[];

#define HASHMASK 0x7
/*  1.  8942e761  (1)  hashCode  */
/*  2.  4c0d6fd2  (2)  clone  */
/*  6.  c2aafd4e  (6)  equals  */
/*  7.  489f8e6f  (7)  toString  */
static const struct ihash htable[9] = {
    0, 0,
    -1992104095, &cl_ca_mcgill_sable_soot_jimple_TypeResolver.M.hashCode__8wJNW,
    1275949010, &cl_ca_mcgill_sable_soot_jimple_TypeResolver.M.clone__dslwm,
    0, 0, 0, 0, 0, 0,
    -1028981426, &cl_ca_mcgill_sable_soot_jimple_TypeResolver.M.equals_O_Ba6e0,
    1218416239, &cl_ca_mcgill_sable_soot_jimple_TypeResolver.M.toString__4d9OF,
    0, 0,
};

static const CARRAY(40) nmchars = {&acl_char, 0, 40, 0,
'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r'};
static struct in_java_lang_String classname =
    { &cl_java_lang_String, 0, (Object)&nmchars, 0, 40 };
static const Char nmcv_0[] = {
'D','E','B','U','G'};
static const Char sgcv_0[] = {
'Z'};
static const Char nmcv_1[] = {
'l','a','s','t','C','l','a','s','s'};
static const Char sgcv_1[] = {
'L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',';'};
static const Char nmiv_0[] = {
'c','l','a','s','s','H','i','e','r','a','r','c','h','y'};
static const Char sgiv_0[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H','i',
'e','r','a','r','c','h','y',';'};
static const Char nmiv_1[] = {
'c','u','r','r','e','n','t','M','e','t','h','o','d'};
static const Char sgiv_1[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','S','o','o','t','M','e','t','h','o','d',';'};
static const Char nmiv_2[] = {
't','y','p','e','V','a','r','i','a','b','l','e','I','n','s','t','a','n',
'c','e','s'};
static const Char sgiv_2[] = {
'L','j','a','v','a','/','u','t','i','l','/','V','e','c','t','o','r',';'};
static const Char nmiv_3[] = {
't','y','p','e','V','a','r','i','a','b','l','e','H','a','s','h','t','a',
'b','l','e'};
static const Char sgiv_3[] = {
'L','j','a','v','a','/','u','t','i','l','/','H','a','s','h','t','a','b',
'l','e',';'};
static const Char nmiv_4[] = {
't','y','p','e','V','a','r','i','a','b','l','e','S','t','r','i','n','g',
'H','a','s','h','t','a','b','l','e'};
static const Char sgiv_4[] = {
'L','j','a','v','a','/','u','t','i','l','/','H','a','s','h','t','a','b',
'l','e',';'};
static const Char nmiv_5[] = {
'c','o','n','s','t','r','a','i','n','t','C','o','l','l','e','c','t','o',
'r'};
static const Char sgiv_5[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s',
'o','l','v','e','r','$','C','o','n','s','t','r','a','i','n','t','C','o',
'l','l','e','c','t','o','r',';'};
static const Char nmiv_6[] = {
'u','n','r','e','s','o','l','v','e','d','T','y','p','e','V','a','r','i',
'a','b','l','e','s'};
static const Char sgiv_6[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','u',
't','i','l','/','I','n','t','S','e','t',';'};
static const Char nmiv_7[] = {
'n','e','w','_','r','e','l','a','t','i','o','n'};
static const Char sgiv_7[] = {
'Z'};
static const Char nmiv_8[] = {
's','t','m','t','B','o','d','y'};
static const Char sgiv_8[] = {
'L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s',
'o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e','B',
'o','d','y',';'};
static const Char nmsm_0[] = {
'a','s','s','i','g','n','T','y','p','e','s','T','o','L','o','c','a','l',
's'};
static const Char sgsm_0[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';',')','V'};
static const Char nmsm_1[] = {
'e','r','r','o','r'};
static const Char sgsm_1[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmsm_2[] = {
'a','c','c','e','s','s','$','0'};
static const Char sgsm_2[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r',';',')','L','j','a','v','a','/','u','t','i','l',
'/','H','a','s','h','t','a','b','l','e',';'};
static const Char nmsm_3[] = {
'a','c','c','e','s','s','$','1'};
static const Char sgsm_3[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r',';',')','L','j','a','v','a','/','u','t','i','l',
'/','H','a','s','h','t','a','b','l','e',';'};
static const Char nmsm_4[] = {
'a','c','c','e','s','s','$','2'};
static const Char sgsm_4[] = {
'(','L','j','a','v','a','/','l','a','n','g','/','S','t','r','i','n','g',
';',')','V'};
static const Char nmsm_5[] = {
'a','c','c','e','s','s','$','3'};
static const Char sgsm_5[] = {
'(',')','Z'};
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
'd','e','b','u','g','_','l','o','c','a','l','s'};
static const Char sgim_12[] = {
'(',')','V'};
static const Char nmim_13[] = {
'd','e','b','u','g'};
static const Char sgim_13[] = {
'(',')','V'};
static const Char nmim_14[] = {
'<','i','n','i','t','>'};
static const Char sgim_14[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','J','i','m','p','l','e',
'B','o','d','y',';',')','V'};
static const Char nmim_15[] = {
'r','e','m','o','v','e','R','e','l','a','t','i','o','n','s','B','e','t',
'w','e','e','n','N','o','n','E','c','r','s'};
static const Char sgim_15[] = {
'(',')','V'};
static const Char nmim_16[] = {
'a','d','d','R','e','l','a','t','i','o','n','s','B','e','t','w','e','e',
'n','H','a','r','d','N','o','d','e','s'};
static const Char sgim_16[] = {
'(',')','V'};
static const Char nmim_17[] = {
'g','e','t','T','y','p','e','V','a','r','i','a','b','l','e'};
static const Char sgim_17[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','L','o','c','a','l',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';'};
static const Char nmim_18[] = {
'g','e','t','T','y','p','e','V','a','r','i','a','b','l','e'};
static const Char sgim_18[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','C','l','a','s','s','H',
'i','e','r','a','r','c','h','y','$','T','y','p','e','N','o','d','e',';',
')','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';'};
static const Char nmim_19[] = {
'g','e','t','T','y','p','e','V','a','r','i','a','b','l','e'};
static const Char sgim_19[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','S','o','o','t','C','l','a','s','s',';',')','L','c',
'a','/','m','c','g','i','l','l','/','s','a','b','l','e','/','s','o','o',
't','/','j','i','m','p','l','e','/','T','y','p','e','R','e','s','o','l',
'v','e','r','$','T','y','p','e','V','a','r','i','a','b','l','e',';'};
static const Char nmim_20[] = {
'g','e','t','T','y','p','e','V','a','r','i','a','b','l','e'};
static const Char sgim_20[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','T','y','p','e',';',')','L','c','a','/','m','c','g',
'i','l','l','/','s','a','b','l','e','/','s','o','o','t','/','j','i','m',
'p','l','e','/','T','y','p','e','R','e','s','o','l','v','e','r','$','T',
'y','p','e','V','a','r','i','a','b','l','e',';'};
static const Char nmim_21[] = {
'c','o','l','l','a','p','s','e','S','t','r','o','n','g','l','y','C','o',
'n','n','e','c','t','e','d','C','o','m','p','o','n','e','n','t','s'};
static const Char sgim_21[] = {
'(',')','V'};
static const Char nmim_22[] = {
'm','e','r','g','e','A','l','l'};
static const Char sgim_22[] = {
'(','L','c','a','/','m','c','g','i','l','l','/','s','a','b','l','e','/',
's','o','o','t','/','j','i','m','p','l','e','/','T','y','p','e','R','e',
's','o','l','v','e','r','$','T','y','p','e','V','a','r','i','a','b','l',
'e',';',')','Z'};
static const Char nmim_23[] = {
'p','r','o','p','a','g','a','t','e','A','r','r','a','y','C','o','n','s',
't','r','a','i','n','t','s'};
static const Char sgim_23[] = {
'(',')','V'};
static const Char nmim_24[] = {
'm','e','r','g','e','B','a','s','e','T','y','p','e','A','r','r','a','y',
's'};
static const Char sgim_24[] = {
'(',')','V'};
static const Char nmim_25[] = {
'p','r','o','p','a','g','a','t','e','C','o','n','s','t','r','a','i','n',
's'};
static const Char sgim_25[] = {
'(',')','V'};
static const Char nmim_26[] = {
'c','o','m','p','u','t','e','A','r','r','a','y','D','e','p','t','h','s'};
static const Char sgim_26[] = {
'(',')','V'};
static const Char nmim_27[] = {
'r','e','s','o','l','v','e','S','i','n','g','l','e','R','e','l','a','t',
'i','o','n','s'};
static const Char sgim_27[] = {
'(',')','Z'};
static const Char nmim_28[] = {
'r','e','m','o','v','e','I','n','d','i','r','e','c','t','R','e','l','a',
't','i','o','n','s'};
static const Char sgim_28[] = {
'(',')','V'};
static const Char nmim_29[] = {
'r','e','s','o','l','v','e','C','o','m','p','l','e','x','R','e','l','a',
't','i','o','n','s'};
static const Char sgim_29[] = {
'(',')','Z'};

static struct vt_generic cv_table[] = {
    {0,&cl_ca_mcgill_sable_soot_jimple_TypeResolver.V.DEBUG,(const Char *)&nmcv_0,5,(const Char *)&sgcv_0,1,1,0x1a,0}, 
    {0,&cl_ca_mcgill_sable_soot_jimple_TypeResolver.V.lastClass,(const Char *)&nmcv_1,9,(const Char *)&sgcv_1,18,1,0x8,3}, 
};

#ifndef offsetof
#define offsetof(s,m) ((int)&(((s *)0))->m)
#endif
static struct vt_generic iv_table[] = {
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, classHierarchy), 0,(const Char *)&nmiv_0,14,(const Char *)&sgiv_0,44,1,0x0,1}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, currentMethod), 0,(const Char *)&nmiv_1,13,(const Char *)&sgiv_1,33,1,0x0,2}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, typeVariableInstances), 0,(const Char *)&nmiv_2,21,(const Char *)&sgiv_2,18,1,0x0,4}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, typeVariableHashtable), 0,(const Char *)&nmiv_3,21,(const Char *)&sgiv_3,21,1,0x2,5}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, typeVariableStringHashtable), 0,(const Char *)&nmiv_4,27,(const Char *)&sgiv_4,21,1,0x2,6}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, constraintCollector), 0,(const Char *)&nmiv_5,19,(const Char *)&sgiv_5,62,1,0x2,7}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, unresolvedTypeVariables), 0,(const Char *)&nmiv_6,23,(const Char *)&sgiv_6,29,1,0x0,8}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, new_relation), 0,(const Char *)&nmiv_7,12,(const Char *)&sgiv_7,1,1,0x0,9}, 
    { offsetof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver, stmtBody), 0,(const Char *)&nmiv_8,8,(const Char *)&sgiv_8,40,1,0x2,10}, 
};
#undef offsetof

static struct mt_generic sm_table[] = {
    {TMIT_native_code, (Void(*)())assignTypesToLocals_J_mCKHq,
	(const Char *)&nmsm_0,19,(const Char *)&sgsm_0,43,
	1,0x9,5,xt_assignTypesToLocals_J_mCKHq},
    {TMIT_native_code, (Void(*)())error_S_vm81s,
	(const Char *)&nmsm_1,5,(const Char *)&sgsm_1,21,
	1,0xa,19,xt_error_S_vm81s},
    {TMIT_native_code, (Void(*)())access0_T_xUZ4S,
	(const Char *)&nmsm_2,8,(const Char *)&sgsm_2,65,
	1,0x8,20,xt_access0_T_xUZ4S},
    {TMIT_native_code, (Void(*)())access1_T_or0Py,
	(const Char *)&nmsm_3,8,(const Char *)&sgsm_3,65,
	1,0x8,21,xt_access1_T_or0Py},
    {TMIT_native_code, (Void(*)())access2_S_Hv7tK,
	(const Char *)&nmsm_4,8,(const Char *)&sgsm_4,21,
	1,0x8,22,xt_access2_S_Hv7tK},
    {TMIT_native_code, (Void(*)())access3__KSdbE,
	(const Char *)&nmsm_5,8,(const Char *)&sgsm_5,3,
	1,0x8,23,xt_access3__KSdbE},
};

static void
initStaticFields (void) {
    extern struct in_java_lang_String *intern_string(struct in_java_lang_String *str);
   {
   cl_ca_mcgill_sable_soot_jimple_TypeResolver.V.DEBUG = 0;
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
} inr_ca_mcgill_sable_soot_jimple_TypeResolver = {
  (struct cl_generic *)&cl_toba_classfile_ClassRef.C, 0, &classname, &cl_ca_mcgill_sable_soot_jimple_TypeResolver.C.classclass, 0};

struct cl_ca_mcgill_sable_soot_jimple_TypeResolver cl_ca_mcgill_sable_soot_jimple_TypeResolver = { {
    1, 0,
    &classname,
    &cl_java_lang_Class.C, 0,
    sizeof(struct in_ca_mcgill_sable_soot_jimple_TypeResolver),
    30,
    6,
    9,
    2,
    2, supers,
    0, 0, inters, HASHMASK, htable,
    38, others,
    0, 0,
    ch_ca_mcgill_sable_soot_jimple_TypeResolver,
    st_ca_mcgill_sable_soot_jimple_TypeResolver,
    0,
    throwNoSuchMethodError,
    finalize__UKxhs,
    initStaticFields,
    0,
    43,
    0x20,
    0,
    (struct in_toba_classfile_ClassRef *)&inr_ca_mcgill_sable_soot_jimple_TypeResolver,
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
	{TMIT_native_code, debug_locals__hajBy,(const Char *)&nmim_12,12,
	(const Char *)&sgim_12,3,1,0x2,0,xt_debug_locals__hajBy},
	{TMIT_native_code, debug__6V56c,(const Char *)&nmim_13,5,
	(const Char *)&sgim_13,3,1,0x2,1,xt_debug__6V56c},
	{TMIT_native_code, init_J_pMscf,(const Char *)&nmim_14,6,
	(const Char *)&sgim_14,43,1,0x2,2,xt_init_J_pMscf},
	{TMIT_native_code, removeRelationsBetweenNo__cXPey,(const Char *)&nmim_15,29,
	(const Char *)&sgim_15,3,1,0x2,3,xt_removeRelationsBetweenNo__cXPey},
	{TMIT_native_code, addRelationsBetweenHardN__J074f,(const Char *)&nmim_16,28,
	(const Char *)&sgim_16,3,1,0x2,4,xt_addRelationsBetweenHardN__J074f},
	{TMIT_native_code, getTypeVariable_L_kY55E,(const Char *)&nmim_17,15,
	(const Char *)&sgim_17,92,1,0x0,6,xt_getTypeVariable_L_kY55E},
	{TMIT_native_code, getTypeVariable_C_WeRjk,(const Char *)&nmim_18,15,
	(const Char *)&sgim_18,110,1,0x0,7,xt_getTypeVariable_C_WeRjk},
	{TMIT_native_code, getTypeVariable_S_0ytVQ,(const Char *)&nmim_19,15,
	(const Char *)&sgim_19,89,1,0x0,8,xt_getTypeVariable_S_0ytVQ},
	{TMIT_native_code, getTypeVariable_T_bKxDy,(const Char *)&nmim_20,15,
	(const Char *)&sgim_20,84,1,0x0,9,xt_getTypeVariable_T_bKxDy},
	{TMIT_native_code, collapseStronglyConnecte__ry1nt,(const Char *)&nmim_21,35,
	(const Char *)&sgim_21,3,1,0x2,10,xt_collapseStronglyConnecte__ry1nt},
	{TMIT_native_code, mergeAll_T_7pkpt,(const Char *)&nmim_22,8,
	(const Char *)&sgim_22,58,1,0x2,11,xt_mergeAll_T_7pkpt},
	{TMIT_native_code, propagateArrayConstraint__HOgZ5,(const Char *)&nmim_23,25,
	(const Char *)&sgim_23,3,1,0x2,12,xt_propagateArrayConstraint__HOgZ5},
	{TMIT_native_code, mergeBaseTypeArrays__abBmh,(const Char *)&nmim_24,19,
	(const Char *)&sgim_24,3,1,0x2,13,xt_mergeBaseTypeArrays__abBmh},
	{TMIT_native_code, propagateConstrains__2TXK8,(const Char *)&nmim_25,19,
	(const Char *)&sgim_25,3,1,0x2,14,xt_propagateConstrains__2TXK8},
	{TMIT_native_code, computeArrayDepths__pUQw1,(const Char *)&nmim_26,18,
	(const Char *)&sgim_26,3,1,0x2,15,xt_computeArrayDepths__pUQw1},
	{TMIT_native_code, resolveSingleRelations__KDeE7,(const Char *)&nmim_27,22,
	(const Char *)&sgim_27,3,1,0x2,16,xt_resolveSingleRelations__KDeE7},
	{TMIT_native_code, removeIndirectRelations__qWh4w,(const Char *)&nmim_28,23,
	(const Char *)&sgim_28,3,1,0x2,17,xt_removeIndirectRelations__qWh4w},
	{TMIT_native_code, resolveComplexRelations__0p2Vt,(const Char *)&nmim_29,23,
	(const Char *)&sgim_29,3,1,0x2,18,xt_resolveComplexRelations__0p2Vt},
    } /* end of methodsigs */
};


/*M debug_locals__hajBy: ca.mcgill.sable.soot.jimple.TypeResolver.debug_locals()V */

Class xt_debug_locals__hajBy[] = { 0 };

Void debug_locals__hajBy(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3, i4;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->stmtBody;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av1 = a1;
	GOTO(13,L3);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = av2;
	a4 = valueOf_O_6F80r(a4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[1];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	a1 = av0;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av3 = a1;
	a1 = av3;
	if (a1 != 0)
		GOTO(61,L2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	GOTO(72,L3);

L2:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrId__zTCKM.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_i_2X6LP.f(a1,i2);
L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(91,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M debug__6V56c: ca.mcgill.sable.soot.jimple.TypeResolver.debug()V */

Class xt_debug__6V56c[] = { 0 };

Void debug__6V56c(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av3, av4, av5, av6;
Int i0, i1, i2, i3, i4;
Int iv1, iv2, iv6, iv7;
PROLOGUE;

	av0 = p0;

L0:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println_S_RrOJH.f(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	debug_locals__hajBy(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	iv1 = i1;
	i1 = 0;
	iv2 = i1;
	GOTO(22,L11);

L1:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	i2 = iv2;
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
	av3 = a1;
	a1 = av3;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(42,L10);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	i4 = iv2;
	a4 = valueOf_i_N2qKF(i4);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[4];
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
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	av4 = a1;
	a1 = av4;
	if (a1 == 0)
		GOTO(78,L2);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a3)->class->M.
		getType__5MvoB.f(a3);
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
		print_S_N0HOG.f(a1,a2);
L2:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParents__grNtf.f(a1);
	av5 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 == 0)
		GOTO(122,L5);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[6];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	i1 = 0;
	iv6 = i1;
	GOTO(136,L4);

L3:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av5;
	i4 = iv6;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->class->M.
		getEcrId__zTCKM.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	iv6 += 1;
L4:	i1 = iv6;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(176,L3);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
L5:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrChildren__Kw3Kx.f(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 == 0)
		GOTO(194,L8);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[7];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	i1 = 0;
	iv7 = i1;
	GOTO(208,L7);

L6:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[5];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av6;
	i4 = iv7;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i4 >= ((struct aarray*)a3)->length)
		throwArrayIndexOutOfBoundsException(a3,i4);
	a3 = ((struct aarray*)a3)->data[i4];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->class->M.
		getEcrId__zTCKM.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		toString__GjBaS.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		print_S_N0HOG.f(a1,a2);
	iv7 += 1;
L7:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(248,L6);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_io_PrintStream*)a1)->class->M.
		println__VnECc.f(a1);
L8:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 == 0)
		GOTO(261,L9);
	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[8];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->isArrayOf;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->class->M.
		getEcrId__zTCKM.f(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
L9:	init_java_lang_System();
	a1 = cl_java_lang_System.V.out;
	a2 = new(&cl_java_lang_StringBuffer.C);
	a3 = a2;
	a4 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[9];
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_S_a8OuK(a3,a4);
	a3 = av3;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->arrayDepth;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_java_lang_StringBuffer*)a2)->class->M.
		append_i_ZQIqx.f(a2,i3);
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
L10:	iv2 += 1;
L11:	i1 = iv2;
	i2 = iv1;
	if (i1 < i2)
		GOBACK(322,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M init_J_pMscf: ca.mcgill.sable.soot.jimple.TypeResolver.<init>(Lca/mcgill/sable/soot/jimple/JimpleBody;)V */

Class xt_init_J_pMscf[] = { 0 };

Void init_J_pMscf(Object p0, Object p1)
{
static struct handler htable[] = {
    &cl_ca_mcgill_sable_soot_jimp_VCk9q.C, 60, 405, 9,
};
struct mythread *tdata;
jmp_buf newbuf;
void *oldbuf;
volatile int pc;
int tgt;
Class c0, c1;
Object a0, a1, a2, a3, a4;
volatile Object av0, av1, av2, av3, av4;
Int i0, i1, i2, i3, i4;
volatile Int iv3;
PROLOGUE;

	av0 = p0;
	av1 = p1;

	tdata = mythread();
	oldbuf = tdata->jmpbuf;
	tgt = 0;
	if (setjmp(newbuf)) {
		sthread_got_exception();
		a1 = tdata->exception;
		if ((tgt = findhandler(htable, 1, a1, pc)) < 0)
			longjmp(oldbuf, 1);
	}
	tdata->jmpbuf = newbuf;

TOP: switch(tgt) {

L0:  case 0:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init__AAyKx(a1);
	a1 = av0;
	a2 = new(&cl_java_util_Vector.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__kkKK3(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances = a2;
	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lkK9b(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableHashtable = a2;
	a1 = av0;
	a2 = new(&cl_java_util_Hashtable.C);
	a3 = a2;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init__lkK9b(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableStringHashtable = a2;
	a1 = av0;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_KfqdG.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_T_SIRdI(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->constraintCollector = a2;
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
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables = a2;
	pc = 60;
	a1 = av0;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->stmtBody = a2;
	a1 = av0;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a2)->class->M.
		getMethod__6GJJv.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->currentMethod = a2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->currentMethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getDeclaringClass__ywcIy.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	a2 = cl_ca_mcgill_sable_soot_jimple_TypeResolver.V.lastClass;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_String*)a1)->class->M.
		equals_O_lnqT0.f(a1,a2);
	if (i1 != 0)
		GOTO(89,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->currentMethod;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a1)->class->M.
		getDeclaringClass__ywcIy.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_SootClass*)a1)->class->M.
		getName__xn8ku.f(a1);
	cl_ca_mcgill_sable_soot_jimple_TypeResolver.V.lastClass = a1;
L1:  case 1:
	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->currentMethod;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootMethod*)a2)->class->M.
		getDeclaringClass__ywcIy.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_SootClass*)a2)->class->M.
		getManager__ukjHg.f(a2);
	a2 = getClassHierarchy_S_6aZ1Q(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->classHierarchy = a2;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getStmtList__BJdpo.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_ArrayList*)a1)->class->M.
		iterator__F7r0r.f(a1);
	av2 = a1;
	GOTO(130,L3);

L2:  case 2:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Stmt.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->constraintCollector;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	(*(Void(*)())findinterface(a1,1229806575)->f)(a1,a2);
L3:  case 3:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(159,L2);
	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[10];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[11];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a1 = av0;
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__GKSua();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__0Qzrs();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__m4rGl();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__idXk2();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__u8Teb();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
L4:  case 4:
	a1 = av0;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation = i2;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	collapseStronglyConnecte__ry1nt(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->new_relation;
	i2 = 1;
	if (i1 == i2)
		GOBACK(264,L4);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	propagateArrayConstraint__HOgZ5(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	addRelationsBetweenHardN__J074f(a1);
	a1 = av0;
	a2 = av0;
	a3 = v__GKSua();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__0Qzrs();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__m4rGl();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__idXk2();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	a2 = av0;
	a3 = v__u8Teb();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	collapseStronglyConnecte__ry1nt(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		size__hGMbe.f(a1);
	if (i1 == 0)
		GOTO(346,L5);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = resolveSingleRelations__KDeE7(a1);
L5:  case 5:
	i1 = 1;
	iv3 = i1;
	GOTO(356,L7);

L6:  case 6:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	removeIndirectRelations__qWh4w(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = resolveSingleRelations__KDeE7(a1);
	iv3 = i1;
L7:  case 7:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		size__hGMbe.f(a1);
	if (i1 == 0)
		GOTO(375,L8);
	i1 = iv3;
	if (i1 != 0)
		GOBACK(379,L6);
L8:  case 8:
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		size__hGMbe.f(a1);
	if (i1 == 0)
		GOTO(389,L10);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = resolveComplexRelations__0p2Vt(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		size__hGMbe.f(a1);
	pc = 405;
	GOTO(405,L10);

L9:  case 9:
	pc = 408;
L10:  case 10:
	pc = 409;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_JimpleBody*)a1)->class->M.
		getLocals__iAK9r.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,-1180110655)->f)(a1);
	av2 = a1;
	GOTO(419,L18);

L11:  case 11:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,921304864)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimple_Local.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_L_kY55E.f(a1,a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av4 = a1;
	a1 = av4;
	if (a1 != 0)
		GOTO(444,L12);
	a1 = av3;
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
	GOTO(454,L18);

L12:  case 12:
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	if (i1 != 0)
		GOTO(462,L14);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 != 0)
		GOTO(470,L13);
	a1 = av3;
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
	GOTO(480,L18);

L13:  case 13:
	a1 = av3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrTypeNode__nk5LZ.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->class->M.
		getType__5MvoB.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
	GOTO(495,L18);

L14:  case 14:
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 == 0)
		GOTO(503,L15);
	a1 = av3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrTypeNode__nk5LZ.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->class->M.
		getType__5MvoB.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
	GOTO(518,L18);

L15:  case 15:
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 != 0)
		GOTO(529,L16);
	a1 = av3;
	a2 = v__SUHmS();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
	GOTO(539,L18);

L16:  case 16:
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_ErroneousType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 == 0)
		GOTO(556,L17);
	a1 = av3;
	a2 = v__43yOC();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
	GOTO(566,L18);

L17:  case 17:
	a1 = av3;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->base;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrTypeNode__nk5LZ.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a2)->class->M.
		getType__5MvoB.f(a2);
	if ((a2 != 0) && !(c0 = *(Class*)a2, c1 = &cl_ca_mcgill_sable_soot_BaseType.C,
			(c1->flags & 1) ? instanceof(a2,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a2);
	a3 = av4;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->arrayDepth;
	a2 = v_Bi_52nDH(a2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimple_Local*)a1)->class->M.
		setType_T_pld5E.f(a1,a2);
L18:  case 18:
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(601,L11);
	goto RETURN;

}
RETURN:
	tdata->jmpbuf = oldbuf;
	return;
NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeRelationsBetweenNo__cXPey: ca.mcgill.sable.soot.jimple.TypeResolver.removeRelationsBetweenNonEcrs()V */

Class xt_removeRelationsBetweenNo__cXPey[] = { 0 };

Void removeRelationsBetweenNo__cXPey(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2;
Int i0, i1, i2, i3;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av1 = a1;
	GOTO(8,L3);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(26,L2);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	if (i1 == 0)
		GOTO(33,L3);
L2:	a1 = av2;
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
	a1 = av2;
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
L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(64,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M addRelationsBetweenHardN__J074f: ca.mcgill.sable.soot.jimple.TypeResolver.addRelationsBetweenHardNodes()V */

Class xt_addRelationsBetweenHardN__J074f[] = { 0 };

Void addRelationsBetweenHardN__J074f(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av1, av2, av3, av4, av6;
Int i0, i1, i2;
Int iv5;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av1 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av2 = a1;
	GOTO(16,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(34,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 == 0)
		GOTO(41,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
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
		GOTO(54,L2);
	a1 = av1;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(69,L1);
	GOTO(72,L8);

L3:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,i1);
	av4 = a1;
	a1 = av1;
	a2 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_AbstractCollection*)a1)->class->M.
		toArray_aO_bJpag.f(a1,a2);
	i1 = 0;
	iv5 = i1;
	GOTO(101,L7);

L4:	a1 = av4;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	av6 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrTypeNode__nk5LZ.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		hasAncestor_C_vEq1t.f(a1,a2);
	if (i1 == 0)
		GOTO(123,L5);
	a1 = av3;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	GOTO(132,L6);

L5:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	a2 = av6;
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
	if (i1 == 0)
		GOTO(147,L6);
	a1 = av3;
	a2 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddChild_T_dY5SG.f(a1,a2);
L6:	iv5 += 1;
L7:	i1 = iv5;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(164,L4);
L8:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	if (i1 > 0)
		GOBACK(171,L3);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M assignTypesToLocals_J_mCKHq: ca.mcgill.sable.soot.jimple.TypeResolver.assignTypesToLocals(Lca/mcgill/sable/soot/jimple/JimpleBody;)V */

Class xt_assignTypesToLocals_J_mCKHq[] = { 0 };

Void assignTypesToLocals_J_mCKHq(Object p1)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimple_TypeResolver.C);
	a2 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_J_pMscf(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTypeVariable_L_kY55E: ca.mcgill.sable.soot.jimple.TypeResolver.getTypeVariable(Lca/mcgill/sable/soot/jimple/Local;)Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getTypeVariable_L_kY55E[] = { 0 };

Object getTypeVariable_L_kY55E(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableHashtable;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(13,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_TL_gfAcf(a2,a3,a4);
	av2 = a1;
L1:	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTypeVariable_C_WeRjk: ca.mcgill.sable.soot.jimple.TypeResolver.getTypeVariable(Lca/mcgill/sable/soot/jimple/ClassHierarchy$TypeNode;)Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getTypeVariable_C_WeRjk[] = { 0 };

Object getTypeVariable_C_WeRjk(Object p0, Object p1)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableHashtable;
	a2 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Hashtable*)a1)->class->M.
		get_O_doAa7.f(a1,a2);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	if (a1 != 0)
		GOTO(13,L1);
	a1 = new(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C);
	a2 = a1;
	a3 = av0;
	a4 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_TC_E01uy(a2,a3,a4);
	av2 = a1;
L1:	a1 = av2;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTypeVariable_S_0ytVQ: ca.mcgill.sable.soot.jimple.TypeResolver.getTypeVariable(Lca/mcgill/sable/soot/SootClass;)Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getTypeVariable_S_0ytVQ[] = { 0 };

Object getTypeVariable_S_0ytVQ(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = av1;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = ((struct in_ca_mcgill_sable_soot_SootClass*)a3)->class->M.
		getName__xn8ku.f(a3);
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_C_WeRjk.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M getTypeVariable_T_bKxDy: ca.mcgill.sable.soot.jimple.TypeResolver.getTypeVariable(Lca/mcgill/sable/soot/Type;)Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable; */

Class xt_getTypeVariable_T_bKxDy[] = { 0 };

Object getTypeVariable_T_bKxDy(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av0;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->classHierarchy;
	a3 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy*)a2)->class->M.
		getTypeNode_T_Dr1me.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_C_WeRjk.f(a1,a2);
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M collapseStronglyConnecte__ry1nt: ca.mcgill.sable.soot.jimple.TypeResolver.collapseStronglyConnectedComponents()V */

Class xt_collapseStronglyConnecte__ry1nt[] = { 0 };

Void collapseStronglyConnecte__ry1nt(Object p0)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimp_Hv6gk.C);
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	init_V_038gO(a1,a2);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M mergeAll_T_7pkpt: ca.mcgill.sable.soot.jimple.TypeResolver.mergeAll(Lca/mcgill/sable/soot/jimple/TypeResolver$TypeVariable;)Z */

Class xt_mergeAll_T_7pkpt[] = { 0 };

Boolean mergeAll_T_7pkpt(Object p0, Object p1)
{
Object a0, a1, a2, a3;
Object av0, av1, av2, av3;
Int i0, i1, i2, i3;
Int iv4, iv5, iv6, iv7;
PROLOGUE;

	av0 = p0;
	av1 = p1;

L0:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParents__grNtf.f(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrChildren__Kw3Kx.f(a1);
	av3 = a1;
	i1 = 1;
	iv4 = i1;
	i1 = 0;
	iv5 = i1;
	GOTO(16,L8);

L1:	i1 = 0;
	iv4 = i1;
	i1 = 0;
	iv6 = i1;
	GOTO(25,L4);

L2:	a1 = av2;
	i2 = iv6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (i1 != i2)
		GOTO(45,L3);
	i1 = 1;
	iv5 = i1;
	i1 = 1;
	iv4 = i1;
	a1 = av1;
	a2 = av2;
	i3 = iv6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
L3:	iv6 += 1;
L4:	i1 = iv6;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(70,L2);
	i1 = 0;
	iv7 = i1;
	GOTO(76,L7);

L5:	a1 = av3;
	i2 = iv7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (i1 != i2)
		GOTO(96,L6);
	i1 = 1;
	iv5 = i1;
	i1 = 1;
	iv4 = i1;
	a1 = av1;
	a2 = av3;
	i3 = iv7;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
L6:	iv7 += 1;
L7:	i1 = iv7;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(121,L5);
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParents__grNtf.f(a1);
	av2 = a1;
	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrChildren__Kw3Kx.f(a1);
	av3 = a1;
L8:	i1 = iv4;
	if (i1 != 0)
		GOBACK(136,L1);
	i1 = iv5;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M propagateArrayConstraint__HOgZ5: ca.mcgill.sable.soot.jimple.TypeResolver.propagateArrayConstraints()V */

Class xt_propagateArrayConstraint__HOgZ5[] = { 0 };

Void propagateArrayConstraint__HOgZ5(Object p0)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	computeArrayDepths__pUQw1(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	propagateConstrains__2TXK8(a1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	mergeBaseTypeArrays__abBmh(a1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M mergeBaseTypeArrays__abBmh: ca.mcgill.sable.soot.jimple.TypeResolver.mergeBaseTypeArrays()V */

Class xt_mergeBaseTypeArrays__abBmh[] = { 0 };

Void mergeBaseTypeArrays__abBmh(Object p0)
{
Class c0, c1;
Object a0, a1, a2;
Object av0, av2, av3, av4;
Int i0, i1, i2;
Int iv1;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av2 = a1;
	GOTO(10,L2);

L1:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(28,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 == 0)
		GOTO(35,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
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
		GOTO(48,L2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
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
	av4 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_ArrayType*)a1)->baseType;
	i1 = (a1 != 0) && (c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_RefType.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1));
	if (i1 != 0)
		GOTO(71,L2);
	a1 = av0;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = mergeAll_T_7pkpt(a1,a2);
	if (i1 == 0)
		GOTO(79,L2);
	i1 = 1;
	iv1 = i1;
L2:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(90,L1);
	i1 = iv1;
	if (i1 != 0)
		GOBACK(94,L0);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M propagateConstrains__2TXK8: ca.mcgill.sable.soot.jimple.TypeResolver.propagateConstrains()V */

Class xt_propagateConstrains__2TXK8[] = { 0 };

Void propagateConstrains__2TXK8(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av3, av4, av5, av6, av7;
Int i0, i1, i2, i3, i4;
Int iv5, iv6;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av1 = a1;
	GOTO(8,L8);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av2 = a1;
	a1 = av2;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(26,L8);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 != 0)
		GOTO(33,L8);
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	if (i1 != 0)
		GOTO(40,L2);
	a1 = av2;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base = a2;
	GOTO(48,L3);

L2:	a1 = av2;
	a2 = new(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C);
	a3 = a2;
	a4 = av0;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	init_T_avP6R(a3,a4);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base = a2;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->base;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base = a2;
L3:	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av3 = a1;
	a1 = av3;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
	GOTO(88,L7);

L4:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av5 = a1;
	i1 = 0;
	iv6 = i1;
	GOTO(113,L6);

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av5;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av7 = a1;
	a1 = av7;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->base;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base = a2;
	a1 = av3;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
	iv6 += 1;
L6:	i1 = iv6;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(160,L5);
L7:	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	if (i1 > 0)
		GOBACK(167,L4);
L8:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(176,L1);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av2 = a1;
	GOTO(187,L14);

L9:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(205,L14);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(220,L13);

L10:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av4;
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
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (i1 != i2)
		GOTO(249,L11);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->base;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddParent_T_BFTx8.f(a1,a2);
	GOTO(264,L12);

L11:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->base;
	a2 = av0;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[11];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrAddChild_T_dY5SG.f(a1,a2);
L12:	iv5 += 1;
L13:	i1 = iv5;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(292,L10);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	if (i1 == 0)
		GOTO(299,L14);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	a2 = av3;
	i2 = access0_T_5n5Ex(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		clear_i_TaGYy.f(a1,i2);
L14:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(319,L9);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M computeArrayDepths__pUQw1: ca.mcgill.sable.soot.jimple.TypeResolver.computeArrayDepths()V */

Class xt_computeArrayDepths__pUQw1[] = { 0 };

Void computeArrayDepths__pUQw1(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4;
Object av0, av1, av2, av4, av5, av6, av8, av9, av10, av11;
Int i0, i1, i2, i3, i4;
Int iv3, iv7, iv8, iv9, iv10;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av1 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av4 = a1;
	GOTO(27,L3);

L1:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (a1 != a2)
		GOTO(49,L3);
	iv3 += 1;
	a1 = av5;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->parents;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_IntSet*)a2)->class->M.
		elementCount__Dvjwu.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->count = i2;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 == 0)
		GOTO(73,L2);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrId__zTCKM.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		get_i_CreqQ.f(a1,i2);
	if (i1 != 0)
		GOTO(92,L2);
	a1 = av5;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->count = i2;
L2:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->count;
	if (i1 != 0)
		GOTO(111,L3);
	a1 = av5;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
	a1 = av1;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L3:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(134,L1);
	GOTO(137,L11);

L4:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av6 = a1;
	i1 = 0;
	iv7 = i1;
	GOTO(162,L7);

L5:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av6;
	i3 = iv7;
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
	av8 = a1;
	a1 = av8;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->arrayDepth;
	i2 = max_ii_09Qhb(i2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
	a1 = av8;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count;
	i3 = 1;
	i2 = i2 - i3;
	i3 = i2;
	a2 = a1;
	i1 = i3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count = i3;
	if (i1 != 0)
		GOTO(212,L6);
	a1 = av1;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L6:	iv7 += 1;
L7:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(230,L5);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av6 = a1;
	i1 = 0;
	iv8 = i1;
	GOTO(246,L10);

L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av6;
	i3 = iv8;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av9 = a1;
	a1 = av9;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	a3 = av5;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->arrayDepth;
	i4 = 1;
	i3 = i3 + i4;
	i2 = max_ii_09Qhb(i2,i3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
	a1 = av9;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count;
	i3 = 1;
	i2 = i2 - i3;
	i3 = i2;
	a2 = a1;
	i1 = i3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count = i3;
	if (i1 != 0)
		GOTO(301,L9);
	a1 = av1;
	a2 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L9:	iv8 += 1;
L10:	i1 = iv8;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(319,L8);
	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L11:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	if (i1 > 0)
		GOBACK(333,L4);
	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_util_LinkedList*)a2)->class->M.
		size__ftbuK.f(a2);
	if (i1 == i2)
		GOTO(341,L29);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av5 = a1;
	GOTO(353,L13);

L12:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
L13:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(381,L12);
	GOTO(384,L29);

L14:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av5 = a1;
	a1 = av5;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->count = i2;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 == 0)
		GOTO(407,L15);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 + i3;
	if (i1 >= i2)
		GOTO(428,L15);
	a1 = av5;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
L15:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av6 = a1;
	i1 = 0;
	iv7 = i1;
	GOTO(462,L18);

L16:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av6;
	i3 = iv7;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av8 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 >= i2)
		GOTO(497,L17);
	a1 = av5;
	a2 = av8;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
L17:	iv7 += 1;
L18:	i1 = iv7;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(520,L16);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->parents;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av6 = a1;
	i1 = 0;
	iv8 = i1;
	GOTO(536,L21);

L19:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av6;
	i3 = iv8;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av9 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (i1 >= i2)
		GOTO(569,L20);
	a1 = av5;
	a2 = av9;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
L20:	iv8 += 1;
L21:	i1 = iv8;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(590,L19);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (a1 == 0)
		GOTO(598,L22);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->isArrayOf;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		ecr__8FqU0.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 + i3;
	if (i1 <= i2)
		GOTO(619,L22);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 - i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isArrayOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count;
	i3 = i2;
	a2 = a1;
	i1 = i3;
	i4 = 1;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count = i3;
	if (i1 != 0)
		GOTO(658,L22);
	a1 = av2;
	a2 = av5;
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
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L22:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->isElementOf;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av6 = a1;
	i1 = 0;
	iv9 = i1;
	GOTO(687,L25);

L23:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av6;
	i3 = iv9;
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
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	av10 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av10;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 - i3;
	if (i1 <= i2)
		GOTO(722,L24);
	a1 = av10;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	i3 = 1;
	i2 = i2 + i3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
	a1 = av10;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count;
	i3 = i2;
	a2 = a1;
	i1 = i3;
	i4 = 1;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count = i3;
	if (i1 != 0)
		GOTO(749,L24);
	a1 = av2;
	a2 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L24:	iv9 += 1;
L25:	i1 = iv9;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(767,L23);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->children;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av6 = a1;
	i1 = 0;
	iv10 = i1;
	GOTO(783,L28);

L26:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av6;
	i3 = iv10;
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
	av11 = a1;
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth;
	a2 = av11;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (i1 <= i2)
		GOTO(813,L27);
	a1 = av11;
	a2 = av5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->arrayDepth;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->arrayDepth = i2;
	a1 = av11;
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count;
	i3 = i2;
	a2 = a1;
	i1 = i3;
	i4 = 1;
	i3 = i3 + i4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->count = i3;
	if (i1 != 0)
		GOTO(838,L27);
	a1 = av2;
	a2 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L27:	iv10 += 1;
L28:	i1 = iv10;
	a2 = av6;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(856,L26);
L29:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	if (i1 > 0)
		GOBACK(863,L14);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M resolveSingleRelations__KDeE7: ca.mcgill.sable.soot.jimple.TypeResolver.resolveSingleRelations()Z */

Class xt_resolveSingleRelations__KDeE7[] = { 0 };

Boolean resolveSingleRelations__KDeE7(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av2, av4, av5, av6, av7;
Int i0, i1, i2, i3;
Int iv1, iv3;
PROLOGUE;

	av0 = p0;

L0:	i1 = 0;
	iv1 = i1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av2 = a1;
	i1 = 0;
	iv3 = i1;
	GOTO(12,L7);

L1:	a1 = av0;
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 != 0)
		GOTO(35,L6);
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParents__grNtf.f(a1);
	av5 = a1;
	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrChildren__Kw3Kx.f(a1);
	av6 = a1;
	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 1;
	if (i1 != i2)
		GOTO(56,L2);
	a1 = av6;
	i2 = 0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	a2 = av0;
	a3 = v__Yx4Fv();
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (a1 == a2)
		GOTO(70,L2);
	i1 = 1;
	iv1 = i1;
	a1 = av4;
	a2 = av6;
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
	GOTO(85,L6);

L2:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 1;
	if (i1 != i2)
		GOTO(92,L3);
	i1 = 1;
	iv1 = i1;
	a1 = av4;
	a2 = av5;
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
	GOTO(107,L6);

L3:	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 != 0)
		GOTO(113,L4);
	a1 = av0;
	a2 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[10];
	a2 = v_S_k6iq0(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av7 = a1;
	i1 = 1;
	iv1 = i1;
	a1 = av4;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
	GOTO(137,L6);

L4:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	if (i1 != 0)
		GOTO(143,L5);
	a1 = av0;
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->class->M.
		getTypeVariable_T_bKxDy.f(a1,a2);
	av7 = a1;
	i1 = 1;
	iv1 = i1;
	a1 = av4;
	a2 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
	GOTO(165,L6);

L5:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct aarray*)a1)->length;
	i2 = 1;
	if (i1 != i2)
		GOTO(172,L6);
	i1 = 1;
	iv1 = i1;
	a1 = av4;
	a2 = av6;
	i3 = 0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecrUnion_T_SkRso.f(a1,a2);
L6:	iv3 += 1;
L7:	i1 = iv3;
	a2 = av2;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(193,L1);
	i1 = iv1;
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M removeIndirectRelations__qWh4w: ca.mcgill.sable.soot.jimple.TypeResolver.removeIndirectRelations()V */

Class xt_removeIndirectRelations__qWh4w[] = { 0 };

Void removeIndirectRelations__qWh4w(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3;
Object av0, av1, av2, av3, av4, av6;
Int i0, i1, i2, i3;
Int iv5;
PROLOGUE;

	av0 = p0;

L0:	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av1 = a1;
	a1 = av1;
	a2 = av0;
	a3 = (Object)st_ca_mcgill_sable_soot_jimple_TypeResolver[10];
	a3 = v_S_k6iq0(a3);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->class->M.
		getTypeVariable_T_bKxDy.f(a2,a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
	a1 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a2);
	av2 = a1;
	GOTO(29,L5);

L1:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		removeFirst__FxTPP.f(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av3 = a1;
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		removeEcrIndirectRelatio__OMzuO.f(a1);
	a1 = av2;
	a2 = av3;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrId__zTCKM.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	a1 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrChildren__Kw3Kx.f(a1);
	av4 = a1;
	i1 = 0;
	iv5 = i1;
	GOTO(61,L4);

L2:	a1 = av4;
	i2 = iv5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	a1 = ((struct aarray*)a1)->data[i2];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrParentIds__M0IPW.f(a1);
	av6 = a1;
	a1 = av6;
	a2 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		and_I_rPf5t.f(a1,a2);
	a1 = av6;
	a2 = av4;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrParentIds__M0IPW.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		equals_O_qq4hZ.f(a1,a2);
	if (i1 == 0)
		GOTO(93,L3);
	a1 = av1;
	a2 = av4;
	i3 = iv5;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i3 >= ((struct aarray*)a2)->length)
		throwArrayIndexOutOfBoundsException(a2,i3);
	a2 = ((struct aarray*)a2)->data[i3];
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		addLast_O_IGCXT.f(a1,a2);
L3:	iv5 += 1;
L4:	i1 = iv5;
	a2 = av4;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(113,L2);
L5:	a1 = av1;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	if (i1 != 0)
		GOBACK(120,L1);
	return;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M resolveComplexRelations__0p2Vt: ca.mcgill.sable.soot.jimple.TypeResolver.resolveComplexRelations()Z */

Class xt_resolveComplexRelations__0p2Vt[] = { 0 };

Boolean resolveComplexRelations__0p2Vt(Object p0)
{
Class c0, c1;
Object a0, a1, a2, a3, a4, a5;
Object av0, av1, av2, av3, av4, av5, av6, av7, av8, av9, av10, av11, av13;
Int i0, i1, i2, i3, i4, i5;
Int iv5, iv10, iv12;
PROLOGUE;

	av0 = p0;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		size__hGMbe.f(a1);
	if (i1 != 0)
		GOTO(7,L1);
	i1 = 1;
	return i1;

L1:	a1 = new(&cl_java_util_Vector.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__kkKK3(a2);
	av2 = a1;
	a1 = 0;
	av3 = a1;
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av4 = a1;
	GOTO(31,L4);

L2:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
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
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		ecr__8FqU0.f(a1);
	a2 = av5;
	if (a1 != a2)
		GOTO(53,L4);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (a1 == 0)
		GOTO(61,L4);
	a1 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		getEcrTypeNode__nk5LZ.f(a1);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimp_vtc6C*)a1)->class->M.
		getType__5MvoB.f(a1);
	a2 = v__Yx4Fv();
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_lang_Object*)a1)->class->M.
		equals_O_Ba6e0.f(a1,a2);
	if (i1 == 0)
		GOTO(78,L3);
	a1 = av5;
	av3 = a1;
	GOTO(84,L4);

L3:	a1 = av2;
	a2 = av5;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L4:	a1 = av4;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(100,L2);
	a1 = av3;
	if (a1 == 0)
		GOTO(104,L5);
	a1 = av2;
	a2 = av3;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_java_util_Vector*)a1)->class->M.
		addElement_O_zF3CH.f(a1,a2);
L5:	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_java_util_Vector*)a1)->class->M.
		size__IEjK1.f(a1);
	a1 = anewarray(&cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,i1);
	av1 = a1;
	i1 = 0;
	iv5 = i1;
	a1 = av2;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_java_util_Vector*)a1)->class->M.
		elements__BcaYI.f(a1);
	av6 = a1;
	GOTO(129,L7);

L6:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = (*(Object(*)())findinterface(a1,1715937210)->f)(a1);
	if ((a1 != 0) && !(c0 = *(Class*)a1, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a1,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a1);
	av7 = a1;
	a1 = av1;
	i2 = iv5;
	iv5 += 1;
	a3 = av7;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct aarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	if (a3 && !instanceof(a3,((struct aarray*)a1)->class->elemclass,0))
		throwArrayStoreException(0);
	((struct aarray*)a1)->data[i2] = a3;
L7:	a1 = av6;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,-1601068733)->f)(a1);
	if (i1 != 0)
		GOBACK(160,L6);
	a1 = new(&cl_ca_mcgill_sable_util_IntSet.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Xr1fY(a2);
	av8 = a1;
	a1 = new(&cl_ca_mcgill_sable_util_LinkedList.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__Ln3Si(a2);
	av9 = a1;
	GOTO(181,L13);

L8:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
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
	av10 = a1;
	a1 = av10;
	a2 = av8;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		xor_I_TcwJs.f(a1,a2);
	a1 = av10;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		elements__yaEeZ.f(a1);
	av11 = a1;
	i1 = 0;
	iv12 = i1;
	GOTO(213,L12);

L9:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableInstances;
	a2 = av11;
	i3 = iv12;
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
	av13 = a1;
	a1 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a1)->class->M.
		isEcrArray__QWHvw.f(a1);
	if (i1 == 0)
		GOTO(238,L10);
	a1 = av8;
	a2 = av13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrIsArrayOf__SinWm.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrId__zTCKM.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		get_i_CreqQ.f(a1,i2);
	if (i1 != 0)
		GOTO(254,L10);
	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->unresolvedTypeVariables;
	a2 = av13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrIsArrayOf__SinWm.f(a2);
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrId__zTCKM.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		get_i_CreqQ.f(a1,i2);
	if (i1 != 0)
		GOTO(272,L11);
L10:	a1 = av8;
	a2 = av13;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a2)->class->M.
		getEcrId__zTCKM.f(a2);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		set_i_QWmXU.f(a1,i2);
	a1 = av9;
	a2 = av13;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		add_O_PVrqV.f(a1,a2);
L11:	iv12 += 1;
L12:	i1 = iv12;
	a2 = av11;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	i2 = ((struct aarray*)a2)->length;
	if (i1 < i2)
		GOBACK(301,L9);
L13:	a1 = av8;
	a2 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	a2 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a2)->unresolvedTypeVariables;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_IntSet*)a1)->class->M.
		equals_O_qq4hZ.f(a1,a2);
	if (i1 == 0)
		GOBACK(313,L8);
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_util_LinkedList*)a1)->class->M.
		size__ftbuK.f(a1);
	a1 = anewarray(&cl_int,i1);
	av7 = a1;
	i1 = 0;
	iv10 = i1;
	a1 = av9;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_util_AbstractList*)a1)->class->M.
		iterator__EVXsw.f(a1);
	av11 = a1;
	GOTO(335,L15);

L14:	a1 = av7;
	i2 = iv10;
	iv10 += 1;
	a3 = av11;
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	a3 = (*(Object(*)())findinterface(a3,921304864)->f)(a3);
	if ((a3 != 0) && !(c0 = *(Class*)a3, c1 = &cl_ca_mcgill_sable_soot_jimp_Ag6Jr.C,
			(c1->flags & 1) ? instanceof(a3,c1,0) :
				(c0->nsupers >= c1->nsupers &&
				c0->supers[c0->nsupers - c1->nsupers] == c1)))
		throwClassCastException(a3);
	if (!a3) { 
		SetNPESource(); goto NULLX;
	}
	i3 = ((struct in_ca_mcgill_sable_soot_jimp_Ag6Jr*)a3)->class->M.
		getEcrId__zTCKM.f(a3);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	if ((unsigned)i2 >= ((struct iarray*)a1)->length)
		throwArrayIndexOutOfBoundsException(a1,i2);
	((struct iarray*)a1)->data[i2] = i3;
L15:	a1 = av11;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = (*(Boolean(*)())findinterface(a1,1768961254)->f)(a1);
	if (i1 != 0)
		GOBACK(366,L14);
	a1 = new(&cl_ca_mcgill_sable_soot_jimp_h9ITA.C);
	a2 = a1;
	a3 = av1;
	a4 = av7;
	a5 = av0;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init_aTaiT_dTy9u(a2,a3,a4,a5);
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	i1 = ((struct in_ca_mcgill_sable_soot_jimp_h9ITA*)a1)->class->M.
		resolve__0UOLI.f(a1);
	return i1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M error_S_vm81s: ca.mcgill.sable.soot.jimple.TypeResolver.error(Ljava/lang/String;)V */

Class xt_error_S_vm81s[] = { 0 };

Void error_S_vm81s(Object p1)
{
Object a0, a1, a2;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = new(&cl_ca_mcgill_sable_soot_jimp_VCk9q.C);
	a2 = a1;
	if (!a2) { 
		SetNPESource(); goto NULLX;
	}
	init__QSk78(a2);
	athrow(a1);

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access0_T_xUZ4S: ca.mcgill.sable.soot.jimple.TypeResolver.access$0(Lca/mcgill/sable/soot/jimple/TypeResolver;)Ljava/util/Hashtable; */

Class xt_access0_T_xUZ4S[] = { 0 };

Object access0_T_xUZ4S(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableHashtable;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access1_T_or0Py: ca.mcgill.sable.soot.jimple.TypeResolver.access$1(Lca/mcgill/sable/soot/jimple/TypeResolver;)Ljava/util/Hashtable; */

Class xt_access1_T_or0Py[] = { 0 };

Object access1_T_or0Py(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	if (!a1) { 
		SetNPESource(); goto NULLX;
	}
	a1 = ((struct in_ca_mcgill_sable_soot_jimple_TypeResolver*)a1)->typeVariableStringHashtable;
	return a1;

NULLX:
	throwNullPointerException(0);
	/*NOTREACHED*/
}

/*M access2_S_Hv7tK: ca.mcgill.sable.soot.jimple.TypeResolver.access$2(Ljava/lang/String;)V */

Class xt_access2_S_Hv7tK[] = { 0 };

Void access2_S_Hv7tK(Object p1)
{
Object a0, a1;
Object av0;
PROLOGUE;

	av0 = p1;

L0:	a1 = av0;
	error_S_vm81s(a1);
	return;

	/*NOTREACHED*/
}

/*M access3__KSdbE: ca.mcgill.sable.soot.jimple.TypeResolver.access$3()Z */

Class xt_access3__KSdbE[] = { 0 };

Boolean access3__KSdbE(void)
{
Int i0, i1;
PROLOGUE;


L0:	i1 = 0;
	return i1;

	/*NOTREACHED*/
}



const Char ch_ca_mcgill_sable_soot_jimple_TypeResolver[] = {  /* string pool */'c','a','.','m','c','g','i','l','l','.','s','a','b','l','e','.','s','o',
'o','t','.','j','i','m','p','l','e','.','T','y','p','e','R','e','s','o',
'l','v','e','r',':',' ','n','u','l','l','*','*','*',' ','D','E','B','U',
'G',' ','*','*','*',':',' ',' ',' ','P','a','r','e','n','t','s',':',' ',
' ','C','h','i','l','d','r','e','n',':',' ',' ','A','r','r','a','y',' ',
'o','f',':',' ',' ',' ','A','r','r','a','y',' ','d','e','p','t','h',':',
' ','j','a','v','a','.','l','a','n','g','.','O','b','j','e','c','t','j',
'a','v','a','.','l','a','n','g','.','C','l','o','n','e','a','b','l','e'};

const void *st_ca_mcgill_sable_soot_jimple_TypeResolver[] = {
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+40,	/* 0. ca.mcgill.sable.soot.jimple.TypeResolver */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+42,	/* 1. :  */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+46,	/* 2. null */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+59,	/* 3. *** DEBUG *** */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+60,	/* 4. : */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+61,	/* 5.   */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+71,	/* 6.   Parents: */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+82,	/* 7.   Children: */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+94,	/* 8.   Array of:  */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+109,	/* 9.   Array depth:  */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+125,	/* 10. java.lang.Object */
    ch_ca_mcgill_sable_soot_jimple_TypeResolver+144,	/* 11. java.lang.Cloneable */
    0};
