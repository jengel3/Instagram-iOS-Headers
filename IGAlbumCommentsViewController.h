
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGCommentThreadManagerDelegate.h>
#import <Instagram/IGCommentLoadItemDelegate.h>
#import <Instagram/IGAlbumCommentItemDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGAlbumCommentsViewControllerDelegate;
@class UIView, IGLabel, IGTapButton, IGListCollectionView, IGListAdapter, IGCommentThreadManager, IGTextField, NSString, UITapGestureRecognizer, MNParticleSystemView, IGViewParticleSystemController, IGFeedItem;

@interface IGAlbumCommentsViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGCommentThreadManagerDelegate, IGCommentLoadItemDelegate, IGAlbumCommentItemDelegate, IGTextFieldDelegate> {

	char _scrolledToBottomOnce;
	char _autoScrollPaused;
	id<IGAlbumCommentsViewControllerDelegate> _delegate;
	UIView* _headerView;
	IGLabel* _numCommentsLabel;
	IGTapButton* _commentsButton;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGCommentThreadManager* _threadManager;
	IGTextField* _commentTextView;
	IGTapButton* _heartButton;
	NSString* _placeholderText;
	float _textViewMinHeight;
	UITapGestureRecognizer* _viewTap;
	MNParticleSystemView* _particleSystemView;
	IGViewParticleSystemController* _particleSystemController;

}

@property (nonatomic,readonly) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGLabel * numCommentsLabel;                                             //@synthesize numCommentsLabel=_numCommentsLabel - In the implementation block
@property (nonatomic,retain) IGTapButton * commentsButton;                                             //@synthesize commentsButton=_commentsButton - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                            //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGCommentThreadManager * threadManager;                                 //@synthesize threadManager=_threadManager - In the implementation block
@property (nonatomic,readonly) IGTextField * commentTextView;                                          //@synthesize commentTextView=_commentTextView - In the implementation block
@property (nonatomic,readonly) IGTapButton * heartButton;                                              //@synthesize heartButton=_heartButton - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText;                                             //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,readonly) float textViewMinHeight;                                                //@synthesize textViewMinHeight=_textViewMinHeight - In the implementation block
@property (assign,nonatomic) char scrolledToBottomOnce;                                                //@synthesize scrolledToBottomOnce=_scrolledToBottomOnce - In the implementation block
@property (assign,nonatomic) char autoScrollPaused;                                                    //@synthesize autoScrollPaused=_autoScrollPaused - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * viewTap;                                       //@synthesize viewTap=_viewTap - In the implementation block
@property (nonatomic,readonly) MNParticleSystemView * particleSystemView;                              //@synthesize particleSystemView=_particleSystemView - In the implementation block
@property (nonatomic,readonly) IGViewParticleSystemController * particleSystemController;              //@synthesize particleSystemController=_particleSystemController - In the implementation block
@property (nonatomic,readonly) IGFeedItem * currentFeedItem; 
@property (assign,nonatomic,__weak) id<IGAlbumCommentsViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)updateCommentsLabelCount;
-(void)setupHeaderView;
-(void)viewTapped;
-(IGLabel *)numCommentsLabel;
-(IGTapButton *)heartButton;
-(MNParticleSystemView *)particleSystemView;
-(void)heartTapped;
-(UITapGestureRecognizer *)viewTap;
-(IGViewParticleSystemController *)particleSystemController;
-(IGFeedItem *)currentFeedItem;
-(id)initWithFeedItem:(id)arg1 ;
-(IGTapButton *)commentsButton;
-(void)setCommentsButton:(IGTapButton *)arg1 ;
-(void)setupCollectionViewAndAdapter;
-(void)setupTextViewAndAutocomplete;
-(IGCommentThreadManager *)threadManager;
-(IGTextField *)commentTextView;
-(char)shouldAutoScrollToBottom;
-(float)textViewMinHeight;
-(void)onSendButtonTapped:(id)arg1 ;
-(void)setScrolledToBottomOnce:(char)arg1 ;
-(char)scrolledToBottomOnce;
-(char)autoScrollPaused;
-(char)collectionViewIsAtBottom;
-(void)postComment;
-(IGListAdapter *)listAdapter;
-(void)setAutoScrollPaused:(char)arg1 ;
-(void)didUpdateCommentThreadManager:(id)arg1 operation:(unsigned)arg2 ;
-(void)didTapCommentLoadItemController:(id)arg1 ;
-(void)commentController:(id)arg1 didTapReplyForUser:(id)arg2 ;
-(void)commentController:(id)arg1 didTapURL:(id)arg2 ;
-(void)commentController:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)commentController:(id)arg1 didReportComment:(id)arg2 ;
-(id)analyticsExtras;
-(char)prefersTabBarHidden;
-(void)textFieldDidChange:(id)arg1 ;
-(NSString *)placeholderText;
-(void)setDelegate:(id<IGAlbumCommentsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGAlbumCommentsViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(UIView *)headerView;
-(void)dismiss;
-(char)prefersNavigationBarHidden;
@end

