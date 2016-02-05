/*  ca_mcgill_sable_soot_NullType.h -- from Java class ca.mcgill.sable.soot.NullType  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_NullType
#define h_ca_mcgill_sable_soot_NullType

#define init_ca_mcgill_sable_soot_NullType() if (cl_ca_mcgill_sable_soot_NullType.C.needinit) initclass(&cl_ca_mcgill_sable_soot_NullType.C)

Void	init__UeHBl(Object);
Object	v__Yx4Fv(void);
Int	hashCode__YAFNz(Object);
Boolean	equals_O_XpZFL(Object,Object);
Object	toString__uI9Wp(Object);
Void	apply_S_g74Is(Object,Object);
Void	clinit__DQb1O(void);

struct mt_ca_mcgill_sable_soot_NullType {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__UeHBl;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_XpZFL;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__YAFNz;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__uI9Wp;
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
	int localp;int access;int classfilePos;Class *xlist;} apply_S_g74Is;
};

struct cv_ca_mcgill_sable_soot_NullType {
    Object constant;
};

extern struct cl_ca_mcgill_sable_soot_NullType {
    struct class C;
    struct mt_ca_mcgill_sable_soot_NullType M;
    struct cv_ca_mcgill_sable_soot_NullType V;
} cl_ca_mcgill_sable_soot_NullType;

struct in_ca_mcgill_sable_soot_NullType {
    struct cl_ca_mcgill_sable_soot_NullType *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_NullType */
