

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for IDL_FILES\ms-efsr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "../lib/ms-efsr_h_x86.h"

#define TYPE_FORMAT_STRING_SIZE   1215                              
#define PROC_FORMAT_STRING_SIZE   2543                              
#define EXPR_FORMAT_STRING_SIZE   13                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Defsr_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Defsr_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Defsr_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Defsr_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Defsr_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Defsr_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const ms2Defsr_MIDL_TYPE_FORMAT_STRING ms2Defsr__MIDL_TypeFormatString;
extern const ms2Defsr_MIDL_PROC_FORMAT_STRING ms2Defsr__MIDL_ProcFormatString;
extern const ms2Defsr_MIDL_EXPR_FORMAT_STRING ms2Defsr__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: efsrpc_through_pipe_efsrpc, ver. 1.0,
   GUID={0xdf1941c5,0xfe89,0x4e79,{0xbf,0x10,0x46,0x36,0x57,0xac,0xf4,0x4d}} */



static const RPC_CLIENT_INTERFACE efsrpc_through_pipe_efsrpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xdf1941c5,0xfe89,0x4e79,{0xbf,0x10,0x46,0x36,0x57,0xac,0xf4,0x4d}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000001
    };
RPC_IF_HANDLE efsrpc_through_pipe_efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)& efsrpc_through_pipe_efsrpc___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC efsrpc_through_pipe_efsrpc_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE efsrpc_through_pipe_efsrpc__MIDL_AutoBindHandle;


long EfsRpcOpenFileRaw( 
    /* [in] */ handle_t binding_h,
    /* [out] */ PEXIMPORT_CONTEXT_HANDLE *hContext,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcReadFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [out] */ EFS_EXIM_PIPE *EfsOutPipe)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[52],
                  ( unsigned char * )&hContext);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcWriteFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [in] */ EFS_EXIM_PIPE *EfsInPipe)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[100],
                  ( unsigned char * )&hContext);
    return ( long  )_RetVal.Simple;
    
}


void EfsRpcCloseRaw( 
    /* [out][in] */ PEXIMPORT_CONTEXT_HANDLE *hContext)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[148],
                  ( unsigned char * )&hContext);
    
}


long EfsRpcEncryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[184],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


long EfsRpcDecryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ unsigned long OpenFlag)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[224],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryUsersOnFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **Users)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[270],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryRecoveryAgents( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **RecoveryAgents)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[316],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcRemoveUsersFromFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_HASH_LIST *Users)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[362],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcAddUsersToFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[408],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long Proc10_EfsRpcSetFileEncryptionKey( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][in] */ struct Struct_282_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[454],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcNotSupported( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *Reserved1,
    /* [string][in] */ wchar_t *Reserved2,
    /* [in] */ DWORD dwReserved1,
    /* [in] */ DWORD dwReserved2,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [in] */ BOOL bReserved)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[506],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFileKeyInfo( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[576],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcDuplicateEncryptionInfoFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *SrcFileName,
    /* [string][in] */ wchar_t *DestFileName,
    /* [in] */ DWORD dwCreationDisposition,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ EFS_RPC_BLOB *RelativeSD,
    /* [in] */ BOOL bInheritHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[628],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long Proc14_EfsUsePinForEncryptedFiles( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_136_t *arg_1,
    /* [in] */ struct Struct_462_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[698],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcAddUsersToFileEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[744],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFileKeyInfoEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFileKeyInfoFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[802],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long Proc17_EfsRpcFileKeyInfoEx( 
    /* [in] */ handle_t IDL_handle,
    /* [ref][out] */ struct Struct_392_t **arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[866],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcGetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [ref][out] */ EFS_RPC_BLOB **EfsStreamBlob)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[906],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcSetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [unique][in] */ EFS_RPC_BLOB *OldEfsStreamBlob,
    /* [ref][in] */ EFS_RPC_BLOB *NewEfsStreamBlob,
    /* [unique][in] */ ENCRYPTED_FILE_METADATA_SIGNATURE *NewEfsSignature)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[952],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD EfsRpcFlushEfsCache( 
    /* [in] */ handle_t binding_h)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1010],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long EfsRpcEncryptFileExSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [unique][string][in] */ wchar_t *ProtectorDescriptor,
    /* [in] */ unsigned long Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1044],
                  ( unsigned char * )&binding_h);
    return ( long  )_RetVal.Simple;
    
}


