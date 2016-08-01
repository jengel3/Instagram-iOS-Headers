
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGChannelModel, IGEventFeedDataCache, NSString;

@interface IGChannelHomeVideoItemController : IGListItemController <IGListItemType> {

	IGChannelModel* _channel;
	IGEventFeedDataCache* _feedDataCache;
	id<IGEventViewerViewControllerDelegate> _viewerDelegate;

}

@property (nonatomic,readonly) IGChannelModel * channel;                                                   //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataCache * feedDataCache;                                       //@synthesize feedDataCache=_feedDataCache - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerViewControllerDelegate> viewerDelegate;              //@synthesize viewerDelegate=_viewerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id<IGEventViewerViewControllerDelegate>)viewerDelegate;
-(id)initWithViewerDelegate:(id)arg1 ;
-(IGEventFeedDataCache *)feedDataCache;
-(id)displayDelegate;
-(id)workingRangeDelegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(IGChannelModel *)channel;
@end

