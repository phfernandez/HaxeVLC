// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_33_new,"openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",33,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_56_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",56,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_85_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",85,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_94_uploadFromBitmapData,"openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",94,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_142_uploadFromByteArray,"openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",142,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_147_uploadFromTypedArray,"openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",147,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_174___setSamplerState,"openfl.display3D.textures.Texture","__setSamplerState",0xb719141b,"openfl.display3D.textures.Texture.__setSamplerState","openfl/display3D/textures/Texture.hx",174,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_201___uploadATFTextureFromByteArray,"openfl.display3D.textures.Texture","__uploadATFTextureFromByteArray",0x7de383ee,"openfl.display3D.textures.Texture.__uploadATFTextureFromByteArray","openfl/display3D/textures/Texture.hx",201,0x3ee19dbf)
HX_LOCAL_STACK_FRAME(_hx_pos_c910f1c2855eeb73_30_boot,"openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",30,0x3ee19dbf)
namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_33_new)
HXLINE(  35)		super::__construct(context,(int)3553);
HXLINE(  37)		this->_hx___width = width;
HXLINE(  38)		this->_hx___height = height;
HXLINE(  40)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  41)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  43)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE(  44)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  46)		{
HXLINE(  46)			int target = this->_hx___textureTarget;
HXDLIN(  46)			int internalformat = this->_hx___internalFormat;
HXDLIN(  46)			int format1 = this->_hx___format;
HXDLIN(  46)			Float data = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0);
HXDLIN(  46)			::lime::graphics::opengl::GL_obj::context->texImage2D(target,(int)0,internalformat,width,height,(int)0,format1,(int)5121,data);
            		}
HXLINE(  47)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  49)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  51)		this->uploadFromTypedArray(null(),null());
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x1fad1a24;
	}
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_56_uploadCompressedTextureFromByteArray)
HXDLIN(  56)		 ::openfl::display3D::textures::Texture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  58)		data->position = byteArrayOffset;
HXLINE(  59)		::String signature = data->readUTFBytes((int)3);
HXLINE(  60)		data->position = byteArrayOffset;
HXLINE(  62)		if ((signature == HX_("ATF",f3,9b,31,00))) {
HXLINE(  64)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE(  65)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  67)			this->_hx___uploadATFTextureFromByteArray(data,byteArrayOffset);
HXLINE(  69)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  70)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
            		else {
HXLINE(  76)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  77)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
HXLINE(  81)		if (async) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_85_uploadCompressedTextureFromByteArray)
HXLINE(  85)				_gthis->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null()));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  83)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),(int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_94_uploadFromBitmapData)
HXLINE( 106)		if (hx::IsNull( source )) {
HXLINE( 106)			return;
            		}
HXLINE( 108)		int width = ((int)this->_hx___width >> (int)miplevel);
HXLINE( 109)		int height = ((int)this->_hx___height >> (int)miplevel);
HXLINE( 111)		bool _hx_tmp;
HXDLIN( 111)		if ((width == (int)0)) {
HXLINE( 111)			_hx_tmp = (height == (int)0);
            		}
            		else {
HXLINE( 111)			_hx_tmp = false;
            		}
HXDLIN( 111)		if (_hx_tmp) {
HXLINE( 111)			return;
            		}
HXLINE( 113)		if ((width == (int)0)) {
HXLINE( 113)			width = (int)1;
            		}
HXLINE( 114)		if ((height == (int)0)) {
HXLINE( 114)			height = (int)1;
            		}
HXLINE( 116)		bool _hx_tmp1;
HXDLIN( 116)		if ((source->width == width)) {
HXLINE( 116)			_hx_tmp1 = (source->height != height);
            		}
            		else {
HXLINE( 116)			_hx_tmp1 = true;
            		}
HXDLIN( 116)		if (_hx_tmp1) {
HXLINE( 118)			 ::openfl::display::BitmapData copy =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,(int)0);
HXLINE( 119)			copy->draw(source,null(),null(),null(),null(),null());
HXLINE( 120)			source = copy;
            		}
HXLINE( 124)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE( 126)		this->uploadFromTypedArray(image->get_data(),miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_142_uploadFromByteArray)
HXDLIN( 142)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 142)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 142)		if (hx::IsNotNull( buffer )) {
HXDLIN( 142)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 142)			int in_byteOffset = byteArrayOffset;
HXDLIN( 142)			if ((in_byteOffset < (int)0)) {
HXDLIN( 142)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 142)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 142)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 142)			int bufferByteLength = buffer->length;
HXDLIN( 142)			int elementSize = _this->bytesPerElement;
HXDLIN( 142)			int newByteLength = bufferByteLength;
HXDLIN( 142)			{
HXDLIN( 142)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 142)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 142)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 142)				if ((newByteLength < (int)0)) {
HXDLIN( 142)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 142)			_this->buffer = buffer;
HXDLIN( 142)			_this->byteOffset = in_byteOffset;
HXDLIN( 142)			_this->byteLength = newByteLength;
HXDLIN( 142)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 142)			this1 = _this;
            		}
            		else {
HXDLIN( 142)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 142)		this->uploadFromTypedArray(this1,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_147_uploadFromTypedArray)
HXLINE( 149)		if (hx::IsNull( data )) {
HXLINE( 149)			return;
            		}
