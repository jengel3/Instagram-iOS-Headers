

@protocol IGDrawBrush, IGDrawCanvasDelegate;
#import <Instagram/Instagram-Structs.h>
@class IGDrawBezierCurve, NSUndoManager;

@interface IGDrawCanvas : NSObject {

	CGContextRef _commitLayer;
	IGDrawBezierCurve* _currentStroke;
	unsigned _brushLayerCount;
	CGContext* _brushLayers;
	CGSize _size;
	NSUndoManager* _undoManager;
	unsigned _strokeCount;
	id<IGDrawBrush> _brush;
	id<IGDrawCanvasDelegate> _delegate;

}

@property (nonatomic,retain) id<IGDrawBrush> brush;                                 //@synthesize brush=_brush - In the implementation block
@property (assign,nonatomic,__weak) id<IGDrawCanvasDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)hasDrawing;
-(void)beginStrokeAtLocation:(CGPoint)arg1 ;
-(void)continueStrokeAtLocation:(CGPoint)arg1 ;
-(void)endStrokeAtLocation:(CGPoint)arg1 ;
-(char)canUndoStroke;
-(void)undoStroke;
-(id)currentDrawing;
-(void)performUndo:(id)arg1 ;
-(void)addPointAtLocation:(CGPoint)arg1 ;
-(void)drawContext:(CGContextRef)arg1 inContext:(CGContextRef)arg2 withRect:(CGRect)arg3 ;
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

