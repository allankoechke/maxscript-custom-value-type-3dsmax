#pragma once
#ifndef CUSTOMVALUE_H_INCLUDED 
#define CUSTOMVALUE_H_INCLUDED 


#include <maxscript/maxscript.h>
// #include <maxscript/maxwrapper/maxclasses.h>
// #include <maxscript/maxwrapper/mxskeys.h>
#include <maxscript/foundation/numbers.h>
#include <maxscript/foundation/3dmath.h>

#include "resource.h"

#ifdef ScripterExport
#undef ScripterExport
#endif
#define ScripterExport __declspec( dllexport )



class CustomValue : public Value
{
public:
	// Public variables to retun to maxscript
	float m_continuity = 3.1423f;
	bool m_selected = false;
	Point3 m_xyz = Point3(0.0f, 0.0f, 0.0f);

	ENABLE_STACK_ALLOCATE(CustomValue);

	CustomValue();
	CustomValue(float cont, bool sel);

	// ValueMetaClass* local_base_class() {return class_tag(MAXAKey);}  // Needed for ???
	// classof_methods(CustomValue, Value);  // Define classof, superclassof methods

	void		collect() { delete this; }
	void		sprin1(CharStream* s);
	Value* get_property(Value** arg_list, int count);
	Value* set_property(Value** arg_list, int count);

	def_generic(delete, "delete");
	def_generic(copy, "copy");
	def_generic(show_props, "showProperties");
	def_generic(get_props, "getPropNames");

	// Properties
	def_property(selected);
	def_property(continuity);
	def_property(pos);
};


#endif // CUSTOMVALUE_H_INCLUDED 