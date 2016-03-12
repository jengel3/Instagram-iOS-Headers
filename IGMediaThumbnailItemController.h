
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGMediaThumbnailModel, IGFeedNetworkSource, IGFeedFocusCoordinator, IGExploreMainFeedLayoutConfiguration, NSString;

@interface IGMediaThumbnailItemController : IGListItemController <IGListItemType> {

	IGMediaThumbnailModel* _media;
	IGFeedNetworkSource* _networkSource;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGExploreMainFeedLayoutConfiguration* _layoutConfig;

}

@property (nonatomic,readonly) IGMediaThumbnailModel * media;                                    //@synthesize media=_media - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * networkSource;                              //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                        //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLayoutConfiguration * layoutConfig;              //@synthesize layoutConfig=_layoutConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFeedNetworkSource *)networkSource;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(void)configureCell:(id)arg1 atIndex:(int)arg2 ;
-(IGExploreMainFeedLayoutConfiguration *)layoutConfig;
-(id)initWithMediaModel:(id)arg1 networkSource:(id)arg2 focusCoordinator:(id)arg3 layoutConfig:(id)arg4 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGMediaThumbnailModel *)media;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

