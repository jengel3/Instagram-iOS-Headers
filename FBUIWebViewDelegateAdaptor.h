
#import <UIKit/UIWebViewDelegate.h>

@protocol FBWebViewDelegate;
@class FBUIWebView, NSString;

@interface FBUIWebViewDelegateAdaptor : NSObject <UIWebViewDelegate> {

	FBUIWebView* _owner;
	id<FBWebViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) FBUIWebView * owner;                         //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOwner:(id)arg1 ;
-(void)setDelegate:(id<FBWebViewDelegate>)arg1 ;
-(id<FBWebViewDelegate>)delegate;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setOwner:(FBUIWebView *)arg1 ;
-(FBUIWebView *)owner;
@end

