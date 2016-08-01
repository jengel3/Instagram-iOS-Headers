
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDrawBrush.h>

@class UIColor, IGDrawPoint, NSString;

@interface IGDrawBrushNeon : NSObject <IGDrawBrush> {

	CGSize _layerSize;
	UIColor* _bulbColor;
	UIColor* _glowColor;
	UIColor* _bevelColor;
	UIColor* _color;
	float _size;
	IGDrawPoint* _lastPoint;

}

@property (nonatomic,retain) IGDrawPoint * lastPoint;               //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)findNeonAppropriateColor:(id)arg1 ;
-(char)needsInvertedColorsForColor:(id)arg1 ;
-(void)drawPoint:(id)arg1 forLayerContext:(CGContextRef)arg2 ;
-(void)setLayerContextSize:(CGSize)arg1 ;
-(void)setupLayerContext:(CGContextRef)arg1 ;
-(int)pathDrawingMode;
-(void)applyShadowOnLayerIfNeeded:(CGContextRef)arg1 ;
-(void)onDrawingStopped:(CGContextRef)arg1 ;
-(float)size;
-(id)init;
-(NSString *)name;
-(void)setSize:(float)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setLastPoint:(IGDrawPoint *)arg1 ;
-(IGDrawPoint *)lastPoint;
@end

