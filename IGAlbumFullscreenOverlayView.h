
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAlbumFullscreenGestureDelegate;
@class IGAlbumFullscreenProgressView, IGAlbumFullscreenHeaderView, IGAlbumFullscreenFooterView, IGAlbumGradientRingView, IGGradientView, UILongPressGestureRecognizer, NSTimer, UISwipeGestureRecognizer, NSString;

@interface IGAlbumFullscreenOverlayView : UIView <UIGestureRecognizerDelegate> {

	char _tapPending;
	IGAlbumFullscreenProgressView* _progressView;
	IGAlbumFullscreenHeaderView* _headerView;
	IGAlbumFullscreenFooterView* _footerView;
	IGAlbumGradientRingView* _loadingView;
	id<IGAlbumFullscreenGestureDelegate> _gestureDelegate;
	IGGradientView* _leftTapGradientView;
	IGGradientView* _topGradientView;
	IGGradientView* _bottomGradientView;
	UILongPressGestureRecognizer* _pressGesture;
	NSTimer* _tapTimeout;
	UISwipeGestureRecognizer* _swipeUpGesture;
	CGPoint _pressStartLocationInWindow;

}

@property (nonatomic,readonly) IGGradientView * leftTapGradientView;                                   //@synthesize leftTapGradientView=_leftTapGradientView - In the implementation block
@property (nonatomic,readonly) IGGradientView * topGradientView;                                       //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,readonly) IGGradientView * bottomGradientView;                                    //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * pressGesture;                            //@synthesize pressGesture=_pressGesture - In the implementation block
@property (assign,nonatomic) CGPoint pressStartLocationInWindow;                                       //@synthesize pressStartLocationInWindow=_pressStartLocationInWindow - In the implementation block
@property (assign,nonatomic) char tapPending;                                                          //@synthesize tapPending=_tapPending - In the implementation block
@property (nonatomic,retain) NSTimer * tapTimeout;                                                     //@synthesize tapTimeout=_tapTimeout - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeUpGesture;                                //@synthesize swipeUpGesture=_swipeUpGesture - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenProgressView * progressView;                           //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenHeaderView * headerView;                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenFooterView * footerView;                               //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) IGAlbumGradientRingView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumFullscreenGestureDelegate> gestureDelegate;              //@synthesize gestureDelegate=_gestureDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGGradientView *)topGradientView;
-(void)handlePressGesture:(id)arg1 ;
-(void)handleSwipeUpGesture:(id)arg1 ;
-(IGGradientView *)leftTapGradientView;
-(IGGradientView *)bottomGradientView;
-(void)resetPressGestureState;
-(void)handlePressGesureBegan:(id)arg1 ;
-(void)handlePressGestureEnded:(id)arg1 ;
-(void)setPressStartLocationInWindow:(CGPoint)arg1 ;
-(void)setTapPending:(char)arg1 ;
-(void)onTapTimeout;
-(void)setTapTimeout:(NSTimer *)arg1 ;
-(NSTimer *)tapTimeout;
-(char)pressGestureLocationQualifiesForLeftTap:(id)arg1 ;
-(char)tapPending;
-(CGPoint)pressStartLocationInWindow;
-(void)fadeOutBackGradientIfNeeded;
-(UILongPressGestureRecognizer *)pressGesture;
-(UISwipeGestureRecognizer *)swipeUpGesture;
-(void)setSwipeUpGesture:(UISwipeGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)prepareForReuse;
-(void)setGestureDelegate:(id<IGAlbumFullscreenGestureDelegate>)arg1 ;
-(id<IGAlbumFullscreenGestureDelegate>)gestureDelegate;
-(IGAlbumFullscreenHeaderView *)headerView;
-(IGAlbumFullscreenProgressView *)progressView;
-(IGAlbumFullscreenFooterView *)footerView;
-(IGAlbumGradientRingView *)loadingView;
@end

