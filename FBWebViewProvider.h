

@protocol FBWebViewAnalytics, FBWebViewAlertHandler;
#import <Instagram/Instagram-Structs.h>
@interface FBWebViewProvider : NSObject {

	id<FBWebViewAnalytics> _analytics;
	id<FBWebViewAlertHandler> _alertHandler;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) id<FBWebViewAlertHandler> alertHandler;              //@synthesize alertHandler=_alertHandler - In the implementation block
-(id<FBWebViewAnalytics>)analytics;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 implementation:(int)arg3 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 ;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
@end

