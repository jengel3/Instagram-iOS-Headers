
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFeedItem, NSString;

@interface IGAlbumSubscriptionTrayCellItemController : IGListItemController <IGAlbumFullscreenViewControllerDelegate, IGListItemType> {

	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;               //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFeedItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

