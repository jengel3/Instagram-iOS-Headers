
#import <Instagram/IGUnifiedWebViewControllerSharingLogger.h>

@class IGFeedItem, IGSponsoredFeedItemTracker;

@interface IGUnifiedWebViewControllerStandardSharingLogger : NSObject <IGUnifiedWebViewControllerSharingLogger> {

	IGFeedItem* _feedItem;
	IGSponsoredFeedItemTracker* _tracker;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                             //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGSponsoredFeedItemTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(id)concatenatedURLsForItems:(id)arg1 ;
-(void)webViewController:(id)arg1 displayedShareActionsForItems:(id)arg2 ;
-(void)webViewController:(id)arg1 forItems:(id)arg2 activityType:(id)arg3 wasCompleted:(char)arg4 returnedItems:(id)arg5 activityError:(id)arg6 ;
-(IGSponsoredFeedItemTracker *)tracker;
@end

