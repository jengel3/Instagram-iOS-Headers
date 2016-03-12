
#import <Instagram/IGUnifiedWebViewControllerWebViewLogger.h>

@class NSString, NSMutableSet, NSMutableDictionary;

@interface IGUnifiedWebViewControllerStandardWebViewLogger : NSObject <IGUnifiedWebViewControllerWebViewLogger> {

	NSString* _currentMainDocumentURLString;
	NSMutableSet* _completedMainDocumentURLStrings;
	NSMutableDictionary* _requestURLStringToStartTime;

}

@property (nonatomic,retain) NSString * currentMainDocumentURLString;                        //@synthesize currentMainDocumentURLString=_currentMainDocumentURLString - In the implementation block
@property (nonatomic,retain) NSMutableSet * completedMainDocumentURLStrings;                 //@synthesize completedMainDocumentURLStrings=_completedMainDocumentURLStrings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestURLStringToStartTime;              //@synthesize requestURLStringToStartTime=_requestURLStringToStartTime - In the implementation block
-(void)webView:(id)arg1 willStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidGoBack:(id)arg1 ;
-(void)webViewDidGoForward:(id)arg1 ;
-(NSString *)currentMainDocumentURLString;
-(void)logFinishLoadForAllCurrentURLs;
-(void)setCurrentMainDocumentURLString:(NSString *)arg1 ;
-(NSMutableSet *)completedMainDocumentURLStrings;
-(NSMutableDictionary *)requestURLStringToStartTime;
-(void)logFinishLoadForURL:(id)arg1 ;
-(void)setCompletedMainDocumentURLStrings:(NSMutableSet *)arg1 ;
-(void)setRequestURLStringToStartTime:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

