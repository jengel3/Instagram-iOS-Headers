

@class UISwipeGestureRecognizer, UIViewController;

@interface IGSwipeDismissManager : NSObject {

	UISwipeGestureRecognizer* _swipeGesture;
	UIViewController* _targetViewController;

}

@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeGesture;                     //@synthesize swipeGesture=_swipeGesture - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * targetViewController;              //@synthesize targetViewController=_targetViewController - In the implementation block
-(id)initWithViewController:(id)arg1 gestureHoldingView:(id)arg2 ;
-(UISwipeGestureRecognizer *)swipeGesture;
-(void)didSwipe:(id)arg1 ;
-(void)dealloc;
-(UIViewController *)targetViewController;
@end

