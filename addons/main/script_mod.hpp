#define MAINPREFIX z
#define PREFIX op183
#define QPREFIX "op183"
#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}

#define AUTHOR YONV
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH "\z\op183\addons\common\images\183ops_1024.paa"
#define URL "https://arma.wiki"
#define NAME op183

#define REQUIRED_VERSION 2.00

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(op183 - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(op183 - COMPONENT)
#endif