DWORD EfsRpcQueryProtectors( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ PENCRYPTION_PROTECTOR_LIST **ppProtectorList)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1096],
                  ( unsigned char * )&binding_h);
    return ( DWORD  )_RetVal.Simple;
    
}


long Proc23_EfsRpcWriteFileWithHeaderRaw(
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ unsigned long *arg_1,
    /* [in] */ struct Struct_392_t *arg_2,
    /* [in] */ hyper arg_3,
    /* [in] */ long arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1142],
                  ( unsigned char * )&arg_0);
    return ( long  )_RetVal.Simple;
    
}


long Proc24_EdpRpcCredentialCreate( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [string][ref][out] */ wchar_t **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1208],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc25_EdpRpcCredentialQuery( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [string][ref][out] */ wchar_t **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1266],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc26_EdpRpcCredentialExists( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [out] */ long *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1324],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc27_EdpRpcCredentialDelete( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [string][full][in] */ wchar_t *arg_4,
    /* [string][full][in] */ wchar_t *arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1382],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc28_EdpRpcQueryRevokedPolicyOwnerIds( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][ref][out] */ wchar_t **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1446],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc29_EdpRpcQueryDplEnforcedPolicyOwnerIds( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1498],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc30_EdpRpcGetLockSessionWrappedKey( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [size_is][full][in] */ unsigned char *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_4,
    /* [out] */ long *arg_5,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_6,
    /* [out] */ long *arg_7)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1544],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc31_EdpRpcGetLockSessionUnwrappedKey( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [size_is][full][in] */ unsigned char *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][full][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_6,
    /* [out] */ long *arg_7)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1620],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc32_EdpRpcGetCredServiceState( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5,
    /* [out] */ long *arg_6,
    /* [out] */ long *arg_7,
    /* [out] */ long *arg_8,
    /* [out] */ long *arg_9)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1696],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc33_EdpRpcDplUpgradePinInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1784],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc34_EdpRpcDplUpgradeVerifyUser( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ unsigned __int3264 *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1842],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc35_EdpRpcDplUserCredentialsSet( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [in] */ short arg_3,
    /* [in] */ unsigned __int3264 arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1900],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc36_EdpRpcDplUserUnlockStart( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [in] */ hyper arg_3,
    /* [out] */ unsigned __int3264 *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[1958],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc37_EdpRpcDplUserUnlockComplete( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ unsigned __int3264 arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2016],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc38_EdpRpcQueueFileForEncryption( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][in] */ struct Struct_762_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2068],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc39_EdpRpcServiceFileEncryptionQueue( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ unsigned char arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2126],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc40_EdpRpcCredSvcControl( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [size_is][full][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [size_is][full][in] */ unsigned char *arg_6,
    /* [in] */ long arg_7,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_8,
    /* [out] */ long *arg_9)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2166],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc41_EdpRpcRmsClearKeys( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2254],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc42_EdpRpcRmsContainerizeFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4,
    /* [string][ref][out] */ wchar_t **arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2288],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc43_EdpRpcRmsGetContainerIdentity( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2352],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc44_EdpRpcRmsDecontainerizeFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][ref][out] */ wchar_t **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2398],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc45_EdpRpcAllowFileAccessForProcess( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2450],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc46_EdpRpcGetTfaCache( 
    /* [in] */ handle_t IDL_handle,
    /* [ref][out] */ struct Struct_972_t **arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&efsrpc_through_pipe_efsrpc_StubDesc,
                  (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[2502],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Defsr_MIDL_PROC_FORMAT_STRING ms2Defsr__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure EfsRpcOpenFileRaw */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 20 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 28 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter FileName */

/* 34 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Flags */

/* 40 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 42 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 46 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 50 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcReadFileRaw */

/* 52 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 54 */	NdrFcLong( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x1 ),	/* 1 */
/* 60 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 62 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 64 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 66 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 68 */	NdrFcShort( 0x24 ),	/* 36 */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 74 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 82 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 84 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsOutPipe */

/* 88 */	NdrFcShort( 0x4114 ),	/* Flags:  pipe, out, simple ref, srv alloc size=16 */
/* 90 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 92 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcWriteFileRaw */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 112 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x24 ),	/* 36 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x4c,		/* Oi2 Flags:  has return, has pipes, has ext, */
			0x3,		/* 3 */
/* 122 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 130 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter EfsInPipe */

/* 136 */	NdrFcShort( 0x10c ),	/* Flags:  pipe, in, simple ref, */
/* 138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 140 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcCloseRaw */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 158 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 160 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x38 ),	/* 56 */
/* 166 */	NdrFcShort( 0x38 ),	/* 56 */
/* 168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 170 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hContext */

