// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLES2Context_GLES2Context_Impl_
#include <lime/graphics/opengl/_GLES2Context/GLES2Context_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ffa35bd7389f02cb_97_fromGL,"lime.graphics.opengl._GLES2Context.GLES2Context_Impl_","fromGL",0xc922aeb9,"lime.graphics.opengl._GLES2Context.GLES2Context_Impl_.fromGL","lime/graphics/opengl/GLES2Context.hx",97,0x5fc614f8)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLES2Context{

void GLES2Context_Impl__obj::__construct() { }

Dynamic GLES2Context_Impl__obj::__CreateEmpty() { return new GLES2Context_Impl__obj; }

void *GLES2Context_Impl__obj::_hx_vtable = 0;

Dynamic GLES2Context_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLES2Context_Impl__obj > _hx_result = new GLES2Context_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLES2Context_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7043cfb0;
}

 ::lime::_backend::native::NativeGLRenderContext GLES2Context_Impl__obj::fromGL(hx::Class gl){
            	HX_STACKFRAME(&_hx_pos_ffa35bd7389f02cb_97_fromGL)
HXDLIN(  97)		return ::lime::graphics::opengl::GL_obj::context;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLES2Context_Impl__obj,fromGL,return )


GLES2Context_Impl__obj::GLES2Context_Impl__obj()
{
}

bool GLES2Context_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fromGL") ) { outValue = fromGL_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLES2Context_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLES2Context_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLES2Context_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLES2Context_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLES2Context_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLES2Context_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLES2Context_Impl__obj::__mClass;

static ::String GLES2Context_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromGL","\x0f","\x92","\xc6","\xb5"),
	::String(null())
};

void GLES2Context_Impl__obj::__register()
{
	hx::Object *dummy = new GLES2Context_Impl__obj;
	GLES2Context_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLES2Context.GLES2Context_Impl_","\x84","\x52","\x10","\xee");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLES2Context_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLES2Context_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLES2Context_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLES2Context_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLES2Context_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLES2Context_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLES2Context_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLES2Context
