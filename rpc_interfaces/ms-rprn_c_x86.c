

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for IDL_FILES\ms-rprn.idl:
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

#include "../lib/ms-rprn_h_x86.h"

#define TYPE_FORMAT_STRING_SIZE   2831                              
#define PROC_FORMAT_STRING_SIZE   6095                              
#define EXPR_FORMAT_STRING_SIZE   17                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Drprn_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_EXPR_FORMAT_STRING;


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


extern const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString;
extern const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString;
extern const ms2Drprn_MIDL_EXPR_FORMAT_STRING ms2Drprn__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   1            


/* Standard interface: winspool, ver. 1.0,
   GUID={0x12345678,0x1234,0xabcd,{0xef,0x00,0x01,0x23,0x45,0x67,0x89,0xab}} */



static const RPC_CLIENT_INTERFACE winspool___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345678,0x1234,0xabcd,{0xef,0x00,0x01,0x23,0x45,0x67,0x89,0xab}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE winspool_v1_0_c_ifspec = (RPC_IF_HANDLE)& winspool___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC winspool_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE winspool__MIDL_AutoBindHandle;


DWORD RpcEnumPrinters( 
    /* [in] */ DWORD Flags,
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&Flags);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcOpenPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[78],
                  ( unsigned char * )&pPrinterName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [unique][in] */ JOB_CONTAINER *pJobContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[144],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[204],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobs( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD FirstJob,
    /* [in] */ DWORD NoJobs,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[276],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [out] */ PRINTER_HANDLE *pHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[360],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[426],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[468],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrinter,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[534],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriver( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[600],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDrivers( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[648],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[726],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriverDirectory( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDriverDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[798],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDriver( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[870],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrintProcessor( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPathName,
    /* [string][in] */ wchar_t *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[924],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrintProcessors( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrintProcessorInfo,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[984],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrintProcessorDirectory( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrintProcessorDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1062],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1134],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1188],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1230],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1290],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAbortPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1332],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReadPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][out] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcNoBytesRead)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1374],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1434],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pAddJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1476],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcScheduleJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1542],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ BYTE *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1590],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ BYTE *pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1662],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWaitForPrinterChange( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Flags,
    /* [out] */ DWORD *pFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1728],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1782],
                  ( unsigned char * )&phPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1824],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1872],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1920],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[1992],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumForms( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2046],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPorts( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPort,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2118],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumMonitors( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pMonitor,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2190],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum37NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2262],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2290],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcDeletePort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ ULONG_PTR hWnd,
    /* [string][in] */ wchar_t *pPortName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2318],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcCreatePrinterIC( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [out] */ GDI_HANDLE *pHandle,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2372],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcPlayGdiScriptOnPrinterIC( 
    /* [in] */ GDI_HANDLE hPrinterIC,
    /* [size_is][in] */ BYTE *pIn,
    /* [in] */ DWORD cIn,
    /* [size_is][out] */ BYTE *pOut,
    /* [in] */ DWORD cOut,
    /* [in] */ DWORD ul)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2426],
                  ( unsigned char * )&hPrinterIC);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterIC( 
    /* [out][in] */ GDI_HANDLE *phPrinterIC)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2498],
                  ( unsigned char * )&phPrinterIC);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum43NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2540],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum44NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2568],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum45NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2596],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcAddMonitor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ MONITOR_CONTAINER *pMonitorContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2624],
                  ( unsigned char * )&Name);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteMonitor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2672],
                  ( unsigned char * )&Name);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrintProcessor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2726],
                  ( unsigned char * )&Name);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2780],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2808],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcEnumPrintProcessorDatatypes( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pPrintProcessorName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDatatypes,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2836],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcResetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2914],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver2( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [in] */ DWORD dwClientMajorVersion,
    /* [in] */ DWORD dwClientMinorVersion,
    /* [out] */ DWORD *pdwServerMaxVersion,
    /* [out] */ DWORD *pdwServerMinVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[2968],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3064],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3092],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcFindClosePrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3120],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3162],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcReplyOpenPrinter( 
    /* [string][in] */ STRING_HANDLE pMachine,
    /* [out] */ PRINTER_HANDLE *phPrinterNotify,
    /* [in] */ DWORD dwPrinterRemote,
    /* [in] */ DWORD dwType,
    /* [range][in] */ DWORD cbBuffer,
    /* [disable_consistency_check][size_is][unique][in] */ BYTE *pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3190],
                  ( unsigned char * )&pMachine);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinter( 
    /* [in] */ PRINTER_HANDLE hNotify,
    /* [in] */ DWORD fdwFlags,
    /* [range][in] */ DWORD cbBuffer,
    /* [disable_consistency_check][size_is][unique][in] */ BYTE *pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3262],
                  ( unsigned char * )&hNotify);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReplyClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phNotify)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3322],
                  ( unsigned char * )&phNotify);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPortEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PORT_CONTAINER *pPortContainer,
    /* [in] */ PORT_VAR_CONTAINER *pPortVarContainer,
    /* [string][in] */ wchar_t *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3364],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal,
    /* [range][in] */ DWORD cbBuffer,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3424],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3502],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3530],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal,
    /* [unique][in] */ RPC_V2_NOTIFY_OPTIONS *pOptions)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3558],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinterEx( 
    /* [in] */ PRINTER_HANDLE hNotify,
    /* [in] */ DWORD dwColor,
    /* [in] */ DWORD fdwFlags,
    /* [out] */ DWORD *pdwResult,
    /* [in] */ DWORD dwReplyType,
    /* [in] */ long Reply)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3630],
                  ( unsigned char * )&hNotify);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterRefreshPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwColor,
    /* [unique][in] */ RPC_V2_NOTIFY_OPTIONS *pOptions,
    /* [out] */ long *ppInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3702],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3762],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcOpenPrinterEx( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3790],
                  ( unsigned char * )&pPrinterName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo,
    /* [out] */ PRINTER_HANDLE *pHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3862],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pPortName,
    /* [in] */ PORT_CONTAINER *pPortContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3934],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwIndex,
    /* [size_is][out] */ wchar_t *pValueName,
    /* [in] */ DWORD cbValueName,
    /* [out] */ DWORD *pcbValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ BYTE *pData,
    /* [in] */ DWORD cbData,
    /* [out] */ DWORD *pcbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[3988],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4078],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4126],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4154],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4182],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcSetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ BYTE *pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4210],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ BYTE *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4282],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ BYTE *pEnumValues,
    /* [in] */ DWORD cbEnumValues,
    /* [out] */ DWORD *pcbEnumValues,
    /* [out] */ DWORD *pnEnumValues)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4360],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ wchar_t *pSubkey,
    /* [in] */ DWORD cbSubkey,
    /* [out] */ DWORD *pcbSubkey)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4432],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4498],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4552],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4600],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcDeletePrinterDriverEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName,
    /* [in] */ DWORD dwDeleteFlag,
    /* [in] */ DWORD dwVersionNum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4628],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPerMachineConnection( 
    /* [unique][string][in] */ STRING_HANDLE pServer,
    /* [string][in] */ const wchar_t *pPrinterName,
    /* [string][in] */ const wchar_t *pPrintServer,
    /* [string][in] */ const wchar_t *pProvider)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4694],
                  ( unsigned char * )&pServer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePerMachineConnection( 
    /* [unique][string][in] */ STRING_HANDLE pServer,
    /* [string][in] */ const wchar_t *pPrinterName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4754],
                  ( unsigned char * )&pServer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPerMachineConnections( 
    /* [unique][string][in] */ STRING_HANDLE pServer,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4802],
                  ( unsigned char * )&pServer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcXcvData( 
    /* [in] */ PRINTER_HANDLE hXcv,
    /* [string][in] */ const wchar_t *pszDataName,
    /* [size_is][in] */ BYTE *pInputData,
    /* [in] */ DWORD cbInputData,
    /* [size_is][out] */ BYTE *pOutputData,
    /* [in] */ DWORD cbOutputData,
    /* [out] */ DWORD *pcbOutputNeeded,
    /* [out][in] */ DWORD *pdwStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4868],
                  ( unsigned char * )&hXcv);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriverEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[4952],
                  ( unsigned char * )&pName);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5006],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5034],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5062],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5090],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5118],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5146],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcFlushPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten,
    /* [in] */ DWORD cSleep)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5174],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSendRecvBidiData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ const wchar_t *pAction,
    /* [in] */ long pReqData,
    /* [out] */ long *ppRespData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5240],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5300],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5328],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5356],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5384],
                  ( unsigned char * )&IDL_handle);
    
}


