/*  ca_mcgill_sable_soot_ByteType.h -- from Java class ca.mcgill.sable.soot.ByteType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_ByteType
#define h_ca_mcgill_sable_soot_ByteType

#define init_ca_mcgill_sable_soot_ByteType() if (cl_ca_mcgill_sable_soot_ByteType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_ByteType.C)

Void	init__Zs4tX(Object);
Object	v__AsEYN(void);
Int	hashCode__LVco9(Object);
Boolean	equals_O_6Aza1(Object,Object);
Object	toString__LKgXe(Object);
Void	apply_S_FVzbx(Object,Object);
Void	clinit__qbJBn(void);

struct mt_ca_mcgill_sable_soot_ByteType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__Zs4tX;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_6Aza1;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__LVco9;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__LKgXe;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_FVzbx;
};

struct cv_ca_mcgill_sable_soot_ByteType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_ByteType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_ByteType M;
    struct cv_ca_mcgill_sable_soot_ByteType V;
} cl_ca_mcgill_sable_soot_ByteType;

struct in_ca_mcgill_sable_soot_ByteType {
    struct cl_ca_mcgill_sable_soot_ByteType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_ByteType */
