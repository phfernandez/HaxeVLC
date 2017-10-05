// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_math_Rectangle
#define INCLUDED_lime_math_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)

namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Rectangle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();

	public:
		enum { _hx_ClassId = 0x2a1cb312 };

		void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.math.Rectangle"); }
		static hx::ObjectPtr< Rectangle_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static hx::ObjectPtr< Rectangle_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		Float height;
		Float width;
		Float x;
		Float y;
		 ::lime::math::Rectangle clone();
		::Dynamic clone_dyn();

		bool contains(Float x,Float y);
		::Dynamic contains_dyn();

		bool containsPoint( ::lime::math::Vector2 point);
		::Dynamic containsPoint_dyn();

		bool containsRect( ::lime::math::Rectangle rect);
		::Dynamic containsRect_dyn();

		void copyFrom( ::lime::math::Rectangle sourceRect);
		::Dynamic copyFrom_dyn();

		bool equals( ::lime::math::Rectangle toCompare);
		::Dynamic equals_dyn();

		void inflate(Float dx,Float dy);
		::Dynamic inflate_dyn();

		void inflatePoint( ::lime::math::Vector2 point);
		::Dynamic inflatePoint_dyn();

		 ::lime::math::Rectangle intersection( ::lime::math::Rectangle toIntersect);
		::Dynamic intersection_dyn();

		bool intersects( ::lime::math::Rectangle toIntersect);
		::Dynamic intersects_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		void offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		void offsetPoint( ::lime::math::Vector2 point);
		::Dynamic offsetPoint_dyn();

		void setEmpty();
		::Dynamic setEmpty_dyn();

		void setTo(Float xa,Float ya,Float widtha,Float heighta);
		::Dynamic setTo_dyn();

		 ::lime::math::Rectangle transform( ::lime::math::Matrix3 m);
		::Dynamic transform_dyn();

		 ::lime::math::Rectangle _hx_union( ::lime::math::Rectangle toUnion);
		::Dynamic _hx_union_dyn();

		void _hx___contract(Float x,Float y,Float width,Float height);
		::Dynamic _hx___contract_dyn();

		void _hx___expand(Float x,Float y,Float width,Float height);
		::Dynamic _hx___expand_dyn();

		 ::Dynamic _hx___toFlashRectangle();
		::Dynamic _hx___toFlashRectangle_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float b);
		::Dynamic set_bottom_dyn();

		 ::lime::math::Vector2 get_bottomRight();
		::Dynamic get_bottomRight_dyn();

		 ::lime::math::Vector2 set_bottomRight( ::lime::math::Vector2 p);
		::Dynamic set_bottomRight_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float l);
		::Dynamic set_left_dyn();

		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float r);
		::Dynamic set_right_dyn();

		 ::lime::math::Vector2 get_size();
		::Dynamic get_size_dyn();

		 ::lime::math::Vector2 set_size( ::lime::math::Vector2 p);
		::Dynamic set_size_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float t);
		::Dynamic set_top_dyn();

		 ::lime::math::Vector2 get_topLeft();
		::Dynamic get_topLeft_dyn();

		 ::lime::math::Vector2 set_topLeft( ::lime::math::Vector2 p);
		::Dynamic set_topLeft_dyn();

};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Rectangle */ 
