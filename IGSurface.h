/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class EAGLContext;

@interface IGSurface : NSObject {

	unsigned _texture;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	char _generatedTexture;
	CVOpenGLESTextureCacheRef _textureCache;
	CVBufferRef _cvTexture;
	EAGLContext* _glContext;
	CAEAGLLayer* _layer;
	CGSize _size;
	char _layerRenderBufferStorageNeedsRefresh;
	unsigned char _flipped;
	CVBufferRef _pixelBuffer;
	unsigned _textureTarget;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                             //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped;              //@synthesize flipped=_flipped - In the implementation block
@property (nonatomic,readonly) unsigned texture; 
@property (nonatomic,readonly) unsigned textureTarget;                              //@synthesize textureTarget=_textureTarget - In the implementation block
@property (nonatomic,readonly) unsigned framebuffer; 
@property (nonatomic,readonly) unsigned renderbuffer; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithTexture:(unsigned)arg1 target:(unsigned)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 ;
-(id)initWithIGTexture:(id)arg1 ;
-(id)initWithFramebuffer:(unsigned)arg1 size:(CGSize)arg2 ;
-(CVBufferRef)pixelBuffer;
-(unsigned)textureTarget;
-(void)dealloc;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(id)initWithLayer:(CAEAGLLayer*)arg1 ;
-(unsigned char)isFlipped;
-(unsigned)texture;
-(unsigned)framebuffer;
-(unsigned)renderbuffer;
@end

