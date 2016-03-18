
#import <Instagram/IGNavigationAnimator.h>

@class IGNavigationController, UIView, IGNavSearchBar;

@interface IGExploreSearchTransitionAnimator : IGNavigationAnimator {

	char _isDismiss;
	IGNavigationController* _navigationController;
	UIView* _navigationBarSuperview;
	IGNavSearchBar* _searchBar;

}

@property (assign,nonatomic,__weak) IGNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) UIView * navigationBarSuperview;                            //@synthesize navigationBarSuperview=_navigationBarSuperview - In the implementation block
@property (assign,nonatomic) char isDismiss;                                                    //@synthesize isDismiss=_isDismiss - In the implementation block
@property (assign,nonatomic,__weak) IGNavSearchBar * searchBar;                                 //@synthesize searchBar=_searchBar - In the implementation block
-(void)setNavigationBarSuperview:(UIView *)arg1 ;
-(char)isDismiss;
-(void)animatePopTransition:(id)arg1 ;
-(void)animatePushTransition:(id)arg1 ;
-(void)setNavigationBar:(id)arg1 hidden:(char)arg2 ;
-(UIView *)navigationBarSuperview;
-(id)initWithNavigationController:(id)arg1 isDismiss:(char)arg2 ;
-(void)setIsDismiss:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(IGNavigationController *)navigationController;
-(IGNavSearchBar *)searchBar;
-(void)setSearchBar:(IGNavSearchBar *)arg1 ;
-(void)setNavigationController:(IGNavigationController *)arg1 ;
@end