/* 178 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 180 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 182 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Procedure EfsRpcEncryptFileSrv */

/* 184 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 194 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 204 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 216 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDecryptFileSrv */

/* 224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x5 ),	/* 5 */
/* 232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 234 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OpenFlag */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryUsersOnFile */

/* 270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x6 ),	/* 6 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 290 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 298 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 302 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 304 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 308 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryRecoveryAgents */

/* 316 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x7 ),	/* 7 */
/* 324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 326 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 336 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 344 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 348 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter RecoveryAgents */

/* 350 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 354 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Return value */

/* 356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcRemoveUsersFromFile */

/* 362 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 372 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 390 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Users */

/* 396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcAddUsersToFile */

/* 408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 418 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 428 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 440 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 442 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 446 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10_EfsRpcSetFileEncryptionKey */

/* 454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0xa ),	/* 10 */
/* 462 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 464 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 472 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 474 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 486 */	NdrFcShort( 0x196 ),	/* Type Offset=406 */

	/* Parameter arg_2 */

/* 488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcNotSupported */

/* 506 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0xb ),	/* 11 */
/* 514 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 516 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 520 */	NdrFcShort( 0x18 ),	/* 24 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 526 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Reserved1 */

/* 534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 538 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter Reserved2 */

/* 540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 544 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwReserved1 */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReserved2 */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 558 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 562 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Parameter bReserved */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfo */

/* 576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xc ),	/* 12 */
/* 584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 596 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 604 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 608 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 616 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 620 */	NdrFcShort( 0x232 ),	/* Type Offset=562 */

	/* Return value */

/* 622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcDuplicateEncryptionInfoFile */

/* 628 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0xd ),	/* 13 */
/* 636 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 638 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 642 */	NdrFcShort( 0x18 ),	/* 24 */
/* 644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 648 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x1 ),	/* 1 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SrcFileName */

/* 656 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 660 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter DestFileName */

/* 662 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 666 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter dwCreationDisposition */

/* 668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAttributes */

/* 674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 676 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RelativeSD */

/* 680 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 682 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 684 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Parameter bInheritHandle */

/* 686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 688 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 694 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14_EfsUsePinForEncryptedFiles */

/* 698 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0xe ),	/* 14 */
/* 706 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 708 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 718 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 726 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 730 */	NdrFcShort( 0x250 ),	/* Type Offset=592 */

	/* Parameter arg_2 */

/* 732 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 736 */	NdrFcShort( 0x292 ),	/* Type Offset=658 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcAddUsersToFileEx */

/* 744 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xf ),	/* 15 */
/* 752 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 754 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 764 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFlags */

/* 772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 778 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 782 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Parameter FileName */

/* 784 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 788 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EncryptionCertificates */

/* 790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 792 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 794 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 798 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFileKeyInfoEx */

/* 802 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x10 ),	/* 16 */
/* 810 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 812 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 816 */	NdrFcShort( 0x10 ),	/* 16 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 822 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwFileKeyInfoFlags */

/* 830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reserved */

/* 836 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 840 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Parameter FileName */

/* 842 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 846 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter InfoClass */

/* 848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter KeyInfo */

/* 854 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 858 */	NdrFcShort( 0x232 ),	/* Type Offset=562 */

	/* Return value */

/* 860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 862 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17_EfsRpcFileKeyInfoEx */

/* 866 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x11 ),	/* 17 */
/* 874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 876 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 886 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 894 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcGetEncryptedFileMetadata */

/* 906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x12 ),	/* 18 */
/* 914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 916 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 918 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 926 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 934 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 938 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter EfsStreamBlob */

/* 940 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 944 */	NdrFcShort( 0x232 ),	/* Type Offset=562 */

	/* Return value */

/* 946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcSetEncryptedFileMetadata */

/* 952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x13 ),	/* 19 */
/* 960 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 962 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 972 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 980 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 984 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter OldEfsStreamBlob */

