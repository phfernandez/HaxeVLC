// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt5
#include <lime/graphics/opengl/ext/ANGLE_texture_compression_dxt5.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_958283fb81ddd880_9_new,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5","new",0xa5f7a412,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5.new","lime/graphics/opengl/ext/ANGLE_texture_compression_dxt5.hx",9,0x984b60bc)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_texture_compression_dxt5_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_958283fb81ddd880_9_new)
HXDLIN(   9)		this->COMPRESSED_RGBA_S3TC_DXT5_ANGLE = (int)33779;
            	}

Dynamic ANGLE_texture_compression_dxt5_obj::__CreateEmpty() { return new ANGLE_texture_compression_dxt5_obj; }

void *ANGLE_texture_compression_dxt5_obj::_hx_vtable = 0;

Dynamic ANGLE_texture_compression_dxt5_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ANGLE_texture_compression_dxt5_obj > _hx_result = new ANGLE_texture_compression_dxt5_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_texture_compression_dxt5_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c619130;
}


ANGLE_texture_compression_dxt5_obj::ANGLE_texture_compression_dxt5_obj()
{
}

hx::Val ANGLE_texture_compression_dxt5_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT5_ANGLE") ) { return hx::Val( COMPRESSED_RGBA_S3TC_DXT5_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ANGLE_texture_compression_dxt5_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"COMPRESSED_RGBA_S3TC_DXT5_ANGLE") ) { COMPRESSED_RGBA_S3TC_DXT5_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_texture_compression_dxt5_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_ANGLE","\x2c","\x15","\x5f","\x3b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ANGLE_texture_compression_dxt5_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_texture_compression_dxt5_obj,COMPRESSED_RGBA_S3TC_DXT5_ANGLE),HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_ANGLE","\x2c","\x15","\x5f","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ANGLE_texture_compression_dxt5_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_texture_compression_dxt5_obj_sMemberFields[] = {
	HX_HCSTRING("COMPRESSED_RGBA_S3TC_DXT5_ANGLE","\x2c","\x15","\x5f","\x3b"),
	::String(null()) };

static void ANGLE_texture_compression_dxt5_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_texture_compression_dxt5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ANGLE_texture_compression_dxt5_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_texture_compression_dxt5_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_texture_compression_dxt5_obj::__mClass;

void ANGLE_texture_compression_dxt5_obj::__register()
{
	hx::Object *dummy = new ANGLE_texture_compression_dxt5_obj;
	ANGLE_texture_compression_dxt5_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_texture_compression_dxt5","\x20","\xf3","\xf3","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ANGLE_texture_compression_dxt5_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ANGLE_texture_compression_dxt5_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_texture_compression_dxt5_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ANGLE_texture_compression_dxt5_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_texture_compression_dxt5_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_texture_compression_dxt5_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
