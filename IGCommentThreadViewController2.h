
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGCommentThreadManagerDelegate.h>
#import <Instagram/IGCommentLoadStoryDelegate.h>
#import <Instagram/IGBulkCommentDeleteManagerDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGCommentStoryDelegate.h>

@class IGListCollectionView, IGListAdapter, IGCommentThreadManager, IGBulkCommentDeleteManager, IGCommentTextView, IGKeyboardInputManager, NSString;

@interface IGCommentThreadViewController2 : IGViewController <IGListAdapterDataSource, UICollectionViewDelegateFlowLayout, IGCommentThreadManagerDelegate, IGCommentLoadStoryDelegate, IGBulkCommentDeleteManagerDelegate, IGGrowingTextViewDelegate, IGCommentStoryDelegate> {

	char _showKeyboardOnAppear;
	char _appearedOnce;
	char _scrolledToBottomOnce;
	char _autoScrollPaused;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGCommentThreadManager* _threadManager;
	IGBulkCommentDeleteManager* _bulkDeleteManager;
	IGCommentTextView* _commentTextView;
	IGKeyboardInputManager* _keyboardInputManager;
	NSString* _prefillText;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                 //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGCommentThreadManager * threadManager;                      //@synthesize threadManager=_threadManager - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;              //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (nonatomic,readonly) IGCommentTextView * commentTextView;                         //@synthesize commentTextView=_commentTextView - In the implementation block
@property (nonatomic,readonly) IGKeyboardInputManager * keyboardInputManager;               //@synthesize keyboardInputManager=_keyboardInputManager - In the implementation block
@property (nonatomic,readonly) NSString * prefillText;                                      //@synthesize prefillText=_prefillText - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText;                                  //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,readonly) char showKeyboardOnAppear;                                   //@synthesize showKeyboardOnAppear=_showKeyboardOnAppear - In the implementation block
@property (assign,nonatomic) char appearedOnce;                                             //@synthesize appearedOnce=_appearedOnce - In the implementation block
@property (assign,nonatomic) char scrolledToBottomOnce;                                     //@synthesize scrolledToBottomOnce=_scrolledToBottomOnce - In the implementation block
@property (assign,nonatomic) char autoScrollPaused;                                         //@synthesize autoScrollPaused=_autoScrollPaused - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPost:(id)arg1 prefillText:(id)arg2 currentUser:(id)arg3 multiAccounts:(char)arg4 showKeyboardOnAppear:(char)arg5 ;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(IGListAdapter *)listAdapter;
-(void)didTapReplyForComment:(id)arg1 ;
-(void)didTapCommentLoadItemController:(id)arg1 ;
-(void)didUpdateCommentThreadManager:(id)arg1 ;
-(id)formattedReplyString:(id)arg1 ;
-(void)setupListAdapter;
-(void)setupTextView;
-(IGCommentThreadManager *)threadManager;
-(IGCommentTextView *)commentTextView;
-(char)showKeyboardOnAppear;
-(char)appearedOnce;
-(void)setAppearedOnce:(char)arg1 ;
-(NSString *)prefillText;
-(void)onSendButtonTapped:(id)arg1 ;
-(char)scrolledToBottomOnce;
-(char)autoScrollPaused;
-(char)collectionViewIsAtBottom;
-(void)setAutoScrollPaused:(char)arg1 ;
-(char)shouldAutoScrollToBottom;
-(void)setScrolledToBottomOnce:(char)arg1 ;
-(id)commentDeleteUndoMessageForNumberOfComments:(int)arg1 ;
-(IGKeyboardInputManager *)keyboardInputManager;
-(id)objectsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForObject:(id)arg2 ;
-(void)commentDeleteManagerDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2 ;
-(void)commentDeleteManagerDidStartCommentDeletion:(id)arg1 ;
-(void)commentDeleteManagerDidFinishCommentDeletion:(id)arg1 ;
-(void)commentDeleteManagerDidFailToDeleteComments:(id)arg1 ;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(char)prefersTabBarHidden;
-(NSString *)placeholderText;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setupCollectionView;
@end