/* 986 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 990 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Parameter NewEfsStreamBlob */

/* 992 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 996 */	NdrFcShort( 0x21e ),	/* Type Offset=542 */

	/* Parameter NewEfsSignature */

/* 998 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1002 */	NdrFcShort( 0x2b4 ),	/* Type Offset=692 */

	/* Return value */

/* 1004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1006 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcFlushEfsCache */

/* 1010 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1018 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1020 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1030 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcEncryptFileExSrv */

/* 1044 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1052 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1054 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1062 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1064 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 1072 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1076 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ProtectorDescriptor */

/* 1078 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1082 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Parameter Flags */

/* 1084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EfsRpcQueryProtectors */

/* 1096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1106 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1116 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter FileName */

/* 1124 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1128 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ppProtectorList */

/* 1130 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1134 */	NdrFcShort( 0x2e6 ),	/* Type Offset=742 */

	/* Return value */

/* 1136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23_EfsRpcWriteFileWithHeaderRaw */

/* 1142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1150 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1152 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1156 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1158 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1162 */	0x4e,		/* Oi2 Flags:  clt must size, has return, has pipes, has ext, */
			0x6,		/* 6 */
/* 1164 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1172 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1176 */	NdrFcShort( 0x350 ),	/* Type Offset=848 */

	/* Parameter arg_1 */

/* 1178 */	NdrFcShort( 0x10c ),	/* Flags:  pipe, in, simple ref, */
/* 1180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1182 */	NdrFcShort( 0x35a ),	/* Type Offset=858 */

	/* Parameter arg_2 */

/* 1184 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1188 */	NdrFcShort( 0x250 ),	/* Type Offset=592 */

	/* Parameter arg_3 */

/* 1190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1194 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1198 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1204 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24_EdpRpcCredentialCreate */

/* 1208 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1216 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1218 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1228 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1236 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1240 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1242 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1246 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1248 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1252 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_4 */

/* 1254 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1258 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc25_EdpRpcCredentialQuery */

/* 1266 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1276 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1284 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1286 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1298 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1304 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1306 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1310 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_4 */

/* 1312 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1316 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 1318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc26_EdpRpcCredentialExists */

/* 1324 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1332 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1334 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1342 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1344 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1352 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1356 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1362 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1364 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1368 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_4 */

/* 1370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1372 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1378 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc27_EdpRpcCredentialDelete */

/* 1382 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1390 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1392 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1402 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1422 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_4 */

/* 1428 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1432 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_5 */

/* 1434 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1436 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1438 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Return value */

/* 1440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1442 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc28_EdpRpcQueryRevokedPolicyOwnerIds */

/* 1446 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1454 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1456 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1458 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1464 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1466 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1474 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1478 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1486 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1490 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 1492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc29_EdpRpcQueryDplEnforcedPolicyOwnerIds */

/* 1498 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1508 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1516 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1518 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1526 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1530 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1532 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1536 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 1538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc30_EdpRpcGetLockSessionWrappedKey */

/* 1544 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1552 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1554 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1556 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1560 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1562 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1564 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1576 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1578 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1582 */	NdrFcShort( 0x36e ),	/* Type Offset=878 */

	/* Parameter arg_3 */

/* 1584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1590 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1594 */	NdrFcShort( 0x388 ),	/* Type Offset=904 */

	/* Parameter arg_5 */

/* 1596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1598 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1602 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1604 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1606 */	NdrFcShort( 0x3a6 ),	/* Type Offset=934 */

	/* Parameter arg_7 */

/* 1608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1610 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1616 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc31_EdpRpcGetLockSessionUnwrappedKey */

/* 1620 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1628 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1630 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1634 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1638 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1640 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1652 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1658 */	NdrFcShort( 0x36e ),	/* Type Offset=878 */

	/* Parameter arg_3 */

/* 1660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1666 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1670 */	NdrFcShort( 0x3c4 ),	/* Type Offset=964 */

	/* Parameter arg_5 */

/* 1672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1674 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1678 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1680 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1682 */	NdrFcShort( 0x3a6 ),	/* Type Offset=934 */

	/* Parameter arg_7 */

/* 1684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1686 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1692 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc32_EdpRpcGetCredServiceState */

