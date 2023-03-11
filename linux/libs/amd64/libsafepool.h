/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package github.com/code-to-go/safepool */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h>

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */


#line 3 "exports.go"

typedef struct Result{
    char* res;
	char* err;
} Result;

typedef struct App {
	void (*feed)(char* name, char* data, int eof);
} App;

#include <stdlib.h>

#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef size_t GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
#ifdef _MSC_VER
#include <complex.h>
typedef _Fcomplex GoComplex64;
typedef _Dcomplex GoComplex128;
#else
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;
#endif

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif

extern Result start(char* dbPath, char* cachePath, char* availableBandwith);
extern Result stop();
extern Result factoryReset();
extern Result securitySelfId();
extern Result securitySelf();
extern Result securityIdentityFromId(char* id);
extern Result poolList();
extern Result poolCreate(char* config, char* apps);
extern Result poolJoin(char* token);
extern Result poolLeave(char* name);
extern Result poolSub(char* name, char* sub, char* idsList, char* appsList);
extern Result poolInvite(char* poolName, char* idsList, char* invitePool);
extern Result poolGet(char* name);
extern Result poolUsers(char* poolName);
extern Result poolParseInvite(char* token);
extern Result chatReceive(char* poolName, long int after, long int before, int limit, char* private);
extern Result chatSend(char* poolName, char* contentType, char* text, char* binary, char* private);
extern Result chatPrivates(char* poolName);
extern Result libraryList(char* poolName, char* folder);
extern Result libraryFind(char* poolName, long int id);
extern Result libraryReceive(char* poolName, long int id, char* localPath);
extern Result librarySave(char* poolName, long int id, char* localPath);
extern Result librarySend(char* poolName, char* localPath, char* name, int solveConflicts, char* tagsList);
extern Result inviteReceive(char* poolName, int after, int onlyMine);
extern Result notifications(long int ctime);
extern Result fileOpen(char* filePath);
extern Result dump();
extern Result setLogLevel(int level);
extern Result setAvailableBandwidth(char* availableBandwidth);

#ifdef __cplusplus
}
#endif