HXLINE( 151)		int width = ((int)this->_hx___width >> (int)miplevel);
HXLINE( 152)		int height = ((int)this->_hx___height >> (int)miplevel);
HXLINE( 154)		bool _hx_tmp;
HXDLIN( 154)		if ((width == (int)0)) {
HXLINE( 154)			_hx_tmp = (height == (int)0);
            		}
            		else {
HXLINE( 154)			_hx_tmp = false;
            		}
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 154)			return;
            		}
HXLINE( 156)		if ((width == (int)0)) {
HXLINE( 156)			width = (int)1;
            		}
HXLINE( 157)		if ((height == (int)0)) {
HXLINE( 157)			height = (int)1;
            		}
HXLINE( 159)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE( 160)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 162)		{
HXLINE( 162)			int target = this->_hx___textureTarget;
HXDLIN( 162)			int internalformat = this->_hx___internalFormat;
HXDLIN( 162)			int format = this->_hx___format;
HXDLIN( 162)			Float data1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(data);
HXDLIN( 162)			::lime::graphics::opengl::GL_obj::context->texImage2D(target,miplevel,internalformat,width,height,(int)0,format,(int)5121,data1);
            		}
HXLINE( 163)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 165)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE( 166)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 168)		int memUsage = ((width * height) * (int)4);
HXLINE( 169)		this->_hx___trackMemoryUsage(memUsage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromTypedArray,(void))

void Texture_obj::_hx___setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_174___setSamplerState)
HXLINE( 176)		if (!(state->equals(this->_hx___samplerState))) {
HXLINE( 178)			bool _hx_tmp;
HXDLIN( 178)			bool _hx_tmp1;
HXDLIN( 178)			if ((state->minFilter != (int)9728)) {
HXLINE( 178)				_hx_tmp1 = (state->minFilter != (int)9729);
            			}
            			else {
HXLINE( 178)				_hx_tmp1 = false;
            			}
HXDLIN( 178)			if (_hx_tmp1) {
HXLINE( 178)				_hx_tmp = !(state->mipmapGenerated);
            			}
            			else {
HXLINE( 178)				_hx_tmp = false;
            			}
HXDLIN( 178)			if (_hx_tmp) {
HXLINE( 180)				::lime::graphics::opengl::GL_obj::context->generateMipmap((int)3553);
HXLINE( 181)				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 183)				state->mipmapGenerated = true;
            			}
HXLINE( 187)			if ((state->maxAniso != ((Float)0.0))) {
HXLINE( 189)				::lime::graphics::opengl::GL_obj::context->texParameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,state->maxAniso);
HXLINE( 190)				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            			}
            		}
HXLINE( 196)		this->super::_hx___setSamplerState(state);
            	}


void Texture_obj::_hx___uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_201___uploadATFTextureFromByteArray)
HXLINE( 203)		data->position = byteArrayOffset;
HXLINE( 204)		int version = (int)0;
HXLINE( 205)		int length = (int)0;
HXLINE( 208)		if ((data->b->__get((byteArrayOffset + (int)6)) == (int)255)) {
HXLINE( 210)			version = data->b->__get((byteArrayOffset + (int)7));
HXLINE( 211)			data->position = (byteArrayOffset + (int)8);
HXLINE( 212)			length = this->_hx___readUInt32(data);
            		}
            		else {
HXLINE( 217)			version = (int)0;
HXLINE( 218)			data->position = (byteArrayOffset + (int)3);
HXLINE( 219)			length = this->_hx___readUInt24(data);
            		}
