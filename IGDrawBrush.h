
@class UIColor, NSString;


@protocol IGDrawBrush <NSObject>
@property (assign,nonatomic) float size; 
@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,readonly) NSString * name; 
@required
-(void)drawPoint:(id)arg1 forLayerContext:(CGContextRef)arg2;
-(void)setLayerContextSize:(CGSize)arg1;
-(void)setupLayerContext:(CGContextRef)arg1;
-(int)pathDrawingMode;
-(void)applyShadowOnLayerIfNeeded:(CGContextRef)arg1;
-(void)onDrawingStopped:(CGContextRef)arg1;
-(float)size;
-(NSString *)name;
-(void)setSize:(float)arg1;
-(UIColor *)color;
-(void)setColor:(id)arg1;

@end

