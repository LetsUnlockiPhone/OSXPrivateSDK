#ifndef	_ucsp_notify_user_
#define	_ucsp_notify_user_

/* Module ucsp_notify */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	ucsp_notify_MSG_COUNT
#define	ucsp_notify_MSG_COUNT	1
#endif	/* ucsp_notify_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include <securityd_client/ucsp_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* SimpleRoutine notify */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t ucsp_notify_sender_notify
(
	mach_port_t receiver,
	uint32 domain,
	uint32 event,
	Data data,
	mach_msg_type_number_t dataCnt,
	uint32 sender
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__ucsp_notify_subsystem__defined
#define __Request__ucsp_notify_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		uint32 domain;
		uint32 event;
		mach_msg_type_number_t dataCnt;
		uint32 sender;
	} __Request__notify_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__ucsp_notify_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__ucsp_notify_sender_ucsp_notify_subsystem__defined
#define __RequestUnion__ucsp_notify_sender_ucsp_notify_subsystem__defined
union __RequestUnion__ucsp_notify_sender_ucsp_notify_subsystem {
	__Request__notify_t Request_ucsp_notify_sender_notify;
};
#endif /* !__RequestUnion__ucsp_notify_sender_ucsp_notify_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__ucsp_notify_subsystem__defined
#define __Reply__ucsp_notify_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__notify_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__ucsp_notify_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__ucsp_notify_sender_ucsp_notify_subsystem__defined
#define __ReplyUnion__ucsp_notify_sender_ucsp_notify_subsystem__defined
union __ReplyUnion__ucsp_notify_sender_ucsp_notify_subsystem {
	__Reply__notify_t Reply_ucsp_notify_sender_notify;
};
#endif /* !__RequestUnion__ucsp_notify_sender_ucsp_notify_subsystem__defined */

#ifndef subsystem_to_name_map_ucsp_notify
#define subsystem_to_name_map_ucsp_notify \
    { "notify", 10000 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _ucsp_notify_user_ */
