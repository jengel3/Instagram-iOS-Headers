

@protocol IGFeedItemDirectResponseLoggingProviderDelegate, IGDirectResponseHandling, IGDirectResponseLogging;
@class UIViewController, IGBrowserController;

@interface IGFeedDirectResponseHandler : NSObject {

	UIViewController* _viewController;
	IGBrowserController* _browserController;
	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
	id<IGDirectResponseHandling> _handler;
	id<IGDirectResponseLogging> _logger;

}

@property (nonatomic,retain) IGBrowserController * browserController;                                                   //@synthesize browserController=_browserController - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) id<IGDirectResponseHandling> handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id<IGDirectResponseLogging> logger;                                                      //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                  //@synthesize viewController=_viewController - In the implementation block
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(void)openWebViewForURL:(id)arg1 feedItemContext:(id)arg2 directResponseInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logFailedActionForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(void)setBrowserController:(IGBrowserController *)arg1 ;
-(IGBrowserController *)browserController;
-(id)initWithLogger:(id)arg1 loggingDelegate:(id)arg2 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 showCallConfirmation:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 currentPagingIndex:(id)arg2 context:(id)arg3 showCallConfirmation:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id<IGDirectResponseLogging>)logger;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id<IGDirectResponseHandling>)handler;
-(void)setHandler:(id<IGDirectResponseHandling>)arg1 ;
@end

