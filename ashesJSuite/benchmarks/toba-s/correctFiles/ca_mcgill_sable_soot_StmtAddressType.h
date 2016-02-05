/*  ca_mcgill_sable_soot_StmtAddressType.h -- from Java class ca.mcgill.sable.soot.StmtAddressType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_StmtAddressType
#define h_ca_mcgill_sable_soot_StmtAddressType

#define init_ca_mcgill_sable_soot_StmtAddressType() if (cl_ca_mcgill_sable_soot_StmtAddressType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_StmtAddressType.C)

Void	init__t8r4j(Object);
Object	v__u8Teb(void);
Boolean	equals_O_4X2ib(Object,Object);
Int	hashCode__PPtlr(Object);
Object	toString__xJ2Zx(Object);
Void	apply_S_5Lino(Object,Object);
Void	clinit__u50zF(void);

struct mt_ca_mcgill_sable_soot_StmtAddressType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__t8r4j;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_4X2ib;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__PPtlr;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__xJ2Zx;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} merge_TS_yfmlv;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} apply_S_5Lino;
};

struct cv_ca_mcgill_sable_soot_StmtAddressType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_StmtAddressType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_StmtAddressType M;
    struct cv_ca_mcgill_sable_soot_StmtAddressType V;
} cl_ca_mcgill_sable_soot_StmtAddressType;

struct in_ca_mcgill_sable_soot_StmtAddressType {
    struct cl_ca_mcgill_sable_soot_StmtAddressType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_StmtAddressType */
