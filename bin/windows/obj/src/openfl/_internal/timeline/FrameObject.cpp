// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_FilterType
#include <openfl/_internal/swf/FilterType.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_FrameObject
#include <openfl/_internal/timeline/FrameObject.h>
#endif
#ifndef INCLUDED_openfl__internal_timeline_FrameObjectType
#include <openfl/_internal/timeline/FrameObjectType.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dece6147faa12b89_32_new,"openfl._internal.timeline.FrameObject","new",0xc85ed3e1,"openfl._internal.timeline.FrameObject.new","openfl/_internal/timeline/FrameObject.hx",32,0xd3e45f6e)
namespace openfl{
namespace _internal{
namespace timeline{

void FrameObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dece6147faa12b89_32_new)
            	}

Dynamic FrameObject_obj::__CreateEmpty() { return new FrameObject_obj; }

void *FrameObject_obj::_hx_vtable = 0;

Dynamic FrameObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FrameObject_obj > _hx_result = new FrameObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FrameObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4646213f;
}


FrameObject_obj::FrameObject_obj()
{
}

void FrameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameObject);
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(clipDepth,"clipDepth");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(symbol,"symbol");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void FrameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(clipDepth,"clipDepth");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(symbol,"symbol");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

hx::Val FrameObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return hx::Val( depth ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"symbol") ) { return hx::Val( symbol ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return hx::Val( filters ); }
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return hx::Val( blendMode ); }
		if (HX_FIELD_EQ(inName,"clipDepth") ) { return hx::Val( clipDepth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return hx::Val( cacheAsBitmap ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return hx::Val( colorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FrameObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::openfl::_internal::timeline::FrameObjectType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbol") ) { symbol=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipDepth") ) { clipDepth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("symbol","\x58","\xaf","\xdd","\xee"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FrameObject_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FrameObject_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FrameObject_obj,cacheAsBitmap),HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,clipDepth),HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(FrameObject_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FrameObject_obj,filters),HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(FrameObject_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsString,(int)offsetof(FrameObject_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(FrameObject_obj,symbol),HX_HCSTRING("symbol","\x58","\xaf","\xdd","\xee")},
	{hx::fsObject /*::openfl::_internal::timeline::FrameObjectType*/ ,(int)offsetof(FrameObject_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FrameObject_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FrameObject_obj_sStaticStorageInfo = 0;
#endif

static ::String FrameObject_obj_sMemberFields[] = {
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"),
	HX_HCSTRING("clipDepth","\x13","\x40","\x41","\xf5"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("symbol","\x58","\xaf","\xdd","\xee"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	::String(null()) };

static void FrameObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FrameObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameObject_obj::__mClass,"__mClass");
};

#endif

hx::Class FrameObject_obj::__mClass;

void FrameObject_obj::__register()
{
	hx::Object *dummy = new FrameObject_obj;
	FrameObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.timeline.FrameObject","\x6f","\x4f","\xd5","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FrameObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FrameObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FrameObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrameObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrameObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace timeline
