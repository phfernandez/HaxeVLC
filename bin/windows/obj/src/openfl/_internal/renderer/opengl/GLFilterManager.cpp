// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_40ef2765f573c5ea_37_new,"openfl._internal.renderer.opengl.GLFilterManager","new",0xa57802be,"openfl._internal.renderer.opengl.GLFilterManager.new","openfl/_internal/renderer/opengl/GLFilterManager.hx",37,0xef502054)
HX_LOCAL_STACK_FRAME(_hx_pos_40ef2765f573c5ea_52_pushObject,"openfl._internal.renderer.opengl.GLFilterManager","pushObject",0x4b4ad99b,"openfl._internal.renderer.opengl.GLFilterManager.pushObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",52,0xef502054)
HX_LOCAL_STACK_FRAME(_hx_pos_40ef2765f573c5ea_87_popObject,"openfl._internal.renderer.opengl.GLFilterManager","popObject",0x1feca00e,"openfl._internal.renderer.opengl.GLFilterManager.popObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",87,0xef502054)
HX_LOCAL_STACK_FRAME(_hx_pos_40ef2765f573c5ea_162_renderPass,"openfl._internal.renderer.opengl.GLFilterManager","renderPass",0xc987d4a9,"openfl._internal.renderer.opengl.GLFilterManager.renderPass","openfl/_internal/renderer/opengl/GLFilterManager.hx",162,0xef502054)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLFilterManager_obj::__construct( ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_GC_STACKFRAME(&_hx_pos_40ef2765f573c5ea_37_new)
HXLINE(  39)		super::__construct(renderSession);
HXLINE(  41)		this->renderer = renderer;
HXLINE(  42)		this->gl = renderSession->gl;
HXLINE(  44)		this->filterDepth = (int)0;
HXLINE(  45)		this->matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}

Dynamic GLFilterManager_obj::__CreateEmpty() { return new GLFilterManager_obj; }

void *GLFilterManager_obj::_hx_vtable = 0;

Dynamic GLFilterManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLFilterManager_obj > _hx_result = new GLFilterManager_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLFilterManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x516de032) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x516de032;
	} else {
		return inClassId==(int)0x54d76a68;
	}
}

 ::openfl::display::Shader GLFilterManager_obj::pushObject( ::openfl::display::DisplayObject object){
            	HX_STACKFRAME(&_hx_pos_40ef2765f573c5ea_52_pushObject)
HXDLIN(  52)		return this->renderSession->shaderManager->defaultShader;
            	}


void GLFilterManager_obj::popObject( ::openfl::display::DisplayObject object){
            	HX_STACKFRAME(&_hx_pos_40ef2765f573c5ea_87_popObject)
HXDLIN(  87)		return;
            	}


void GLFilterManager_obj::renderPass( ::openfl::display::BitmapData target, ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_40ef2765f573c5ea_162_renderPass)
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (hx::IsNotNull( target )) {
HXLINE( 164)			_hx_tmp = hx::IsNull( shader );
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 164)			return;
            		}
HXLINE( 166)		shader->get_data()->uImage0->input = target;
HXLINE( 167)		bool _hx_tmp1;
HXDLIN( 167)		if (this->renderSession->allowSmoothing) {
HXLINE( 167)			_hx_tmp1 = this->renderSession->upscaled;
            		}
            		else {
HXLINE( 167)			_hx_tmp1 = false;
            		}
HXDLIN( 167)		shader->get_data()->uImage0->smoothing = _hx_tmp1;
HXLINE( 168)		shader->get_data()->uMatrix->value = this->renderer->getMatrix(this->matrix);
HXLINE( 170)		if (hx::IsNotNull(  ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic)) )) {
HXLINE( 171)			if (hx::IsNull(  ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) )) {
HXLINE( 171)				 ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(0),hx::paccDynamic);
            			}
HXLINE( 172)			 ::Dynamic( ::Dynamic(shader->get_data()->__Field(HX_("uColorTransform",de,6e,95,6e),hx::paccDynamic))->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic))->__SetItem((int)0,false);
            		}
HXLINE( 175)		this->renderSession->shaderManager->setShader(shader);
HXLINE( 177)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp2 = this->gl;
HXDLIN( 177)		int _hx_tmp3 = this->gl->ARRAY_BUFFER;
HXDLIN( 177)		_hx_tmp2->bindBuffer(_hx_tmp3,target->getBuffer(this->gl,(int)1,null()));
HXLINE( 179)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp4 = this->gl;
HXDLIN( 179)		int _hx_tmp5 = shader->get_data()->aPosition->index;
HXDLIN( 179)		int _hx_tmp6 = this->gl->FLOAT;
HXDLIN( 179)		_hx_tmp4->vertexAttribPointer(_hx_tmp5,(int)3,_hx_tmp6,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXLINE( 180)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp7 = this->gl;
HXDLIN( 180)		int _hx_tmp8 = shader->get_data()->aTexCoord->index;
HXDLIN( 180)		int _hx_tmp9 = this->gl->FLOAT;
HXDLIN( 180)		_hx_tmp7->vertexAttribPointer(_hx_tmp8,(int)2,_hx_tmp9,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXLINE( 181)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp10 = this->gl;
HXDLIN( 181)		int _hx_tmp11 = shader->get_data()->aAlpha->index;
HXDLIN( 181)		int _hx_tmp12 = this->gl->FLOAT;
HXDLIN( 181)		_hx_tmp10->vertexAttribPointer(_hx_tmp11,(int)1,_hx_tmp12,false,(int)104,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)20));
HXLINE( 183)		this->gl->drawArrays(this->gl->TRIANGLE_STRIP,(int)0,(int)4);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GLFilterManager_obj,renderPass,(void))


hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__new( ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession) {
	hx::ObjectPtr< GLFilterManager_obj > __this = new GLFilterManager_obj();
	__this->__construct(renderer,renderSession);
	return __this;
}

hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession) {
	GLFilterManager_obj *__this = (GLFilterManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLFilterManager_obj), true, "openfl._internal.renderer.opengl.GLFilterManager"));
	*(void **)__this = GLFilterManager_obj::_hx_vtable;
	__this->__construct(renderer,renderSession);
	return __this;
}

GLFilterManager_obj::GLFilterManager_obj()
{
}

void GLFilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLFilterManager);
	HX_MARK_MEMBER_NAME(filterDepth,"filterDepth");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	 ::openfl::_internal::renderer::AbstractFilterManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLFilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filterDepth,"filterDepth");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	 ::openfl::_internal::renderer::AbstractFilterManager_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLFilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return hx::Val( renderer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return hx::Val( popObject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return hx::Val( pushObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"renderPass") ) { return hx::Val( renderPass_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { return hx::Val( filterDepth ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLFilterManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast<  ::openfl::_internal::renderer::opengl::GLRenderer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { filterDepth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLFilterManager_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLFilterManager_obj,filterDepth),HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLFilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLFilterManager_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::GLRenderer*/ ,(int)offsetof(GLFilterManager_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLFilterManager_obj_sStaticStorageInfo = 0;
#endif

static ::String GLFilterManager_obj_sMemberFields[] = {
	HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("renderPass","\x47","\xdf","\x5b","\xe7"),
	::String(null()) };

static void GLFilterManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFilterManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFilterManager_obj::__mClass;

void GLFilterManager_obj::__register()
{
	hx::Object *dummy = new GLFilterManager_obj;
	GLFilterManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLFilterManager","\xcc","\x8b","\x5c","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLFilterManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLFilterManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFilterManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFilterManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFilterManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFilterManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
