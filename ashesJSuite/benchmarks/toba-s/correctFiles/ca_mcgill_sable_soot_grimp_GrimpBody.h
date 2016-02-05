/*  ca_mcgill_sable_soot_grimp_GrimpBody.h -- from Java class ca.mcgill.sable.soot.grimp.GrimpBody  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_grimp_GrimpBody
#define h_ca_mcgill_sable_soot_grimp_GrimpBody

#define init_ca_mcgill_sable_soot_grimp_GrimpBody() (void)0

Void	init_S_P3u3o(Object,Object);
Void	init_SBi_b8v3X(Object,Object,Object,Int);
Object	getStmtList__DcNB7(Object);
Void	redirectJumps_SS_D729q(Object,Object,Object);
Void	eliminateBackPointersTo_S_1IDCG(Object,Object);
Int	getLocalCount__rlH3T(Object);
Object	getLocals__SKJ41(Object);
Void	addLocal_L_u3Zsr(Object,Object);
Void	removeLocal_L_dc5Vt(Object,Object);
Object	getLocal_S_9GdYj(Object,Object);
Boolean	declaresLocal_S_KvdZF(Object,Object);
Object	getMethod__2qjt9(Object);
Object	getUnitBoxes__5MQp1(Object);
Object	getTraps__EBrwu(Object);
Void	addTrap_T_KJeJ1(Object,Object);
Void	removeTrap_T_xuS0s(Object,Object);
Void	printTo_P_H85nD(Object,Object);
Void	printTo_Pi_YIn9e(Object,Object,Int);
Void	printStatementsInBody_Pz_R37W9(Object,Object,Boolean);
Void	print_debug_P_KYD85(Object,Object);

struct mt_ca_mcgill_sable_soot_grimp_GrimpBody {
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
	int localp;int access;int classfilePos;Class *xlist;} init_S_P3u3o;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_SBi_b8v3X;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getStmtList__DcNB7;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} redirectJumps_SS_D729q;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} eliminateBackPointersTo_S_1IDCG;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getLocalCount__rlH3T;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getLocals__SKJ41;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} addLocal_L_u3Zsr;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} removeLocal_L_dc5Vt;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getLocal_S_9GdYj;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} declaresLocal_S_KvdZF;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getMethod__2qjt9;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getUnitBoxes__5MQp1;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTraps__EBrwu;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} addTrap_T_KJeJ1;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} removeTrap_T_xuS0s;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} printTo_P_H85nD;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} printTo_Pi_YIn9e;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object,Boolean);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} printStatementsInBody_Pz_R37W9;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} print_debug_P_KYD85;
};

extern struct cl_ca_mcgill_sable_soot_grimp_GrimpBody {
    struct class C;
    struct mt_ca_mcgill_sable_soot_grimp_GrimpBody M;
} cl_ca_mcgill_sable_soot_grimp_GrimpBody;

struct in_ca_mcgill_sable_soot_grimp_GrimpBody {
    struct cl_ca_mcgill_sable_soot_grimp_GrimpBody *class;
    struct monitor *monitor;
    Object locals;
    Object method;
    Object stmtList;
    Object traps;
};

#endif /* h_ca_mcgill_sable_soot_grimp_GrimpBody */
