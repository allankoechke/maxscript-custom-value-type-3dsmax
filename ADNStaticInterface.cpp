
#include <modstack.h>
#include "maxscript\maxscript.h"
#include "maxscript\foundation\numbers.h"
#include "maxscript/foundation/3dmath.h"
#include <maxscript/maxwrapper/mxsobjects.h>

#include "ADNStaticInterface.h"


// Initialize our instance.  This part is tells Max about the
// functions exposed in our function map.
ADNStaticInterface ADNStaticInterface::_theInstance
(
	// Describe our interface
    // ADN is the MaxScript interface name!!!
	IADN_STATIC_INTERFACE, _T("ADN"), 0, NULL, FP_CORE,
	// Describe our function(s)
	ADNStaticInterface::fn_run1, _T("run1"), 0, TYPE_VALUE, 0, 0,
	
    p_end
);


Value* ADNStaticInterface::run1() 
{
    m_customValue = new CustomValue();

    return m_customValue;
}
