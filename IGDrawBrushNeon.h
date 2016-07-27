
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDrawBrush.h>

@class UIColor, NSString;

@interface IGDrawBrushNeon : NSObject <IGDrawBrush> {

	CGSize _layerSize;
	UIColor* _bulbColor;
	UIColor* _glowColor;
	CGGradientRef _glow;
	UIColor* _color;
	float _size;
	NSString* _name;

}

@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayerContextSize:(CGSize)arg1 ;
-(void)setupLayerContext:(CGContextRef)arg1 atIndex:(unsigned)arg2 ;
-(int)drawingModeForLayerAtIndex:(unsigned)arg1 ;
-(void)drawPoint:(id)arg1 forLayerContext:(CGContextRef)arg2 atIndex:(unsigned)arg3 ;
-(float)size;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(float)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(unsigned)layerCount;
@end

