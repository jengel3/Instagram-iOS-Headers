
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListWorkingRangeDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGFeedNetworkSourceHideDelegate;
@class IGFeedItem, IGFeedNetworkSource, IGFeedFocusCoordinator, IGExploreMainFeedLayoutConfiguration, NSString;

@interface IGMediaThumbnailItemController : IGListItemController <IGListWorkingRangeDelegate, IGListItemType> {

	char _thumbnailPrefetchEnabled;
	IGFeedItem* _feedItem;
	IGFeedNetworkSource* _networkSource;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGExploreMainFeedLayoutConfiguration* _layoutConfig;
	id<IGFeedNetworkSourceHideDelegate> _hideDelegate;

}

@property (nonatomic,readonly) IGFeedNetworkSource * networkSource;                                  //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                            //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLayoutConfiguration * layoutConfig;                  //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedNetworkSourceHideDelegate> hideDelegate;              //@synthesize hideDelegate=_hideDelegate - In the implementation block
@property (nonatomic,readonly) char thumbnailPrefetchEnabled;                                        //@synthesize thumbnailPrefetchEnabled=_thumbnailPrefetchEnabled - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                                //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeWithLayoutConfig:(id)arg1 constrainedToWidth:(float)arg2 ;
-(IGFeedItem *)feedItem;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(IGFeedNetworkSource *)networkSource;
-(void)configureCell:(id)arg1 atIndex:(int)arg2 ;
-(IGExploreMainFeedLayoutConfiguration *)layoutConfig;
-(id)newContexualFeedController;
-(char)thumbnailPrefetchEnabled;
-(unsigned)contextualFeedInfiniteScrollCap;
-(id)newNetworkSource;
-(void)listAdapter:(id)arg1 listItemControllerWillEnterWorkingRange:(id)arg2 ;
-(void)listAdapter:(id)arg1 listItemControllerDidExitWorkingRange:(id)arg2 ;
-(id)initWithNetworkSource:(id)arg1 focusCoordinator:(id)arg2 layoutConfig:(id)arg3 hideDelegate:(id)arg4 thumbnailPrefetchEnabled:(char)arg5 ;
-(id<IGFeedNetworkSourceHideDelegate>)hideDelegate;
-(void)onFeedItemHidden:(id)arg1 ;
-(void)dealloc;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