HRESULT RpcGetCorePrinterDrivers( 
    /* [unique][string][in] */ STRING_HANDLE pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD cchCoreDrivers,
    /* [size_is][in] */ const wchar_t *pszzCoreDriverDependencies,
    /* [in] */ DWORD cCorePrinterDrivers,
    /* [out] */ long *pCorePrinterDrivers)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5412],
                  ( unsigned char * )&pszServer);
    return ( HRESULT  )_RetVal.Simple;
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5484],
                  ( unsigned char * )&IDL_handle);
    
}


HRESULT RpcGetPrinterDriverPackagePath( 
    /* [unique][string][in] */ STRING_HANDLE pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [unique][string][in] */ const wchar_t *pszLanguage,
    /* [string][in] */ const wchar_t *pszPackageID,
    /* [size_is][unique][out][in] */ wchar_t *pszDriverPackageCab,
    /* [in] */ DWORD cchDriverPackageCab,
    /* [out] */ LPDWORD pcchRequiredSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5512],
                  ( unsigned char * )&pszServer);
    return ( HRESULT  )_RetVal.Simple;
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5590],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5618],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5646],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5674],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5702],
                  ( unsigned char * )&IDL_handle);
    
}


DWORD RpcGetJobNamedPropertyValue( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName,
    /* [out] */ long *pValue)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5730],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ long pProperty)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5790],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5844],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobNamedProperties( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [out] */ DWORD *pcProperties,
    /* [out] */ long *ppProperties)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5898],
                  ( unsigned char * )&hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


long Proc114( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_0)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5958],
                  ( unsigned char * )&IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc115( 
    /* [context_handle][in] */ void *arg_0,
    /* [out] */ unsigned __int3264 *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[5998],
                  ( unsigned char * )&arg_0);
    return ( long  )_RetVal.Simple;
    
}


