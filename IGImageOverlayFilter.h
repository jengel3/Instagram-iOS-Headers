
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGImageOverlayFilter : IGImageFilter {

	IGSurface* _overlay;
	char _ignoreTextureTransform;

}

@property (assign,nonatomic) CVBufferRef overlay; 
@property (assign,nonatomic) char ignoreTextureTransform;              //@synthesize ignoreTextureTransform=_ignoreTextureTransform - In the implementation block
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(void)setTextureTransform:(_GLKMatrix4)arg1 ;
-(void)setIgnoreTextureTransform:(char)arg1 ;
-(void)configureProgram:(id)arg1 ;
-(char)ignoreTextureTransform;
-(id)fragmentShader;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CVBufferRef)overlay;
-(void)setOverlay:(CVBufferRef)arg1 ;
-(id)samplers;
@end

