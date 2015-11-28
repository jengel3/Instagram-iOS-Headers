
#import <Instagram/IGNavigationAnimator.h>

@class UIView;

@interface IGNavigationPushAnimator : IGNavigationAnimator {

	char _isRevealingTabBar;
	char _isHidingTabBar;
	UIView* _tabBarSuperview;
	UIView* _navigationBarSuperview;
	UIView* _fromHeaderSnapshot;
	UIView* _toHeaderSnapshot;

}

@property (assign,nonatomic,__weak) UIView * tabBarSuperview;                     //@synthesize tabBarSuperview=_tabBarSuperview - In the implementation block
@property (assign,nonatomic,__weak) UIView * navigationBarSuperview;              //@synthesize navigationBarSuperview=_navigationBarSuperview - In the implementation block
@property (assign,nonatomic) char isRevealingTabBar;                              //@synthesize isRevealingTabBar=_isRevealingTabBar - In the implementation block
@property (assign,nonatomic) char isHidingTabBar;                                 //@synthesize isHidingTabBar=_isHidingTabBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * fromHeaderSnapshot;                  //@synthesize fromHeaderSnapshot=_fromHeaderSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UIView * toHeaderSnapshot;                    //@synthesize toHeaderSnapshot=_toHeaderSnapshot - In the implementation block
+(id)standardPushAnimator;
-(void)setNavigationBarSuperview:(UIView *)arg1 ;
-(UIView *)navigationBarSuperview;
-(void)setUpViewHierarchy;
-(void)setTabBarSuperview:(UIView *)arg1 ;
-(void)setIsHidingTabBar:(char)arg1 ;
-(void)setIsRevealingTabBar:(char)arg1 ;
-(char)isRevealingTabBar;
-(char)isHidingTabBar;
-(UIView *)fromHeaderSnapshot;
-(UIView *)toHeaderSnapshot;
-(UIView *)tabBarSuperview;
-(void)setFromHeaderSnapshot:(UIView *)arg1 ;
-(void)setToHeaderSnapshot:(UIView *)arg1 ;
-(void)putBackViewHierarchy;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
@end

