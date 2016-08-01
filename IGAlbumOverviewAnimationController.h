
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class IGAlbumOverviewViewController, IGAlbumFullscreenCell, NSString;

@interface IGAlbumOverviewAnimationController : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	char _isPresenting;
	IGAlbumOverviewViewController* _overviewViewController;
	IGAlbumFullscreenCell* _fullscreenCell;

}

@property (assign,nonatomic) char isPresenting;                                                          //@synthesize isPresenting=_isPresenting - In the implementation block
@property (assign,nonatomic,__weak) IGAlbumOverviewViewController * overviewViewController;              //@synthesize overviewViewController=_overviewViewController - In the implementation block
@property (assign,nonatomic,__weak) IGAlbumFullscreenCell * fullscreenCell;                              //@synthesize fullscreenCell=_fullscreenCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsPresenting:(char)arg1 ;
-(void)animateTransitionForPresentation:(id)arg1 ;
-(void)animateTransitionForDismissal:(id)arg1 ;
-(IGAlbumOverviewViewController *)overviewViewController;
-(IGAlbumFullscreenCell *)fullscreenCell;
-(void)setOverviewViewController:(IGAlbumOverviewViewController *)arg1 ;
-(void)setFullscreenCell:(IGAlbumFullscreenCell *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(char)isPresenting;
@end