/* 1696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1704 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1706 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x104 ),	/* 260 */
/* 1714 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0xa,		/* 10 */
/* 1716 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1724 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1730 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1742 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1748 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1750 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1756 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 1760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1762 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 1766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1768 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_9 */

/* 1772 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1774 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1780 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc33_EdpRpcDplUpgradePinInfo */

/* 1784 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1792 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1794 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1804 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1812 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1816 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1838 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc34_EdpRpcDplUpgradeVerifyUser */

/* 1842 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1850 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1852 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1854 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1860 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1862 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1870 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1874 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1876 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1880 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1882 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1890 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc35_EdpRpcDplUserCredentialsSet */

/* 1900 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1908 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1910 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1914 */	NdrFcShort( 0xe ),	/* 14 */
/* 1916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1918 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1920 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1928 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1932 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1934 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1938 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1944 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 1946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1948 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1954 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc36_EdpRpcDplUserUnlockStart */

/* 1958 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 1960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1966 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1968 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1972 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1974 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1976 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1978 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1986 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1990 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 1992 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1996 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 1998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 2004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2006 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2012 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc37_EdpRpcDplUserUnlockComplete */

/* 2016 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2024 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2026 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2028 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2030 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2036 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2048 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_2 */

/* 2050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 2056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2064 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc38_EdpRpcQueueFileForEncryption */

/* 2068 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2076 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2078 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2082 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2088 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2096 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 2098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2100 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Parameter arg_2 */

/* 2102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2106 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Parameter arg_3 */

/* 2108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2112 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Parameter arg_4 */

/* 2114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2118 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 2120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2122 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc39_EdpRpcServiceFileEncryptionQueue */

/* 2126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2136 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2140 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2146 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc40_EdpRpcCredSvcControl */

/* 2166 */	0x0,		/* 0 */
			0x49,		/* Old Flags:  full ptr, */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2174 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2176 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2182 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2184 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2186 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 2200 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2204 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_3 */

/* 2206 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2210 */	NdrFcShort( 0x362 ),	/* Type Offset=866 */

	/* Parameter arg_4 */

/* 2212 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2216 */	NdrFcShort( 0x3c4 ),	/* Type Offset=964 */

	/* Parameter arg_5 */

/* 2218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2220 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 2224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2226 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2228 */	NdrFcShort( 0x3f2 ),	/* Type Offset=1010 */

	/* Parameter arg_7 */

/* 2230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2232 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 2236 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2238 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2240 */	NdrFcShort( 0x40c ),	/* Type Offset=1036 */

	/* Parameter arg_9 */

/* 2242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2244 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2250 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc41_EdpRpcRmsClearKeys */

/* 2254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2264 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2274 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc42_EdpRpcRmsContainerizeFile */

/* 2288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2296 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2298 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2306 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2308 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2316 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2320 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 2322 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2324 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2326 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_3 */

/* 2328 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2330 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2332 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Parameter arg_4 */

/* 2334 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2338 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_5 */

/* 2340 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2342 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2344 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 2346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2348 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc43_EdpRpcRmsGetContainerIdentity */

/* 2352 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2362 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2364 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2370 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2372 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2380 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2384 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 2386 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2390 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 2392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc44_EdpRpcRmsDecontainerizeFile */

/* 2398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2406 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2408 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2410 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2416 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2418 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2426 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2430 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 2432 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2436 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_3 */

/* 2438 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2442 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 2444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2446 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc45_EdpRpcAllowFileAccessForProcess */

/* 2450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2460 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2470 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2478 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter arg_2 */

/* 2484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 2490 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2494 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc46_EdpRpcGetTfaCache */

/* 2502 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2512 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2520 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2522 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 2530 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2532 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2534 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Return value */

/* 2536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2538 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Defsr_MIDL_TYPE_FORMAT_STRING ms2Defsr__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 12 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 14 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 20 */	NdrFcShort( 0x4 ),	/* Offset= 4 (24) */
/* 22 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 24 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 26 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (22) */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
/* 32 */	
			0x11, 0x0,	/* FC_RP */
/* 34 */	NdrFcShort( 0x4 ),	/* Offset= 4 (38) */
/* 36 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 38 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (36) */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x12, 0x0,	/* FC_UP */
/* 60 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (240) */
/* 62 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0x6 ),	/* 6 */
/* 66 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 68 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x6 ),	/* 6 */
/* 72 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (62) */
/* 76 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 84 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 86 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 88 */	0x0 , 
			0x0,		/* 0 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcLong( 0x0 ),	/* 0 */
