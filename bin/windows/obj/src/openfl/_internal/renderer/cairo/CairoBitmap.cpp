// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_IShaderDrawable
#include <openfl/display/IShaderDrawable.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_344986c8325e94e5_25_render,"openfl._internal.renderer.cairo.CairoBitmap","render",0xa19c46ee,"openfl._internal.renderer.cairo.CairoBitmap.render","openfl/_internal/renderer/cairo/CairoBitmap.hx",25,0x03302068)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoBitmap_obj::__construct() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return new CairoBitmap_obj; }

void *CairoBitmap_obj::_hx_vtable = 0;

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoBitmap_obj > _hx_result = new CairoBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01a7cfda;
}

void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_344986c8325e94e5_25_render)
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if (!(!(bitmap->_hx___renderable))) {
HXLINE(  27)			_hx_tmp = (bitmap->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  27)			_hx_tmp = true;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  27)			return;
            		}
HXLINE(  29)		 ::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
HXLINE(  31)		bool _hx_tmp1;
HXDLIN(  31)		if (hx::IsNotNull( bitmap->bitmapData )) {
HXLINE(  31)			_hx_tmp1 = bitmap->bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXLINE(  33)			renderSession->blendModeManager->setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  34)			renderSession->maskManager->pushObject(bitmap,null());
HXLINE(  36)			 ::openfl::geom::Matrix transform = bitmap->_hx___renderTransform;
HXLINE(  38)			if (renderSession->roundPixels) {
HXLINE(  40)				 ::lime::math::Matrix3 matrix = transform->_hx___toMatrix3();
HXLINE(  41)				matrix->tx = ::Math_obj::round(matrix->tx);
HXLINE(  42)				matrix->ty = ::Math_obj::round(matrix->ty);
HXLINE(  43)				cairo->set_matrix(matrix);
            			}
            			else {
HXLINE(  47)				cairo->set_matrix(transform->_hx___toMatrix3());
            			}
HXLINE(  51)			 ::Dynamic surface = bitmap->bitmapData->getSurface();
HXLINE(  53)			if (hx::IsNotNull( surface )) {
HXLINE(  55)				 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXLINE(  56)				int _hx_tmp2;
HXDLIN(  56)				bool _hx_tmp3;
HXDLIN(  56)				if (renderSession->allowSmoothing) {
HXLINE(  56)					_hx_tmp3 = bitmap->smoothing;
            				}
            				else {
HXLINE(  56)					_hx_tmp3 = false;
            				}
HXDLIN(  56)				if (_hx_tmp3) {
HXLINE(  56)					_hx_tmp2 = (int)1;
            				}
            				else {
HXLINE(  56)					_hx_tmp2 = (int)3;
            				}
HXDLIN(  56)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp2);
HXLINE(  58)				cairo->set_source(pattern);
HXLINE(  60)				if ((bitmap->_hx___worldAlpha == (int)1)) {
HXLINE(  62)					cairo->paint();
            				}
            				else {
HXLINE(  66)					cairo->paintWithAlpha(bitmap->_hx___worldAlpha);
            				}
            			}
HXLINE(  72)			renderSession->maskManager->popObject(bitmap,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoBitmap_obj_sStaticStorageInfo = 0;
#endif

static void CairoBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBitmap_obj::__mClass;

static ::String CairoBitmap_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CairoBitmap_obj::__register()
{
	hx::Object *dummy = new CairoBitmap_obj;
	CairoBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBitmap","\xd6","\x01","\xc6","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoBitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
