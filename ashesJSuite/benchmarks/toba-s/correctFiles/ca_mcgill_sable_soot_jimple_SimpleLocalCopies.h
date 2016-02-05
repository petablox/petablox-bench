/*  ca_mcgill_sable_soot_jimple_SimpleLocalCopies.h -- from Java class ca.mcgill.sable.soot.jimple.SimpleLocalCopies  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_SimpleLocalCopies
#define h_ca_mcgill_sable_soot_jimple_SimpleLocalCopies

#define init_ca_mcgill_sable_soot_jimple_SimpleLocalCopies() (void)0

Void	init_C_NI9tm(Object,Object);
Boolean	isLocalCopyOfBefore_LLS_gX1jW(Object,Object,Object,Object);
Object	getCopiesBefore_S_oqayS(Object,Object);

struct mt_ca_mcgill_sable_soot_jimple_SimpleLocalCopies {
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
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_C_NI9tm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object,Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} isLocalCopyOfBefore_LLS_gX1jW;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getCopiesBefore_S_oqayS;
};

extern struct cl_ca_mcgill_sable_soot_jimple_SimpleLocalCopies {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_SimpleLocalCopies M;
} cl_ca_mcgill_sable_soot_jimple_SimpleLocalCopies;

struct in_ca_mcgill_sable_soot_jimple_SimpleLocalCopies {
    struct cl_ca_mcgill_sable_soot_jimple_SimpleLocalCopies *class;
    struct monitor *monitor;
    Object stmtToCopies;
};

#endif /* h_ca_mcgill_sable_soot_jimple_SimpleLocalCopies */
