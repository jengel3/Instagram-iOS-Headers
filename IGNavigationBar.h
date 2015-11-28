
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UINavigationBar.h>
#import <UIKit/UINavigationBarDelegate.h>

@class IGPassthroughView, NSString;

@interface IGNavigationBar : UINavigationBar <UINavigationBarDelegate> {

	char _overlaysStatusBar;
	float _contentAlpha;
	IGPassthroughView* _overlayView;
	IGPassthroughView* _contentAlphaView;

}

@property (assign,nonatomic) char overlaysStatusBar;                            //@synthesize overlaysStatusBar=_overlaysStatusBar - In the implementation block
@property (assign,nonatomic) float contentAlpha;                                //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (nonatomic,retain) IGPassthroughView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) IGPassthroughView * contentAlphaView;              //@synthesize contentAlphaView=_contentAlphaView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplaysShadow:(char)arg1 animated:(char)arg2 ;
-(id)preferedBackgroundColor;
-(void)setOverlaysStatusBar:(char)arg1 ;
-(IGPassthroughView *)contentAlphaView;
-(void)onStatusBarFrameChange:(id)arg1 ;
-(void)removeShadowView;
-(id)findShadowViewInView:(id)arg1 ;
-(char)overlaysStatusBar;
-(float)contentAlpha;
-(void)setContentAlphaView:(IGPassthroughView *)arg1 ;
-(void)setContentAlpha:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOverlayView:(IGPassthroughView *)arg1 ;
-(IGPassthroughView *)overlayView;
@end

