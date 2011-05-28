/*
 * PROJECT:         ReactOS win32 subsystem
 * LICENSE:         GPL - See COPYING in the top level directory
 * PURPOSE:
 * PROGRAMMER:      Timo Kreuzer (timo.kreuzer@reactos.org)
 */

#include <win32k.h>
#include <include/font.h>

#define NDEBUG
#include <debug.h>


W32KAPI
BOOL
APIENTRY
NtGdiAnyLinkedFonts(VOID)
{
   ASSERT(FALSE);
   return FALSE;
}


W32KAPI
INT
APIENTRY
NtGdiSetupPublicCFONT(
    IN HDC hdc,
    IN OPTIONAL HFONT hf,
    IN ULONG ulAve)
{
    ASSERT(FALSE);
    return 0;
}

PVOID
APIENTRY
EngFntCacheAlloc(IN ULONG FastCheckSum,
                 IN ULONG ulSize)
{
    ASSERT(FALSE);
    return NULL;
}

VOID
APIENTRY
EngFntCacheFault(IN ULONG ulFastCheckSum,
                 IN ULONG iFaultMode)
{
    ASSERT(FALSE);
}

PVOID
APIENTRY
EngFntCacheLookUp(IN ULONG FastCheckSum,
                  OUT PULONG pulSize)
{
    ASSERT(FALSE);
    return NULL;
}

W32KAPI
ULONG
APIENTRY
NtGdiQueryFontAssocInfo(
    IN HDC hdc)
{
    ASSERT(FALSE);
    return 0;
}

W32KAPI
ULONG
APIENTRY
NtGdiMakeFontDir(
    IN FLONG flEmbed,
    OUT PBYTE pjFontDir,
    IN unsigned cjFontDir,
    IN LPWSTR pwszPathname,
    IN unsigned cjPathname)
{
    ASSERT(FALSE);
    return 0;
}

W32KAPI
BOOL
APIENTRY
NtGdiAddRemoteMMInstanceToDC(
    IN HDC hdc,
    IN DOWNLOADDESIGNVECTOR *pddv,
    IN ULONG cjDDV)
{
    ASSERT(FALSE);
    return 0;
}

W32KAPI
BOOL
APIENTRY
NtGdiFontIsLinked(
    IN HDC hdc)
{
    ASSERT(FALSE);
    return 0;
}

W32KAPI
BOOL
APIENTRY
NtGdiGetRasterizerCaps(
    OUT LPRASTERIZER_STATUS praststat,
    IN ULONG cjBytes)
{
    ASSERT(FALSE);
    return 0;
}

W32KAPI
BOOL
APIENTRY
NtGdiChangeGhostFont(
    IN KERNEL_PVOID *pfontID,
    IN BOOL bLoad)
{
    ASSERT(FALSE);
    return 0;
}


W32KAPI
BOOL
APIENTRY
NtGdiEudcLoadUnloadLink(
    IN OPTIONAL LPCWSTR pBaseFaceName,
    IN UINT cwcBaseFaceName,
    IN LPCWSTR pEudcFontPath,
    IN UINT cwcEudcFontPath,
    IN INT iPriority,
    IN INT iFontLinkType,
    IN BOOL bLoadLin)
{
    ASSERT(FALSE);
    return FALSE;
}


// *********** hack

NTSTATUS FASTCALL
TextIntCreateFontIndirect(CONST LPLOGFONTW lf, HFONT *NewFont)
{
    *NewFont = GreHfontCreate((PVOID)lf, sizeof(LOGFONTW), 0, 0, 0);
    if (*NewFont) return STATUS_SUCCESS;
    return STATUS_UNSUCCESSFUL;
}



