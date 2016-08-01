
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGPendingAlbumItemStatusDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGAlbumItemType, IGAlbumCarouselSelectionDelegate;
@class IGPendingAlbumItemStatusObserver, NSString;

@interface IGAlbumCarouselItemController : IGListItemController <IGPendingAlbumItemStatusDelegate, IGListItemType> {

	id<IGAlbumItemType> _item;
	float _maxItemWidth;
	id<IGAlbumCarouselSelectionDelegate> _delegate;
	IGPendingAlbumItemStatusObserver* _pendingItemObserver;

}

@property (nonatomic,readonly) IGPendingAlbumItemStatusObserver * pendingItemObserver;              //@synthesize pendingItemObserver=_pendingItemObserver - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> item;                                            //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) float maxItemWidth;                                                    //@synthesize maxItemWidth=_maxItemWidth - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCarouselSelectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)feedItemUpdated:(id)arg1 ;
-(float)maxItemWidth;
-(IGPendingAlbumItemStatusObserver *)pendingItemObserver;
-(void)pendingItemObserver:(id)arg1 didUpdateToStatus:(int)arg2 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToProgress:(float)arg2 ;
-(void)setMaxItemWidth:(float)arg1 ;
-(void)setDelegate:(id<IGAlbumCarouselSelectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reload;
-(id<IGAlbumCarouselSelectionDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

