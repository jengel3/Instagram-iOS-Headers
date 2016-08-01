

@protocol IGDrawBrush, IGDrawCanvasDelegate;
#import <Instagram/Instagram-Structs.h>
@class IGDrawBezierCurve, NSUndoManager;

@interface IGDrawCanvas : NSObject {

	CGContextRef _commitLayer;
	IGDrawBezierCurve* _currentStroke;
	CGContextRef _brushLayer;
	CGSize _size;
	NSUndoManager* _undoManager;
	unsigned _strokeCount;
	char _activelyDrawing;
	id<IGDrawBrush> _brush;
	id<IGDrawCanvasDelegate> _delegate;
	CGRect _currentDrawingPointsBounds;

}

@property (assign,nonatomic) CGRect currentDrawingPointsBounds;                     //@synthesize currentDrawingPointsBounds=_currentDrawingPointsBounds - In the implementation block
@property (assign,nonatomic) char activelyDrawing;                                  //@synthesize activelyDrawing=_activelyDrawing - In the implementation block
@property (nonatomic,retain) id<IGDrawBrush> brush;                                 //@synthesize brush=_brush - In the implementation block
@property (assign,nonatomic,__weak) id<IGDrawCanvasDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)hasDrawing;
-(void)beginStrokeAtLocation:(CGPoint)arg1 ;
-(void)continueStrokeAtLocation:(CGPoint)arg1 ;
-(void)endStrokeAtLocation:(CGPoint)arg1 ;
-(char)canUndoStroke;
-(void)undoStroke;
-(id)currentDrawing;
-(void)setActivelyDrawing:(char)arg1 ;
-(void)performUndo:(id)arg1 ;
-(void)setCurrentDrawingPointsBounds:(CGRect)arg1 ;
-(void)addPointAtLocation:(CGPoint)arg1 ;
-(void)drawContext:(CGContextRef)arg1 inContext:(CGContextRef)arg2 withRect:(CGRect)arg3 ;
-(CGImageRef)createImageWithSection:(CGRect)arg1 ofBitmapContext:(CGContextRef)arg2 ;
-(char)activelyDrawing;
-(CGRect)currentDrawingPointsBounds;
-(void)setDelegate:(id<IGDrawCanvasDelegate>)arg1 ;
-(void)dealloc;
-(id<IGDrawCanvasDelegate>)delegate;
-(void)reset;
-(void)drawInRect:(CGRect)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)clear;
-(void)setBrush:(id<IGDrawBrush>)arg1 ;
-(id<IGDrawBrush>)brush;
@end

