// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1530_new,"openfl._Vector.ObjectVector","new",0x1b3b8afe,"openfl._Vector.ObjectVector.new","openfl/Vector.hx",1530,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1553_concat,"openfl._Vector.ObjectVector","concat",0x91684536,"openfl._Vector.ObjectVector.concat","openfl/Vector.hx",1553,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1568_copy,"openfl._Vector.ObjectVector","copy",0xb1a04b57,"openfl._Vector.ObjectVector.copy","openfl/Vector.hx",1568,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1575_get,"openfl._Vector.ObjectVector","get",0x1b363b34,"openfl._Vector.ObjectVector.get","openfl/Vector.hx",1575,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1580_indexOf,"openfl._Vector.ObjectVector","indexOf",0x7c5baa67,"openfl._Vector.ObjectVector.indexOf","openfl/Vector.hx",1580,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1599_insertAt,"openfl._Vector.ObjectVector","insertAt",0x4f58852e,"openfl._Vector.ObjectVector.insertAt","openfl/Vector.hx",1599,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1610_iterator,"openfl._Vector.ObjectVector","iterator",0x20d35290,"openfl._Vector.ObjectVector.iterator","openfl/Vector.hx",1610,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1617_join,"openfl._Vector.ObjectVector","join",0xb640c38c,"openfl._Vector.ObjectVector.join","openfl/Vector.hx",1617,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1622_lastIndexOf,"openfl._Vector.ObjectVector","lastIndexOf",0x069b85b1,"openfl._Vector.ObjectVector.lastIndexOf","openfl/Vector.hx",1622,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1640_pop,"openfl._Vector.ObjectVector","pop",0x1b3d182f,"openfl._Vector.ObjectVector.pop","openfl/Vector.hx",1640,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1655_push,"openfl._Vector.ObjectVector","push",0xba3ca17c,"openfl._Vector.ObjectVector.push","openfl/Vector.hx",1655,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1668_removeAt,"openfl._Vector.ObjectVector","removeAt",0x3a5476f9,"openfl._Vector.ObjectVector.removeAt","openfl/Vector.hx",1668,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1681_reverse,"openfl._Vector.ObjectVector","reverse",0xb6989ac0,"openfl._Vector.ObjectVector.reverse","openfl/Vector.hx",1681,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1691_set,"openfl._Vector.ObjectVector","set",0x1b3f5640,"openfl._Vector.ObjectVector.set","openfl/Vector.hx",1691,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1706_shift,"openfl._Vector.ObjectVector","shift",0xec650aa0,"openfl._Vector.ObjectVector.shift","openfl/Vector.hx",1706,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1721_slice,"openfl._Vector.ObjectVector","slice",0xef09e270,"openfl._Vector.ObjectVector.slice","openfl/Vector.hx",1721,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1728_sort,"openfl._Vector.ObjectVector","sort",0xbc33b700,"openfl._Vector.ObjectVector.sort","openfl/Vector.hx",1728,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1735_splice,"openfl._Vector.ObjectVector","splice",0x8936c19e,"openfl._Vector.ObjectVector.splice","openfl/Vector.hx",1735,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1742_toString,"openfl._Vector.ObjectVector","toString",0xc5a7d94e,"openfl._Vector.ObjectVector.toString","openfl/Vector.hx",1742,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1749_unshift,"openfl._Vector.ObjectVector","unshift",0x14504527,"openfl._Vector.ObjectVector.unshift","openfl/Vector.hx",1749,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1767_get_length,"openfl._Vector.ObjectVector","get_length",0xa394f9d1,"openfl._Vector.ObjectVector.get_length","openfl/Vector.hx",1767,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_98c8e9225b0b8e2b_1772_set_length,"openfl._Vector.ObjectVector","set_length",0xa7129845,"openfl._Vector.ObjectVector.set_length","openfl/Vector.hx",1772,0x4a01873c)
namespace openfl{
namespace _Vector{

void ObjectVector_obj::__construct( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1530_new)
HXLINE(1532)		if (hx::IsNull( array )) {
HXLINE(1534)			array = ::cpp::VirtualArray_obj::__new();
            		}
HXLINE(1538)		this->_hx___array = array;
HXLINE(1540)		if (hx::IsNotNull( length )) {
HXLINE(1542)			this->set_length(length);
            		}
HXLINE(1546)		this->fixed = hx::IsEq( fixed,true );
            	}

Dynamic ObjectVector_obj::__CreateEmpty() { return new ObjectVector_obj; }

void *ObjectVector_obj::_hx_vtable = 0;

Dynamic ObjectVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectVector_obj > _hx_result = new ObjectVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ObjectVector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x020730c8;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_ObjectVector__hx_openfl__Vector_IVector= {
	( int (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::get_length,
	( int (hx::Object::*)(int))&::openfl::_Vector::ObjectVector_obj::set_length,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::openfl::_Vector::ObjectVector_obj::concat,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::copy,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::ObjectVector_obj::get,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::indexOf,
	( void (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::insertAt,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::iterator,
	( ::String (hx::Object::*)(::String))&::openfl::_Vector::ObjectVector_obj::join,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::lastIndexOf,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::pop,
	( int (hx::Object::*)( ::Dynamic))&::openfl::_Vector::ObjectVector_obj::push,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::ObjectVector_obj::removeAt,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::reverse,
	(  ::Dynamic (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::set,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::shift,
	( ::Dynamic (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::slice,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::ObjectVector_obj::sort,
	( ::Dynamic (hx::Object::*)(int,int))&::openfl::_Vector::ObjectVector_obj::splice,
	( ::String (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::toString,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::ObjectVector_obj::unshift,
};

void *ObjectVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_ObjectVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic ObjectVector_obj::concat(::Dynamic a){
            	HX_GC_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1553_concat)
HXDLIN(1553)		if (hx::IsNull( a )) {
HXLINE(1555)			return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            		}
            		else {
HXLINE(1559)			::cpp::VirtualArray _hx_tmp = this->_hx___array;
HXDLIN(1559)			return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,null(),null(),_hx_tmp->concat(hx::TCast<  ::openfl::_Vector::ObjectVector >::cast(a)->_hx___array));
            		}
HXLINE(1553)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,concat,return )

::Dynamic ObjectVector_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1568_copy)
HXDLIN(1568)		return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,copy,return )

 ::Dynamic ObjectVector_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1575_get)
HXDLIN(1575)		return this->_hx___array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,get,return )

int ObjectVector_obj::indexOf( ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1580_indexOf)
HXLINE(1582)		{
HXLINE(1582)			int _g1 = from;
HXDLIN(1582)			int _g = this->_hx___array->get_length();
HXDLIN(1582)			while((_g1 < _g)){
HXLINE(1582)				_g1 = (_g1 + (int)1);
HXDLIN(1582)				int i = (_g1 - (int)1);
HXLINE(1584)				if (hx::IsEq( this->_hx___array->__get(i),x )) {
HXLINE(1586)					return i;
            				}
            			}
            		}
HXLINE(1592)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,indexOf,return )

void ObjectVector_obj::insertAt(int index, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1599_insertAt)
HXDLIN(1599)		bool _hx_tmp;
HXDLIN(1599)		if (!(!(this->fixed))) {
HXDLIN(1599)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXDLIN(1599)			_hx_tmp = true;
            		}
HXDLIN(1599)		if (_hx_tmp) {
HXLINE(1601)			this->_hx___array->insert(index,element);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,insertAt,(void))

 ::Dynamic ObjectVector_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1610_iterator)
HXDLIN(1610)		return this->_hx___array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,iterator,return )

::String ObjectVector_obj::join(::String __o_sep){
::String sep = __o_sep.Default(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1617_join)
HXDLIN(1617)		return this->_hx___array->join(sep);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,join,return )

int ObjectVector_obj::lastIndexOf( ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1622_lastIndexOf)
HXLINE(1624)		int i = (this->_hx___array->get_length() - (int)1);
HXLINE(1626)		while(hx::IsGreaterEq( i,from )){
HXLINE(1628)			if (hx::IsEq( this->_hx___array->__get(i),x )) {
HXLINE(1628)				return i;
            			}
HXLINE(1629)			i = (i - (int)1);
            		}
HXLINE(1633)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,lastIndexOf,return )

