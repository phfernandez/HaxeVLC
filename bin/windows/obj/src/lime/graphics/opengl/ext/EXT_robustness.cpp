// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_robustness
#include <lime/graphics/opengl/ext/EXT_robustness.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60e6ca196390a6ae_6_new,"lime.graphics.opengl.ext.EXT_robustness","new",0xcfe16dda,"lime.graphics.opengl.ext.EXT_robustness.new","lime/graphics/opengl/ext/EXT_robustness.hx",6,0xa3734bf4)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_robustness_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_60e6ca196390a6ae_6_new)
HXLINE(  15)		this->NO_RESET_NOTIFICATION_EXT = (int)33377;
HXLINE(  14)		this->LOSE_CONTEXT_ON_RESET_EXT = (int)33362;
HXLINE(  13)		this->RESET_NOTIFICATION_STRATEGY_EXT = (int)33366;
HXLINE(  12)		this->CONTEXT_ROBUST_ACCESS_EXT = (int)37107;
HXLINE(  11)		this->UNKNOWN_CONTEXT_RESET_EXT = (int)33365;
HXLINE(  10)		this->INNOCENT_CONTEXT_RESET_EXT = (int)33364;
HXLINE(   9)		this->GUILTY_CONTEXT_RESET_EXT = (int)33363;
            	}

Dynamic EXT_robustness_obj::__CreateEmpty() { return new EXT_robustness_obj; }

void *EXT_robustness_obj::_hx_vtable = 0;

Dynamic EXT_robustness_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EXT_robustness_obj > _hx_result = new EXT_robustness_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_robustness_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3407b6f8;
}


EXT_robustness_obj::EXT_robustness_obj()
{
}

hx::Val EXT_robustness_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"GUILTY_CONTEXT_RESET_EXT") ) { return hx::Val( GUILTY_CONTEXT_RESET_EXT ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"UNKNOWN_CONTEXT_RESET_EXT") ) { return hx::Val( UNKNOWN_CONTEXT_RESET_EXT ); }
		if (HX_FIELD_EQ(inName,"CONTEXT_ROBUST_ACCESS_EXT") ) { return hx::Val( CONTEXT_ROBUST_ACCESS_EXT ); }
		if (HX_FIELD_EQ(inName,"LOSE_CONTEXT_ON_RESET_EXT") ) { return hx::Val( LOSE_CONTEXT_ON_RESET_EXT ); }
		if (HX_FIELD_EQ(inName,"NO_RESET_NOTIFICATION_EXT") ) { return hx::Val( NO_RESET_NOTIFICATION_EXT ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"INNOCENT_CONTEXT_RESET_EXT") ) { return hx::Val( INNOCENT_CONTEXT_RESET_EXT ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"RESET_NOTIFICATION_STRATEGY_EXT") ) { return hx::Val( RESET_NOTIFICATION_STRATEGY_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EXT_robustness_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"GUILTY_CONTEXT_RESET_EXT") ) { GUILTY_CONTEXT_RESET_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"UNKNOWN_CONTEXT_RESET_EXT") ) { UNKNOWN_CONTEXT_RESET_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_ROBUST_ACCESS_EXT") ) { CONTEXT_ROBUST_ACCESS_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOSE_CONTEXT_ON_RESET_EXT") ) { LOSE_CONTEXT_ON_RESET_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_RESET_NOTIFICATION_EXT") ) { NO_RESET_NOTIFICATION_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"INNOCENT_CONTEXT_RESET_EXT") ) { INNOCENT_CONTEXT_RESET_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"RESET_NOTIFICATION_STRATEGY_EXT") ) { RESET_NOTIFICATION_STRATEGY_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_robustness_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("GUILTY_CONTEXT_RESET_EXT","\x98","\x78","\xca","\x75"));
	outFields->push(HX_HCSTRING("INNOCENT_CONTEXT_RESET_EXT","\x10","\x1f","\x1e","\x90"));
	outFields->push(HX_HCSTRING("UNKNOWN_CONTEXT_RESET_EXT","\xac","\x0f","\x07","\x0f"));
	outFields->push(HX_HCSTRING("CONTEXT_ROBUST_ACCESS_EXT","\xc4","\xc8","\x9b","\xf5"));
	outFields->push(HX_HCSTRING("RESET_NOTIFICATION_STRATEGY_EXT","\xb9","\x66","\x23","\xcb"));
	outFields->push(HX_HCSTRING("LOSE_CONTEXT_ON_RESET_EXT","\xeb","\x3d","\xdb","\x68"));
	outFields->push(HX_HCSTRING("NO_RESET_NOTIFICATION_EXT","\x3b","\xc9","\xcb","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EXT_robustness_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,GUILTY_CONTEXT_RESET_EXT),HX_HCSTRING("GUILTY_CONTEXT_RESET_EXT","\x98","\x78","\xca","\x75")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,INNOCENT_CONTEXT_RESET_EXT),HX_HCSTRING("INNOCENT_CONTEXT_RESET_EXT","\x10","\x1f","\x1e","\x90")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,UNKNOWN_CONTEXT_RESET_EXT),HX_HCSTRING("UNKNOWN_CONTEXT_RESET_EXT","\xac","\x0f","\x07","\x0f")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,CONTEXT_ROBUST_ACCESS_EXT),HX_HCSTRING("CONTEXT_ROBUST_ACCESS_EXT","\xc4","\xc8","\x9b","\xf5")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,RESET_NOTIFICATION_STRATEGY_EXT),HX_HCSTRING("RESET_NOTIFICATION_STRATEGY_EXT","\xb9","\x66","\x23","\xcb")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,LOSE_CONTEXT_ON_RESET_EXT),HX_HCSTRING("LOSE_CONTEXT_ON_RESET_EXT","\xeb","\x3d","\xdb","\x68")},
	{hx::fsInt,(int)offsetof(EXT_robustness_obj,NO_RESET_NOTIFICATION_EXT),HX_HCSTRING("NO_RESET_NOTIFICATION_EXT","\x3b","\xc9","\xcb","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EXT_robustness_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_robustness_obj_sMemberFields[] = {
	HX_HCSTRING("GUILTY_CONTEXT_RESET_EXT","\x98","\x78","\xca","\x75"),
	HX_HCSTRING("INNOCENT_CONTEXT_RESET_EXT","\x10","\x1f","\x1e","\x90"),
	HX_HCSTRING("UNKNOWN_CONTEXT_RESET_EXT","\xac","\x0f","\x07","\x0f"),
	HX_HCSTRING("CONTEXT_ROBUST_ACCESS_EXT","\xc4","\xc8","\x9b","\xf5"),
	HX_HCSTRING("RESET_NOTIFICATION_STRATEGY_EXT","\xb9","\x66","\x23","\xcb"),
	HX_HCSTRING("LOSE_CONTEXT_ON_RESET_EXT","\xeb","\x3d","\xdb","\x68"),
	HX_HCSTRING("NO_RESET_NOTIFICATION_EXT","\x3b","\xc9","\xcb","\x58"),
	::String(null()) };

static void EXT_robustness_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_robustness_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EXT_robustness_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_robustness_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_robustness_obj::__mClass;

void EXT_robustness_obj::__register()
{
	hx::Object *dummy = new EXT_robustness_obj;
	EXT_robustness_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_robustness","\xe8","\x38","\x33","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EXT_robustness_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EXT_robustness_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_robustness_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EXT_robustness_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_robustness_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_robustness_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
