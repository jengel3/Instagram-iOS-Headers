
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFeedItem, IGAlbumFocusCoordinator, IGAlbumCollectionViewCell, NSString;

@interface IGAlbumItemController : IGListItemController <IGListDisplayDelegate, IGAlbumFullscreenViewControllerDelegate, IGListItemType> {

	IGFeedItem* _feedItem;
	IGAlbumFocusCoordinator* _focusCoordinator;
	IGAlbumCollectionViewCell* _albumCell;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;              //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,retain) IGAlbumCollectionViewCell * albumCell;                   //@synthesize albumCell=_albumCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 ;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
-(IGAlbumCollectionViewCell *)albumCell;
-(void)setAlbumCell:(IGAlbumCollectionViewCell *)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

