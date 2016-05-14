/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)didDismissAYMFCell:(id)arg1 ;
-(void)didTapAYMFCell:(id)arg1 ;
-(void)didTapFollowButtonInCell:(id)arg1 withAction:(int)arg2 ;
-(void)filterFollowedAccounts;
-(void)configureWithUser:(id)arg1 ;
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
