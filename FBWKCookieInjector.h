
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol FBWebViewAnalytics;
@class WKWebView, WKProcessPool, NSString;

@interface FBWKCookieInjector : NSObject <WKNavigationDelegate> {

	WKWebView* _dummyWKWebView;
	/*^block*/id _completionBlock;
	WKProcessPool* _wkProcessPool;
	FBWKCookieInjector* _self;
	id<FBWebViewAnalytics> _analytics;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;              //@synthesize analytics=_analytics - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_URLHost:(id)arg1 matchesHost:(id)arg2 ;
+(void)_logCookieInjectedIntoNSHTTPCookieStorage:(id)arg1 analytics:(id)arg2 ;
+(char)_isValidCookieFragment:(id)arg1 ;
+(void)_logCookieInjectedIntoWKProcessPoolCookies:(id)arg1 oldCookieNames:(id)arg2 analytics:(id)arg3 ;
+(void)injectFBCookiesFromNSHTTPCookieStorageIntoWKProcessPool:(id)arg1 analytics:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)injectFBCookiesIntoNSHTTPCookieStorageFromWKNavigationResponse:(id)arg1 analytics:(id)arg2 ;
-(id<FBWebViewAnalytics>)analytics;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(void)_injectFBCookiesFromNSHTTPCookieStorageIntoWKProcessPool:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
@end

