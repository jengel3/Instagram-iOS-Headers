
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGNavigationAnimatorDelegate.h>

@class UIView, UIPercentDrivenInteractiveTransition, IGHorizontalPanGestureRecognizer, NSString;

@interface IGSearchNavigationController : IGNavigationController <IGNavigationAnimatorDelegate> {

	UIView* _channelPresentingView;
	UIPercentDrivenInteractiveTransition* _interactionController;
	IGHorizontalPanGestureRecognizer* _channelInteractiveDismissGesture;
	CGRect _channelFrame;

}

@property (assign,nonatomic) CGRect channelFrame;                                                                //@synthesize channelFrame=_channelFrame - In the implementation block
@property (nonatomic,retain) UIView * channelPresentingView;                                                     //@synthesize channelPresentingView=_channelPresentingView - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactionController;                       //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,readonly) IGHorizontalPanGestureRecognizer * channelInteractiveDismissGesture;              //@synthesize channelInteractiveDismissGesture=_channelInteractiveDismissGesture - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupChannelInteractiveDismissGestures;
-(IGHorizontalPanGestureRecognizer *)channelInteractiveDismissGesture;
-(void)setChannelFrame:(CGRect)arg1 ;
-(void)setChannelPresentingView:(UIView *)arg1 ;
-(UIView *)channelPresentingView;
-(CGRect)channelFrame;
-(void)handleChannelInteractiveDimissGesture:(id)arg1 ;
-(id)searchOriginController;
-(id)popToMainViewController:(char)arg1 ;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(void)viewDidLoad;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
@end

