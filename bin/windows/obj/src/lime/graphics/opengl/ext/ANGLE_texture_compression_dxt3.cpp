// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt3
#include <lime/graphics/opengl/ext/ANGLE_texture_compression_dxt3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b30108ea6b58727c_9_new,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3","new",0x7f2a7b10,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3.new","lime/graphics/opengl/ext/ANGLE_texture_compression_dxt3.hx",9,0x96f8f37e)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_texture_compression_dxt3_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b30108ea6b58727c_9_new)
HXDLIN(   9)		this->COMPRESSED_RGBA_S3TC_DXT3_ANGLE = (int)33778;
            	}

Dynamic ANGLE_texture_compression_dxt3_obj::__CreateEmpty() { return new ANGLE_texture_compression_dxt3_obj; }

void *ANGLE_texture_compression_dxt3_obj::_hx_vtable = 0;

Dynamic ANGLE_texture_compression_dxt3_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > _hx_result = new ANGLE_texture_compression_dxt3_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_texture_compression_dxt3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c61912e;
}


ANGLE_texture_compression_dxt3_obj::ANGLE_texture_compression_dxt3_obj()
{
}

hx::Val ANGLE_texture_compression_dxt3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT3_ANGLE") ) { return hx::Val( COMPRESSED_RGBA_S3TC_DXT3_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ANGLE_texture_compression_dxt3_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT3_ANGLE") ) { COMPRESSED_RGBA_S3TC_DXT3_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_texture_compression_dxt3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_ANGLE","\xaa","\x27","\x34","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ANGLE_texture_compression_dxt3_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_texture_compression_dxt3_obj,COMPRESSED_RGBA_S3TC_DXT3_ANGLE),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_ANGLE","\xaa","\x27","\x34","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ANGLE_texture_compression_dxt3_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_texture_compression_dxt3_obj_sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT3_ANGLE","\xaa","\x27","\x34","\xe8"),
	::String(null()) };

static void ANGLE_texture_compression_dxt3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_texture_compression_dxt3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ANGLE_texture_compression_dxt3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_texture_compression_dxt3_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_texture_compression_dxt3_obj::__mClass;

void ANGLE_texture_compression_dxt3_obj::__register()
{
	hx::Object *dummy = new ANGLE_texture_compression_dxt3_obj;
	ANGLE_texture_compression_dxt3_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3","\x1e","\xf3","\xf3","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ANGLE_texture_compression_dxt3_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ANGLE_texture_compression_dxt3_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_texture_compression_dxt3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ANGLE_texture_compression_dxt3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_texture_compression_dxt3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_texture_compression_dxt3_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
