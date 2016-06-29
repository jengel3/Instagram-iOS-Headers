
#import <Instagram/IGViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface IGTwitterAuthViewController : IGViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _callbackPath;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)handleCallbackURL:(id)arg1 ;
-(void)startAuthorization;
-(id)pathSubstringForCallbackURL:(id)arg1 ;
-(void)userDidNotAuthorize;
-(id)extractTokenAndVerifierFromURL:(id)arg1 ;
-(void)userDidAuthorizeWithTokenKey:(id)arg1 secret:(id)arg2 username:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

