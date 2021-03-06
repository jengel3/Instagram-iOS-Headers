
#import <Instagram/Instagram-Structs.h>
#import <QuartzCore/CALayer.h>
#import <Instagram/CPTResponder.h>

@protocol NSCopyingNSCodingNSObject;
@class CPTGraph, CPTShadow, NSSet, NSString;

@interface CPTLayer : CALayer <CPTResponder> {

	char masksToBorder;
	char useFastRendering;
	char renderingRecursively;
	CPTGraph* graph;
	float paddingLeft;
	float paddingTop;
	float paddingRight;
	float paddingBottom;
	CPTShadow* shadow;
	const CGPathRef outerBorderPath;
	const CGPathRef innerBorderPath;
	id<NSCopying><NSCoding><NSObject> identifier;

}

@property (assign,getter=isRenderingRecursively,nonatomic) char renderingRecursively; 
@property (assign,nonatomic) char useFastRendering; 
@property (assign,nonatomic,__weak) CPTGraph * graph; 
@property (assign,nonatomic) float paddingLeft; 
@property (assign,nonatomic) float paddingTop; 
@property (assign,nonatomic) float paddingRight; 
@property (assign,nonatomic) float paddingBottom; 
@property (assign) float contentsScale; 
@property (nonatomic,copy) CPTShadow * shadow; 
@property (nonatomic,readonly) CGSize shadowMargin; 
@property (assign,nonatomic) char masksToBorder; 
@property (assign,nonatomic) const CGPathRef outerBorderPath; 
@property (assign,nonatomic) const CGPathRef innerBorderPath; 
@property (nonatomic,readonly) const CGPathRef maskingPath; 
@property (nonatomic,readonly) const CGPathRef sublayerMaskingPath; 
@property (nonatomic,copy) id<NSCopying><NSCoding><NSObject> identifier; 
@property (nonatomic,readonly) NSSet * sublayersExcludedFromAutomaticLayout; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)sublayersExcludedFromAutomaticLayout;
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceCancelledEvent:(UIEvent*)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)masksToBorder;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(char)useFastRendering;
-(const CGPathRef)maskingPath;
-(void)sublayerMarginLeft:(float*)arg1 top:(float*)arg2 right:(float*)arg3 bottom:(float*)arg4 ;
-(const CGPathRef)outerBorderPath;
-(void)setOuterBorderPath:(const CGPathRef)arg1 ;
-(const CGPathRef)innerBorderPath;
-(void)setInnerBorderPath:(const CGPathRef)arg1 ;
-(void)setMasksToBorder:(char)arg1 ;
-(const CGPathRef)sublayerMaskingPath;
-(void)setUseFastRendering:(char)arg1 ;
-(char)isRenderingRecursively;
-(void)applyMaskToContext:(CGContextRef)arg1 ;
-(void)applyTransform:(CATransform3D)arg1 toContext:(CGContextRef)arg2 ;
-(void)setRenderingRecursively:(char)arg1 ;
-(void)recursivelyRenderInContext:(CGContextRef)arg1 ;
-(void)layoutAndRenderInContext:(CGContextRef)arg1 ;
-(void)applySublayerMaskToContext:(CGContextRef)arg1 forSublayer:(id)arg2 withOffset:(CGPoint)arg3 ;
-(CGSize)shadowMargin;
-(id)subLayersAtIndex:(unsigned)arg1 ;
-(UIImage*)imageOfLayer;
-(id)dataForPDFRepresentationOfLayer;
-(void)pixelAlign;
-(void)logLayers;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(id<NSCopying><NSCoding><NSObject>)identifier;
-(void)display;
-(void)setCornerRadius:(float)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setIdentifier:(id<NSCopying><NSCoding><NSObject>)arg1 ;
-(void)setSublayers:(id)arg1 ;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(float)paddingTop;
-(void)setPaddingTop:(float)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(float)paddingLeft;
-(float)paddingRight;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(float)paddingBottom;
-(void)setPaddingBottom:(float)arg1 ;
-(CPTShadow *)shadow;
-(void)setShadow:(CPTShadow *)arg1 ;
-(id)debugQuickLookObject;
-(CPTGraph *)graph;
-(void)setGraph:(CPTGraph *)arg1 ;
@end

