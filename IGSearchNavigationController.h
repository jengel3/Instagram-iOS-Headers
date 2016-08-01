
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGNavigationAnimatorDelegate.h>

@class IGChannelTransitionCoordinator, NSString;

@interface IGSearchNavigationController : IGNavigationController <IGNavigationAnimatorDelegate> {

	IGChannelTransitionCoordinator* _channelTransitionCoordinator;

}

@property (nonatomic,readonly) IGChannelTransitionCoordinator * channelTransitionCoordinator;              //@synthesize channelTransitionCoordinator=_channelTransitionCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGChannelTransitionCoordinator *)channelTransitionCoordinator;
-(id)searchOriginController;
-(id)popToMainViewController:(char)arg1 ;
-(void)viewDidLoad;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
@end

