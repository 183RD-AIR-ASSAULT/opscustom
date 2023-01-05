#define MAINPREFIX z
#define PREFIX op183
#define QPREFIX "op183"
#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}

#define AUTHOR Ghost
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH "\z\op183\addons\common\images\Ghost.paa"
#define URL "https://arma.wiki"
#define NAME Ghost

#define REQUIRED_VERSION 2.00

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Ghost - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Ghost - COMPONENT)
#endif