HXLINE( 224)		int _hx_tmp = (byteArrayOffset + length);
HXDLIN( 224)		if ((_hx_tmp > ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data))) {
HXLINE( 226)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE( 230)		int tdata = data->readUnsignedByte();
HXLINE( 231)		int type = ((int)tdata >> (int)(int)7);
HXLINE( 233)		if ((type != (int)0)) {
HXLINE( 235)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube maps are not supported",0a,da,6c,45)));
            		}
HXLINE( 240)		int format = ((int)tdata & (int)(int)127);
HXLINE( 241)		switch((int)(format)){
            			case (int)3: {
HXLINE( 243)				this->_hx___format = ::openfl::display3D::textures::TextureBase_obj::_hx___textureFormatCompressed;
            			}
            			break;
            			case (int)5: {
HXLINE( 244)				this->_hx___format = ::openfl::display3D::textures::TextureBase_obj::_hx___textureFormatCompressedAlpha;
            			}
            			break;
            			default:{
HXLINE( 245)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Only ATF block compressed textures without JPEG-XR+LZMA are supported",25,8c,50,6a)));
            			}
            		}
HXLINE( 249)		int width = ((int)(int)1 << (int)data->readUnsignedByte());
HXLINE( 250)		int height = ((int)(int)1 << (int)data->readUnsignedByte());
HXLINE( 252)		bool _hx_tmp1;
HXDLIN( 252)		if ((width == this->_hx___width)) {
HXLINE( 252)			_hx_tmp1 = (height != this->_hx___height);
            		}
            		else {
HXLINE( 252)			_hx_tmp1 = true;
            		}
HXDLIN( 252)		if (_hx_tmp1) {
HXLINE( 254)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 258)		int mipCount = data->readUnsignedByte();
HXLINE( 262)		int gpuFormats;
HXDLIN( 262)		if ((version < (int)3)) {
HXLINE( 262)			gpuFormats = (int)3;
            		}
            		else {
HXLINE( 262)			gpuFormats = (int)4;
            		}
HXLINE( 264)		{
HXLINE( 264)			int _g1 = (int)0;
HXDLIN( 264)			int _g = mipCount;
HXDLIN( 264)			while((_g1 < _g)){
HXLINE( 264)				_g1 = (_g1 + (int)1);
HXDLIN( 264)				int level = (_g1 - (int)1);
HXLINE( 266)				{
HXLINE( 266)					int _g3 = (int)0;
HXDLIN( 266)					int _g2 = gpuFormats;
HXDLIN( 266)					while((_g3 < _g2)){
HXLINE( 266)						_g3 = (_g3 + (int)1);
HXDLIN( 266)						int gpuFormat = (_g3 - (int)1);
HXLINE( 268)						int blockLength;
HXDLIN( 268)						if ((version == (int)0)) {
HXLINE( 268)							blockLength = this->_hx___readUInt24(data);
            						}
            						else {
HXLINE( 268)							blockLength = this->_hx___readUInt32(data);
            						}
HXLINE( 270)						int a = (data->position + blockLength);
HXDLIN( 270)						int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data);
HXDLIN( 270)						bool aNeg = (a < (int)0);
HXDLIN( 270)						bool bNeg = (b < (int)0);
HXDLIN( 270)						bool _hx_tmp2;
HXDLIN( 270)						if ((aNeg != bNeg)) {
HXLINE( 270)							_hx_tmp2 = aNeg;
            						}
            						else {
HXLINE( 270)							_hx_tmp2 = (a > b);
            						}
HXDLIN( 270)						if (_hx_tmp2) {
HXLINE( 272)							HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Block length exceeds ATF file length",15,23,c0,24)));
            						}
HXLINE( 276)						bool aNeg1 = (blockLength < (int)0);
HXDLIN( 276)						bool bNeg1 = ((int)0 < (int)0);
HXDLIN( 276)						bool _hx_tmp3;
HXDLIN( 276)						if ((aNeg1 != bNeg1)) {
HXLINE( 276)							_hx_tmp3 = aNeg1;
            						}
            						else {
HXLINE( 276)							_hx_tmp3 = (blockLength > (int)0);
            						}
HXDLIN( 276)						if (_hx_tmp3) {
HXLINE( 279)							if ((gpuFormat == (int)0)) {
HXLINE( 283)								 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(blockLength);
HXLINE( 284)								data->readBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(bytes),(int)0,blockLength);
HXLINE( 286)								{
HXLINE( 286)									int target = this->_hx___textureTarget;
HXDLIN( 286)									int internalformat = this->_hx___format;
HXDLIN( 286)									Float data1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBuffer(bytes);
HXDLIN( 286)									 ::lime::_backend::native::NativeGLRenderContext _hx_tmp4 = ::lime::graphics::opengl::GL_obj::context;
HXDLIN( 286)									_hx_tmp4->compressedTexImage2D(target,level,internalformat,((int)width >> (int)level),((int)height >> (int)level),(int)0,blockLength,data1);
            								}
HXLINE( 287)								::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            							}
            							else {
HXLINE( 293)								data->position = (data->position + blockLength);
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,_hx___uploadATFTextureFromByteArray,(void))

bool Texture_obj::_hx___lowMemoryMode;


hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	Texture_obj *__this = (Texture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "openfl.display3D.textures.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

Texture_obj::Texture_obj()
{
}

hx::Val Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return hx::Val( _hx___uploadATFTextureFromByteArray_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = ( _hx___lowMemoryMode ); return true; }
	}
	return false;
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { _hx___lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Texture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::_hx___lowMemoryMode,HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43"),
	::String(null())
};

void Texture_obj::__register()
{
	hx::Object *dummy = new Texture_obj;
	Texture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_30_boot)
HXDLIN(  30)		_hx___lowMemoryMode = false;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
