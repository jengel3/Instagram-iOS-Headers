
@class UIView, UIColor;


@protocol IGDrawStyleRenderer <NSObject,IGDrawPathBuilderDelegate>
@property (nonatomic,readonly) UIView * renderView; 
@property (nonatomic,retain) UIColor * brushColor; 
@property (assign,nonatomic) float brushWidth; 
@property (nonatomic,readonly) char canUndo; 
@required
-(void)setBrushColor:(id)arg1;
-(void)setBrushWidth:(float)arg1;
-(UIColor *)brushColor;
-(float)brushWidth;
-(id)initWithDisplaySize:(CGSize)arg1 renderScale:(float)arg2;
-(void)undoLastStroke;
-(char)canUndo;
-(id)renderImage;
-(UIView *)renderView;

@end

