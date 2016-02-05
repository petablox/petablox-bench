/*  ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption.h -- from Java class ca.mcgill.sable.soot.jimple.PrintJimpleBodyOption  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption
#define h_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption

#define init_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption() (void)0

Void	init__6M6Uo(Object);
Boolean	useAbbreviations_i_bsXhQ(Int);
Boolean	debugMode_i_bJZlB(Int);

struct mt_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__6M6Uo;
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

struct cv_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption {
    Int USE_ABBREVIATIONS;
    Int DEBUG_MODE;
};

extern struct cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption M;
    struct cv_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption V;
} cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption;

struct in_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption {
    struct cl_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_jimple_PrintJimpleBodyOption */
