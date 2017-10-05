// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters__ColorMatrixShader_ShaderData
#include <openfl/filters/_ColorMatrixShader_ShaderData.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d8b2c8752fa7d06_1_new,"openfl.filters._ColorMatrixShader_ShaderData","new",0x968181a5,"openfl.filters._ColorMatrixShader_ShaderData.new","?",1,0x0000003f)
namespace openfl{
namespace filters{

void _ColorMatrixShader_ShaderData_obj::__construct( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_2d8b2c8752fa7d06_1_new)
HXDLIN(   1)		super::__construct(byteArray);
            	}

Dynamic _ColorMatrixShader_ShaderData_obj::__CreateEmpty() { return new _ColorMatrixShader_ShaderData_obj; }

void *_ColorMatrixShader_ShaderData_obj::_hx_vtable = 0;

Dynamic _ColorMatrixShader_ShaderData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< _ColorMatrixShader_ShaderData_obj > _hx_result = new _ColorMatrixShader_ShaderData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _ColorMatrixShader_ShaderData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2602c5dd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2602c5dd;
	} else {
		return inClassId==(int)0x7ef296e5;
	}
}


hx::ObjectPtr< _ColorMatrixShader_ShaderData_obj > _ColorMatrixShader_ShaderData_obj::__new( ::openfl::utils::ByteArrayData byteArray) {
	hx::ObjectPtr< _ColorMatrixShader_ShaderData_obj > __this = new _ColorMatrixShader_ShaderData_obj();
	__this->__construct(byteArray);
	return __this;
}

hx::ObjectPtr< _ColorMatrixShader_ShaderData_obj > _ColorMatrixShader_ShaderData_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData byteArray) {
	_ColorMatrixShader_ShaderData_obj *__this = (_ColorMatrixShader_ShaderData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(_ColorMatrixShader_ShaderData_obj), true, "openfl.filters._ColorMatrixShader_ShaderData"));
	*(void **)__this = _ColorMatrixShader_ShaderData_obj::_hx_vtable;
	__this->__construct(byteArray);
	return __this;
}

_ColorMatrixShader_ShaderData_obj::_ColorMatrixShader_ShaderData_obj()
{
}

void _ColorMatrixShader_ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_ColorMatrixShader_ShaderData);
	HX_MARK_MEMBER_NAME(uMultipliers,"uMultipliers");
	HX_MARK_MEMBER_NAME(uOffsets,"uOffsets");
	 ::openfl::display::ShaderData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void _ColorMatrixShader_ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uMultipliers,"uMultipliers");
	HX_VISIT_MEMBER_NAME(uOffsets,"uOffsets");
	 ::openfl::display::ShaderData_obj::__Visit(HX_VISIT_ARG);
}

hx::Val _ColorMatrixShader_ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { return hx::Val( uOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uMultipliers") ) { return hx::Val( uMultipliers ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val _ColorMatrixShader_ShaderData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uOffsets") ) { uOffsets=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"uMultipliers") ) { uMultipliers=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _ColorMatrixShader_ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5"));
	outFields->push(HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo _ColorMatrixShader_ShaderData_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_ColorMatrixShader_ShaderData_obj,uMultipliers),HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(_ColorMatrixShader_ShaderData_obj,uOffsets),HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *_ColorMatrixShader_ShaderData_obj_sStaticStorageInfo = 0;
#endif

static ::String _ColorMatrixShader_ShaderData_obj_sMemberFields[] = {
	HX_HCSTRING("uMultipliers","\x5d","\x5b","\x61","\xe5"),
	HX_HCSTRING("uOffsets","\x8b","\x59","\xc4","\xc8"),
	::String(null()) };

static void _ColorMatrixShader_ShaderData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_ColorMatrixShader_ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void _ColorMatrixShader_ShaderData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_ColorMatrixShader_ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class _ColorMatrixShader_ShaderData_obj::__mClass;

void _ColorMatrixShader_ShaderData_obj::__register()
{
	hx::Object *dummy = new _ColorMatrixShader_ShaderData_obj;
	_ColorMatrixShader_ShaderData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._ColorMatrixShader_ShaderData","\x33","\xcb","\x94","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = _ColorMatrixShader_ShaderData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(_ColorMatrixShader_ShaderData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _ColorMatrixShader_ShaderData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = _ColorMatrixShader_ShaderData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _ColorMatrixShader_ShaderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _ColorMatrixShader_ShaderData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
