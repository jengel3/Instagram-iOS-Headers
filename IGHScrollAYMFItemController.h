
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGHScrollAYMFCellItemControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGListAdapter, IGListCollectionView, IGHScrollAYMFModel, NSMutableArray, NSString;

@interface IGHScrollAYMFItemController : IGListItemController <IGListAdapterDataSource, IGListAdapterDelegate, IGHScrollAYMFCellItemControllerDelegate, UICollectionViewDelegate, IGListItemType> {

	IGListAdapter* _listAdapter;
	IGListCollectionView* _collectionView;
	IGHScrollAYMFModel* _hScrollAYMFModel;
	NSMutableArray* _items;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGHScrollAYMFModel * hScrollAYMFModel;              //@synthesize hScrollAYMFModel=_hScrollAYMFModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                               //@synthesize items=_items - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)logFeaturedUserInfoDismissed:(id)arg1 atIndex:(unsigned)arg2 wasLastUser:(char)arg3 ;
-(void)pushControllerForUser:(id)arg1 ;
-(id)initWithHScrollAYMFModel:(id)arg1 ;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(void)pushPeopleFeedController;
-(IGHScrollAYMFModel *)hScrollAYMFModel;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(IGListCollectionView *)collectionView;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

