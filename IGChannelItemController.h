
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerViewControllerDelegate, UIViewControllerTransitioningDelegate;
@class IGChannelModel, IGFeedVideoCellManager, IGChannelFocusCoordinator, NSString;

@interface IGChannelItemController : IGListItemController <IGListItemType> {

	IGChannelModel* _channel;
	IGFeedVideoCellManager* _videoCellManager;
	IGChannelFocusCoordinator* _channelFocusCoordinator;
	id<IGEventViewerViewControllerDelegate> _viewerDelegate;
	id<UIViewControllerTransitioningDelegate> _transitionDelegate;

}

@property (nonatomic,readonly) IGChannelModel * channel;                                                         //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                                        //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * channelFocusCoordinator;                              //@synthesize channelFocusCoordinator=_channelFocusCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerViewControllerDelegate> viewerDelegate;                    //@synthesize viewerDelegate=_viewerDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> transitionDelegate;              //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGChannelFocusCoordinator *)channelFocusCoordinator;
-(id)newEventController;
-(id<IGEventViewerViewControllerDelegate>)viewerDelegate;
-(id)initWithChannelModel:(id)arg1 videoCellManager:(id)arg2 focusCoordinator:(id)arg3 viewerDelegate:(id)arg4 transitionDelegate:(id)arg5 ;
-(id<UIViewControllerTransitioningDelegate>)transitionDelegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(IGChannelModel *)channel;
@end

