
#import <Instagram/IGUnifiedWebViewControllerSharingLoggingDelegate.h>

@class IGFeedItem, NSArray;

@interface IGComposedWebViewSharingLogger : NSObject <IGUnifiedWebViewControllerSharingLoggingDelegate> {

	IGFeedItem* _feedItem;
	NSArray* _loggers;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) NSArray * loggers;                  //@synthesize loggers=_loggers - In the implementation block
-(id)initWithFeedItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(NSArray *)loggers;
-(void)webViewController:(id)arg1 displayedShareActionsForItems:(id)arg2 ;
-(void)webViewController:(id)arg1 forItems:(id)arg2 activityType:(id)arg3 wasCompleted:(char)arg4 returnedItems:(id)arg5 activityError:(id)arg6 ;
@end

