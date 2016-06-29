
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGImageOverlayFilter : IGImageFilter {

	IGSurface* _overlay;

}

@property (assign,nonatomic) CVBufferRef overlay; 
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShader;
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CVBufferRef)overlay;
-(void)setOverlay:(CVBufferRef)arg1 ;
-(id)samplers;
@end

