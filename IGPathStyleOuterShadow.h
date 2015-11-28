
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class UIColor;

@interface IGPathStyleOuterShadow : IGPathStyle {

	float _size;
	UIColor* _color;
	CGPoint _offset;

}

@property (assign,nonatomic) CGPoint offset;               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) float size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)shadowWithOffset:(CGPoint)arg1 size:(float)arg2 color:(id)arg3 ;
+(id)shadowWithYOffset:(float)arg1 size:(float)arg2 color:(id)arg3 ;
+(id)shadowWithYOffset:(float)arg1 color:(id)arg2 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithOffset:(CGPoint)arg1 size:(float)arg2 color:(id)arg3 ;
-(float)size;
-(void)setSize:(float)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