/* 98 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 100 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (78) */
/* 106 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (68) */
/* 112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 114 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 118 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 124 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 130 */	NdrFcLong( 0x64 ),	/* 100 */
/* 134 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 136 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 150 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (114) */
/* 152 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 154 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 156 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 158 */	NdrFcShort( 0x10 ),	/* 16 */
/* 160 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 168 */	0x12, 0x0,	/* FC_UP */
/* 170 */	NdrFcShort( 0xffba ),	/* Offset= -70 (100) */
/* 172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 178 */	0x12, 0x0,	/* FC_UP */
/* 180 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (136) */
/* 182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 184 */	NdrFcShort( 0xc ),	/* 12 */
/* 186 */	NdrFcShort( 0xc ),	/* 12 */
/* 188 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 194 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 196 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 198 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 202 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 208 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 218 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 220 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 222 */	NdrFcShort( 0x4 ),	/* 4 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	0x12, 0x0,	/* FC_UP */
/* 234 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (156) */
/* 236 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 238 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 240 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 244 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 246 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 252 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 254 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (198) */
/* 256 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 258 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 260 */	
			0x11, 0x0,	/* FC_RP */
/* 262 */	NdrFcShort( 0xffea ),	/* Offset= -22 (240) */
/* 264 */	
			0x11, 0x0,	/* FC_RP */
/* 266 */	NdrFcShort( 0x78 ),	/* Offset= 120 (386) */
/* 268 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 272 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 274 */	NdrFcShort( 0x4 ),	/* 4 */
/* 276 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 278 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 288 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 290 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 292 */	NdrFcShort( 0xc ),	/* 12 */
/* 294 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 302 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 304 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (268) */
/* 306 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 310 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 312 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 314 */	NdrFcShort( 0xc ),	/* 12 */
/* 316 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 318 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 320 */	NdrFcShort( 0x4 ),	/* 4 */
/* 322 */	NdrFcShort( 0x4 ),	/* 4 */
/* 324 */	0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (100) */
/* 328 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 334 */	0x12, 0x0,	/* FC_UP */
/* 336 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (290) */
/* 338 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 340 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 344 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x4 ),	/* 4 */
/* 348 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 354 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcLong( 0x1f4 ),	/* 500 */
/* 364 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 366 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	0x12, 0x0,	/* FC_UP */
/* 380 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (312) */
/* 382 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 386 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 390 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 392 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 394 */	NdrFcShort( 0x4 ),	/* 4 */
/* 396 */	NdrFcShort( 0x4 ),	/* 4 */
/* 398 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 400 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (344) */
/* 402 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 404 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 406 */	
			0x12, 0x0,	/* FC_UP */
/* 408 */	NdrFcShort( 0x4c ),	/* Offset= 76 (484) */
/* 410 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0x6 ),	/* 6 */
/* 414 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 416 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 418 */	NdrFcShort( 0x6 ),	/* 6 */
/* 420 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 422 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (410) */
/* 424 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 426 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 430 */	NdrFcShort( 0xfea0 ),	/* Offset= -352 (78) */
/* 432 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 434 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 436 */	NdrFcShort( 0xffec ),	/* Offset= -20 (416) */
/* 438 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 440 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 444 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 448 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 450 */	0x0 , 
			0x0,		/* 0 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 462 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 464 */	NdrFcShort( 0xc ),	/* 12 */
/* 466 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 468 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 474 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 476 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (440) */
/* 478 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 480 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 482 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 484 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 486 */	NdrFcShort( 0xc ),	/* 12 */
/* 488 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	NdrFcShort( 0x4 ),	/* 4 */
/* 496 */	0x12, 0x0,	/* FC_UP */
/* 498 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (426) */
/* 500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x12, 0x0,	/* FC_UP */
/* 508 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (462) */
/* 510 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 512 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 514 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 516 */	
			0x12, 0x0,	/* FC_UP */
/* 518 */	NdrFcShort( 0x18 ),	/* Offset= 24 (542) */
/* 520 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 524 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 530 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	NdrFcLong( 0x41000 ),	/* 266240 */
/* 540 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 542 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 546 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 548 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 550 */	NdrFcShort( 0x4 ),	/* 4 */
/* 552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 554 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 556 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (520) */
/* 558 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 560 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 562 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 564 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (516) */
/* 566 */	
			0x11, 0x0,	/* FC_RP */
