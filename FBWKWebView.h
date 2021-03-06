
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/FBWebView.h>

@protocol FBWebViewAlertHandler, FBWebViewAnalytics;
@class WKWebView, FBWKWebViewDelegateAdaptor, FBKVOController, UIView, NSURLRequest, WKNavigation, NSString, NSURL, UIScrollView;

@interface FBWKWebView : UIView <FBWebView> {

	CGPoint _lastTouchLocation;
	WKWebView* _webView;
	FBWKWebViewDelegateAdaptor* _delegateAdaptor;
	FBKVOController* _KVOController;
	char _readyToNavigate;
	/*^block*/id _pendingBlockToRunWhenReady;
	char _isBannerAtTop;
	char _youtubeNavigationFix;
	char _recoveredFromOOMCrash;
	UIView* _bannerView;
	unsigned _dataDetectorTypes;
	int _displayState;
	UIView* _errorView;
	NSURLRequest* _request;
	id<FBWebViewAlertHandler> _alertHandler;
	id<FBWebViewAnalytics> _analytics;
	WKNavigation* _perfLogNavigation;

}

@property (nonatomic,retain) NSURLRequest * request;                              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char recoveredFromOOMCrash;                        //@synthesize recoveredFromOOMCrash=_recoveredFromOOMCrash - In the implementation block
@property (nonatomic,retain) id<FBWebViewAlertHandler> alertHandler;              //@synthesize alertHandler=_alertHandler - In the implementation block
@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) WKNavigation * perfLogNavigation;                    //@synthesize perfLogNavigation=_perfLogNavigation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayState;                                    //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (nonatomic,readonly) char canGoBack; 
@property (nonatomic,readonly) char canGoForward; 
@property (assign,nonatomic) unsigned dataDetectorTypes;                          //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView;                                 //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                  //@synthesize errorView=_errorView - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (assign,nonatomic) char isBannerAtTop;                                  //@synthesize isBannerAtTop=_isBannerAtTop - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) char youtubeNavigationFix;                           //@synthesize youtubeNavigationFix=_youtubeNavigationFix - In the implementation block
+(void)setUnsupportedMIMETypes:(id)arg1 ;
-(int)webViewImplementation;
-(NSURL *)currentLocationURL;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setGestureRecognizersEnabled:(char)arg1 ;
-(void)updateOrientationWithOrientation:(int)arg1 ;
-(char)currentlyCrashed;
-(int)displayState;
-(void)setDisplayState:(int)arg1 ;
-(char)isBannerAtTop;
-(void)setIsBannerAtTop:(char)arg1 ;
-(char)youtubeNavigationFix;
-(void)setYoutubeNavigationFix:(char)arg1 ;
-(void)_layoutBannerView;
-(id<FBWebViewAnalytics>)analytics;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(void)_navigationHistoryChanged;
-(void)_recoverFromOOMCrash;
-(void)_setReadyToNavigate;
-(id)_disableLocationServicesScriptString;
-(id)_TTIMetricScriptString;
-(id)_getSelectionScriptString;
-(id)_getVideoEventScriptString;
-(void)_loadingStateChanged;
-(void)_estimatedProgressChanged;
-(void)_titleChanged;
-(void)_URLChanged;
-(char)_tryHackPOSTForRequest:(id)arg1 ;
-(void)_runBlockWhenReadyToNavigate:(/*^block*/id)arg1 ;
-(id)_trackHistoryScriptString;
-(WKNavigation *)perfLogNavigation;
-(void)setPerfLogNavigation:(WKNavigation *)arg1 ;
-(id)initWithProcessPoolContainer:(id)arg1 frame:(CGRect)arg2 analytics:(id)arg3 alertHandler:(id)arg4 ;
-(void)addScriptMessageHandlerForName:(id)arg1 ;
-(char)recoveredFromOOMCrash;
-(UIView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(id)backForwardList;
-(char)isLoading;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(char)canGoBack;
-(char)canGoForward;
-(void)setKeyboardDisplayRequiresUserAction:(char)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(char)hasOnlySecureContent;
-(void)removeScriptMessageHandlerForName:(id)arg1 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
@end

