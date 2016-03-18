
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGBoostPostViewDelegate;
@class UIWebView, IGCameraBar, UIActivityIndicatorView, NSString;

@interface IGBoostPostView : UIView <UIWebViewDelegate> {

	id<IGBoostPostViewDelegate> _delegate;
	UIWebView* _webView;
	IGCameraBar* _headerBar;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic,__weak) id<IGBoostPostViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWebView * webView;                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) IGCameraBar * headerBar;                                //@synthesize headerBar=_headerBar - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * spinner;                      //@synthesize spinner=_spinner - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpViewHierarchy;
-(void)setUpHeaderBar;
-(id)createInitialHeader;
-(IGCameraBar *)headerBar;
-(void)setUpNavigationBarWithParams:(id)arg1 ;
-(unsigned)actionForScreen:(id)arg1 isRootScreen:(char)arg2 ;
-(id)headerBarForParams:(id)arg1 ;
-(void)updateHeaderForCurrentStateWithParams:(id)arg1 ;
-(void)setUpLeftButtonForHeader:(id)arg1 withValue:(id)arg2 ;
-(void)setUpRightButtonForHeader:(id)arg1 withTextValue:(id)arg2 activeValue:(id)arg3 ;
-(void)callBackToJSCode;
-(void)callNextToJSCode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGBoostPostViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGBoostPostViewDelegate>)delegate;
-(UIWebView *)webView;
-(void)loadRequest:(id)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
@end

