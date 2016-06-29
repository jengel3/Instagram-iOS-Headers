
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGHScrollAYMFCellItemControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGHScrollAYMFBannerCellDelegate.h>
#import <Instagram/IGFindUsersViewDataSourceDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGListAdapter, IGHScrollAYMFModel, NSMutableArray, IGSuggestedFindUsersViewDataSource, NSString;

@interface IGHScrollAYMFItemController : IGListItemController <IGListAdapterDataSource, IGListAdapterDelegate, IGHScrollAYMFCellItemControllerDelegate, UICollectionViewDelegate, IGHScrollAYMFBannerCellDelegate, IGFindUsersViewDataSourceDelegate, IGListItemType> {

	IGListAdapter* _listAdapter;
	IGHScrollAYMFModel* _hScrollAYMFModel;
	NSMutableArray* _items;
	unsigned* _feedPostion;
	IGSuggestedFindUsersViewDataSource* _suggestedUserDataSource;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                                               //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGHScrollAYMFModel * hScrollAYMFModel;                                     //@synthesize hScrollAYMFModel=_hScrollAYMFModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned* feedPostion;                                                     //@synthesize feedPostion=_feedPostion - In the implementation block
@property (nonatomic,readonly) IGSuggestedFindUsersViewDataSource * suggestedUserDataSource;              //@synthesize suggestedUserDataSource=_suggestedUserDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3 ;
-(void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2 ;
-(void)logFeaturedUserInfoDismissed:(id)arg1 atIndex:(unsigned)arg2 wasLastUser:(char)arg3 ;
-(void)pushControllerForUser:(id)arg1 ;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2 ;
-(void)didTapConnectToFB:(id)arg1 ;
-(IGHScrollAYMFModel *)hScrollAYMFModel;
-(unsigned*)feedPostion;
-(void)onFacebookAuthSuccessWithCell:(id)arg1 ;
-(void)onFacebookAuthFailedWithCell:(id)arg1 ;
-(IGSuggestedFindUsersViewDataSource *)suggestedUserDataSource;
-(void)pushPeopleFeedController;
-(void)didTapActionButton:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

