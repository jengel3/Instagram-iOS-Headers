
@class UIColor, NSString;


@protocol IGDrawBrush <NSObject>
@property (assign,nonatomic) float size; 
@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,copy) NSString * name; 
@required
-(void)setLayerContextSize:(CGSize)arg1;
-(void)setupLayerContext:(CGContextRef)arg1 atIndex:(unsigned)arg2;
-(int)drawingModeForLayerAtIndex:(unsigned)arg1;
-(void)drawPoint:(id)arg1 forLayerContext:(CGContextRef)arg2 atIndex:(unsigned)arg3;
-(float)size;
-(void)setName:(id)arg1;
-(NSString *)name;
-(void)setSize:(float)arg1;
-(UIColor *)color;
-(void)setColor:(id)arg1;
-(unsigned)layerCount;

@end

