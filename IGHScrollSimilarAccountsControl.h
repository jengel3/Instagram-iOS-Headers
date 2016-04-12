
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGHScrollAYMFCellItemControllerDelegate.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, IGListAdapter, IGListCollectionView, IGUser, NSString;

@interface IGHScrollSimilarAccountsControl : NSObject <IGListAdapterDataSource, IGHScrollAYMFCellItemControllerDelegate, IGListAdapterDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSArray* _items;
	IGListAdapter* _listAdapter;
	IGListCollectionView* _collectionView;
	IGUser* _user;

}

@property (nonatomic,retain) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                      //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithUser:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2 ;
-(void)filterFollowedAccounts;
-(void)logUserImpressionAtPosition:(unsigned)arg1 ;
-(void)logDismissActionAtPosition:(unsigned)arg1 ;
-(void)logTapActionAtPosition:(unsigned)arg1 ;
-(void)logFollowActionAtPosition:(unsigned)arg1 ;
-(IGUser *)user;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(IGListCollectionView *)collectionView;
@end

