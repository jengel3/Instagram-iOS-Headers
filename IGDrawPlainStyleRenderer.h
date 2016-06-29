
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDrawPlainStyleUndoManagerDelegate.h>
#import <Instagram/IGDrawStyleRenderer.h>

@class UIView, UIColor, IGDrawPlainStyleUndoManager, NSString;

@interface IGDrawPlainStyleRenderer : NSObject <IGDrawPlainStyleUndoManagerDelegate, IGDrawStyleRenderer> {

	IGDrawPlainStyleUndoManager* _undoManager;
	CGSize _renderSize;
	float _renderScale;
	CGContextRef _renderViewContext;
	CGContextRef _renderContext;
	CGContextRef _strokeContext;
	CGRect _currentStrokeFrame;
	UIView* _renderView;
	UIColor* _brushColor;
	float _brushWidth;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * renderView;                 //@synthesize renderView=_renderView - In the implementation block
@property (nonatomic,retain) UIColor * brushColor;                  //@synthesize brushColor=_brushColor - In the implementation block
@property (assign,nonatomic) float brushWidth;                      //@synthesize brushWidth=_brushWidth - In the implementation block
@property (nonatomic,readonly) char canUndo; 
-(void)setBrushColor:(UIColor *)arg1 ;
-(void)setBrushWidth:(float)arg1 ;
-(UIColor *)brushColor;
-(float)brushWidth;
-(void)drawPathBuilderDidStartStroke:(id)arg1 ;
-(CGPoint)drawPathBuilder:(id)arg1 locationOfPoint:(CGPoint)arg2 ;
-(void)drawPathBuilder:(id)arg1 didAddStrokePath:(id)arg2 ;
-(void)drawPathBuilderDidFinishStroke:(id)arg1 ;
-(void)_drawInBitmapContext:(CGContextRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_renderViewContents;
-(void)_drawUsingBlock:(/*^block*/id)arg1 ;
-(void)_finalizeCurrentStroke;
-(id)initWithDisplaySize:(CGSize)arg1 renderScale:(float)arg2 ;
-(void)undoManager:(id)arg1 undoStroke:(id)arg2 ;
-(void)undoLastStroke;
-(char)canUndo;
-(id)renderImage;
-(UIView *)renderView;
@end

