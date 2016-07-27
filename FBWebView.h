
@class NSString, NSURL, UIScrollView, UIView, NSURLRequest;


@protocol FBWebView <NSObject>
@property (assign,nonatomic) int displayState; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (nonatomic,readonly) char canGoBack; 
@property (nonatomic,readonly) char canGoForward; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView; 
@property (nonatomic,retain) UIView * errorView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isLoading,nonatomic,readonly) char loading; 
@property (assign,nonatomic) char isBannerAtTop; 
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) char youtubeNavigationFix; 
@optional
-(char)currentlyCrashed;
-(char)recoveredFromOOMCrash;
-(void)addScriptMessageHandlerForName:(id)arg1;
-(id)backForwardList;
-(void)removeScriptMessageHandlerForName:(id)arg1;

@required
-(NSURL *)currentLocationURL;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setGestureRecognizersEnabled:(char)arg1;
-(void)updateOrientationWithOrientation:(int)arg1;
-(int)displayState;
-(void)setDisplayState:(int)arg1;
-(char)isBannerAtTop;
-(void)setIsBannerAtTop:(char)arg1;
-(char)youtubeNavigationFix;
-(void)setYoutubeNavigationFix:(char)arg1;
-(int)webViewImplementation;
-(UIView *)bannerView;
-(void)setDelegate:(id)arg1;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned)arg1;
-(unsigned)dataDetectorTypes;
-(void)loadRequest:(id)arg1;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
-(char)isLoading;
-(char)canGoBack;
-(char)canGoForward;
-(void)setKeyboardDisplayRequiresUserAction:(char)arg1;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(char)hasOnlySecureContent;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setErrorView:(id)arg1;
-(UIView *)errorView;
-(void)setBannerView:(id)arg1;

@end

