// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#define INCLUDED_openfl_display_GraphicsBitmapFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsBitmapFill)
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsFillType)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsFill)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsBitmapFill_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GraphicsBitmapFill_obj OBJ_;
		GraphicsBitmapFill_obj();

	public:
		enum { _hx_ClassId = 0x0b8262ab };

		void __construct( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsBitmapFill")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.GraphicsBitmapFill"); }
		static hx::ObjectPtr< GraphicsBitmapFill_obj > __new( ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth);
		static hx::ObjectPtr< GraphicsBitmapFill_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsBitmapFill_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("GraphicsBitmapFill","\xdd","\x5a","\xb9","\x40"); }

		 ::openfl::display::BitmapData bitmapData;
		 ::openfl::geom::Matrix matrix;
		bool repeat;
		bool smooth;
		 ::openfl::display::GraphicsDataType _hx___graphicsDataType;
		 ::openfl::display::GraphicsFillType _hx___graphicsFillType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsBitmapFill */ 
