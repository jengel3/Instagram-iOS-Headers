
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/NJKWebViewProgressDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Instagram/FBWebView.h>

@protocol FBWebViewDelegate;
@class NSString, NSURL, UIScrollView, UIView, NSURLRequest, UIWebView, NJKWebViewProgress;

@interface IGUIWebView : UIView <NJKWebViewProgressDelegate, UIWebViewDelegate, FBWebView> {

	char _isBannerAtTop;
	char _loading;
	char _youtubeNavigationFix;
	UIView* _bannerView;
	id<FBWebViewDelegate> _delegate;
	int _displayState;
	UIView* _errorView;
	UIWebView* _webView;
	NJKWebViewProgress* _webViewProgress;

}

@property (nonatomic,readonly) UIWebView * webView;                               //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) NJKWebViewProgress * webViewProgress;              //@synthesize webViewProgress=_webViewProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayState;                                    //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (nonatomic,readonly) char canGoBack; 
@property (nonatomic,readonly) char canGoForward; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView;                                 //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                  //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isLoading,nonatomic,readonly) char loading;                     //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) char isBannerAtTop;                                  //@synthesize isBannerAtTop=_isBannerAtTop - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) char youtubeNavigationFix;                           //@synthesize youtubeNavigationFix=_youtubeNavigationFix - In the implementation block
-(NSURL *)currentLocationURL;
-(void)webViewProgress:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setGestureRecognizersEnabled:(char)arg1 ;
-(void)updateOrientationWithOrientation:(int)arg1 ;
-(int)displayState;
-(void)setDisplayState:(int)arg1 ;
-(char)isBannerAtTop;
-(void)setIsBannerAtTop:(char)arg1 ;
-(char)youtubeNavigationFix;
-(void)setYoutubeNavigationFix:(char)arg1 ;
-(NJKWebViewProgress *)webViewProgress;
-(int)webViewImplementation;
-(UIView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(UIWebView *)webView;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(char)isLoading;
-(char)canGoBack;
-(char)canGoForward;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setKeyboardDisplayRequiresUserAction:(char)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(char)hasOnlySecureContent;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
-(void)setBannerView:(UIView *)arg1 ;
@end

