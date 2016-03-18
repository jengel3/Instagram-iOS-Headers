
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGHorizontalFeedCollectionViewLayoutDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGHorizontalFeedViewDelegate, IGFeedItemActionCellDelegate, IGFeedVideoCellPlayerDelegate, IGFeedItemConfigurationType, IGNavigationContext, IGPresentationContext;
@class NSArray, IGFeedItem, IGHorizontalFeedCollectionViewLayout, IGListAdapter, IGListCollectionView, IGUser, IGFeedHeartAnimator, IGFeedFocusCoordinator, NSString;

@interface IGHorizontalFeedView : UIView <IGFeedItemLoggingProviderDelegate, IGHorizontalFeedCollectionViewLayoutDelegate, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate> {

	char _hasScrolledToFocusedItem;
	NSArray* _albumItems;
	id<IGHorizontalFeedViewDelegate> _delegate;
	id<IGFeedItemActionCellDelegate> _actionCellDelegate;
	id<IGFeedVideoCellPlayerDelegate> _playerDelegate;
	IGFeedItem* _feedItem;
	IGHorizontalFeedCollectionViewLayout* _layout;
	IGListAdapter* _listAdapter;
	IGListCollectionView* _collectionView;
	id<IGFeedItemConfigurationType> _configuration;
	IGUser* _currentUser;
	IGFeedHeartAnimator* _heartAnimator;
	IGFeedFocusCoordinator* _focusCoordinator;
	id<IGNavigationContext> _navigationContext;
	id<IGPresentationContext> _presentationContext;

}

@property (nonatomic,retain) NSArray * albumItems;                                                    //@synthesize albumItems=_albumItems - In the implementation block
@property (assign,nonatomic,__weak) id<IGHorizontalFeedViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> actionCellDelegate;              //@synthesize actionCellDelegate=_actionCellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedVideoCellPlayerDelegate> playerDelegate;                 //@synthesize playerDelegate=_playerDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGHorizontalFeedCollectionViewLayout * layout;                           //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                           //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                  //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                   //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                             //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char hasScrolledToFocusedItem;                                           //@synthesize hasScrolledToFocusedItem=_hasScrolledToFocusedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGNavigationContext> navigationContext;                        //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGPresentationContext> presentationContext;                    //@synthesize presentationContext=_presentationContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(void)setPlayerDelegate:(id<IGFeedVideoCellPlayerDelegate>)arg1 ;
-(void)setActionCellDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(void)setPresentationContext:(id<IGPresentationContext>)arg1 ;
-(void)setNavigationContext:(id<IGNavigationContext>)arg1 ;
-(id<IGNavigationContext>)navigationContext;
-(void)setupCollectionViewAndAdapter;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(id<IGPresentationContext>)presentationContext;
-(void)scrollViewDidEndScrolling;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(void)horizontalFeedCollectionViewLayout:(id)arg1 heightDidChange:(float)arg2 ;
-(id<IGFeedItemActionCellDelegate>)actionCellDelegate;
-(int)pageForOffset:(float)arg1 ;
-(IGFeedHeartAnimator *)heartAnimator;
-(id<IGFeedVideoCellPlayerDelegate>)playerDelegate;
-(char)hasScrolledToFocusedItem;
-(id)initWithConfiguration:(id)arg1 currentUser:(id)arg2 focusCoordinator:(id)arg3 navigationContext:(id)arg4 presentationContext:(id)arg5 ;
-(void)setHasScrolledToFocusedItem:(char)arg1 ;
-(void)setDelegate:(id<IGHorizontalFeedViewDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGHorizontalFeedViewDelegate>)delegate;
-(IGHorizontalFeedCollectionViewLayout *)layout;
-(IGListCollectionView *)collectionView;
-(void)setLayout:(IGHorizontalFeedCollectionViewLayout *)arg1 ;
-(id<IGFeedItemConfigurationType>)configuration;
-(IGUser *)currentUser;
-(void)setAlbumItems:(NSArray *)arg1 ;
-(NSArray *)albumItems;
@end

