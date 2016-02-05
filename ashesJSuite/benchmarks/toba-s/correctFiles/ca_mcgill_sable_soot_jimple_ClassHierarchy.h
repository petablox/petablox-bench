/*  ca_mcgill_sable_soot_jimple_ClassHierarchy.h -- from Java class ca.mcgill.sable.soot.jimple.ClassHierarchy  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_ClassHierarchy
#define h_ca_mcgill_sable_soot_jimple_ClassHierarchy

#define init_ca_mcgill_sable_soot_jimple_ClassHierarchy() if (cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C.needinit) initclass(&cl_ca_mcgill_sable_soot_jimple_ClassHierarchy.C)

Void	init_S_P3qYX(Object,Object);
Object	getClassHierarchy_S_6aZ1Q(Object);
Object	getTypeNode_T_Dr1me(Object,Object);
Object	toString__S21U1(Object);
Object	access0_C_CAKCW(Object);
Object	access1_C_ivpII(Object);
Void	clinit__XakR4(void);

struct mt_ca_mcgill_sable_soot_jimple_ClassHierarchy {
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
	int localp;int access;int classfilePos;Class *xlist;} toString__S21U1;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_S_P3qYX;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTypeNode_T_Dr1me;
};

struct cv_ca_mcgill_sable_soot_jimple_ClassHierarchy {
    Object classHierarchyHashtable;
};

extern struct cl_ca_mcgill_sable_soot_jimple_ClassHierarchy {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_ClassHierarchy M;
    struct cv_ca_mcgill_sable_soot_jimple_ClassHierarchy V;
} cl_ca_mcgill_sable_soot_jimple_ClassHierarchy;

struct in_ca_mcgill_sable_soot_jimple_ClassHierarchy {
    struct cl_ca_mcgill_sable_soot_jimple_ClassHierarchy *class;
    struct monitor *monitor;
    Object classManager;
    Object typeNodeInstances;
    Object typeNodeHashtable;
    Object transform;
    Object make;
};

#endif /* h_ca_mcgill_sable_soot_jimple_ClassHierarchy */