 ::Dynamic ObjectVector_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1640_pop)
HXDLIN(1640)		if (!(this->fixed)) {
HXLINE(1642)			return this->_hx___array->pop();
            		}
            		else {
HXLINE(1646)			return null();
            		}
HXLINE(1640)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,pop,return )

int ObjectVector_obj::push( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1655_push)
HXDLIN(1655)		if (!(this->fixed)) {
HXLINE(1657)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE(1661)			return this->_hx___array->get_length();
            		}
HXLINE(1655)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,push,return )

 ::Dynamic ObjectVector_obj::removeAt(int index){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1668_removeAt)
HXLINE(1670)		bool _hx_tmp;
HXDLIN(1670)		if (!(!(this->fixed))) {
HXLINE(1670)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXLINE(1670)			_hx_tmp = true;
            		}
HXDLIN(1670)		if (_hx_tmp) {
HXLINE(1672)			return this->_hx___array->splice(index,(int)1)->__get((int)0);
            		}
HXLINE(1676)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,removeAt,return )

::Dynamic ObjectVector_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1681_reverse)
HXLINE(1683)		this->_hx___array->reverse();
HXLINE(1684)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,reverse,return )

 ::Dynamic ObjectVector_obj::set(int index, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1691_set)
HXDLIN(1691)		bool _hx_tmp;
HXDLIN(1691)		if (!(!(this->fixed))) {
HXDLIN(1691)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXDLIN(1691)			_hx_tmp = true;
            		}
