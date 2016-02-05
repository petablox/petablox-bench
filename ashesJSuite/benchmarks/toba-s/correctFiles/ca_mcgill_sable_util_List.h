/*  ca_mcgill_sable_util_List.h -- from Java class ca.mcgill.sable.util.List  */
/*  created by Toba  */

#ifndef h_ca_mcgill_sable_util_List
#define h_ca_mcgill_sable_util_List

#define init_ca_mcgill_sable_util_List() (void)0

Int	size__K5dGL(Object);
Boolean	isEmpty__vNJd7(Object);
Boolean	contains_O_DBONr(Object,Object);
Object	iterator__y7a4G(Object);
Object	toArray__dWRjB(Object);
Void	toArray_aO_nKh4g(Object,Object);
Boolean	add_O_jm4YW(Object,Object);
Boolean	remove_O_qdGTr(Object,Object);
Boolean	containsAll_C_SSZ1o(Object,Object);
Boolean	addAll_C_UQIVP(Object,Object);
Boolean	removeAll_C_NIXyM(Object,Object);
Boolean	retainAll_C_wvkWb(Object,Object);
Void	clear__VoyPB(Object);
Boolean	equals_O_zFeCl(Object,Object);
Int	hashCode__oyO3C(Object);
Object	get_i_BOKFJ(Object,Int);
Object	set_iO_TTrWA(Object,Int,Object);
Void	add_iO_UWqIa(Object,Int,Object);
Object	remove_i_HWuYX(Object,Int);
Int	indexOf_O_cnNRO(Object,Object);
Int	indexOf_Oi_T6i9I(Object,Object,Int);
Int	lastIndexOf_O_Wi0Qp(Object,Object);
Int	lastIndexOf_Oi_zgFIQ(Object,Object,Int);
Void	removeRange_ii_VZnRx(Object,Int,Int);
Boolean	addAll_iC_lqOH0(Object,Int,Object);
Object	listIterator__OvJ91(Object);
Object	listIterator_i_ZeT4V(Object,Int);

struct mt_ca_mcgill_sable_util_List {
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} init__AAyKx;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clone__dslwm;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} equals_O_zFeCl;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} finalize__UKxhs;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} getClass__zh19H;
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} hashCode__oyO3C;
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
    struct {TobaMethodInvokeType itype;Int(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} size__K5dGL;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} isEmpty__vNJd7;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} contains_O_DBONr;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} iterator__y7a4G;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toArray__dWRjB;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} toArray_aO_nKh4g;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} add_O_jm4YW;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} remove_O_qdGTr;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} containsAll_C_SSZ1o;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} addAll_C_UQIVP;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} removeAll_C_NIXyM;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} retainAll_C_wvkWb;
    struct {TobaMethodInvokeType itype;Void(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} clear__VoyPB;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} get_i_BOKFJ;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} set_iO_TTrWA;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Int,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} add_iO_UWqIa;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} remove_i_HWuYX;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} indexOf_O_cnNRO;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} indexOf_Oi_T6i9I;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} lastIndexOf_O_Wi0Qp;
    struct {TobaMethodInvokeType itype;Int(*f)(Object,Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} lastIndexOf_Oi_zgFIQ;
    struct {TobaMethodInvokeType itype;Void(*f)(Object,Int,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} removeRange_ii_VZnRx;
    struct {TobaMethodInvokeType itype;Boolean(*f)(Object,Int,Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} addAll_iC_lqOH0;
    struct {TobaMethodInvokeType itype;Object(*f)(Object);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} listIterator__OvJ91;
    struct {TobaMethodInvokeType itype;Object(*f)(Object,Int);
	const Char *name_chars;int name_len;const Char *sig_chars;int sig_len;
	int localp;int access;int classfilePos;Class *xlist;} listIterator_i_ZeT4V;
};

extern struct cl_ca_mcgill_sable_util_List {
    struct class C;
    struct mt_ca_mcgill_sable_util_List M;
} cl_ca_mcgill_sable_util_List;

struct in_ca_mcgill_sable_util_List {
    struct cl_ca_mcgill_sable_util_List *class;
    struct monitor *monitor;
};

#endif /* h_ca_mcgill_sable_util_List */
