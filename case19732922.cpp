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

#include "case19732922.h"

#define case19732922_CLASS_ID Class_ID(0x797fb4df, 0x922d7af7)

class case19732922 : public GUP
{
public:
	// Constructor/Destructor
	case19732922();
	virtual ~case19732922();

	// GUP Methods
	DWORD Start() override;
	void Stop() override;
	DWORD_PTR Control(DWORD parameter) override;
	void DeleteThis() override;

	// Loading/Saving
	IOResult Save(ISave* isave) override;
	IOResult Load(ILoad* iload) override;
};


class case19732922ClassDesc : public ClassDesc2 
{
public:
	int           IsPublic() override                               { return TRUE; }
	void*         Create(BOOL /*loading = FALSE*/) override         { return new case19732922(); }
	const TCHAR*  ClassName() override                              { return GetString(IDS_CLASS_NAME); }
	const TCHAR*  NonLocalizedClassName() override                  { return _T("case19732922"); }
	SClass_ID     SuperClassID() override                           { return GUP_CLASS_ID; }
	Class_ID      ClassID() override                                { return case19732922_CLASS_ID; }
	const TCHAR*  Category() override                               { return GetString(IDS_CATEGORY); }

	const TCHAR*  InternalName() override                           { return _T("case19732922"); } // Returns fixed parsable name (scripter-visible name)
	HINSTANCE     HInstance() override                              { return hInstance; } // Returns owning module handle


};

ClassDesc2* Getcase19732922Desc()
{
	static case19732922ClassDesc case19732922Desc;
	return &case19732922Desc; 
}




case19732922::case19732922()
{

}

case19732922::~case19732922()
{

}

void case19732922::DeleteThis()
{
	delete this;
}

// Activate and Stay Resident
DWORD case19732922::Start()
{
#pragma message(TODO("Do plugin initialization here"))
#pragma message(TODO("Return if you want remain loaded or not"))
	return GUPRESULT_KEEP;
}

void case19732922::Stop()
{
#pragma message(TODO("Do plugin un-initialization here"))
}

DWORD_PTR case19732922::Control(DWORD /*parameter*/)
{
	return 0;
}

IOResult case19732922::Save(ISave* /*isave*/)
{
	return IO_OK;
}

IOResult case19732922::Load(ILoad* /*iload*/)
{
	return IO_OK;
}
