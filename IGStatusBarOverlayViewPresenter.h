

@class UIWindow, UIView, IGStatusBarProxyViewController;

@interface IGStatusBarOverlayViewPresenter : NSObject {

	char _showing;
	char _hiding;
	UIWindow* _overlayWindow;
	UIView* _contentView;
	IGStatusBarProxyViewController* _statusBarViewController;

}

@property (nonatomic,readonly) UIWindow * overlayWindow;                                            //@synthesize overlayWindow=_overlayWindow - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) char showing;                                                          //@synthesize showing=_showing - In the implementation block
@property (assign,nonatomic) char hiding;                                                           //@synthesize hiding=_hiding - In the implementation block
@property (nonatomic,retain) IGStatusBarProxyViewController * statusBarViewController;              //@synthesize statusBarViewController=_statusBarViewController - In the implementation block
-(UIWindow *)overlayWindow;
-(IGStatusBarProxyViewController *)statusBarViewController;
-(char)hiding;
-(void)showWithCompletion:(/*^block*/id)arg1 ;
-(void)hideWithCompletion:(/*^block*/id)arg1 ;
-(void)setStatusBarViewController:(IGStatusBarProxyViewController *)arg1 ;
-(char)showing;
-(UIView *)contentView;
-(void)setHiding:(char)arg1 ;
-(void)setShowing:(char)arg1 ;
-(id)initWithContentView:(id)arg1 ;
@end

