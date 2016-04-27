
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAlbumCreationViewControllerNavigationDelegate.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGAlbumSubscriptionTrayItemModel, NSString;

@interface IGAlbumSubscriptionTrayCellItemController : IGListItemController <IGAlbumCreationViewControllerNavigationDelegate, IGAlbumFullscreenViewControllerDelegate, IGListItemType> {

	IGAlbumSubscriptionTrayItemModel* _model;

}

@property (nonatomic,readonly) IGAlbumSubscriptionTrayItemModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)creationViewControllerDidFinish:(id)arg1 ;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 ;
-(IGAlbumSubscriptionTrayItemModel *)model;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

