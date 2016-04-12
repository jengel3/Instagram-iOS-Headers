
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGFeedNetworkSourceHideDelegate;
@class IGFeedItem, IGFeedNetworkSource, IGFeedFocusCoordinator, IGExploreMainFeedLayoutConfiguration, NSString;

@interface IGMediaThumbnailItemController : IGListItemController <IGListItemType> {

	IGFeedItem* _feedItem;
	IGFeedNetworkSource* _networkSource;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGExploreMainFeedLayoutConfiguration* _layoutConfig;
	id<IGFeedNetworkSourceHideDelegate> _hideDelegate;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                                //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * networkSource;                                  //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                            //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLayoutConfiguration * layoutConfig;                  //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedNetworkSourceHideDelegate> hideDelegate;              //@synthesize hideDelegate=_hideDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFeedNetworkSource *)networkSource;
-(void)configureCell:(id)arg1 atIndex:(int)arg2 ;
-(IGExploreMainFeedLayoutConfiguration *)layoutConfig;
-(id)newContexualFeedController;
-(unsigned)contextualFeedInfiniteScrollCap;
-(id<IGFeedNetworkSourceHideDelegate>)hideDelegate;
-(id)newNetworkSource;
-(id)initWithFeedItem:(id)arg1 networkSource:(id)arg2 focusCoordinator:(id)arg3 layoutConfig:(id)arg4 hideDelegate:(id)arg5 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

