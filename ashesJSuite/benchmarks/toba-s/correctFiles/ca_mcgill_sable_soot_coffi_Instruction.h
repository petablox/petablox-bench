/*  ca_mcgill_sable_soot_coffi_Instruction.h -- from Java class ca.mcgill.sable.soot.coffi.Instruction  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_coffi_Instruction
#define h_ca_mcgill_sable_soot_coffi_Instruction

#define init_ca_mcgill_sable_soot_coffi_Instruction() (void)0

Void	init_b_xOkBJ(Object,Byte);
Object	clone__C5Kdq(Object);
Object	toString__dkN89(Object);
Int	parse_abi_5QrDe(Object,Object,Int);
Int	compile_abi_zqEDQ(Object,Object,Int);
Void	offsetToPointer_B_Myq1j(Object,Object);
Int	nextOffset_i_BhJRD(Object,Int);
Object	branchpoints_I_dvskP(Object,Object);
Void	markCPRefs_az_4cO9Q(Object,Object);
Void	redirectCPRefs_as_4OU8w(Object,Object);
Int	hashCode__P84mQ(Object);
Boolean	equals_I_LuRCj(Object,Object);
Short	getShort_abi_Q4Xxk(Object,Int);
Int	getInt_abi_HPXjS(Object,Int);
Int	shortToBytes_sabi_JlXoz(Short,Object,Int);
Int	intToBytes_iabi_GBHJj(Int,Object,Int);
Object	toString_ac_9JP2g(Object,Object);

struct mt_ca_mcgill_sable_soot_coffi_Instruction {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__AAyKx;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__C5Kdq;
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
	int localp;int access;int classfilePos;Class *xlist;} hashCode__P84mQ;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notify__ne4bk;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} notifyAll__iTnlk;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString__dkN89;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait__Zlr2b;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_l_1Iito;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Long,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} wait_li_07Ea2;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Byte);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_b_xOkBJ;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} parse_abi_5QrDe;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} compile_abi_zqEDQ;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} offsetToPointer_B_Myq1j;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} nextOffset_i_BhJRD;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} branchpoints_I_dvskP;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} markCPRefs_az_4cO9Q;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} redirectCPRefs_as_4OU8w;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_I_LuRCj;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toString_ac_9JP2g;
};

struct cv_ca_mcgill_sable_soot_coffi_Instruction {
    Object argsep;
    Object LOCALPREFIX;
};

extern struct cl_ca_mcgill_sable_soot_coffi_Instruction {
    struct class C;
    struct mt_ca_mcgill_sable_soot_coffi_Instruction M;
    struct cv_ca_mcgill_sable_soot_coffi_Instruction V;
} cl_ca_mcgill_sable_soot_coffi_Instruction;

struct in_ca_mcgill_sable_soot_coffi_Instruction {
    struct cl_ca_mcgill_sable_soot_coffi_Instruction *class;
    struct monitor *monitor;
    Byte code;
    Int label;
    Object name;
    Object next;
    Boolean labelled;
    Boolean branches;
    Boolean calls;
    Boolean returns;
    Int originalIndex;
};

#endif /* h_ca_mcgill_sable_soot_coffi_Instruction */