/* 568 */	NdrFcShort( 0x18 ),	/* Offset= 24 (592) */
/* 570 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 574 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 580 */	0x0 , 
			0x0,		/* 0 */
/* 582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 590 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 592 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 598 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 602 */	NdrFcShort( 0x4 ),	/* 4 */
/* 604 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 606 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (570) */
/* 608 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 610 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 612 */	
			0x11, 0x0,	/* FC_RP */
/* 614 */	NdrFcShort( 0x2c ),	/* Offset= 44 (658) */
/* 616 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcLong( 0x8 ),	/* 8 */
/* 626 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcLong( 0x800 ),	/* 2048 */
/* 636 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 640 */	0x10,		/* Corr desc:  field pointer,  */
			0x5d,		/* FC_EXPR */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 646 */	0x0 , 
			0x0,		/* 0 */
/* 648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 656 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 658 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 660 */	NdrFcShort( 0xc ),	/* 12 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0xc ),	/* Offset= 12 (676) */
/* 666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 668 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (616) */
/* 670 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 672 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (626) */
/* 674 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 676 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 678 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (636) */
/* 680 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 682 */	NdrFcShort( 0x2 ),	/* Offset= 2 (684) */
/* 684 */	
			0x12, 0x0,	/* FC_UP */
/* 686 */	NdrFcShort( 0xffa2 ),	/* Offset= -94 (592) */
/* 688 */	
			0x11, 0x0,	/* FC_RP */
/* 690 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (542) */
/* 692 */	
			0x12, 0x0,	/* FC_UP */
/* 694 */	NdrFcShort( 0x2 ),	/* Offset= 2 (696) */
/* 696 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 698 */	NdrFcShort( 0x10 ),	/* 16 */
/* 700 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 702 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 704 */	NdrFcShort( 0x4 ),	/* 4 */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	0x12, 0x0,	/* FC_UP */
/* 710 */	NdrFcShort( 0xfe2a ),	/* Offset= -470 (240) */
/* 712 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	0x12, 0x0,	/* FC_UP */
/* 720 */	NdrFcShort( 0xfe68 ),	/* Offset= -408 (312) */
/* 722 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 724 */	NdrFcShort( 0xc ),	/* 12 */
/* 726 */	NdrFcShort( 0xc ),	/* 12 */
/* 728 */	0x12, 0x0,	/* FC_UP */
/* 730 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (542) */
/* 732 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 734 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 736 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 738 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 740 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 742 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 744 */	NdrFcShort( 0x2 ),	/* Offset= 2 (746) */
/* 746 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (750) */
/* 750 */	
			0x12, 0x0,	/* FC_UP */
/* 752 */	NdrFcShort( 0x4c ),	/* Offset= 76 (828) */
/* 754 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0xc ),	/* 12 */
/* 758 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 760 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	NdrFcShort( 0x4 ),	/* 4 */
/* 766 */	0x12, 0x0,	/* FC_UP */
/* 768 */	NdrFcShort( 0xfd64 ),	/* Offset= -668 (100) */
/* 770 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 778 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 780 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 782 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 784 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 786 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 796 */	0x0 , 
			0x0,		/* 0 */
/* 798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 806 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 808 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 810 */	NdrFcShort( 0x4 ),	/* 4 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	0x12, 0x0,	/* FC_UP */
/* 822 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (754) */
/* 824 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 826 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 828 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 834 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 842 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (786) */
/* 844 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 846 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 848 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 850 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 852 */	
			0x11, 0x0,	/* FC_RP */
/* 854 */	NdrFcShort( 0x4 ),	/* Offset= 4 (858) */
/* 856 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 858 */	0xb5,		/* FC_PIPE */
			0x0,		/* 0 */
/* 860 */	NdrFcShort( 0xfffc ),	/* Offset= -4 (856) */
/* 862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 866 */	
			0x14, 0x8,	/* FC_FP [simple_pointer] */
/* 868 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 872 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (738) */
/* 874 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 876 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 878 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 880 */	NdrFcShort( 0x2 ),	/* Offset= 2 (882) */
/* 882 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 886 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 890 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 892 */	0x0 , 
			0x0,		/* 0 */
