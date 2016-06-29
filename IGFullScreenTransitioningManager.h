
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIImage, UIView, NSString;

@interface IGFullScreenTransitioningManager : NSObject <UIViewControllerTransitioningDelegate> {

	char _crossDissolveForDismissal;
	char _useCustomInitialDismissCenter;
	UIImage* _mediaSnapshot;
	UIImage* _topBarSnapshot;
	UIImage* _bottomBarSnapshot;
	UIView* _topSnapshotView;
	CGPoint _initialCenterForDismiss;
	CGRect _vcSourceRect;

}

@property (nonatomic,readonly) CGRect vcSourceRect;                           //@synthesize vcSourceRect=_vcSourceRect - In the implementation block
@property (assign,nonatomic) char useCustomInitialDismissCenter;              //@synthesize useCustomInitialDismissCenter=_useCustomInitialDismissCenter - In the implementation block
@property (nonatomic,retain) UIView * topSnapshotView;                        //@synthesize topSnapshotView=_topSnapshotView - In the implementation block
@property (nonatomic,retain) UIImage * mediaSnapshot;                         //@synthesize mediaSnapshot=_mediaSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * topBarSnapshot;                        //@synthesize topBarSnapshot=_topBarSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * bottomBarSnapshot;                     //@synthesize bottomBarSnapshot=_bottomBarSnapshot - In the implementation block
@property (assign,nonatomic) CGPoint initialCenterForDismiss;                 //@synthesize initialCenterForDismiss=_initialCenterForDismiss - In the implementation block
@property (assign,nonatomic) char crossDissolveForDismissal;                  //@synthesize crossDissolveForDismissal=_crossDissolveForDismissal - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUseCustomInitialDismissCenter:(char)arg1 ;
-(UIImage *)mediaSnapshot;
-(char)useCustomInitialDismissCenter;
-(CGPoint)initialCenterForDismiss;
-(UIImage *)topBarSnapshot;
-(UIImage *)bottomBarSnapshot;
-(void)setInitialCenterForDismiss:(CGPoint)arg1 ;
-(void)setMediaSnapshot:(UIImage *)arg1 ;
-(void)setTopBarSnapshot:(UIImage *)arg1 ;
-(void)setBottomBarSnapshot:(UIImage *)arg1 ;
-(CGRect)vcSourceRect;
-(char)crossDissolveForDismissal;
-(id)initWithMediaSourceRect:(CGRect)arg1 fullScreenViewController:(id)arg2 ;
-(void)setCrossDissolveForDismissal:(char)arg1 ;
-(UIView *)topSnapshotView;
-(void)setTopSnapshotView:(UIView *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