HXDLIN(1691)		if (_hx_tmp) {
HXLINE(1693)			return (this->_hx___array->set(index,value));
            		}
            		else {
HXLINE(1697)			return value;
            		}
HXLINE(1691)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,set,return )

 ::Dynamic ObjectVector_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1706_shift)
HXDLIN(1706)		if (!(this->fixed)) {
HXLINE(1708)			return this->_hx___array->shift();
            		}
            		else {
HXLINE(1712)			return null();
            		}
HXLINE(1706)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,shift,return )

::Dynamic ObjectVector_obj::slice( ::Dynamic __o_startIndex, ::Dynamic __o_endIndex){
 ::Dynamic startIndex = __o_startIndex.Default(0);
 ::Dynamic endIndex = __o_endIndex.Default(16777215);
            	HX_GC_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1721_slice)
HXDLIN(1721)		return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->slice(startIndex,endIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,slice,return )

void ObjectVector_obj::sort( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1728_sort)
HXDLIN(1728)		this->_hx___array->sort(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,sort,(void))

::Dynamic ObjectVector_obj::splice(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1735_splice)
HXDLIN(1735)		return  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->splice(pos,len));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,splice,return )

::String ObjectVector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1742_toString)
HXDLIN(1742)		if (hx::IsNotNull( this->_hx___array )) {
HXDLIN(1742)			return this->_hx___array->toString();
            		}
            		else {
HXDLIN(1742)			return null();
            		}
HXDLIN(1742)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,toString,return )

void ObjectVector_obj::unshift( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1749_unshift)
HXDLIN(1749)		if (!(this->fixed)) {
HXLINE(1751)			this->_hx___array->unshift(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,unshift,(void))

int ObjectVector_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1767_get_length)
HXDLIN(1767)		return this->_hx___array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,get_length,return )

int ObjectVector_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_98c8e9225b0b8e2b_1772_set_length)
HXLINE(1774)		if (!(this->fixed)) {
HXLINE(1778)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE(1807)		return this->_hx___array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,set_length,return )


hx::ObjectPtr< ObjectVector_obj > ObjectVector_obj::__new( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array) {
	hx::ObjectPtr< ObjectVector_obj > __this = new ObjectVector_obj();
	__this->__construct(length,fixed,array);
	return __this;
}

hx::ObjectPtr< ObjectVector_obj > ObjectVector_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array) {
	ObjectVector_obj *__this = (ObjectVector_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectVector_obj), true, "openfl._Vector.ObjectVector"));
	*(void **)__this = ObjectVector_obj::_hx_vtable;
	__this->__construct(length,fixed,array);
	return __this;
}

ObjectVector_obj::ObjectVector_obj()
{
}

void ObjectVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void ObjectVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

hx::Val ObjectVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"join") ) { return hx::Val( join_dyn() ); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return hx::Val( sort_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return hx::Val( fixed ); }
		if (HX_FIELD_EQ(inName,"shift") ) { return hx::Val( shift_dyn() ); }
		if (HX_FIELD_EQ(inName,"slice") ) { return hx::Val( slice_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn() ); }
		if (HX_FIELD_EQ(inName,"splice") ) { return hx::Val( splice_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return hx::Val( _hx___array ); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return hx::Val( unshift_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return hx::Val( insertAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return hx::Val( removeAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return hx::Val( lastIndexOf_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< int >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectVector_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ObjectVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVector_obj,_hx___array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectVector_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectVector_obj_sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void ObjectVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectVector_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectVector_obj::__mClass;

void ObjectVector_obj::__register()
{
	hx::Object *dummy = new ObjectVector_obj;
	ObjectVector_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.ObjectVector","\x0c","\xf4","\x26","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