long Proc116( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                  (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[6046],
                  ( unsigned char * )&arg_0);
    return ( long  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcEnumPrinters */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 12 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 14 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 16 */	NdrFcShort( 0x18 ),	/* 24 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 22 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Name */

/* 36 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 42 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 44 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinterEnum */

/* 48 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 50 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 60 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 66 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinter */

/* 78 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 88 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 90 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 92 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	NdrFcShort( 0x40 ),	/* 64 */
/* 98 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 100 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 112 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 114 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 118 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter pDatatype */

/* 120 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 124 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 126 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter AccessRequired */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJob */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x2 ),	/* 2 */
/* 152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x34 ),	/* 52 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 166 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 174 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 176 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 178 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 182 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJobContainer */

/* 186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 188 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 190 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter Command */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetJob */

/* 204 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x3 ),	/* 3 */
/* 212 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 214 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 216 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 218 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 220 */	NdrFcShort( 0x3c ),	/* 60 */
/* 222 */	NdrFcShort( 0x24 ),	/* 36 */
/* 224 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 226 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 228 */	NdrFcShort( 0x1 ),	/* 1 */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 234 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 236 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 238 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 252 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobs */

/* 276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x4 ),	/* 4 */
/* 284 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 286 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 290 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 292 */	NdrFcShort( 0x44 ),	/* 68 */
/* 294 */	NdrFcShort( 0x40 ),	/* 64 */
/* 296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 298 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 306 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 310 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter FirstJob */

/* 312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NoJobs */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 330 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 334 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter cbBuf */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinter */

/* 360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x5 ),	/* 5 */
/* 368 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 370 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 374 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x40 ),	/* 64 */
/* 380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 382 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 390 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 394 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterContainer */

/* 396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 400 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter pDevModeContainer */

/* 402 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 406 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pSecurityContainer */

/* 408 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 412 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pHandle */

/* 414 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 418 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinter */

/* 426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x6 ),	/* 6 */
/* 434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 436 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 438 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 440 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 442 */	NdrFcShort( 0x24 ),	/* 36 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 448 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 456 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 458 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 460 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinter */

/* 468 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x7 ),	/* 7 */
/* 476 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 478 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 480 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 482 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0x2c ),	/* 44 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 490 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 498 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 500 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 502 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pPrinterContainer */

/* 504 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 508 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter pDevModeContainer */

/* 510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 514 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pSecurityContainer */

/* 516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 520 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter Command */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinter */

/* 534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 542 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 544 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 546 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0x34 ),	/* 52 */
/* 552 */	NdrFcShort( 0x24 ),	/* 36 */
/* 554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 556 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 564 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 566 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 568 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter Level */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinter */

/* 576 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 580 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter cbBuf */

/* 582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriver */

/* 600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x9 ),	/* 9 */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 612 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 614 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 622 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 634 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 636 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	NdrFcShort( 0x6f8 ),	/* Type Offset=1784 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDrivers */

/* 648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xa ),	/* 10 */
/* 656 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 658 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 660 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 662 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 666 */	NdrFcShort( 0x40 ),	/* 64 */
/* 668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 670 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 680 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 682 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 684 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 688 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDrivers */

/* 696 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 700 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 716 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver */

/* 726 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0xb ),	/* 11 */
/* 734 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 736 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 738 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 740 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0x34 ),	/* 52 */
/* 744 */	NdrFcShort( 0x24 ),	/* 36 */
/* 746 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 748 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 756 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 758 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 760 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pEnvironment */

/* 762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 766 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 774 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 778 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 786 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriverDirectory */

/* 798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0xc ),	/* 12 */
/* 806 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 808 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 810 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 812 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 814 */	NdrFcShort( 0x10 ),	/* 16 */
/* 816 */	NdrFcShort( 0x24 ),	/* 36 */
/* 818 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 820 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 830 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 832 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 834 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriverDirectory */

/* 846 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 850 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDriver */

/* 870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xd ),	/* 13 */
/* 878 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 880 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 882 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 884 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 892 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 900 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 902 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 904 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 906 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 910 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pDriverName */

/* 912 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 916 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProcessor */

/* 924 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0xe ),	/* 14 */
/* 932 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 934 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 936 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 938 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 946 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 956 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 958 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 960 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pPathName */

/* 966 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pPrintProcessorName */

/* 972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 976 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessors */

/* 984 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xf ),	/* 15 */
/* 992 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 994 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 996 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 998 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1000 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1002 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1004 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1006 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 1014 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1016 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1018 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 1020 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1022 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1024 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorInfo */

/* 1032 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1036 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1050 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1052 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrintProcessorDirectory */

/* 1062 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1070 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1072 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 1074 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1076 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1080 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1082 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1084 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1086 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 1092 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1094 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1096 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 1098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorDirectory */

/* 1110 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1122 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1124 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartDocPrinter */

/* 1134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1144 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1148 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1156 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1164 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1168 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pDocInfoContainer */

/* 1170 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	NdrFcShort( 0x75c ),	/* Type Offset=1884 */

	/* Parameter pJobId */

/* 1176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartPagePrinter */

/* 1188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1198 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1200 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1210 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1218 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1222 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWritePrinter */

/* 1230 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1238 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1240 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1242 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1244 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1246 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1250 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1252 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1260 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1262 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1264 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pBuf */

/* 1266 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1270 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter cbBuf */

/* 1272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 1278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndPagePrinter */

/* 1290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1302 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1304 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1306 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1312 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1320 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1322 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1324 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAbortPrinter */

/* 1332 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1342 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1344 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1346 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1354 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1362 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1364 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1366 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReadPrinter */

/* 1374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1382 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1386 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1390 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1396 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1404 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1406 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1408 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pBuf */

/* 1410 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter cbBuf */

/* 1416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNoBytesRead */

/* 1422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1430 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndDocPrinter */

/* 1434 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1444 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1446 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1448 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1456 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1464 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1466 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1468 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddJob */

/* 1476 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1484 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1486 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1488 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1490 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1492 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1494 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1496 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1498 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1506 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1508 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1510 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter Level */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddJob */

/* 1518 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1522 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter cbBuf */

/* 1524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1530 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1532 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1538 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcScheduleJob */

/* 1542 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1550 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1552 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1554 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1556 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1558 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1564 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1572 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1574 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1576 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 1578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterData */

/* 1590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1598 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1600 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1602 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1606 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1608 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1610 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1612 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1620 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1622 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1624 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pValueName */

/* 1626 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1630 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pType */

/* 1632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1638 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1642 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter nSize */

/* 1644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1646 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1650 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1652 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinterData */

/* 1662 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1670 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1672 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1674 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1676 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1678 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1682 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1684 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1692 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1694 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1696 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pValueName */

/* 1698 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1702 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter Type */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1710 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1714 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cbData */

/* 1716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1718 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1724 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForPrinterChange */

/* 1728 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1738 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1740 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1742 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1744 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1746 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1748 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1750 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1758 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1760 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1762 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter Flags */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFlags */

/* 1770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClosePrinter */

/* 1782 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1792 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1794 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1796 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1798 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1800 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1804 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinter */

/* 1812 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1814 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1816 */	NdrFcShort( 0x78c ),	/* Type Offset=1932 */

	/* Return value */

/* 1818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddForm */

/* 1824 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1836 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1838 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1846 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1854 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1856 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1858 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pFormInfoContainer */

/* 1860 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1864 */	NdrFcShort( 0x812 ),	/* Type Offset=2066 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteForm */

/* 1872 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1882 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1884 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1886 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1894 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1902 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1904 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1906 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pFormName */

/* 1908 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1912 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetForm */

/* 1920 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1928 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1930 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1932 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1934 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1936 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1938 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1940 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1942 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1950 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1952 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1954 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pFormName */

/* 1956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1960 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter Level */

/* 1962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1968 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1972 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetForm */

/* 1992 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2002 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2004 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2006 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2014 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2022 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2024 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2026 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pFormName */

/* 2028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2032 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pFormInfoContainer */

/* 2034 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2038 */	NdrFcShort( 0x812 ),	/* Type Offset=2066 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumForms */

/* 2046 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2054 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2056 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2058 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2060 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2062 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2064 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2066 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2068 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2076 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2078 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2080 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter Level */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 2088 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2092 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter cbBuf */

/* 2094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2102 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2108 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2114 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPorts */

/* 2118 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2126 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2128 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2130 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2132 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2136 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2138 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2140 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2148 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2150 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2152 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPort */

/* 2160 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter cbBuf */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2174 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2180 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2186 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumMonitors */

/* 2190 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2198 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2200 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2202 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2204 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2208 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2210 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2212 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2222 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2224 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMonitor */

/* 2232 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2236 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter cbBuf */

/* 2238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2252 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum37NotUsedOnWire */

/* 2262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2272 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2274 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2282 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 2290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2300 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2302 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2310 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePort */

/* 2318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2328 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2330 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2332 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2338 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2340 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2350 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2352 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter hWnd */

/* 2354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPortName */

/* 2360 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2364 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 2366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCreatePrinterIC */

/* 2372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2380 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2382 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2384 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2390 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2394 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2402 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2404 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2406 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pHandle */

/* 2408 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2412 */	NdrFcShort( 0x824 ),	/* Type Offset=2084 */

	/* Parameter pDevModeContainer */

/* 2414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2418 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 2420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPlayGdiScriptOnPrinterIC */

/* 2426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2434 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2436 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2438 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2440 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2442 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2446 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2448 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinterIC */

/* 2456 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2458 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2460 */	NdrFcShort( 0x828 ),	/* Type Offset=2088 */

	/* Parameter pIn */

/* 2462 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2466 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter cIn */

/* 2468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOut */

/* 2474 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2478 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cOut */

/* 2480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ul */

/* 2486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2494 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterIC */

/* 2498 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2508 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2510 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2512 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2514 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2516 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2520 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinterIC */

/* 2528 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2530 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2532 */	NdrFcShort( 0x830 ),	/* Type Offset=2096 */

	/* Return value */

/* 2534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 2540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2550 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2560 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum44NotUsedOnWire */

/* 2568 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2578 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2588 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum45NotUsedOnWire */

/* 2596 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2602 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2606 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2616 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcAddMonitor */

/* 2624 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2634 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2636 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2638 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2644 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2646 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2656 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2658 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorContainer */

/* 2660 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2664 */	NdrFcShort( 0x85e ),	/* Type Offset=2142 */

	/* Return value */

/* 2666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteMonitor */

/* 2672 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2680 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2682 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2684 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2686 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2692 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2694 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2704 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2706 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2712 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorName */

/* 2714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2718 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 2720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProcessor */

/* 2726 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2736 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2738 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2740 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2746 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2748 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2756 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2758 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2760 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2766 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 2768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2772 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 2774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 2780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2790 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2800 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 2808 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2820 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2828 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcEnumPrintProcessorDatatypes */

/* 2836 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2844 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2846 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 2848 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2850 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2852 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2854 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2856 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2858 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2866 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2868 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2870 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 2872 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2876 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDatatypes */

/* 2884 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2888 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 2890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2892 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2898 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2904 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2910 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinter */

/* 2914 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2924 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2926 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2928 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2930 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2936 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2944 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2946 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2948 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pDatatype */

/* 2950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2954 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 2956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2960 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 2962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver2 */

/* 2968 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2974 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2976 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2978 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2980 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2982 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2984 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2986 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2988 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 2990 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2998 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3000 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3002 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pEnvironment */

/* 3004 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3008 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 3016 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3020 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 3022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3024 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3030 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMajorVersion */

/* 3034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3036 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMinorVersion */

/* 3040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3042 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMaxVersion */

/* 3046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3048 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMinVersion */

/* 3052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3054 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3060 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 3064 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3074 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3082 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3084 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 3092 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3102 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3104 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3112 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFindClosePrinterChangeNotification */

/* 3120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3136 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3140 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3142 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3150 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3152 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3154 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 3156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 3162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3174 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3182 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcReplyOpenPrinter */

/* 3190 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3198 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3200 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 3202 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3204 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3206 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3208 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3212 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMachine */

/* 3220 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3222 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3224 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter phPrinterNotify */

/* 3226 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3230 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter dwPrinterRemote */

/* 3232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwType */

/* 3238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3244 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3246 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3248 */	NdrFcShort( 0x86c ),	/* 2156 */

	/* Parameter pBuffer */

/* 3250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3252 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3254 */	NdrFcShort( 0x876 ),	/* Type Offset=2166 */

	/* Return value */

/* 3256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3258 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinter */

/* 3262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3270 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3272 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3274 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3276 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3278 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3284 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 3292 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3296 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter fdwFlags */

/* 3298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3304 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3306 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3308 */	NdrFcShort( 0x890 ),	/* 2192 */

	/* Parameter pBuffer */

/* 3310 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3314 */	NdrFcShort( 0x89a ),	/* Type Offset=2202 */

	/* Return value */

/* 3316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3318 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyClosePrinter */

/* 3322 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3332 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 3334 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3336 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3338 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3340 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3342 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3344 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phNotify */

/* 3352 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 3354 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3356 */	NdrFcShort( 0x78c ),	/* Type Offset=1932 */

	/* Return value */

/* 3358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPortEx */

/* 3364 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3372 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3374 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 3376 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3378 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3386 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3394 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3398 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3400 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3404 */	NdrFcShort( 0x958 ),	/* Type Offset=2392 */

	/* Parameter pPortVarContainer */

/* 3406 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3410 */	NdrFcShort( 0x96a ),	/* Type Offset=2410 */

	/* Parameter pMonitorName */

/* 3412 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3416 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 3418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3420 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotification */

/* 3424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3432 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3434 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3436 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3438 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3440 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3444 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3446 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3448 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3454 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3456 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3458 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter fdwFlags */

/* 3460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 3466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 3472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3476 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter dwPrinterLocal */

/* 3478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3480 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3484 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3486 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3488 */	NdrFcShort( 0x97e ),	/* 2430 */

	/* Parameter pBuffer */

/* 3490 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3492 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3494 */	NdrFcShort( 0x988 ),	/* Type Offset=2440 */

	/* Return value */

/* 3496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3498 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 3502 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3508 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3512 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3514 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3522 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3540 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3550 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 3558 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3566 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3568 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3570 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3572 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3574 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3578 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3580 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3588 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3590 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3592 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter fdwFlags */

/* 3594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 3600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 3606 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3610 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter dwPrinterLocal */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 3618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3620 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3622 */	NdrFcShort( 0x9a2 ),	/* Type Offset=2466 */

	/* Return value */

/* 3624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3626 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinterEx */

/* 3630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3638 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3640 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3644 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3646 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3648 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 3652 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 3660 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3662 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3664 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter dwColor */

/* 3666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwFlags */

/* 3672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwResult */

/* 3678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReplyType */

/* 3684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reply */

/* 3690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterRefreshPrinterChangeNotification */

/* 3702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3710 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3712 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3718 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3720 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3724 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3732 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3734 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3736 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter dwColor */

/* 3738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 3744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3748 */	NdrFcShort( 0x9a2 ),	/* Type Offset=2466 */

	/* Parameter ppInfo */

/* 3750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3758 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum68NotUsedOnWire */

/* 3762 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3774 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3780 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3782 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcOpenPrinterEx */

/* 3790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3798 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3800 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 3802 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3804 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3808 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3810 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3812 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 3820 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3822 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3824 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 3826 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3830 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter pDatatype */

/* 3832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3836 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 3838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3842 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter AccessRequired */

/* 3844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pClientInfo */

/* 3850 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3852 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3854 */	NdrFcShort( 0xa84 ),	/* Type Offset=2692 */

	/* Return value */

/* 3856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3858 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterEx */

/* 3862 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3868 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3870 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3872 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 3874 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3876 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3880 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3884 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3892 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3894 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3896 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterContainer */

/* 3898 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3902 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Parameter pDevModeContainer */

/* 3904 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3908 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pSecurityContainer */

/* 3910 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3914 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pClientInfo */

/* 3916 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3920 */	NdrFcShort( 0xa84 ),	/* Type Offset=2692 */

	/* Parameter pHandle */

/* 3922 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3924 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3926 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 3928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3930 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPort */

/* 3934 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3940 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3942 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3944 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 3946 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3948 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3956 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3964 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3966 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3968 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortName */

/* 3970 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3974 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3976 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3980 */	NdrFcShort( 0x958 ),	/* Type Offset=2392 */

	/* Return value */

/* 3982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3984 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterData */

/* 3988 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3996 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3998 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4000 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4002 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4004 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4006 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4008 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 4010 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4018 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4020 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4022 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter dwIndex */

/* 4024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4026 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueName */

/* 4030 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4032 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4034 */	NdrFcShort( 0xa96 ),	/* Type Offset=2710 */

	/* Parameter cbValueName */

/* 4036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4038 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbValueName */

/* 4042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4044 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 4048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4050 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 4054 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4056 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4058 */	NdrFcShort( 0xab0 ),	/* Type Offset=2736 */

	/* Parameter cbData */

/* 4060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4062 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 4066 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4068 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4074 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterData */

/* 4078 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4084 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4088 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4090 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4092 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4094 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4098 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4100 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4108 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4112 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pValueName */

/* 4114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4118 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 4120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum74NotUsedOnWire */

/* 4126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4136 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4144 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4146 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 4154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x4b ),	/* 75 */
/* 4162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4164 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4174 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum76NotUsedOnWire */

/* 4182 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4192 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4194 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4200 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4202 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcSetPrinterDataEx */

/* 4210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4218 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4220 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4222 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4224 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4226 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4230 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4232 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4240 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4242 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4244 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pKeyName */

/* 4246 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4250 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pValueName */

/* 4252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4256 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter Type */

/* 4258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 4264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4268 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter cbData */

/* 4270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4272 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4278 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDataEx */

/* 4282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4290 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4292 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4296 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4298 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4300 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4302 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4304 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4312 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4316 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pKeyName */

/* 4318 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4322 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pValueName */

/* 4324 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4328 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pType */

/* 4330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 4336 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4338 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4340 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter nSize */

/* 4342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 4348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4350 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4356 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDataEx */

/* 4360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4368 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4370 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4376 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4378 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4380 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4382 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4390 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4394 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pKeyName */

/* 4396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4400 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pEnumValues */

/* 4402 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4406 */	NdrFcShort( 0x41a ),	/* Type Offset=1050 */

	/* Parameter cbEnumValues */

/* 4408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbEnumValues */

/* 4414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnEnumValues */

/* 4420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4422 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4428 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterKey */

/* 4432 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4438 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4442 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4446 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4448 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4454 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4462 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4464 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4466 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pKeyName */

/* 4468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4472 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pSubkey */

/* 4474 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4478 */	NdrFcShort( 0xa96 ),	/* Type Offset=2710 */

	/* Parameter cbSubkey */

/* 4480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbSubkey */

/* 4486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4494 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDataEx */

/* 4498 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x51 ),	/* 81 */
/* 4506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4508 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4510 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4512 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4514 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4520 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4528 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4530 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4532 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pKeyName */

/* 4534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4538 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pValueName */

/* 4540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4544 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 4546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterKey */

/* 4552 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4558 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4562 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4564 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4566 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4574 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4582 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4584 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4586 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pKeyName */

/* 4588 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4592 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 4594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 4600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4606 */	NdrFcShort( 0x53 ),	/* 83 */
/* 4608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4610 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4612 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4620 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePrinterDriverEx */

/* 4628 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4634 */	NdrFcShort( 0x54 ),	/* 84 */
/* 4636 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4638 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 4640 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4642 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4644 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4650 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 4658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4660 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4662 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 4664 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4668 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pDriverName */

/* 4670 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4674 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter dwDeleteFlag */

/* 4676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwVersionNum */

/* 4682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4684 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4690 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPerMachineConnection */

/* 4694 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x55 ),	/* 85 */
/* 4702 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4704 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 4706 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4708 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4716 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 4724 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4726 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4728 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 4730 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4734 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pPrintServer */

/* 4736 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4738 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4740 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pProvider */

/* 4742 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4746 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 4748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4750 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePerMachineConnection */

/* 4754 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4764 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 4766 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4768 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4774 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4776 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 4784 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4786 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4788 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 4790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4794 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 4796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPerMachineConnections */

/* 4802 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4810 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4812 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 4814 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4816 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4820 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4822 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4824 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 4832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4834 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4836 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterEnum */

/* 4838 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4842 */	NdrFcShort( 0xace ),	/* Type Offset=2766 */

	/* Parameter cbBuf */

/* 4844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 4850 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4852 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 4856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4858 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4864 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcXcvData */

/* 4868 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4874 */	NdrFcShort( 0x58 ),	/* 88 */
/* 4876 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4878 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4880 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4882 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4884 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4886 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4888 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 4890 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hXcv */

/* 4898 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4900 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4902 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pszDataName */

/* 4904 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4908 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pInputData */

/* 4910 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4914 */	NdrFcShort( 0x41a ),	/* Type Offset=1050 */

	/* Parameter cbInputData */

/* 4916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOutputData */

/* 4922 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4924 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4926 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter cbOutputData */

/* 4928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4930 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbOutputNeeded */

/* 4934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4936 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwStatus */

/* 4940 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4942 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4948 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriverEx */

/* 4952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x59 ),	/* 89 */
/* 4960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4962 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 4964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4966 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4972 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4974 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 4982 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4984 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4986 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 4988 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4992 */	NdrFcShort( 0x6f8 ),	/* Type Offset=1784 */

	/* Parameter dwFileCopyFlags */

/* 4994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 5006 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5012 */	NdrFcShort( 0x5a ),	/* 90 */
/* 5014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5016 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5018 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5026 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 5034 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x5b ),	/* 91 */
/* 5042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5044 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5046 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5052 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5054 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 5062 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5068 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5072 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5080 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5082 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 5090 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x5d ),	/* 93 */
/* 5098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5100 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5102 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5108 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5110 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 5118 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x5e ),	/* 94 */
/* 5126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5128 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5130 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5138 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 5146 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0x5f ),	/* 95 */
/* 5154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5156 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5158 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5164 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5166 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFlushPrinter */

/* 5174 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5180 */	NdrFcShort( 0x60 ),	/* 96 */
/* 5182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5184 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5186 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5188 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5190 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5196 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5204 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5206 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5208 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pBuf */

/* 5210 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5214 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter cbBuf */

/* 5216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 5222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cSleep */

/* 5228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSendRecvBidiData */

/* 5240 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x61 ),	/* 97 */
/* 5248 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5250 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5252 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5254 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5256 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5258 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5260 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5262 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5270 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5272 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5274 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pAction */

/* 5276 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5280 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pReqData */

/* 5282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRespData */

/* 5288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5296 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 5300 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x62 ),	/* 98 */
/* 5308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5310 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5312 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5320 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 5328 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5334 */	NdrFcShort( 0x63 ),	/* 99 */
/* 5336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5338 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5340 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5346 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5348 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 5356 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5366 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5368 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5374 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5376 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 5384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5390 */	NdrFcShort( 0x65 ),	/* 101 */
/* 5392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5394 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5402 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5404 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetCorePrinterDrivers */

/* 5412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x66 ),	/* 102 */
/* 5420 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5422 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 5424 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5426 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5428 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5430 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5432 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5434 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 5442 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5446 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 5448 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5452 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter cchCoreDrivers */

/* 5454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszzCoreDriverDependencies */

/* 5460 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5464 */	NdrFcShort( 0xada ),	/* Type Offset=2778 */

	/* Parameter cCorePrinterDrivers */

/* 5466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5468 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCorePrinterDrivers */

/* 5472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5474 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5480 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 5484 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x67 ),	/* 103 */
/* 5492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5494 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5496 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5502 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5504 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetPrinterDriverPackagePath */

/* 5512 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x68 ),	/* 104 */
/* 5520 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5522 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 5524 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5526 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5530 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5532 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5534 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 5542 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5544 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5546 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 5548 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5552 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pszLanguage */

/* 5554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5558 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszPackageID */

/* 5560 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5564 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pszDriverPackageCab */

/* 5566 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 5568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5570 */	NdrFcShort( 0xaf0 ),	/* Type Offset=2800 */

	/* Parameter cchDriverPackageCab */

/* 5572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRequiredSize */

/* 5578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5580 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5586 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 5590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5596 */	NdrFcShort( 0x69 ),	/* 105 */
/* 5598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5600 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5602 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5608 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5610 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 5618 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5624 */	NdrFcShort( 0x6a ),	/* 106 */
/* 5626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5628 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5630 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5636 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5638 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 5646 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5652 */	NdrFcShort( 0x6b ),	/* 107 */
/* 5654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5656 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5658 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5664 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5666 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 5674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5680 */	NdrFcShort( 0x6c ),	/* 108 */
/* 5682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5686 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5692 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5694 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 5702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5708 */	NdrFcShort( 0x6d ),	/* 109 */
/* 5710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5712 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5720 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5722 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetJobNamedPropertyValue */

/* 5730 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x6e ),	/* 110 */
/* 5738 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5740 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5742 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5744 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5746 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5748 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5752 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5760 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5762 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5764 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 5766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 5772 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5776 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Parameter pValue */

/* 5778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJobNamedProperty */

/* 5790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0x6f ),	/* 111 */
/* 5798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5800 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5802 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5804 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5806 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5812 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5820 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5822 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5824 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 5826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProperty */

/* 5832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteJobNamedProperty */

/* 5844 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x70 ),	/* 112 */
/* 5852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5854 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5856 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5858 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5860 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5864 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5866 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5874 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5876 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5878 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 5880 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 5886 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5890 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 5892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5894 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobNamedProperties */

/* 5898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5904 */	NdrFcShort( 0x71 ),	/* 113 */
/* 5906 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5908 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5910 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5912 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5914 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5916 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 5920 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5928 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5930 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5932 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter JobId */

/* 5934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcProperties */

/* 5940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppProperties */

/* 5946 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc114 */

/* 5958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5964 */	NdrFcShort( 0x72 ),	/* 114 */
/* 5966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5968 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5970 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5976 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5978 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 5986 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5990 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 5992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc115 */

/* 5998 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6004 */	NdrFcShort( 0x73 ),	/* 115 */
/* 6006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6008 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6010 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6012 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 6014 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6016 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6018 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6020 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6028 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6030 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6032 */	NdrFcShort( 0xb0a ),	/* Type Offset=2826 */

	/* Parameter arg_1 */

/* 6034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc116 */

/* 6046 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6052 */	NdrFcShort( 0x74 ),	/* 116 */
/* 6054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6056 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6058 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6060 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 6062 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6068 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6076 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6078 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 6080 */	NdrFcShort( 0xb0a ),	/* Type Offset=2826 */

	/* Parameter arg_1 */

/* 6082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 18 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 32 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 34 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 42 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 44 */	
			0x11, 0x0,	/* FC_RP */
/* 46 */	NdrFcShort( 0x18 ),	/* Offset= 24 (70) */
/* 48 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 58 */	0x0 , 
			0x0,		/* 0 */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 70 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 76 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 78 */	NdrFcShort( 0x4 ),	/* 4 */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 84 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (48) */
/* 86 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 88 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 90 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 92 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0x1bc ),	/* Offset= 444 (540) */
/* 98 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 100 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 102 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 104 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 106 */	0x0 , 
			0x0,		/* 0 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (118) */
/* 118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 122 */	NdrFcLong( 0x1 ),	/* 1 */
/* 126 */	NdrFcShort( 0x16 ),	/* Offset= 22 (148) */
/* 128 */	NdrFcLong( 0x2 ),	/* 2 */
/* 132 */	NdrFcShort( 0x76 ),	/* Offset= 118 (250) */
/* 134 */	NdrFcLong( 0x3 ),	/* 3 */
/* 138 */	NdrFcShort( 0xfa ),	/* Offset= 250 (388) */
/* 140 */	NdrFcLong( 0x4 ),	/* 4 */
/* 144 */	NdrFcShort( 0x100 ),	/* Offset= 256 (400) */
/* 146 */	NdrFcShort( 0xffff ),	/* Offset= -1 (145) */
/* 148 */	
			0x12, 0x0,	/* FC_UP */
/* 150 */	NdrFcShort( 0x10 ),	/* Offset= 16 (166) */
/* 152 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 156 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 158 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 160 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 162 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 164 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 166 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x40 ),	/* 64 */
/* 170 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 194 */	NdrFcShort( 0xc ),	/* 12 */
/* 196 */	NdrFcShort( 0xc ),	/* 12 */
/* 198 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 202 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 208 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 210 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 212 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 214 */	NdrFcShort( 0x14 ),	/* 20 */
/* 216 */	NdrFcShort( 0x14 ),	/* 20 */
/* 218 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 222 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 224 */	NdrFcShort( 0x18 ),	/* 24 */
/* 226 */	NdrFcShort( 0x18 ),	/* 24 */
/* 228 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 230 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 232 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 234 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 236 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 238 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 242 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 244 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 246 */	0x0,		/* 0 */
			NdrFcShort( 0xffa1 ),	/* Offset= -95 (152) */
			0x5b,		/* FC_END */
/* 250 */	
			0x12, 0x0,	/* FC_UP */
/* 252 */	NdrFcShort( 0x2 ),	/* Offset= 2 (254) */
/* 254 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 256 */	NdrFcShort( 0x68 ),	/* 104 */
/* 258 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 260 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 266 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 268 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 270 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 276 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 278 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 280 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 282 */	NdrFcShort( 0xc ),	/* 12 */
/* 284 */	NdrFcShort( 0xc ),	/* 12 */
/* 286 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 288 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 296 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 298 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 300 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 302 */	NdrFcShort( 0x14 ),	/* 20 */
/* 304 */	NdrFcShort( 0x14 ),	/* 20 */
/* 306 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 308 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 310 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 312 */	NdrFcShort( 0x18 ),	/* 24 */
/* 314 */	NdrFcShort( 0x18 ),	/* 24 */
/* 316 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 318 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 320 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 322 */	NdrFcShort( 0x1c ),	/* 28 */
/* 324 */	NdrFcShort( 0x1c ),	/* 28 */
/* 326 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 328 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 330 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 332 */	NdrFcShort( 0x20 ),	/* 32 */
/* 334 */	NdrFcShort( 0x20 ),	/* 32 */
/* 336 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 338 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 340 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 346 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 352 */	NdrFcShort( 0x2c ),	/* 44 */
/* 354 */	NdrFcShort( 0x2c ),	/* 44 */
/* 356 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 358 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 360 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 362 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 364 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 366 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 368 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 370 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 372 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 376 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 380 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 382 */	0x0,		/* 0 */
			NdrFcShort( 0xff19 ),	/* Offset= -231 (152) */
			0x8,		/* FC_LONG */
/* 386 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 388 */	
			0x12, 0x0,	/* FC_UP */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 394 */	NdrFcShort( 0xc ),	/* 12 */
/* 396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 398 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 400 */	
			0x12, 0x0,	/* FC_UP */
/* 402 */	NdrFcShort( 0x2 ),	/* Offset= 2 (404) */
/* 404 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 406 */	NdrFcShort( 0x6c ),	/* 108 */
/* 408 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 410 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 412 */	NdrFcShort( 0x4 ),	/* 4 */
/* 414 */	NdrFcShort( 0x4 ),	/* 4 */
/* 416 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 418 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 420 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 428 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 430 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 432 */	NdrFcShort( 0xc ),	/* 12 */
/* 434 */	NdrFcShort( 0xc ),	/* 12 */
/* 436 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 438 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 440 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 442 */	NdrFcShort( 0x10 ),	/* 16 */
/* 444 */	NdrFcShort( 0x10 ),	/* 16 */
/* 446 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 448 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 450 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 452 */	NdrFcShort( 0x14 ),	/* 20 */
/* 454 */	NdrFcShort( 0x14 ),	/* 20 */
/* 456 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 458 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 460 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 462 */	NdrFcShort( 0x18 ),	/* 24 */
/* 464 */	NdrFcShort( 0x18 ),	/* 24 */
/* 466 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 468 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 470 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 472 */	NdrFcShort( 0x1c ),	/* 28 */
/* 474 */	NdrFcShort( 0x1c ),	/* 28 */
/* 476 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 478 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 480 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 482 */	NdrFcShort( 0x20 ),	/* 32 */
/* 484 */	NdrFcShort( 0x20 ),	/* 32 */
/* 486 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 488 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 490 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 494 */	NdrFcShort( 0x24 ),	/* 36 */
/* 496 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 498 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 502 */	NdrFcShort( 0x2c ),	/* 44 */
/* 504 */	NdrFcShort( 0x2c ),	/* 44 */
/* 506 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 508 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 510 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 512 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 514 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 516 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 518 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 520 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 526 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 528 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 530 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 532 */	0x0,		/* 0 */
			NdrFcShort( 0xfe83 ),	/* Offset= -381 (152) */
			0x8,		/* FC_LONG */
/* 536 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* Offset= 0 (546) */
/* 548 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 550 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3b ),	/* Offset= -453 (98) */
			0x5b,		/* FC_END */
/* 554 */	
			0x12, 0x0,	/* FC_UP */
/* 556 */	NdrFcShort( 0x2 ),	/* Offset= 2 (558) */
/* 558 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 562 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 564 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 566 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 568 */	0x0 , 
			0x0,		/* 0 */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 578 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 580 */	
			0x11, 0x0,	/* FC_RP */
/* 582 */	NdrFcShort( 0x1c2 ),	/* Offset= 450 (1032) */
/* 584 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 586 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 588 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 590 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 592 */	0x0 , 
			0x0,		/* 0 */
/* 594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (604) */
/* 604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 606 */	NdrFcShort( 0xa ),	/* 10 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x3a ),	/* Offset= 58 (670) */
/* 614 */	NdrFcLong( 0x1 ),	/* 1 */
/* 618 */	NdrFcShort( 0x74 ),	/* Offset= 116 (734) */
/* 620 */	NdrFcLong( 0x2 ),	/* 2 */
/* 624 */	NdrFcShort( 0x9c ),	/* Offset= 156 (780) */
/* 626 */	NdrFcLong( 0x3 ),	/* 3 */
/* 630 */	NdrFcShort( 0x126 ),	/* Offset= 294 (924) */
/* 632 */	NdrFcLong( 0x4 ),	/* 4 */
/* 636 */	NdrFcShort( 0x12a ),	/* Offset= 298 (934) */
/* 638 */	NdrFcLong( 0x5 ),	/* 5 */
/* 642 */	NdrFcShort( 0x148 ),	/* Offset= 328 (970) */
/* 644 */	NdrFcLong( 0x6 ),	/* 6 */
/* 648 */	NdrFcShort( 0x114 ),	/* Offset= 276 (924) */
/* 650 */	NdrFcLong( 0x7 ),	/* 7 */
/* 654 */	NdrFcShort( 0x162 ),	/* Offset= 354 (1008) */
/* 656 */	NdrFcLong( 0x8 ),	/* 8 */
/* 660 */	NdrFcShort( 0x108 ),	/* Offset= 264 (924) */
/* 662 */	NdrFcLong( 0x9 ),	/* 9 */
/* 666 */	NdrFcShort( 0x102 ),	/* Offset= 258 (924) */
/* 668 */	NdrFcShort( 0xffff ),	/* Offset= -1 (667) */
/* 670 */	
			0x12, 0x0,	/* FC_UP */
/* 672 */	NdrFcShort( 0x2 ),	/* Offset= 2 (674) */
/* 674 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 676 */	NdrFcShort( 0x7c ),	/* 124 */
/* 678 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 680 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 688 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 690 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 694 */	NdrFcShort( 0x4 ),	/* 4 */
/* 696 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 698 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 700 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 702 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 704 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 706 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0xfdd4 ),	/* Offset= -556 (152) */
/* 710 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 712 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 714 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 716 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 718 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 720 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 722 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 724 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 726 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 728 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 730 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 732 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 734 */	
			0x12, 0x0,	/* FC_UP */
/* 736 */	NdrFcShort( 0x2 ),	/* Offset= 2 (738) */
/* 738 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 744 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 746 */	NdrFcShort( 0x4 ),	/* 4 */
/* 748 */	NdrFcShort( 0x4 ),	/* 4 */
/* 750 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 752 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 754 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 760 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 762 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 764 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 766 */	NdrFcShort( 0xc ),	/* 12 */
/* 768 */	NdrFcShort( 0xc ),	/* 12 */
/* 770 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 772 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 774 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 776 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 778 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 780 */	
			0x12, 0x0,	/* FC_UP */
/* 782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (784) */
/* 784 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x54 ),	/* 84 */
/* 788 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 790 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 798 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 800 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	NdrFcShort( 0x4 ),	/* 4 */
/* 806 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 808 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 816 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 818 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 820 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 822 */	NdrFcShort( 0xc ),	/* 12 */
/* 824 */	NdrFcShort( 0xc ),	/* 12 */
/* 826 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 828 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 832 */	NdrFcShort( 0x10 ),	/* 16 */
/* 834 */	NdrFcShort( 0x10 ),	/* 16 */
/* 836 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 838 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 840 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 842 */	NdrFcShort( 0x14 ),	/* 20 */
/* 844 */	NdrFcShort( 0x14 ),	/* 20 */
/* 846 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 848 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 850 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 852 */	NdrFcShort( 0x18 ),	/* 24 */
/* 854 */	NdrFcShort( 0x18 ),	/* 24 */
/* 856 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 858 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 860 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 862 */	NdrFcShort( 0x20 ),	/* 32 */
/* 864 */	NdrFcShort( 0x20 ),	/* 32 */
/* 866 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 868 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 872 */	NdrFcShort( 0x24 ),	/* 36 */
/* 874 */	NdrFcShort( 0x24 ),	/* 36 */
/* 876 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 878 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 880 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 882 */	NdrFcShort( 0x28 ),	/* 40 */
/* 884 */	NdrFcShort( 0x28 ),	/* 40 */
/* 886 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 888 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 890 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 892 */	NdrFcShort( 0x2c ),	/* 44 */
/* 894 */	NdrFcShort( 0x2c ),	/* 44 */
/* 896 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 898 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 902 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 904 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 906 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 908 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 910 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 912 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 914 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 916 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 918 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 920 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 922 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 924 */	
			0x12, 0x0,	/* FC_UP */
/* 926 */	NdrFcShort( 0x2 ),	/* Offset= 2 (928) */
/* 928 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 934 */	
			0x12, 0x0,	/* FC_UP */
/* 936 */	NdrFcShort( 0x2 ),	/* Offset= 2 (938) */
/* 938 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0xc ),	/* 12 */
/* 942 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 944 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 952 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 954 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 956 */	NdrFcShort( 0x4 ),	/* 4 */
/* 958 */	NdrFcShort( 0x4 ),	/* 4 */
/* 960 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 962 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 964 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 966 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 968 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 970 */	
			0x12, 0x0,	/* FC_UP */
/* 972 */	NdrFcShort( 0x2 ),	/* Offset= 2 (974) */
/* 974 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 976 */	NdrFcShort( 0x14 ),	/* 20 */
/* 978 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 980 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 988 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 996 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 998 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1000 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1002 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1004 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1006 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1008 */	
			0x12, 0x0,	/* FC_UP */
/* 1010 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1012) */
/* 1012 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1018 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1026 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1028 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1030 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1032 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1038) */
/* 1040 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1042 */	0x0,		/* 0 */
			NdrFcShort( 0xfe35 ),	/* Offset= -459 (584) */
			0x5b,		/* FC_END */
/* 1046 */	
			0x12, 0x0,	/* FC_UP */
/* 1048 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1050) */
/* 1050 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1054 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1058 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1060 */	0x0 , 
			0x0,		/* 0 */
/* 1062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1070 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1072 */	
			0x11, 0x0,	/* FC_RP */
/* 1074 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1784) */
/* 1076 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1078 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1080 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1082 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1084 */	0x0 , 
			0x0,		/* 0 */
/* 1086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1096) */
/* 1096 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1098 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1100 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1104 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1138) */
/* 1106 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1110 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1162) */
/* 1112 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1116 */	NdrFcShort( 0x72 ),	/* Offset= 114 (1230) */
/* 1118 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1122 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (1366) */
/* 1124 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1128 */	NdrFcShort( 0x182 ),	/* Offset= 386 (1514) */
/* 1130 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1134 */	NdrFcShort( 0x1e0 ),	/* Offset= 480 (1614) */
/* 1136 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1135) */
/* 1138 */	
			0x12, 0x0,	/* FC_UP */
/* 1140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1142) */
/* 1142 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1146 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1148 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1158 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1160 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1162 */	
			0x12, 0x0,	/* FC_UP */
/* 1164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1166) */
/* 1166 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1168 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1170 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1178 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1188 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1194 */	NdrFcShort( 0xc ),	/* 12 */
/* 1196 */	NdrFcShort( 0xc ),	/* 12 */
/* 1198 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1202 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1208 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1210 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1212 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1214 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1216 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1218 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1222 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1224 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1226 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1228 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1230 */	
			0x12, 0x0,	/* FC_UP */
/* 1232 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1256) */
/* 1234 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1236 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1238 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1242 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1244 */	0x0 , 
			0x0,		/* 0 */
/* 1246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1256 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1258 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1260 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1266 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1268 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1270 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1272 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1280 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1282 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1284 */	NdrFcShort( 0xc ),	/* 12 */
/* 1286 */	NdrFcShort( 0xc ),	/* 12 */
/* 1288 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1290 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1292 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1296 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1298 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1302 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1304 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1306 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1308 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1314 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1316 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1318 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1320 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1322 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1324 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1326 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1328 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1330 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1334 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1336 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1338 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1342 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1344 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1346 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1348 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1350 */	NdrFcShort( 0xff8c ),	/* Offset= -116 (1234) */
/* 1352 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1354 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1358 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1360 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1362 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1364 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1366 */	
			0x12, 0x0,	/* FC_UP */
/* 1368 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1392) */
/* 1370 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1372 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1374 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1376 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1378 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1380 */	0x0 , 
			0x0,		/* 0 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1390 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1392 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1394 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1396 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1400 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1402 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1404 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1406 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1408 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1414 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1416 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1418 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1420 */	NdrFcShort( 0xc ),	/* 12 */
/* 1422 */	NdrFcShort( 0xc ),	/* 12 */
/* 1424 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1426 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1428 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1430 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1432 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1434 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1436 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1438 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1440 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1442 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1444 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1446 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1448 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1450 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1452 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1454 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1460 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1462 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1464 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1466 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1468 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1470 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1472 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1474 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1478 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1480 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1482 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1484 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1486 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (1234) */
/* 1488 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1490 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1492 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1494 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1496 */	NdrFcShort( 0xff82 ),	/* Offset= -126 (1370) */
/* 1498 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1500 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1502 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1504 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1506 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1508 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1510 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1512 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1514 */	
			0x12, 0x0,	/* FC_UP */
/* 1516 */	NdrFcShort( 0xa ),	/* Offset= 10 (1526) */
/* 1518 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1524 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1526 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1528 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1558) */
/* 1534 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1536 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1538 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1540 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1542 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1544 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1546 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1548 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (1518) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1552 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1554 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1556 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1558 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1560 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1562 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1564 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1566 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1568 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1570 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1572 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1574 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1576 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1578 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1580 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1582 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1584 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1586 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1588 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1590 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1592 */	NdrFcShort( 0xfe9a ),	/* Offset= -358 (1234) */
/* 1594 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1596 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (1370) */
/* 1598 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1600 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1602 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1604 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1606 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1608 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1610 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1612 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1614 */	
			0x12, 0x0,	/* FC_UP */
/* 1616 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1662) */
/* 1618 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1620 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1622 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1624 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1626 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1628 */	0x0 , 
			0x0,		/* 0 */
/* 1630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1638 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1640 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1642 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1644 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1646 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1648 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1650 */	0x0 , 
			0x0,		/* 0 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1660 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1662 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1664 */	NdrFcShort( 0x88 ),	/* 136 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x28 ),	/* Offset= 40 (1708) */
/* 1670 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1672 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1674 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1676 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1678 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1680 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1682 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1684 */	0x0,		/* 0 */
			NdrFcShort( 0xff59 ),	/* Offset= -167 (1518) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1688 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1690 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1692 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1694 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1696 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1698 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1700 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1702 */	0x0,		/* 0 */
			NdrFcShort( 0xff47 ),	/* Offset= -185 (1518) */
			0xb,		/* FC_HYPER */
/* 1706 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1708 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1710 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1712 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1714 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1716 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1718 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1720 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1722 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1724 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1726 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1728 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1730 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1732 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1734 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1736 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1738 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1740 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1742 */	NdrFcShort( 0xfe04 ),	/* Offset= -508 (1234) */
/* 1744 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1746 */	NdrFcShort( 0xfe88 ),	/* Offset= -376 (1370) */
/* 1748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1750 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1752 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1754 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1756 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1758 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1760 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1762 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1764 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1766 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1768 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1770 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1772 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1774 */	NdrFcShort( 0xff64 ),	/* Offset= -156 (1618) */
/* 1776 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1778 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1780 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1782 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (1640) */
/* 1784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1790) */
/* 1792 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1794 */	0x0,		/* 0 */
			NdrFcShort( 0xfd31 ),	/* Offset= -719 (1076) */
			0x5b,		/* FC_END */
/* 1798 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1800 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1802 */	
			0x11, 0x0,	/* FC_RP */
/* 1804 */	NdrFcShort( 0x50 ),	/* Offset= 80 (1884) */
/* 1806 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1808 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1810 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1812 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1814 */	0x0 , 
			0x0,		/* 0 */
/* 1816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1826) */
/* 1826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1830 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1834 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1838) */
/* 1836 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1835) */
/* 1838 */	
			0x12, 0x0,	/* FC_UP */
/* 1840 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1842) */
/* 1842 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1844 */	NdrFcShort( 0xc ),	/* 12 */
/* 1846 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1848 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1854 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1856 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1858 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1864 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1866 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1868 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1876 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1878 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1880 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1884 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1890) */
/* 1892 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1894 */	0x0,		/* 0 */
			NdrFcShort( 0xffa7 ),	/* Offset= -89 (1806) */
			0x5b,		/* FC_END */
/* 1898 */	
			0x11, 0x0,	/* FC_RP */
/* 1900 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1902) */
/* 1902 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1906 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1910 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1912 */	0x0 , 
			0x0,		/* 0 */
/* 1914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1922 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1924 */	
			0x11, 0x0,	/* FC_RP */
/* 1926 */	NdrFcShort( 0xf884 ),	/* Offset= -1916 (10) */
/* 1928 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1932) */
/* 1932 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1934 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1936 */	
			0x11, 0x0,	/* FC_RP */
/* 1938 */	NdrFcShort( 0x80 ),	/* Offset= 128 (2066) */
/* 1940 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1942 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1944 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 1946 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1948 */	0x0 , 
			0x0,		/* 0 */
/* 1950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1960) */
/* 1960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1962 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1964 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1968 */	NdrFcShort( 0xa ),	/* Offset= 10 (1978) */
/* 1970 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1974 */	NdrFcShort( 0x2e ),	/* Offset= 46 (2020) */
/* 1976 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1975) */
/* 1978 */	
			0x12, 0x0,	/* FC_UP */
/* 1980 */	NdrFcShort( 0xc ),	/* Offset= 12 (1992) */
/* 1982 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1986 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1988 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1990 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1992 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1994 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1996 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1998 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2000 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2002 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2004 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2006 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2008 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2010 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2012 */	0x0,		/* 0 */
			NdrFcShort( 0xfe11 ),	/* Offset= -495 (1518) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2016 */	0x0,		/* 0 */
			NdrFcShort( 0xffdd ),	/* Offset= -35 (1982) */
			0x5b,		/* FC_END */
/* 2020 */	
			0x12, 0x0,	/* FC_UP */
/* 2022 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2024) */
/* 2024 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2026 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2030 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2050) */
/* 2032 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2034 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2036 */	NdrFcShort( 0xfdfa ),	/* Offset= -518 (1518) */
/* 2038 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2040 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1982) */
/* 2042 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2044 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2046 */	0x36,		/* FC_POINTER */
			0x6,		/* FC_SHORT */
/* 2048 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 2050 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2052 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2054 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2056 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2058 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2060 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2062 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2064 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2066 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2072 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2072) */
/* 2074 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2076 */	0x0,		/* 0 */
			NdrFcShort( 0xff77 ),	/* Offset= -137 (1940) */
			0x5b,		/* FC_END */
/* 2080 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2082 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2084) */
/* 2084 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 2086 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 2088 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 2090 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2092 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2094 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2096) */
/* 2096 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 2098 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2100 */	
			0x11, 0x0,	/* FC_RP */
/* 2102 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2142) */
/* 2104 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2106 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2108 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 2110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2112 */	0x0 , 
			0x0,		/* 0 */
/* 2114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2124) */
/* 2124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2126 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2128 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2132 */	NdrFcShort( 0xfc1e ),	/* Offset= -994 (1138) */
/* 2134 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2138 */	NdrFcShort( 0xfed4 ),	/* Offset= -300 (1838) */
/* 2140 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2139) */
/* 2142 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2148) */
/* 2150 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2152 */	0x0,		/* 0 */
			NdrFcShort( 0xffcf ),	/* Offset= -49 (2104) */
			0x5b,		/* FC_END */
/* 2156 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2162 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2166 */	
			0x12, 0x0,	/* FC_UP */
/* 2168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2170) */
/* 2170 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2174 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2178 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2180 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2186 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2190 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2192 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2198 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2202 */	
			0x12, 0x0,	/* FC_UP */
/* 2204 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2206) */
/* 2206 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2208 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2210 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2214 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2216 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2222 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2226 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2228 */	
			0x11, 0x0,	/* FC_RP */
/* 2230 */	NdrFcShort( 0xa2 ),	/* Offset= 162 (2392) */
/* 2232 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2234 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2240 */	0x0 , 
			0x0,		/* 0 */
/* 2242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2252) */
/* 2252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2256 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2260 */	NdrFcShort( 0xfb9e ),	/* Offset= -1122 (1138) */
/* 2262 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2266 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2282) */
/* 2268 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2272 */	NdrFcShort( 0x3a ),	/* Offset= 58 (2330) */
/* 2274 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 2278 */	NdrFcShort( 0x4e ),	/* Offset= 78 (2356) */
/* 2280 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2279) */
/* 2282 */	
			0x12, 0x0,	/* FC_UP */
/* 2284 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2286) */
/* 2286 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2288 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2290 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2292 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2302 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2304 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2308 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2312 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2318 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2320 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2322 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2326 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2330 */	
			0x12, 0x0,	/* FC_UP */
/* 2332 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2334) */
/* 2334 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2336 */	NdrFcShort( 0xc ),	/* 12 */
/* 2338 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2340 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2342 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2344 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2346 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2350 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2356 */	
			0x12, 0x0,	/* FC_UP */
/* 2358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2360) */
/* 2360 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2362 */	NdrFcShort( 0xc ),	/* 12 */
/* 2364 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2366 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2374 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2376 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2382 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2384 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2386 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2388 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2390 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2398) */
/* 2400 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2402 */	0x0,		/* 0 */
			NdrFcShort( 0xff55 ),	/* Offset= -171 (2232) */
			0x5b,		/* FC_END */
/* 2406 */	
			0x11, 0x0,	/* FC_RP */
/* 2408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2410) */
/* 2410 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2414 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2416 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2418 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2420 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2422 */	0x12, 0x0,	/* FC_UP */
/* 2424 */	NdrFcShort( 0xf6b8 ),	/* Offset= -2376 (48) */
/* 2426 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2428 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2430 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2436 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2440 */	
			0x12, 0x0,	/* FC_UP */
/* 2442 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2444) */
/* 2444 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2446 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2448 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2450 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2452 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2454 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2464 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2466 */	
			0x12, 0x0,	/* FC_UP */
/* 2468 */	NdrFcShort( 0x5c ),	/* Offset= 92 (2560) */
/* 2470 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2472 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2474 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2476 */	NdrFcShort( 0xc ),	/* 12 */
/* 2478 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2480 */	0x0 , 
			0x0,		/* 0 */
/* 2482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2490 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2492 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2494 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2496 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2498 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2500 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2502 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2504 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2506 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2470) */
/* 2508 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 2510 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 2512 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2514 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2516 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2518 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2520 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2524 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2526 */	0x0 , 
			0x0,		/* 0 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2536 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2538 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2540 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2546 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2548 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2550 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2552 */	NdrFcShort( 0xffae ),	/* Offset= -82 (2470) */
/* 2554 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2556 */	0x0,		/* 0 */
			NdrFcShort( 0xffbf ),	/* Offset= -65 (2492) */
			0x5b,		/* FC_END */
/* 2560 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2564 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2566 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2568 */	NdrFcShort( 0xc ),	/* 12 */
/* 2570 */	NdrFcShort( 0xc ),	/* 12 */
/* 2572 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2574 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2516) */
/* 2576 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2578 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2580 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2582 */	
			0x11, 0x0,	/* FC_RP */
/* 2584 */	NdrFcShort( 0x6c ),	/* Offset= 108 (2692) */
/* 2586 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2588 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2590 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 2592 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2594 */	0x0 , 
			0x0,		/* 0 */
/* 2596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2606) */
/* 2606 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2608 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2610 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2614 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2630) */
/* 2616 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2620 */	NdrFcShort( 0xf960 ),	/* Offset= -1696 (924) */
/* 2622 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2626 */	NdrFcShort( 0x22 ),	/* Offset= 34 (2660) */
/* 2628 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2627) */
/* 2630 */	
			0x12, 0x0,	/* FC_UP */
/* 2632 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2634) */
/* 2634 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2636 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0xc ),	/* Offset= 12 (2652) */
/* 2642 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2644 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2646 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2648 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 2650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2652 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2654 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2656 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2658 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2660 */	
			0x12, 0x0,	/* FC_UP */
/* 2662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2664) */
/* 2664 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2666 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0xe ),	/* Offset= 14 (2684) */
/* 2672 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2674 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2676 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2680 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 2682 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2684 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2686 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2688 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2690 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2692 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2698) */
/* 2700 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2702 */	0x0,		/* 0 */
			NdrFcShort( 0xff8b ),	/* Offset= -117 (2586) */
			0x5b,		/* FC_END */
/* 2706 */	
			0x11, 0x0,	/* FC_RP */
/* 2708 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2710) */
/* 2710 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2712 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2714 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x55,		/* FC_DIV_2 */
/* 2716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2718 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2720 */	0x0 , 
			0x0,		/* 0 */
/* 2722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2730 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2732 */	
			0x11, 0x0,	/* FC_RP */
/* 2734 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2736) */
/* 2736 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2740 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2742 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2744 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2746 */	0x0 , 
			0x0,		/* 0 */
/* 2748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2756 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2758 */	
			0x11, 0x0,	/* FC_RP */
/* 2760 */	NdrFcShort( 0xf766 ),	/* Offset= -2202 (558) */
/* 2762 */	
			0x11, 0x0,	/* FC_RP */
/* 2764 */	NdrFcShort( 0xf94e ),	/* Offset= -1714 (1050) */
/* 2766 */	
			0x12, 0x0,	/* FC_UP */
/* 2768 */	NdrFcShort( 0xfc9e ),	/* Offset= -866 (1902) */
/* 2770 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 2772 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2774 */	
			0x11, 0x0,	/* FC_RP */
/* 2776 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2778) */
/* 2778 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2780 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2782 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2786 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2788 */	0x0 , 
			0x0,		/* 0 */
/* 2790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2798 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2800 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2804) */
/* 2804 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2806 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2808 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2810 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2812 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2814 */	0x0 , 
			0x0,		/* 0 */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2824 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2826 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 2828 */	0x2,		/* 2 */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Drprn_MIDL_EXPR_FORMAT_STRING ms2Drprn__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 12 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 14 */	NdrFcShort( 0xfffc ),	/* -4 */

			0x0
        }
    };

