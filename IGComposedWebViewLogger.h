
#import <Instagram/IGUnifiedWebViewControllerWebViewLoggingDelegate.h>

@class NSArray;

@interface IGComposedWebViewLogger : NSObject <IGUnifiedWebViewControllerWebViewLoggingDelegate> {

	NSArray* _loggers;

}

@property (nonatomic,readonly) NSArray * loggers;              //@synthesize loggers=_loggers - In the implementation block
-(NSArray *)loggers;
-(void)webView:(id)arg1 willStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidGoBack:(id)arg1 ;
-(void)webViewDidGoForward:(id)arg1 ;
-(id)init;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

