
#import <Instagram/IGViewController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGAlbumSaveMediaRequestDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAlbumFeedbackDelegate;
@class IGFeedItem, IGAlbumFeedbackHeaderView, IGListCollectionView, IGListAdapter, UITapGestureRecognizer, UISwipeGestureRecognizer, IGAlbumSaveMediaRequest, NSString;

@interface IGAlbumFeedbackViewController : IGViewController <IGActionSheetDelegate, IGAlbumSaveMediaRequestDelegate, IGListAdapterDataSource, UIGestureRecognizerDelegate> {

	IGFeedItem* _item;
	float _presentationProgress;
	id<IGAlbumFeedbackDelegate> _delegate;
	IGAlbumFeedbackHeaderView* _headerView;
	IGListCollectionView* _collectionView;
	IGListAdapter* _adapter;
	UITapGestureRecognizer* _tapGesture;
	UISwipeGestureRecognizer* _swipeGesture;
	IGAlbumSaveMediaRequest* _saveRequest;

}

@property (nonatomic,readonly) IGAlbumFeedbackHeaderView * headerView;                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                                //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGesture;                    //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * swipeGesture;                //@synthesize swipeGesture=_swipeGesture - In the implementation block
@property (nonatomic,retain) IGAlbumSaveMediaRequest * saveRequest;                    //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,retain) IGFeedItem * item;                                        //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) float presentationProgress;                               //@synthesize presentationProgress=_presentationProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumFeedbackDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)handleTapGesture:(id)arg1 ;
-(void)handleSwipeGesture:(id)arg1 ;
-(void)deleteButtonPressed;
-(void)shareButtonPressed;
-(float)presentationProgress;
-(UITapGestureRecognizer *)tapGesture;
-(void)saveItem;
-(void)setSaveRequest:(IGAlbumSaveMediaRequest *)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)saveMediaRequestDidFinishSaving:(id)arg1 ;
-(void)saveMediaRequestDidFailSaving:(id)arg1 ;
-(void)setPresentationProgress:(float)arg1 ;
-(UISwipeGestureRecognizer *)swipeGesture;
-(IGAlbumSaveMediaRequest *)saveRequest;
-(IGListAdapter *)adapter;
-(void)setDelegate:(id<IGAlbumFeedbackDelegate>)arg1 ;
-(id<IGAlbumFeedbackDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(IGFeedItem *)item;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(IGAlbumFeedbackHeaderView *)headerView;
-(void)setItem:(IGFeedItem *)arg1 ;
-(char)prefersNavigationBarHidden;
@end

