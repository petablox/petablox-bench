/*  ca_mcgill_sable_soot_jimple_Transformations.h -- from Java class ca.mcgill.sable.soot.jimple.Transformations  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_Transformations
#define h_ca_mcgill_sable_soot_jimple_Transformations

#define init_ca_mcgill_sable_soot_jimple_Transformations() (void)0

Void	assignTypesToLocals_J_cGy7l(Object);
Void	removeUnusedLocals_S_inhiW(Object);
Void	cleanupCode_J_SJFsC(Object);
Void	renameLocals_S_ANFJI(Object);
Void	aggregate_S_zuRdz(Object);
Boolean	internalAggregate_S_utFze(Object);
Void	packLocals_S_nRzNh(Object);
Void	init__JiITH(Object);

struct mt_ca_mcgill_sable_soot_jimple_Transformations {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__JiITH;
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
};

struct cv_ca_mcgill_sable_soot_jimple_Transformations {
    Int nodeCount;
    Int aggrCount;
};

extern struct cl_ca_mcgill_sable_soot_jimple_Transformations {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_Transformations M;
    struct cv_ca_mcgill_sable_soot_jimple_Transformations V;
} cl_ca_mcgill_sable_soot_jimple_Transformations;

struct in_ca_mcgill_sable_soot_jimple_Transformations {
    struct cl_ca_mcgill_sable_soot_jimple_Transformations *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_jimple_Transformations */
