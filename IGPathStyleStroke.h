
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class UIColor;

@interface IGPathStyleStroke : IGPathStyle {

	int _type;
	float _width;
	UIColor* _color;

}

@property (assign,nonatomic) int type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) float width;                  //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)strokeWithType:(int)arg1 width:(float)arg2 color:(id)arg3 ;
+(id)strokeWithWidth:(float)arg1 color:(id)arg2 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithType:(int)arg1 width:(float)arg2 color:(id)arg3 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(float)width;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(float)arg1 ;
@end

