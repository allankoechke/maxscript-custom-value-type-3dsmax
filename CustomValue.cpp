#include "CustomValue.h"

CustomValue::CustomValue()
{
	m_continuity = 3.234f;
	m_selected = &true_value;
}

CustomValue::CustomValue(float cont, bool sel)
{
	m_continuity = cont;
	m_selected = sel;
}

Value*
CustomValue::get_property(Value** arg_list, int count)
{
	return Value::get_property(arg_list, count);
}

Value*
CustomValue::set_property(Value** arg_list, int count)
{
	return Value::set_property(arg_list, count);
}

Value*
CustomValue::get_continuity(Value** arg_list, int count)
{
	return_value(Float::intern(m_continuity));
}

Value*
CustomValue::set_continuity(Value** arg_list, int count)
{
	DebugPrint(_T("\n\n\tArg List: %f -- %f\n"), arg_list[0], arg_list[0]->to_float());

	m_continuity = arg_list[0]->to_float();
	return arg_list[0];
}

Value*
CustomValue::get_pos(Value** arg_list, int count)
{
	return new Point3Value(m_xyz);
}

Value*
CustomValue::set_pos(Value** arg_list, int count)
{
	// m_continuity = arg_list[0]->to_float();
	m_xyz = arg_list[0]->to_point3();
	return arg_list[0];
}

Value*
CustomValue::get_selected(Value** arg_list, int count)
{
	return m_selected? &true_value : &false_value;
}

Value*
CustomValue::set_selected(Value** arg_list, int count)
{
	m_selected = arg_list[0]->to_bool();
	return arg_list[0];
}

Value*
CustomValue::delete_vf(Value** arg_list, int count)
{
	// Implements the delete <max object> call
	// Implement this if reqired

	DebugPrint(_T("\n\n\t-- delete_vf called\n"));


	return &ok;
}


Value*
CustomValue::copy_vf(Value** arg_list, int count)
{
	DebugPrint(_T("\n\n\t-- Object copy \n"));

	return this;
}

void
CustomValue::sprin1(CharStream* s)
{
	// String reprentation of the data ie Point3Vales

	s->printf(_T("# Continuity = %f Selected = %d pos xyz = [%f, %f, %f]"), m_continuity, m_selected ? true:false, m_xyz.x, m_xyz.y, m_xyz.z);
}

Value*
CustomValue::get_props_vf(Value** arg_list, int count)
{
	// getPropNames <max_object> [#dynamicOnly] -- returns array of prop names of wrapped obj

	MAXScript_TLS* _tls = (MAXScript_TLS*)TlsGetValue(thread_locals_index);
	one_typed_value_local_tls(Array * result);
	vl.result = new Array(3);
	vl.result->append(Name::intern(_T("continuity")));
	vl.result->append(Name::intern(_T("selected")));
	vl.result->append(Name::intern(_T("pos")));
	return_value_tls(vl.result);
}

Value*
CustomValue::show_props_vf(Value** arg_list, int count)
{
	// showProperties <max_object> [_T("prop_pat")] [to:<file>]   - applies to ref0 in the wrapper

	return &false_value;
}