/* 894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 902 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 904 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 906 */	NdrFcShort( 0x2 ),	/* Offset= 2 (908) */
/* 908 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 910 */	NdrFcShort( 0x2 ),	/* Offset= 2 (912) */
/* 912 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 916 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 918 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 920 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 922 */	0x0 , 
			0x0,		/* 0 */
/* 924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 932 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 934 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 936 */	NdrFcShort( 0x2 ),	/* Offset= 2 (938) */
/* 938 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 940 */	NdrFcShort( 0x2 ),	/* Offset= 2 (942) */
/* 942 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 946 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 948 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 950 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 952 */	0x0 , 
			0x0,		/* 0 */
/* 954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 962 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 964 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 966 */	NdrFcShort( 0x2 ),	/* Offset= 2 (968) */
/* 968 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 970 */	NdrFcShort( 0x1 ),	/* 1 */
/* 972 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 974 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 976 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 978 */	0x0 , 
			0x0,		/* 0 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 988 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 990 */	
			0x12, 0x0,	/* FC_UP */
/* 992 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1000) */
/* 994 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 996 */	NdrFcShort( 0x10 ),	/* 16 */
/* 998 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1000 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1002 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1004 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1006 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (994) */
/* 1008 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1010 */	
			0x14, 0x20,	/* FC_FP [maybenull_sizeis] */
/* 1012 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1014) */
/* 1014 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1020 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1022 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1024 */	0x0 , 
			0x0,		/* 0 */
/* 1026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1034 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1036 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1038 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1040) */
/* 1040 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1042 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1044) */
/* 1044 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1048 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1050 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1052 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1054 */	0x0 , 
			0x0,		/* 0 */
/* 1056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1064 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1066 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1068 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1070) */
/* 1070 */	
			0x12, 0x0,	/* FC_UP */
/* 1072 */	NdrFcShort( 0x7a ),	/* Offset= 122 (1194) */
/* 1074 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1078 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1080 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1082 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1086 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1088 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1090 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1092 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1094 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1096 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (1082) */
			0x5b,		/* FC_END */
/* 1100 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1104 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1110 */	0x0 , 
			0x0,		/* 0 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1120 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1088) */
/* 1124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1126 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1128 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0xc ),	/* Offset= 12 (1144) */
/* 1134 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1136 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1138 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1140 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (1074) */
/* 1142 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1144 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1146 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1100) */
/* 1148 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1150 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1152 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1156 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1162 */	0x0 , 
			0x0,		/* 0 */
/* 1164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1172 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1174 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	0x12, 0x0,	/* FC_UP */
/* 1188 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1126) */
/* 1190 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1192 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1194 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1198 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1200 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1206 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1208 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1152) */
/* 1210 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1212 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const ms2Defsr_MIDL_EXPR_FORMAT_STRING ms2Defsr__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x3,		/* FC_EXPR_VAR */
			0x8,		/* FC_LONG */
/*  6 */	NdrFcShort( 0x4 ),	/* 4 */
/*  8 */	0x3,		/* FC_EXPR_VAR */
			0x8,		/* FC_LONG */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

static const unsigned short ms2Defsr__MIDL_ExprFormatStringOffsetTable[] =
{
0,
};

static const NDR_EXPR_DESC  ms2Defsr_ExprDesc = 
 {
ms2Defsr__MIDL_ExprFormatStringOffsetTable,
ms2Defsr__MIDL_ExprFormatString.Format
};

static const unsigned short efsrpc_through_pipe_efsrpc_FormatStringOffsetTable[] =
    {
    0,
    52,
    100,
    148,
    184,
    224,
    270,
    316,
    362,
    408,
    454,
    506,
    576,
    628,
    698,
    744,
    802,
    866,
    906,
    952,
    1010,
    1044,
    1096,
    1142,
    1208,
    1266,
    1324,
    1382,
    1446,
    1498,
    1544,
    1620,
    1696,
    1784,
    1842,
    1900,
    1958,
    2016,
    2068,
    2126,
    2166,
    2254,
    2288,
    2352,
    2398,
    2450,
    2502
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC efsrpc_through_pipe_efsrpc_StubDesc = 
    {
    (void *)& efsrpc_through_pipe_efsrpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &efsrpc_through_pipe_efsrpc__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    ms2Defsr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    &ms2Defsr_ExprDesc
    };
#ifdef __cplusplus
}
#endif
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

