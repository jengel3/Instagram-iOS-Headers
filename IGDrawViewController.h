
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGDrawBrushPickerDelegate.h>

@protocol IGDrawControllerDelegate;
@class UIGestureRecognizer, IGDrawRenderController, IGDrawPathBuilder, IGDrawBrushPicker, NSString;

@interface IGDrawViewController : UIViewController <UIGestureRecognizerDelegate, IGDrawBrushPickerDelegate> {

	UIGestureRecognizer* _panGestureRecognizer;
	IGDrawRenderController* _drawRenderController;
	IGDrawPathBuilder* _drawPathBuilder;
	IGDrawBrushPicker* _brushPicker;
	id<IGDrawControllerDelegate> _delegate;

}

@property (nonatomic,readonly) char hasDrawing; 
@property (nonatomic,readonly) char canUndo; 
@property (assign,nonatomic,__weak) id<IGDrawControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)brushPicker:(id)arg1 didChangeBrushColor:(id)arg2 ;
-(void)brushPicker:(id)arg1 didChangeBrushWidth:(float)arg2 ;
-(void)undoLastStroke;
-(char)hasDrawing;
-(id)createDrawingImage;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(void)setDelegate:(id<IGDrawControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGDrawControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)canUndo;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

