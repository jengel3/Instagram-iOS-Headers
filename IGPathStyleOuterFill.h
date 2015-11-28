
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class UIColor;

@interface IGPathStyleOuterFill : IGPathStyle {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)outerFillWithColor:(id)arg1 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
@end

