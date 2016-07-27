
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGAlbumCreationViewControllerNavigationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGAlbumCameraCoordinatorDelegate;
@class UIViewController, IGAlbumCreationViewController, IGHorizontalPanGestureRecognizer, IGCameraSlideAnimator, UIPercentDrivenInteractiveTransition, NSString;

@interface IGAlbumCameraCoordinator : NSObject <IGAlbumCreationViewControllerNavigationDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	UIViewController* _hostingViewController;
	IGAlbumCreationViewController* _cameraViewController;
	id<IGAlbumCameraCoordinatorDelegate> _delegate;
	IGHorizontalPanGestureRecognizer* _interactivePresentationGesture;
	IGHorizontalPanGestureRecognizer* _interactiveDismissGesture;
	IGCameraSlideAnimator* _presentationAnimator;
	IGCameraSlideAnimator* _dismissAnimator;
	UIPercentDrivenInteractiveTransition* _interactionController;
	CGPoint _initialTranslation;

}

@property (nonatomic,readonly) IGHorizontalPanGestureRecognizer * interactivePresentationGesture;              //@synthesize interactivePresentationGesture=_interactivePresentationGesture - In the implementation block
@property (nonatomic,readonly) IGHorizontalPanGestureRecognizer * interactiveDismissGesture;                   //@synthesize interactiveDismissGesture=_interactiveDismissGesture - In the implementation block
@property (nonatomic,readonly) IGCameraSlideAnimator * presentationAnimator;                                   //@synthesize presentationAnimator=_presentationAnimator - In the implementation block
@property (nonatomic,readonly) IGCameraSlideAnimator * dismissAnimator;                                        //@synthesize dismissAnimator=_dismissAnimator - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactionController;                     //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) CGPoint initialTranslation;                                                       //@synthesize initialTranslation=_initialTranslation - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostingViewController;                                  //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (nonatomic,readonly) IGAlbumCreationViewController * cameraViewController;                           //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraCoordinatorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleInteractivePanGesture:(id)arg1 ;
-(IGHorizontalPanGestureRecognizer *)interactiveDismissGesture;
-(IGHorizontalPanGestureRecognizer *)interactivePresentationGesture;
-(CGPoint)initialTranslation;
-(void)setInitialTranslation:(CGPoint)arg1 ;
-(void)presentAlbumCamera;
-(void)creationViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)creationViewControllerDidFinish:(id)arg1 ;
-(IGCameraSlideAnimator *)presentationAnimator;
-(IGCameraSlideAnimator *)dismissAnimator;
-(void)setHostingViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<IGAlbumCameraCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGAlbumCameraCoordinatorDelegate>)delegate;
-(UIPercentDrivenInteractiveTransition *)interactionController;
-(void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(UIViewController *)hostingViewController;
-(IGAlbumCreationViewController *)cameraViewController;
@end

