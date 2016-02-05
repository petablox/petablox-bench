/*  ca_mcgill_sable_soot_jimple_StmtGraph.h -- from Java class ca.mcgill.sable.soot.jimple.StmtGraph  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_soot_jimple_StmtGraph
#define h_ca_mcgill_sable_soot_jimple_StmtGraph

#define init_ca_mcgill_sable_soot_jimple_StmtGraph() (void)0

Object	getBody__ursbi(Object);
Void	init_Sz_e8nz7(Object,Object,Boolean);
Object	getHeads__OgkQy(Object);
Object	getTails__AHfWA(Object);
Object	getPredsOf_S_DYcxP(Object,Object);
Object	getSuccsOf_S_ma3uS(Object,Object);
Object	iterator__RqNON(Object);
Int	size__5IdVG(Object);
Object	pseudoTopologicalOrderIt__Oi9a0(Object);
Object	reversePseudoTopological__WumAx(Object);
Object	computeOrder_z_7C2Je(Object,Boolean);
Void	visitStmt_S_5MrmN(Object,Object);
Object	getExtendedBasicBlockP_SS_ilIUW(Object,Object,Object);

struct mt_ca_mcgill_sable_soot_jimple_StmtGraph {
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
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getBody__ursbi;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object,Boolean);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init_Sz_e8nz7;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getHeads__OgkQy;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getTails__AHfWA;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getPredsOf_S_DYcxP;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getSuccsOf_S_ma3uS;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} iterator__RqNON;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} size__5IdVG;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} pseudoTopologicalOrderIt__Oi9a0;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} reversePseudoTopological__WumAx;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Boolean);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} computeOrder_z_7C2Je;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} visitStmt_S_5MrmN;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getExtendedBasicBlockP_SS_ilIUW;
};

extern struct cl_ca_mcgill_sable_soot_jimple_StmtGraph {
    struct class C;
    struct mt_ca_mcgill_sable_soot_jimple_StmtGraph M;
} cl_ca_mcgill_sable_soot_jimple_StmtGraph;

struct in_ca_mcgill_sable_soot_jimple_StmtGraph {
    struct cl_ca_mcgill_sable_soot_jimple_StmtGraph *class;
    struct monitor *monitor;
    Object heads;
    Object tails;
    Object stmtToSuccs;
    Object stmtToPreds;
    Object method;
    Object stmts;
    Int size;
    Object stmtList;
    Boolean isPseudoTopologicalOrderReady;
    Object topOrder;
    Boolean isReversePseudoTopologica_s1xZW;
    Object reverseTopOrder;
    Object stmtToColor;
    Int WHITE;
    Int GRAY;
    Int BLACK;
    Object order;
    Boolean isReversed;
};

#endif /* h_ca_mcgill_sable_soot_jimple_StmtGraph */
