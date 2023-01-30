//**************************************************************************/
// Copyright (c) 1998-2020 Autodesk, Inc.
// All rights reserved.
// 
// Use of this software is subject to the terms of the Autodesk license 
// agreement provided at the time of installation or download, or which 
// otherwise accompanies this software in either electronic or hard copy form.
//**************************************************************************/
// DESCRIPTION: Plugin Wizard generated plugin
// AUTHOR: 
//***************************************************************************/

#include "MaxCustomValue.h"

#define MaxCustomValue_CLASS_ID Class_ID(0x797fb4df, 0x922d7af7)

class MaxCustomValue : public GUP
{
public:
	// Constructor/Destructor
	MaxCustomValue();
	virtual ~MaxCustomValue();

	// GUP Methods
	DWORD Start() override;
	void Stop() override;
	DWORD_PTR Control(DWORD parameter) override;
	void DeleteThis() override;

	// Loading/Saving
	IOResult Save(ISave* isave) override;
	IOResult Load(ILoad* iload) override;
};


class MaxCustomValueClassDesc : public ClassDesc2 
{
public:
	int           IsPublic() override                               { return TRUE; }
	void*         Create(BOOL /*loading = FALSE*/) override         { return new MaxCustomValue(); }
	const TCHAR*  ClassName() override                              { return GetString(IDS_CLASS_NAME); }
	const TCHAR*  NonLocalizedClassName() override                  { return _T("MaxCustomValue"); }
	SClass_ID     SuperClassID() override                           { return GUP_CLASS_ID; }
	Class_ID      ClassID() override                                { return MaxCustomValue_CLASS_ID; }
	const TCHAR*  Category() override                               { return GetString(IDS_CATEGORY); }

	const TCHAR*  InternalName() override                           { return _T("MaxCustomValue"); } // Returns fixed parsable name (scripter-visible name)
	HINSTANCE     HInstance() override                              { return hInstance; } // Returns owning module handle


};

ClassDesc2* GetMaxCustomValueDesc()
{
	static MaxCustomValueClassDesc MaxCustomValueDesc;
	return &MaxCustomValueDesc; 
}




MaxCustomValue::MaxCustomValue()
{

}

MaxCustomValue::~MaxCustomValue()
{

}

void MaxCustomValue::DeleteThis()
{
	delete this;
}

// Activate and Stay Resident
DWORD MaxCustomValue::Start()
{
#pragma message(TODO("Do plugin initialization here"))
#pragma message(TODO("Return if you want remain loaded or not"))
	return GUPRESULT_KEEP;
}

void MaxCustomValue::Stop()
{
#pragma message(TODO("Do plugin un-initialization here"))
}

DWORD_PTR MaxCustomValue::Control(DWORD /*parameter*/)
{
	return 0;
}

IOResult MaxCustomValue::Save(ISave* /*isave*/)
{
	return IO_OK;
}

IOResult MaxCustomValue::Load(ILoad* /*iload*/)
{
	return IO_OK;
}
