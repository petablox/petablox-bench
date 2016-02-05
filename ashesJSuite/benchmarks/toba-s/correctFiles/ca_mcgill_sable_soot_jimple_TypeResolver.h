/*  ca_mcgill_sable_soot_jimple_TypeResolver.h -- from Java class ca.mcgill.sable.soot.jimple.TypeResolver  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_TypeResolver
#define h_ca_mcgill_sable_soot_jimple_TypeResolver

#define init_ca_mcgill_sable_soot_jimple_TypeResolver() (void)0

Void	debug_locals__hajBy(Object);
Void	debug__6V56c(Object);
Void	init_J_pMscf(Object,Object);
Void	removeRelationsBetweenNo__cXPey(Object);
Void	addRelationsBetweenHardN__J074f(Object);
Void	assignTypesToLocals_J_mCKHq(Object);
Object	getTypeVariable_L_kY55E(Object,Object);
Object	getTypeVariable_C_WeRjk(Object,Object);
Object	getTypeVariable_S_0ytVQ(Object,Object);
Object	getTypeVariable_T_bKxDy(Object,Object);
Void	collapseStronglyConnecte__ry1nt(Object);
Boolean	mergeAll_T_7pkpt(Object,Object);
Void	propagateArrayConstraint__HOgZ5(Object);
Void	mergeBaseTypeArrays__abBmh(Object);
Void	propagateConstrains__2TXK8(Object);
Void	computeArrayDepths__pUQw1(Object);
Boolean	resolveSingleRelations__KDeE7(Object);
Void	removeIndirectRelations__qWh4w(Object);
Boolean	resolveComplexRelations__0p2Vt(Object);
Void	error_S_vm81s(Object);
Object	access0_T_xUZ4S(Object);
Object	access1_T_or0Py(Object);
Void	access2_S_Hv7tK(Object);
Boolean	access3__KSdbE(void);

struct mt_ca_mcgill_sable_soot_jimple_TypeResolver {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__AAyKx;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_Ba6e0;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__8wJNW;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__4d9OF;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} debug_locals__hajBy;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} debug__6V56c;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_J_pMscf;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} removeRelationsBetweenNo__cXPey;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} addRelationsBetweenHardN__J074f;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTypeVariable_L_kY55E;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTypeVariable_C_WeRjk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTypeVariable_S_0ytVQ;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTypeVariable_T_bKxDy;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} collapseStronglyConnecte__ry1nt;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} mergeAll_T_7pkpt;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} propagateArrayConstraint__HOgZ5;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} mergeBaseTypeArrays__abBmh;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} propagateConstrains__2TXK8;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} computeArrayDepths__pUQw1;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} resolveSingleRelations__KDeE7;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} removeIndirectRelations__qWh4w;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} resolveComplexRelations__0p2Vt;
};

struct cv_ca_mcgill_sable_soot_jimple_TypeResolver {
    Boolean DEBUG;
    Object lastClass;
};

extern struct cl_ca_mcgill_sable_soot_jimple_TypeResolver {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_TypeResolver M;
    struct cv_ca_mcgill_sable_soot_jimple_TypeResolver V;
} cl_ca_mcgill_sable_soot_jimple_TypeResolver;

struct in_ca_mcgill_sable_soot_jimple_TypeResolver {
    struct cl_ca_mcgill_sable_soot_jimple_TypeResolver *class;
    struct monitor *monitor;
    Object classHierarchy;
    Object currentMethod;
    Object typeVariableInstances;
    Object typeVariableHashtable;
    Object typeVariableStringHashtable;
    Object constraintCollector;
    Object unresolvedTypeVariables;
    Boolean new_relation;
    Object stmtBody;
};

#endif /* h_ca_mcgill_sable_soot_jimple_TypeResolver */
