
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class IGExploreMainFeedViewController, IGEventViewerViewController, UIPercentDrivenInteractiveTransition, UIView, UIPanGestureRecognizer, NSString;

@interface IGChannelTransitionCoordinator : NSObject <UIGestureRecognizerDelegate> {

	IGExploreMainFeedViewController* _exploreVC;
	IGEventViewerViewController* _eventVC;
	UIPercentDrivenInteractiveTransition* _interactionController;
	UIView* _channelPresentingView;
	UIPanGestureRecognizer* _interactiveDismissGesture;
	unsigned _dismissDirection;
	CGPoint _initialTranslation;
	CGRect _channelFrame;

}

@property (assign,nonatomic) CGRect channelFrame;                                                       //@synthesize channelFrame=_channelFrame - In the implementation block
@property (nonatomic,retain) UIView * channelPresentingView;                                            //@synthesize channelPresentingView=_channelPresentingView - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * interactiveDismissGesture;                      //@synthesize interactiveDismissGesture=_interactiveDismissGesture - In the implementation block
@property (assign,nonatomic) unsigned dismissDirection;                                                 //@synthesize dismissDirection=_dismissDirection - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) CGPoint initialTranslation;                                                //@synthesize initialTranslation=_initialTranslation - In the implementation block
@property (nonatomic,__weak,readonly) IGExploreMainFeedViewController * exploreVC;                      //@synthesize exploreVC=_exploreVC - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerViewController * eventVC;                            //@synthesize eventVC=_eventVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupInteractiveDismissGestures;
-(UIPanGestureRecognizer *)interactiveDismissGesture;
-(IGExploreMainFeedViewController *)exploreVC;
-(void)setChannelFrame:(CGRect)arg1 ;
-(void)setChannelPresentingView:(UIView *)arg1 ;
-(UIView *)channelPresentingView;
-(CGRect)channelFrame;
-(unsigned)dismissDirection;
-(IGEventViewerViewController *)eventVC;
-(unsigned)directionForVelocity:(CGPoint)arg1 ;
-(void)setDismissDirection:(unsigned)arg1 ;
-(void)handleInteractiveScrollRightDismissGesture:(id)arg1 ;
-(void)handleInteractiveScrollDownDismissGesture:(id)arg1 ;
-(void)handleInteractiveScrollUpDismissGesture:(id)arg1 ;
-(float)horizontalTranslationForPan:(id)arg1 ;
-(CGPoint)initialTranslation;
-(float)horizontalVelocityForPan:(id)arg1 ;
-(void)handleInteractiveDismissGesture:(id)arg1 translation:(float)arg2 velocity:(float)arg3 progress:(float)arg4 ;
-(void)handleInteractiveVerticalDismissGesture:(id)arg1 ;
-(float)verticalTranslationForPan:(id)arg1 ;
-(float)verticalVelocityForPan:(id)arg1 ;
-(void)setInitialTranslation:(CGPoint)arg1 ;
-(void)handleInteractiveDismissGesture:(id)arg1 ;
-(void)configureWithExploreViewController:(id)arg1 eventViewerViewController:(id)arg2 ;
-(id)pushAnimator;
-(id)popAnimator;
-(id)init;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
@end

