/*  ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption.h -- from Java class ca.mcgill.sable.soot.jimple.BuildJimpleBodyOption  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption
#define h_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption

#define init_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption() (void)0

Boolean	noTyping_i_kptnC(Int);
Boolean	noRenaming_i_63pxN(Int);
Boolean	noSplitting_i_VulE9(Int);
Boolean	noCleanup_i_32ZQT(Int);
Boolean	noPacking_i_MiLiL(Int);
Boolean	noAggregating_i_3mlsA(Int);
Void	init__Bd1Al(Object);

struct mt_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Bd1Al;
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

struct cv_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption {
    Int NO_TYPING;
    Int NO_RENAMING;
    Int NO_SPLITTING;
    Int NO_CLEANUP;
    Int NO_PACKING;
    Int NO_AGGREGATING;
};

extern struct cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption M;
    struct cv_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption V;
} cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption;

struct in_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption {
    struct cl_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_jimple_BuildJimpleBodyOption */
