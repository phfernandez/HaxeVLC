// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_33c2fcb60c1e8950_41_disableInputMode,"openfl._internal.renderer.canvas.CanvasTextField","disableInputMode",0x782779b9,"openfl._internal.renderer.canvas.CanvasTextField.disableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",41,0xcdf61a26)
HX_LOCAL_STACK_FRAME(_hx_pos_33c2fcb60c1e8950_50_enableInputMode,"openfl._internal.renderer.canvas.CanvasTextField","enableInputMode",0x5a626bd6,"openfl._internal.renderer.canvas.CanvasTextField.enableInputMode","openfl/_internal/renderer/canvas/CanvasTextField.hx",50,0xcdf61a26)
HX_LOCAL_STACK_FRAME(_hx_pos_33c2fcb60c1e8950_111_render,"openfl._internal.renderer.canvas.CanvasTextField","render",0xbf0ed28a,"openfl._internal.renderer.canvas.CanvasTextField.render","openfl/_internal/renderer/canvas/CanvasTextField.hx",111,0xcdf61a26)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasTextField_obj::__construct() { }

Dynamic CanvasTextField_obj::__CreateEmpty() { return new CanvasTextField_obj; }

void *CanvasTextField_obj::_hx_vtable = 0;

Dynamic CanvasTextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasTextField_obj > _hx_result = new CanvasTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x173f8092;
}

void CanvasTextField_obj::disableInputMode( ::openfl::_internal::text::TextEngine textEngine){
            	HX_STACKFRAME(&_hx_pos_33c2fcb60c1e8950_41_disableInputMode)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,disableInputMode,(void))

void CanvasTextField_obj::enableInputMode( ::openfl::_internal::text::TextEngine textEngine){
            	HX_STACKFRAME(&_hx_pos_33c2fcb60c1e8950_50_enableInputMode)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,enableInputMode,(void))

void CanvasTextField_obj::render( ::openfl::text::TextField textField, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_33c2fcb60c1e8950_111_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CanvasTextField_obj,render,(void))


CanvasTextField_obj::CanvasTextField_obj()
{
}

bool CanvasTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableInputMode") ) { outValue = enableInputMode_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableInputMode") ) { outValue = disableInputMode_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CanvasTextField_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CanvasTextField_obj_sStaticStorageInfo = 0;
#endif

static void CanvasTextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasTextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasTextField_obj::__mClass;

static ::String CanvasTextField_obj_sStaticFields[] = {
	HX_HCSTRING("disableInputMode","\x85","\x89","\xad","\xe3"),
	HX_HCSTRING("enableInputMode","\x8a","\x59","\x8c","\xf3"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CanvasTextField_obj::__register()
{
	hx::Object *dummy = new CanvasTextField_obj;
	CanvasTextField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasTextField","\xba","\x1a","\xb4","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasTextField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CanvasTextField_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasTextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasTextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasTextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
