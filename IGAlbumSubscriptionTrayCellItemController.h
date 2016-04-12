
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
-(void)creationViewControllerDidFinish:(id)arg1 ;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGAlbumSubscriptionTrayItemModel *)model;
-(unsigned)numberOfItems;
-(id)initWithModel:(id)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