XFG_BIND_TRAMPOLINES(unsigned long, STRING_HANDLE)

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ] = 
        {
        {
            (GENERIC_BINDING_ROUTINE) XFG_TRAMPOLINE_FPTR(STRING_HANDLE_bind),
            (GENERIC_UNBIND_ROUTINE) XFG_TRAMPOLINE_FPTR(STRING_HANDLE_unbind)
         }
        
        };


static const unsigned short ms2Drprn__MIDL_ExprFormatStringOffsetTable[] =
{
0,
};

static const NDR_EXPR_DESC  ms2Drprn_ExprDesc = 
 {
ms2Drprn__MIDL_ExprFormatStringOffsetTable,
ms2Drprn__MIDL_ExprFormatString.Format
};

static const unsigned short winspool_FormatStringOffsetTable[] =
    {
    0,
    78,
    144,
    204,
    276,
    360,
    426,
    468,
    534,
    600,
    648,
    726,
    798,
    870,
    924,
    984,
    1062,
    1134,
    1188,
    1230,
    1290,
    1332,
    1374,
    1434,
    1476,
    1542,
    1590,
    1662,
    1728,
    1782,
    1824,
    1872,
    1920,
    1992,
    2046,
    2118,
    2190,
    2262,
    2290,
    2318,
    2372,
    2426,
    2498,
    2540,
    2568,
    2596,
    2624,
    2672,
    2726,
    2780,
    2808,
    2836,
    2914,
    2968,
    3064,
    3092,
    3120,
    3162,
    3190,
    3262,
    3322,
    3364,
    3424,
    3502,
    3530,
    3558,
    3630,
    3702,
    3762,
    3790,
    3862,
    3934,
    3988,
    4078,
    4126,
    4154,
    4182,
    4210,
    4282,
    4360,
    4432,
    4498,
    4552,
    4600,
    4628,
    4694,
    4754,
    4802,
    4868,
    4952,
    5006,
    5034,
    5062,
    5090,
    5118,
    5146,
    5174,
    5240,
    5300,
    5328,
    5356,
    5384,
    5412,
    5484,
    5512,
    5590,
    5618,
    5646,
    5674,
    5702,
    5730,
    5790,
    5844,
    5898,
    5958,
    5998,
    6046
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void *)& winspool___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &winspool__MIDL_AutoBindHandle,
    0,
    BindingRoutines,
    0,
    0,
    ms2Drprn__MIDL_TypeFormatString.Format,
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
    &ms2Drprn_ExprDesc
    };
#ifdef __cplusplus
}
#endif
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

