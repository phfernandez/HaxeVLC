// Generated by Haxe 3.4.3
#ifndef INCLUDED_haxe_lang_Iterator
#define INCLUDED_haxe_lang_Iterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,lang,Iterator)

namespace haxe{
namespace lang{


class HXCPP_CLASS_ATTRIBUTES Iterator_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (hx::Object :: *_hx_hasNext)(); 
		static inline bool hasNext( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::lang::Iterator_obj *>(_hx_.mPtr->_hx_getInterface(0x1f76d722)))->_hx_hasNext)();
		}
		 ::Dynamic (hx::Object :: *_hx_next)(); 
		static inline  ::Dynamic next( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::haxe::lang::Iterator_obj *>(_hx_.mPtr->_hx_getInterface(0x1f76d722)))->_hx_next)();
		}
};

} // end namespace haxe
} // end namespace lang

#endif /* INCLUDED_haxe_lang_Iterator */ 
