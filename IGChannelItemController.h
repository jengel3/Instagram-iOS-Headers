
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGChannelModel, IGFeedVideoCellManager, IGChannelFocusCoordinator, IGEventFeedDataCache, NSString;

@interface IGChannelItemController : IGListItemController <IGListItemType> {

	IGChannelModel* _channel;
	IGFeedVideoCellManager* _videoCellManager;
	IGChannelFocusCoordinator* _channelFocusCoordinator;
	IGEventFeedDataCache* _feedDataCache;
	id<IGEventViewerViewControllerDelegate> _viewerDelegate;

}

@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                                  //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * channelFocusCoordinator;                        //@synthesize channelFocusCoordinator=_channelFocusCoordinator - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataCache * feedDataCache;                                       //@synthesize feedDataCache=_feedDataCache - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerViewControllerDelegate> viewerDelegate;              //@synthesize viewerDelegate=_viewerDelegate - In the implementation block
@property (nonatomic,readonly) IGChannelModel * channel;                                                   //@synthesize channel=_channel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(id)workingRangeDelegate;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGChannelFocusCoordinator *)channelFocusCoordinator;
-(id)newEventController;
-(id<IGEventViewerViewControllerDelegate>)viewerDelegate;
-(void)prepareToPushEventViewerWithCompletion:(/*^block*/id)arg1 ;
-(IGEventFeedDataCache *)feedDataCache;
-(id)initWithVideoCellManager:(id)arg1 focusCoordinator:(id)arg2 viewerDelegate:(id)arg3 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(IGChannelModel *)channel;
@end

