
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGHybridWebViewDelegate;
@class UIWebView, IGCameraBar, UIView, UIActivityIndicatorView, NSString;

@interface IGHybridWebView : UIView <UIWebViewDelegate> {

	id<IGHybridWebViewDelegate> _delegate;
	UIWebView* _webView;
	IGCameraBar* _headerBar;
	UIView* _statusBarDummyView;
	UIActivityIndicatorView* _spinner;
	unsigned _context;

}

@property (assign,nonatomic,__weak) id<IGHybridWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWebView * webView;                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) IGCameraBar * headerBar;                                //@synthesize headerBar=_headerBar - In the implementation block
@property (nonatomic,readonly) UIView * statusBarDummyView;                            //@synthesize statusBarDummyView=_statusBarDummyView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                      //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) unsigned context;                                       //@synthesize context=_context - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFrom:(unsigned)arg1 ;
-(void)setUpViewHierarchy;
-(void)setUpHeaderBar;
-(id)createInitialHeader;
-(IGCameraBar *)headerBar;
-(UIView *)statusBarDummyView;
-(void)setUpNavigationBarWithParams:(id)arg1 ;
-(unsigned)actionForScreen:(id)arg1 isRootScreen:(char)arg2 ;
-(id)headerBarForParams:(id)arg1 ;
-(void)updateHeaderForCurrentStateWithParams:(id)arg1 ;
-(void)setUpLeftButtonForHeader:(id)arg1 withValue:(id)arg2 withCallbackJS:(id)arg3 ;
-(void)setUpRightButtonForHeader:(id)arg1 withTextValue:(id)arg2 activeValue:(id)arg3 withCallbackJS:(id)arg4 ;
-(void)callBackToJSCode;
-(void)callToJS:(id)arg1 ;
-(void)callNextToJSCode;
-(id)initWithFrame:(CGRect)arg1 from:(unsigned)arg2 ;
-(void)setDelegate:(id<IGHybridWebViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGHybridWebViewDelegate>)delegate;
-(unsigned)context;
-(UIWebView *)webView;
-(void)loadRequest:(id)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

