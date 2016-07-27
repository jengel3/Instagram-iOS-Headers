
#import <UIKit/UIViewController.h>
#import <Instagram/IGListAdapterDataSource.h>

@protocol IGAlbumItemType, IGAlbumViewersListDelegate;
@class IGAlbumViewersHeaderView, IGListCollectionView, IGListAdapter, NSString;

@interface IGAlbumViewersListViewController : UIViewController <IGListAdapterDataSource> {

	id<IGAlbumItemType> _item;
	id<IGAlbumViewersListDelegate> _delegate;
	IGAlbumViewersHeaderView* _headerView;
	IGListCollectionView* _collectionView;
	IGListAdapter* _adapter;

}

@property (nonatomic,readonly) IGAlbumViewersHeaderView * headerView;                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                                   //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) id<IGAlbumItemType> item;                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumViewersListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)deleteButtonPressed;
-(void)shareButtonPressed;
-(IGListAdapter *)adapter;
-(void)setDelegate:(id<IGAlbumViewersListDelegate>)arg1 ;
-(id<IGAlbumViewersListDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(IGAlbumViewersHeaderView *)headerView;
-(void)setItem:(id<IGAlbumItemType>)arg1 ;
@end

