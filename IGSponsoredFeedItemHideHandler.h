
#import <Instagram/IGWebViewControllerContinuationDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGFeedItemDirectResponseLoggingProviderDelegate;
@class IGFeedItem, NSString;

@interface IGSponsoredFeedItemHideHandler : NSObject <IGWebViewControllerContinuationDelegate, UITableViewDataSource> {

	IGFeedItem* _feedItem;
	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 loggingDelegate:(id)arg2 ;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(void)hideForReason:(id)arg1 withExtraDictionary:(id)arg2 ;
-(unsigned)numberOfOptions;
-(char)webViewController:(id)arg1 shouldStartLoadWithURL:(id)arg2 ;
-(char)hasReasonAtIndex:(unsigned)arg1 ;
-(void)hideForReasonAtIndex:(unsigned)arg1 ;
-(id)sectionHeaderViewForTableView:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
@end

