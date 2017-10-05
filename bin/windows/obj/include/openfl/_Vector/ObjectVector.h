// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl__Vector_ObjectVector
#define INCLUDED_openfl__Vector_ObjectVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES ObjectVector_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ObjectVector_obj OBJ_;
		ObjectVector_obj();

	public:
		enum { _hx_ClassId = 0x020730c8 };

		void __construct( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.ObjectVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._Vector.ObjectVector"); }
		static hx::ObjectPtr< ObjectVector_obj > __new( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array);
		static hx::ObjectPtr< ObjectVector_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectVector_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("ObjectVector","\x02","\x09","\x7a","\x39"); }

		bool fixed;
		::cpp::VirtualArray _hx___array;
		::Dynamic concat(::Dynamic a);
		::Dynamic concat_dyn();

		::Dynamic copy();
		::Dynamic copy_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		int indexOf( ::Dynamic x, ::Dynamic from);
		::Dynamic indexOf_dyn();

		void insertAt(int index, ::Dynamic element);
		::Dynamic insertAt_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::String join(::String sep);
		::Dynamic join_dyn();

		int lastIndexOf( ::Dynamic x, ::Dynamic from);
		::Dynamic lastIndexOf_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		int push( ::Dynamic x);
		::Dynamic push_dyn();

		 ::Dynamic removeAt(int index);
		::Dynamic removeAt_dyn();

		::Dynamic reverse();
		::Dynamic reverse_dyn();

		 ::Dynamic set(int index, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		::Dynamic slice( ::Dynamic startIndex, ::Dynamic endIndex);
		::Dynamic slice_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		::Dynamic splice(int pos,int len);
		::Dynamic splice_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void unshift( ::Dynamic x);
		::Dynamic unshift_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_ObjectVector */ 
