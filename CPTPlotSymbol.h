
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPTLineStyle, CPTFill, CPTShadow;

@interface CPTPlotSymbol : NSObject <NSCoding, NSCopying> {

	char usesEvenOddClipRule;
	int symbolType;
	CPTLineStyle* lineStyle;
	CPTFill* fill;
	CPTShadow* shadow;
	const CGPathRef customSymbolPath;
	CGPathRef cachedSymbolPath;
	CGLayerRef cachedLayer;
	float cachedScale;
	CGPoint anchorPoint;
	CGSize size;

}

@property (assign,nonatomic) CGPathRef cachedSymbolPath; 
@property (assign,nonatomic) CGLayerRef cachedLayer; 
@property (assign,nonatomic) float cachedScale; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) int symbolType; 
@property (nonatomic,retain) CPTLineStyle * lineStyle; 
@property (nonatomic,retain) CPTFill * fill; 
@property (nonatomic,copy) CPTShadow * shadow; 
@property (assign,nonatomic) const CGPathRef customSymbolPath; 
@property (assign,nonatomic) char usesEvenOddClipRule; 
+(id)crossPlotSymbol;
+(id)ellipsePlotSymbol;
+(id)rectanglePlotSymbol;
+(id)plusPlotSymbol;
+(id)starPlotSymbol;
+(id)diamondPlotSymbol;
+(id)trianglePlotSymbol;
+(id)pentagonPlotSymbol;
+(id)hexagonPlotSymbol;
+(id)dashPlotSymbol;
+(id)snowPlotSymbol;
+(id)customPlotSymbolWithPath:(CGPathRef)arg1 ;
+(id)plotSymbol;
-(void)setLineStyle:(CPTLineStyle *)arg1 ;
-(CPTLineStyle *)lineStyle;
-(char)usesEvenOddClipRule;
-(void)setUsesEvenOddClipRule:(char)arg1 ;
-(const CGPathRef)customSymbolPath;
-(void)setCachedSymbolPath:(CGPathRef)arg1 ;
-(void)setCachedLayer:(CGLayerRef)arg1 ;
-(CGPathRef)newSymbolPath;
-(void)setCustomSymbolPath:(const CGPathRef)arg1 ;
-(CGLayerRef)cachedLayer;
-(float)cachedScale;
-(CGSize)layerSizeForScale:(float)arg1 ;
-(void)setCachedScale:(float)arg1 ;
-(CGPathRef)cachedSymbolPath;
-(void)renderInContext:(CGContextRef)arg1 atPoint:(CGPoint)arg2 scale:(float)arg3 alignToPixels:(char)arg4 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 atPoint:(CGPoint)arg2 scale:(float)arg3 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CPTFill *)fill;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CPTShadow *)shadow;
-(void)setShadow:(CPTShadow *)arg1 ;
-(id)debugQuickLookObject;
-(void)setFill:(CPTFill *)arg1 ;
-(void)setSymbolType:(int)arg1 ;
-(int)symbolType;
@end

