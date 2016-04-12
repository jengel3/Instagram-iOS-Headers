
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGAlbumSubscriptionTrayModel, NSString;

@interface IGAlbumSubscriptionTrayCollectionCellItemController : IGListItemController <IGListItemType> {

	IGAlbumSubscriptionTrayModel* _model;

}

@property (nonatomic,readonly) IGAlbumSubscriptionTrayModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGAlbumSubscriptionTrayModel *)model;
-(unsigned)numberOfItems;
-(id)initWithModel:(id)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

