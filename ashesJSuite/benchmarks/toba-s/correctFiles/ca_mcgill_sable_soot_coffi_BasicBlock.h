/*  ca_mcgill_sable_soot_coffi_BasicBlock.h -- from Java class ca.mcgill.sable.soot.coffi.BasicBlock  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_BasicBlock
#define h_ca_mcgill_sable_soot_coffi_BasicBlock

#define init_ca_mcgill_sable_soot_coffi_BasicBlock() (void)0

Object	getHeadJStmt__Rr9hT(Object);
Object	getTailJStmt__V7wzV(Object);
Void	init_I_hx5M0(Object,Object);
Int	hashCode__ebbTE(Object);
Boolean	equals_B_5HRFP(Object,Object);
Object	toString__cPgS9(Object);
Int	wideIndex_s_HT3TQ(Object,Short);

struct mt_ca_mcgill_sable_soot_coffi_BasicBlock {
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
	int localp;int access;int classfilePos;Class *xlist;} hashCode__ebbTE;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__cPgS9;
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
	int localp;int access;int classfilePos;Class *xlist;} getHeadJStmt__Rr9hT;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTailJStmt__V7wzV;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_I_hx5M0;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_B_5HRFP;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Short);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wideIndex_s_HT3TQ;
};

struct cv_ca_mcgill_sable_soot_coffi_BasicBlock {
    Long ids;
};

extern struct cl_ca_mcgill_sable_soot_coffi_BasicBlock {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_BasicBlock M;
    struct cv_ca_mcgill_sable_soot_coffi_BasicBlock V;
} cl_ca_mcgill_sable_soot_coffi_BasicBlock;

struct in_ca_mcgill_sable_soot_coffi_BasicBlock {
    struct cl_ca_mcgill_sable_soot_coffi_BasicBlock *class;
    struct monitor *monitor;
    Int size;
    Object head;
    Object tail;
    Object succ;
    Object pred;
    Boolean inq;
    Boolean beginException;
    Boolean beginCode;
    Boolean done;
    Object next;
    Long id;
    Short wide;
    Object stmt;
    Object statements;
    Object addressesToFixup;
};

#endif /* h_ca_mcgill_sable_soot_coffi_BasicBlock */
