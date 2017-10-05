// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_timeline_FrameObjectType
#include <openfl/_internal/timeline/FrameObjectType.h>
#endif
namespace openfl{
namespace _internal{
namespace timeline{

::openfl::_internal::timeline::FrameObjectType FrameObjectType_obj::CREATE;

::openfl::_internal::timeline::FrameObjectType FrameObjectType_obj::DESTROY;

::openfl::_internal::timeline::FrameObjectType FrameObjectType_obj::UPDATE;

bool FrameObjectType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CREATE",fc,12,92,2e)) { outValue = FrameObjectType_obj::CREATE; return true; }
	if (inName==HX_("DESTROY",da,00,5a,a4)) { outValue = FrameObjectType_obj::DESTROY; return true; }
	if (inName==HX_("UPDATE",09,32,88,39)) { outValue = FrameObjectType_obj::UPDATE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FrameObjectType_obj)

int FrameObjectType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CREATE",fc,12,92,2e)) return 0;
	if (inName==HX_("DESTROY",da,00,5a,a4)) return 2;
	if (inName==HX_("UPDATE",09,32,88,39)) return 1;
	return super::__FindIndex(inName);
}

int FrameObjectType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CREATE",fc,12,92,2e)) return 0;
	if (inName==HX_("DESTROY",da,00,5a,a4)) return 0;
	if (inName==HX_("UPDATE",09,32,88,39)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FrameObjectType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CREATE",fc,12,92,2e)) return CREATE;
	if (inName==HX_("DESTROY",da,00,5a,a4)) return DESTROY;
	if (inName==HX_("UPDATE",09,32,88,39)) return UPDATE;
	return super::__Field(inName,inCallProp);
}

static ::String FrameObjectType_obj_sStaticFields[] = {
	HX_("CREATE",fc,12,92,2e),
	HX_("UPDATE",09,32,88,39),
	HX_("DESTROY",da,00,5a,a4),
	::String(null())
};

static void FrameObjectType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameObjectType_obj::CREATE,"CREATE");
	HX_MARK_MEMBER_NAME(FrameObjectType_obj::DESTROY,"DESTROY");
	HX_MARK_MEMBER_NAME(FrameObjectType_obj::UPDATE,"UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FrameObjectType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::CREATE,"CREATE");
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::DESTROY,"DESTROY");
	HX_VISIT_MEMBER_NAME(FrameObjectType_obj::UPDATE,"UPDATE");
};
#endif

hx::Class FrameObjectType_obj::__mClass;

Dynamic __Create_FrameObjectType_obj() { return new FrameObjectType_obj; }

void FrameObjectType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._internal.timeline.FrameObjectType","\xc9","\x51","\x85","\xe1"), hx::TCanCast< FrameObjectType_obj >,FrameObjectType_obj_sStaticFields,0,
	&__Create_FrameObjectType_obj, &__Create,
	&super::__SGetClass(), &CreateFrameObjectType_obj, FrameObjectType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FrameObjectType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FrameObjectType_obj::__GetStatic;
}

void FrameObjectType_obj::__boot()
{
CREATE = hx::CreateEnum< FrameObjectType_obj >(HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e"),0,0);
DESTROY = hx::CreateEnum< FrameObjectType_obj >(HX_HCSTRING("DESTROY","\xda","\x00","\x5a","\xa4"),2,0);
UPDATE = hx::CreateEnum< FrameObjectType_obj >(HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39"),1,0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace timeline
