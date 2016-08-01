
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Instagram/IGHybridWebViewHeaderDelegate.h>

@protocol IGHybridWebViewDelegate, IGHybridWebViewConfig;
@class UIWebView, UIView, IGHybridWebViewHeader, UIActivityIndicatorView, NSString;

@interface IGHybridWebView : UIView <UIWebViewDelegate, IGHybridWebViewHeaderDelegate> {

	id<IGHybridWebViewDelegate> _delegate;
	UIWebView* _webView;
	UIView* _loadingOverlayView;
	IGHybridWebViewHeader* _header;
	UIActivityIndicatorView* _spinner;
	id<IGHybridWebViewConfig> _config;

}

@property (nonatomic,readonly) UIWebView * webView;                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) UIView * loadingOverlayView;                            //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,readonly) IGHybridWebViewHeader * header;                         //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                      //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) id<IGHybridWebViewConfig> config;                       //@synthesize config=_config - In the implementation block
@property (assign,nonatomic,__weak) id<IGHybridWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpViewHierarchy;
-(id)initWithFrame:(CGRect)arg1 config:(id)arg2 ;
-(void)setUpHeaderBar;
-(void)clearTemporaryAuthCookies;
-(void)updateHeaderToLoadingView:(char)arg1 withGreyOverlay:(char)arg2 leftButtonEnabled:(char)arg3 ;
-(void)disableLongPressGestures:(id)arg1 ;
-(UIView *)loadingOverlayView;
-(void)setUpNavigationBarWithParams:(id)arg1 ;
-(void)callToJS:(id)arg1 ;
-(unsigned)actionForScreen:(id)arg1 isRootScreen:(char)arg2 ;
-(void)updateHeaderForCurrentStateWithParams:(id)arg1 ;
-(void)webViewHeader:(id)arg1 didTapCloseWithItem:(id)arg2 ;
-(void)webViewHeader:(id)arg1 didTapBackWithItem:(id)arg2 ;
-(void)webViewHeader:(id)arg1 didTapRightButtonWithItem:(id)arg2 ;
-(void)showSpinner;
-(void)setDelegate:(id<IGHybridWebViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGHybridWebViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)loadRequest:(id)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(id<IGHybridWebViewConfig>)config;
-(void)hideSpinner;
-(IGHybridWebViewHeader *)header;
-(id)initWithConfig:(id)arg1 ;
@end

