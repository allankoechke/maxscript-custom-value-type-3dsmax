#pragma once

#include "ifnpub.h"
#include "CustomValue.h"

#define IADN_STATIC_INTERFACE Interface_ID(0x7cd98136, 0xf81c81e7)


class ADNStaticInterface : public FPStaticInterface 
{

public:

	// The follow exposes our functions to Max
	enum FN_IDS {
		fn_run1
	};
	BEGIN_FUNCTION_MAP		        
		FN_0(fn_run1, TYPE_VALUE, run1);
	END_FUNCTION_MAP

	// Implement the functions exposed above
	Value* run1();

	// General purpose exposure
	static ADNStaticInterface* GetInstance() { return &_theInstance; }

private:
	// Declares the constructor of this class. It is private so a single static instance of this class
	// may be instantiated.
	DECLARE_DESCRIPTOR(ADNStaticInterface);

	// The single instance of this class
	static ADNStaticInterface _theInstance;

	// Point3CustomValue *m_customValue;
	CustomValue* m_customValue;
};