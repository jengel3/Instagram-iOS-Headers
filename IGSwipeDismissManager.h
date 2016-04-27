

@protocol IGSwipeDismissManagerDelegate;
@class UISwipeGestureRecognizer, UIViewController;

@interface IGSwipeDismissManager : NSObject {

	UISwipeGestureRecognizer* _swipeGesture;
	id<IGSwipeDismissManagerDelegate> _delegate;
	UIViewController* _targetViewController;

}

@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeGesture;                      //@synthesize swipeGesture=_swipeGesture - In the implementation block
@property (assign,nonatomic,__weak) id<IGSwipeDismissManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * targetViewController;               //@synthesize targetViewController=_targetViewController - In the implementation block
-(UISwipeGestureRecognizer *)swipeGesture;
-(id)initWithViewController:(id)arg1 gestureHoldingView:(id)arg2 ;
-(void)didSwipe:(id)arg1 ;
-(void)setDelegate:(id<IGSwipeDismissManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGSwipeDismissManagerDelegate>)delegate;
-(UIViewController *)targetViewController;
@end

