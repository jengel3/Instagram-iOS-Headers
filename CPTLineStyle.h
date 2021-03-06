
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, CPTColor, CPTFill, CPTGradient;

@interface CPTLineStyle : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	int lineCap;
	int lineJoin;
	float miterLimit;
	float lineWidth;
	NSArray* dashPattern;
	float patternPhase;
	CPTColor* lineColor;
	CPTFill* lineFill;
	CPTGradient* lineGradient;

}

@property (assign,nonatomic) int lineCap; 
@property (assign,nonatomic) int lineJoin; 
@property (assign,nonatomic) float miterLimit; 
@property (assign,nonatomic) float lineWidth; 
@property (nonatomic,retain) NSArray * dashPattern; 
@property (assign,nonatomic) float patternPhase; 
@property (nonatomic,retain) CPTColor * lineColor; 
@property (nonatomic,retain) CPTFill * lineFill; 
@property (nonatomic,retain) CPTGradient * lineGradient; 
@property (getter=isOpaque,nonatomic,readonly) char opaque; 
+(id)lineStyle;
+(id)lineStyleWithStyle:(id)arg1 ;
-(void)setLineStyleInContext:(CGContextRef)arg1 ;
-(void)strokePathInContext:(CGContextRef)arg1 ;
-(void)strokeRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setDashPattern:(NSArray *)arg1 ;
-(CPTFill *)lineFill;
-(void)setLineFill:(CPTFill *)arg1 ;
-(CPTGradient *)lineGradient;
-(void)setLineGradient:(CPTGradient *)arg1 ;
-(void)strokePathWithGradient:(id)arg1 inContext:(CGContextRef)arg2 ;
-(int)lineCap;
-(void)setLineColor:(CPTColor *)arg1 ;
-(CPTColor *)lineColor;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(char)isOpaque;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(id)debugQuickLookObject;
-(float)patternPhase;
-(void)setPatternPhase:(float)arg1 ;
-(int)lineJoin;
-(NSArray *)dashPattern;
@end

