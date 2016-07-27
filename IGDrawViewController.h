
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGDrawBrush, IGDrawControllerDelegate;
@class UIGestureRecognizer, IGDrawCanvasView, NSString;

@interface IGDrawViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIGestureRecognizer* _panGestureRecognizer;
	IGDrawCanvasView* _drawCanvasView;
	id<IGDrawBrush> _drawBrush;
	id<IGDrawControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<IGDrawBrush> drawBrush;                                 //@synthesize drawBrush=_drawBrush - In the implementation block
@property (nonatomic,readonly) char hasDrawing; 
@property (nonatomic,readonly) char canUndo; 
@property (assign,nonatomic,__weak) id<IGDrawControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)undoLastStroke;
-(void)clearDrawing;
-(void)setDrawBrush:(id<IGDrawBrush>)arg1 ;
-(id<IGDrawBrush>)drawBrush;
-(char)hasDrawing;
-(id)createDrawingImage;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(void)setDelegate:(id<IGDrawControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGDrawControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)canUndo;
-(void)loadView;
-(void)viewDidLoad;
@end

