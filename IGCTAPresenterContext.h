

@protocol IGFeedItemDirectResponseLoggingProviderDelegate;
@class IGFeedItem, IGFeedItemPageCellState, IGDirectResponseInfo, UIViewController;

@interface IGCTAPresenterContext : NSObject {

	IGFeedItem* _feedItem;
	IGFeedItemPageCellState* _pageCellState;
	IGDirectResponseInfo* _directResponseInfo;
	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGFeedItemPageCellState * pageCellState;                                                 //@synthesize pageCellState=_pageCellState - In the implementation block
@property (nonatomic,readonly) IGDirectResponseInfo * directResponseInfo;                                               //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                  //@synthesize viewController=_viewController - In the implementation block
-(IGFeedItem *)feedItem;
-(IGDirectResponseInfo *)directResponseInfo;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(id)initWithFeedItem:(id)arg1 pageCellState:(id)arg2 directResponseInfo:(id)arg3 loggingDelegate:(id)arg4 ;
-(IGFeedItemPageCellState *)pageCellState;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
@end

