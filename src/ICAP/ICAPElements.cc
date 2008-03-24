#include "squid.h"
#include "ICAPElements.h"

#if 0 /* XXX: remove this file */

const char *ICAP::crlf = "\r\n";


const char *
ICAP::methodStr(ICAP::Method method)
{
    switch(method) {

    case ICAP::methodReqmod:
        return "REQMOD";
        break;

    case ICAP::methodRespmod:
        return "RESPMOD";
        break;

    case ICAP::methodOptions:
        return "OPTIONS";
        break;

    default:
        break;
    }

    return "NONE";
}


const char *
ICAP::vectPointStr(ICAP::VectPoint point)
{
    switch(point) {

    case ICAP::pointPreCache:
        return "PRECACHE";
        break;

    case ICAP::pointPostCache:
        return "POSTCACHE";
        break;

    default:
        break;
    }

    return "NONE";
}


#endif /* if 0 -- remove this file */
