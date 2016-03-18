
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGFeedItem, IGFeedNetworkSource, IGFeedFocusCoordinator, IGExploreMainFeedLayoutConfiguration, NSString;

@interface IGMediaThumbnailItemController : IGListItemController <IGListItemType> {

	IGFeedItem* _feedItem;
	IGFeedNetworkSource* _networkSource;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGExploreMainFeedLayoutConfiguration* _layoutConfig;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                            //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * networkSource;                              //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                        //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLayoutConfiguration * layoutConfig;              //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFeedNetworkSource *)networkSource;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(void)configureCell:(id)arg1 atIndex:(int)arg2 ;
-(IGExploreMainFeedLayoutConfiguration *)layoutConfig;
-(id)newContexualFeedController;
-(unsigned)contextualFeedInfiniteScrollCap;
-(id)newNetworkSource;
-(id)initWithFeedItem:(id)arg1 networkSource:(id)arg2 focusCoordinator:(id)arg3 layoutConfig:(id)arg4 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

