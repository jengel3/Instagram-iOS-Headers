
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGChannelHomeCarouselItemModel, IGListAdapter, IGChannelHomeLogger, NSString;

@interface IGChannelHomeCarouselItemController : IGListItemController <IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGListItemType> {

	IGChannelHomeCarouselItemModel* _item;
	IGListAdapter* _adapter;
	id<IGEventViewerViewControllerDelegate> _viewerDelegate;
	IGChannelHomeLogger* _logger;
	unsigned _section;
	NSString* _sessionId;

}

@property (nonatomic,readonly) IGChannelHomeCarouselItemModel * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                                                    //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,__weak,readonly) id<IGEventViewerViewControllerDelegate> viewerDelegate;              //@synthesize viewerDelegate=_viewerDelegate - In the implementation block
@property (nonatomic,readonly) IGChannelHomeLogger * logger;                                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) unsigned section;                                                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) NSString * sessionId;                                                       //@synthesize sessionId=_sessionId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id<IGEventViewerViewControllerDelegate>)viewerDelegate;
-(id)initWithViewerDelegate:(id)arg1 section:(unsigned)arg2 sessionId:(id)arg3 logger:(id)arg4 ;
-(IGChannelHomeLogger *)logger;
-(IGListAdapter *)adapter;
-(unsigned)section;
-(IGChannelHomeCarouselItemModel *)item;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(NSString *)sessionId;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

