/*  ca_mcgill_sable_soot_Modifier.h -- from Java class ca.mcgill.sable.soot.Modifier  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_Modifier
#define h_ca_mcgill_sable_soot_Modifier

#define init_ca_mcgill_sable_soot_Modifier() (void)0

Void	init__uC1b9(Object);
Boolean	isAbstract_i_9wghh(Int);
Boolean	isFinal_i_t7oPP(Int);
Boolean	isInterface_i_uUWV0(Int);
Boolean	isNative_i_c6Hg4(Int);
Boolean	isPrivate_i_oe55u(Int);
Boolean	isProtected_i_lfqN6(Int);
Boolean	isPublic_i_IE6Xb(Int);
Boolean	isStatic_i_fzZ1T(Int);
Boolean	isSynchronized_i_V8rGp(Int);
Boolean	isTransient_i_PpZxl(Int);
Boolean	isVolatile_i_zXCaN(Int);
Object	toString_i_bHTat(Int);

struct mt_ca_mcgill_sable_soot_Modifier {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__uC1b9;
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

struct cv_ca_mcgill_sable_soot_Modifier {
    Int ABSTRACT;
    Int FINAL;
    Int INTERFACE;
    Int NATIVE;
    Int PRIVATE;
    Int PROTECTED;
    Int PUBLIC;
    Int STATIC;
    Int SYNCHRONIZED;
    Int TRANSIENT;
    Int VOLATILE;
};

extern struct cl_ca_mcgill_sable_soot_Modifier {
    struct class C;
    struct mt_ca_mcgill_sable_soot_Modifier M;
    struct cv_ca_mcgill_sable_soot_Modifier V;
} cl_ca_mcgill_sable_soot_Modifier;

struct in_ca_mcgill_sable_soot_Modifier {
    struct cl_ca_mcgill_sable_soot_Modifier *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_soot_Modifier */
