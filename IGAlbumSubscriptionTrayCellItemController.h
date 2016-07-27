
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGAlbumSubscriptionTrayCellItemControllerDelegate;
@class IGReelSubscriptionTrayItemModel, NSString;

@interface IGAlbumSubscriptionTrayCellItemController : IGListItemController <IGListDisplayDelegate, IGListItemType> {

	id<IGAlbumSubscriptionTrayCellItemControllerDelegate> _delegate;
	IGReelSubscriptionTrayItemModel* _model;

}

@property (assign,nonatomic,__weak) id<IGAlbumSubscriptionTrayCellItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGReelSubscriptionTrayItemModel * model;                                          //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumSubscriptionTrayCellItemControllerDelegate>)arg1 ;
-(id)init;
-(id<IGAlbumSubscriptionTrayCellItemControllerDelegate>)delegate;
-(IGReelSubscriptionTrayItemModel *)model;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

