/*  ca_mcgill_sable_soot_coffi_TypeStack.h -- from Java class ca.mcgill.sable.soot.coffi.TypeStack  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_TypeStack
#define h_ca_mcgill_sable_soot_coffi_TypeStack

#define init_ca_mcgill_sable_soot_coffi_TypeStack() (void)0

Void	init__XK22F(Object);
Void	setClassManager_S_ZzziC(Object);
Object	clone__KPQr6(Object);
Object	v__i0xez(void);
Object	pop__RBXWY(Object);
Object	push_T_Vs7az(Object,Object);
Object	get_i_t06Hz(Object,Int);
Int	topIndex__5ZMC1(Object);
Object	top__nW0zk(Object);
Boolean	equals_O_mlSGv(Object,Object);
Object	merge_T_jdprn(Object,Object);
Void	print_P_GyHyt(Object,Object);

struct mt_ca_mcgill_sable_soot_coffi_TypeStack {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__XK22F;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__KPQr6;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_mlSGv;
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
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} pop__RBXWY;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} push_T_Vs7az;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} get_i_t06Hz;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} topIndex__5ZMC1;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} top__nW0zk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} merge_T_jdprn;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} print_P_GyHyt;
};

struct cv_ca_mcgill_sable_soot_coffi_TypeStack {
    Object cm;
};

extern struct cl_ca_mcgill_sable_soot_coffi_TypeStack {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_TypeStack M;
    struct cv_ca_mcgill_sable_soot_coffi_TypeStack V;
} cl_ca_mcgill_sable_soot_coffi_TypeStack;

struct in_ca_mcgill_sable_soot_coffi_TypeStack {
    struct cl_ca_mcgill_sable_soot_coffi_TypeStack *class;
    struct monitor *monitor;
    Object types;
};

#endif /* h_ca_mcgill_sable_soot_coffi_TypeStack */
