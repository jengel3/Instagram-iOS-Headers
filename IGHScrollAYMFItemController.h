
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGHScrollAYMFCellItemControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGHScrollAYMFBannerCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGListAdapter, IGHScrollAYMFModel, NSMutableArray, NSString;

@interface IGHScrollAYMFItemController : IGListItemController <IGListAdapterDataSource, IGListAdapterDelegate, IGHScrollAYMFCellItemControllerDelegate, UICollectionViewDelegate, IGHScrollAYMFBannerCellDelegate, IGListItemType> {

	IGListAdapter* _listAdapter;
	IGHScrollAYMFModel* _hScrollAYMFModel;
	NSMutableArray* _items;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGHScrollAYMFModel * hScrollAYMFModel;              //@synthesize hScrollAYMFModel=_hScrollAYMFModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                               //@synthesize items=_items - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)cellClasses;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)logFeaturedUserInfoDismissed:(id)arg1 atIndex:(unsigned)arg2 wasLastUser:(char)arg3 ;
-(void)pushControllerForUser:(id)arg1 ;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2 ;
-(IGHScrollAYMFModel *)hScrollAYMFModel;
-(void)pushPeopleFeedController;
-(void)didTapActionButton:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

