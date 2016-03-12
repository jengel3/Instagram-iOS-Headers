
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface CPTImage : NSObject <NSCoding, NSCopying> {

	char tiled;
	char tileAnchoredToContext;
	UIImage* nativeImage;
	CGImageRef image;
	float scale;
	float lastDrawnScale;
	CPTEdgeInsets edgeInsets;
	CPTImageSlices* slices;

}

@property (nonatomic,copy) UIImage * nativeImage; 
@property (assign,nonatomic) CGImageRef image; 
@property (assign,nonatomic) float scale; 
@property (assign,getter=isTiled,nonatomic) char tiled; 
@property (assign,nonatomic) CPTEdgeInsets edgeInsets; 
@property (assign,nonatomic) char tileAnchoredToContext; 
@property (getter=isOpaque,nonatomic,readonly) char opaque; 
@property (assign,nonatomic) float lastDrawnScale; 
@property (assign,nonatomic) CPTImageSlices* slices; 
+(id)imageWithNativeImage:(UIImage*)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(float)arg2 ;
+(id)imageForPNGFile:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
-(id)initWithNativeImage:(UIImage*)arg1 ;
-(UIImage *)nativeImage;
-(char)tileAnchoredToContext;
-(void)setNativeImage:(UIImage *)arg1 ;
-(float)lastDrawnScale;
-(void)setLastDrawnScale:(float)arg1 ;
-(void)setTiled:(char)arg1 ;
-(void)setTileAnchoredToContext:(char)arg1 ;
-(id)initForPNGFile:(id)arg1 ;
-(void)drawImage:(CGImageRef)arg1 inContext:(CGContextRef)arg2 rect:(CGRect)arg3 scaleRatio:(float)arg4 ;
-(void)makeImageSlices;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 ;
-(void)setImage:(CGImageRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPTEdgeInsets)edgeInsets;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
-(char)isOpaque;
-(void)setEdgeInsets:(CPTEdgeInsets)arg1 ;
-(void)setSlices:(CPTImageSlices*)arg1 ;
-(id)debugQuickLookObject;
-(CPTImageSlices*)slices;
-(char)isTiled;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
@end

