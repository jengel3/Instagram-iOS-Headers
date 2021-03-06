
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTView.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Instagram/RCTAutoInsetsProtocol.h>

@protocol RCTWebViewDelegate;
@class UIWebView, NSString, NSDictionary;

@interface RCTWebView : RCTView <UIWebViewDelegate, RCTAutoInsetsProtocol> {

	UIWebView* _webView;
	NSString* _injectedJavaScript;
	char _automaticallyAdjustContentInsets;
	id<RCTWebViewDelegate> _delegate;
	NSDictionary* _source;
	/*^block*/id _onLoadingStart;
	/*^block*/id _onLoadingFinish;
	/*^block*/id _onLoadingError;
	/*^block*/id _onShouldStartLoadWithRequest;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,copy) id onLoadingStart;                                     //@synthesize onLoadingStart=_onLoadingStart - In the implementation block
@property (nonatomic,copy) id onLoadingFinish;                                    //@synthesize onLoadingFinish=_onLoadingFinish - In the implementation block
@property (nonatomic,copy) id onLoadingError;                                     //@synthesize onLoadingError=_onLoadingError - In the implementation block
@property (nonatomic,copy) id onShouldStartLoadWithRequest;                       //@synthesize onShouldStartLoadWithRequest=_onShouldStartLoadWithRequest - In the implementation block
@property (assign,nonatomic,__weak) id<RCTWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * source;                                 //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                           //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) char automaticallyAdjustContentInsets;               //@synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets - In the implementation block
@property (nonatomic,copy) NSString * injectedJavaScript;                         //@synthesize injectedJavaScript=_injectedJavaScript - In the implementation block
@property (assign,nonatomic) char scalesPageToFit; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(char)arg1 ;
-(id)baseEvent;
-(NSString *)injectedJavaScript;
-(void)setInjectedJavaScript:(NSString *)arg1 ;
-(id)onLoadingStart;
-(void)setOnLoadingStart:(id)arg1 ;
-(id)onLoadingFinish;
-(void)setOnLoadingFinish:(id)arg1 ;
-(id)onLoadingError;
-(void)setOnLoadingError:(id)arg1 ;
-(id)onShouldStartLoadWithRequest;
-(void)setOnShouldStartLoadWithRequest:(id)arg1 ;
-(void)refreshContentInset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<RCTWebViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(id<RCTWebViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(char)scalesPageToFit;
-(void)setScalesPageToFit:(char)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(NSDictionary *)source;
-(void)setSource:(NSDictionary *)arg1 ;
@end

