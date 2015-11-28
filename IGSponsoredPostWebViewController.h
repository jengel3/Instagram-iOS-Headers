
#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIActivityIndicatorView, NSString;

@interface IGSponsoredPostWebViewController : IGViewController <UIWebViewDelegate> {

	char _didLoadInitialPage;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) char didLoadInitialPage;                        //@synthesize didLoadInitialPage=_didLoadInitialPage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onCloseTapped;
-(char)didLoadInitialPage;
-(void)setDidLoadInitialPage:(char)arg1 ;
-(void)loadURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

