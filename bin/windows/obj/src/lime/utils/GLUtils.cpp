// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_736ce5301d879302_18_compileShader,"lime.utils.GLUtils","compileShader",0x55bd7600,"lime.utils.GLUtils.compileShader","lime/utils/GLUtils.hx",18,0xaa32e64a)
HX_LOCAL_STACK_FRAME(_hx_pos_736ce5301d879302_44_createProgram,"lime.utils.GLUtils","createProgram",0x574727f0,"lime.utils.GLUtils.createProgram","lime/utils/GLUtils.hx",44,0xaa32e64a)
namespace lime{
namespace utils{

void GLUtils_obj::__construct() { }

Dynamic GLUtils_obj::__CreateEmpty() { return new GLUtils_obj; }

void *GLUtils_obj::_hx_vtable = 0;

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLUtils_obj > _hx_result = new GLUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLUtils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x416d00f4;
}

 ::lime::graphics::opengl::GLObject GLUtils_obj::compileShader(::String source,int type){
            	HX_STACKFRAME(&_hx_pos_736ce5301d879302_18_compileShader)
HXLINE(  20)		 ::lime::graphics::opengl::GLObject shader = ::lime::graphics::opengl::GL_obj::context->createShader(type);
HXLINE(  21)		::lime::graphics::opengl::GL_obj::context->shaderSource(shader,source);
HXLINE(  22)		::lime::graphics::opengl::GL_obj::context->compileShader(shader);
HXLINE(  24)		if (hx::IsEq( ::lime::graphics::opengl::GL_obj::context->getShaderParameter(shader,(int)35713),(int)0 )) {
HXLINE(  26)			::String message;
HXDLIN(  26)			switch((int)(type)){
            				case (int)35632: {
HXLINE(  26)					message = HX_("Error compiling fragment shader",4d,d0,be,e3);
            				}
            				break;
            				case (int)35633: {
HXLINE(  26)					message = HX_("Error compiling vertex shader",39,c9,c1,b2);
            				}
            				break;
            				default:{
HXLINE(  26)					message = HX_("Error compiling unknown shader type",d7,06,f2,00);
            				}
            			}
HXLINE(  34)			message = (message + (HX_("\n",0a,00,00,00) + ::lime::graphics::opengl::GL_obj::context->getShaderInfoLog(shader)));
HXLINE(  35)			::lime::utils::Log_obj::error(message,hx::SourceInfo(HX_("GLUtils.hx",72,74,b2,40),35,HX_("lime.utils.GLUtils",76,27,94,e3),HX_("compileShader",f8,70,b2,da)));
            		}
HXLINE(  39)		return shader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,compileShader,return )

 ::lime::graphics::opengl::GLObject GLUtils_obj::createProgram(::String vertexSource,::String fragmentSource){
            	HX_STACKFRAME(&_hx_pos_736ce5301d879302_44_createProgram)
HXLINE(  46)		 ::lime::graphics::opengl::GLObject vertexShader = ::lime::utils::GLUtils_obj::compileShader(vertexSource,(int)35633);
HXLINE(  47)		 ::lime::graphics::opengl::GLObject fragmentShader = ::lime::utils::GLUtils_obj::compileShader(fragmentSource,(int)35632);
HXLINE(  49)		 ::lime::graphics::opengl::GLObject program = ::lime::graphics::opengl::GL_obj::context->createProgram();
HXLINE(  50)		::lime::graphics::opengl::GL_obj::context->attachShader(program,vertexShader);
HXLINE(  51)		::lime::graphics::opengl::GL_obj::context->attachShader(program,fragmentShader);
HXLINE(  52)		::lime::graphics::opengl::GL_obj::context->linkProgram(program);
HXLINE(  54)		if (hx::IsEq( ::lime::graphics::opengl::GL_obj::context->getProgramParameter(program,(int)35714),(int)0 )) {
HXLINE(  56)			::lime::utils::Log_obj::error(HX_("Unable to initialize the shader program",f0,86,8b,39),hx::SourceInfo(HX_("GLUtils.hx",72,74,b2,40),56,HX_("lime.utils.GLUtils",76,27,94,e3),HX_("createProgram",e8,22,3c,dc)));
            		}
HXLINE(  60)		return program;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,createProgram,return )


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLUtils_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLUtils_obj_sStaticStorageInfo = 0;
#endif

static void GLUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String GLUtils_obj_sStaticFields[] = {
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	::String(null())
};

void GLUtils_obj::__register()
{
	hx::Object *dummy = new GLUtils_obj;
	GLUtils_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLUtils_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLUtils_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLUtils_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
