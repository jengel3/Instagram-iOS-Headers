
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIImage, NSString;

@interface IGFullScreenTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	char _isPresenting;
	char _useCustomInitialDismissCenter;
	UIImage* _mediaSnapshot;
	UIImage* _topBarSnapshot;
	UIImage* _bottomBarSnapshot;
	CGPoint _initialCenterForDismiss;
	CGRect _sourceRect;

}

@property (nonatomic,readonly) CGRect sourceRect;                             //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,readonly) char isPresenting;                             //@synthesize isPresenting=_isPresenting - In the implementation block
@property (assign,nonatomic) char useCustomInitialDismissCenter;              //@synthesize useCustomInitialDismissCenter=_useCustomInitialDismissCenter - In the implementation block
@property (nonatomic,retain) UIImage * mediaSnapshot;                         //@synthesize mediaSnapshot=_mediaSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * topBarSnapshot;                        //@synthesize topBarSnapshot=_topBarSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * bottomBarSnapshot;                     //@synthesize bottomBarSnapshot=_bottomBarSnapshot - In the implementation block
@property (assign,nonatomic) CGPoint initialCenterForDismiss;                 //@synthesize initialCenterForDismiss=_initialCenterForDismiss - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animatePresentTransition:(id)arg1 ;
-(void)animateDismissTransition:(id)arg1 ;
-(void)setUseCustomInitialDismissCenter:(char)arg1 ;
-(void)hideStatusBarForViewControllerIfPossible:(id)arg1 ;
-(CGAffineTransform)transformFromRect:(CGRect)arg1 toRect:(CGRect)arg2 ;
-(UIImage *)mediaSnapshot;
-(char)useCustomInitialDismissCenter;
-(CGPoint)initialCenterForDismiss;
-(UIImage *)topBarSnapshot;
-(UIImage *)bottomBarSnapshot;
-(id)initWithSourceRect:(CGRect)arg1 isPresenting:(char)arg2 ;
-(void)setInitialCenterForDismiss:(CGPoint)arg1 ;
-(void)setMediaSnapshot:(UIImage *)arg1 ;
-(void)setTopBarSnapshot:(UIImage *)arg1 ;
-(void)setBottomBarSnapshot:(UIImage *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(CGRect)sourceRect;
-(char)isPresenting;
@end

