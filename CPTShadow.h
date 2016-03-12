
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CPTColor;

@interface CPTShadow : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	float shadowBlurRadius;
	CPTColor* shadowColor;
	CGSize shadowOffset;

}

@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) float shadowBlurRadius; 
@property (nonatomic,retain) CPTColor * shadowColor; 
+(id)shadow;
-(void)setShadowInContext:(CGContextRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowColor:(CPTColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(CPTColor *)shadowColor;
-(void)setShadowBlurRadius:(float)arg1 ;
-(float)shadowBlurRadius;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

