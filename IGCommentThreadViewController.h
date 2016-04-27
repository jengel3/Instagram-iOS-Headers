
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGCommentThreadManagerDelegate.h>
#import <Instagram/IGCommentLoadItemDelegate.h>
#import <Instagram/IGBulkCommentDeleteManagerDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGCommentItemDelegate.h>
#import <Instagram/IGCommentReshareHelperDelegate.h>
#import <Instagram/IGCommentReshareUIManagerDelegate.h>

@protocol IGCommentTextViewProtocol;
@class IGListCollectionView, IGListAdapter, IGCommentThreadManager, IGBulkCommentDeleteManager, UIView, IGKeyboardInputManager, IGCommentCellRevealManager, IGAutocompleteController, IGCommentReshareHelper, IGCommentReshareUIManager, IGCommentReshareRecord, NSString;

@interface IGCommentThreadViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGCommentThreadManagerDelegate, IGCommentLoadItemDelegate, IGBulkCommentDeleteManagerDelegate, IGGrowingTextViewDelegate, IGAutocompleteControllerDelegate, IGCommentItemDelegate, IGCommentReshareHelperDelegate, IGCommentReshareUIManagerDelegate> {

	char _shouldSupportReshare;
	char _showKeyboardOnAppear;
	char _appearedOnce;
	char _scrolledToBottomOnce;
	char _autoScrollPaused;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGCommentThreadManager* _threadManager;
	IGBulkCommentDeleteManager* _bulkDeleteManager;
	UIView*<IGCommentTextViewProtocol> _commentTextView;
	IGKeyboardInputManager* _keyboardInputManager;
	IGCommentCellRevealManager* _cellRevealManager;
	IGAutocompleteController* _autocompleteController;
	IGCommentReshareHelper* _commentReshareHelper;
	IGCommentReshareUIManager* _commentReshareUIManager;
	IGCommentReshareRecord* _commentReshareRecord;
	float _textViewMinHeight;
	NSString* _prefillText;
	NSString* _placeholderText;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                                           //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGCommentThreadManager * threadManager;                                                //@synthesize threadManager=_threadManager - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;                                        //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (nonatomic,readonly) UIView*<IGCommentTextViewProtocol> commentTextView;                                    //@synthesize commentTextView=_commentTextView - In the implementation block
@property (nonatomic,readonly) UIView*<IGCommentTextViewWithReshareProtocol> commentTextViewWithReshare; 
@property (nonatomic,readonly) IGKeyboardInputManager * keyboardInputManager;                                         //@synthesize keyboardInputManager=_keyboardInputManager - In the implementation block
@property (nonatomic,readonly) IGCommentCellRevealManager * cellRevealManager;                                        //@synthesize cellRevealManager=_cellRevealManager - In the implementation block
@property (nonatomic,readonly) IGAutocompleteController * autocompleteController;                                     //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,readonly) char shouldSupportReshare;                                                             //@synthesize shouldSupportReshare=_shouldSupportReshare - In the implementation block
@property (nonatomic,readonly) IGCommentReshareHelper * commentReshareHelper;                                         //@synthesize commentReshareHelper=_commentReshareHelper - In the implementation block
@property (nonatomic,readonly) IGCommentReshareUIManager * commentReshareUIManager;                                   //@synthesize commentReshareUIManager=_commentReshareUIManager - In the implementation block
@property (nonatomic,retain) IGCommentReshareRecord * commentReshareRecord;                                           //@synthesize commentReshareRecord=_commentReshareRecord - In the implementation block
@property (nonatomic,readonly) float textViewMinHeight;                                                               //@synthesize textViewMinHeight=_textViewMinHeight - In the implementation block
@property (nonatomic,readonly) NSString * prefillText;                                                                //@synthesize prefillText=_prefillText - In the implementation block
@property (nonatomic,readonly) NSString * placeholderText;                                                            //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,readonly) char showKeyboardOnAppear;                                                             //@synthesize showKeyboardOnAppear=_showKeyboardOnAppear - In the implementation block
@property (assign,nonatomic) char appearedOnce;                                                                       //@synthesize appearedOnce=_appearedOnce - In the implementation block
@property (assign,nonatomic) char scrolledToBottomOnce;                                                               //@synthesize scrolledToBottomOnce=_scrolledToBottomOnce - In the implementation block
@property (assign,nonatomic) char autoScrollPaused;                                                                   //@synthesize autoScrollPaused=_autoScrollPaused - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(void)reshareHelper:(id)arg1 didChangeStatusFrom:(int)arg2 to:(int)arg3 ;
-(void)didDismissReshareUI;
-(void)setupCollectionViewAndAdapter;
-(void)setupTextViewAndAutocomplete;
-(IGCommentThreadManager *)threadManager;
-(UIView*<IGCommentTextViewProtocol>)commentTextView;
-(void)commentCreateRequestFailed:(id)arg1 ;
-(void)setupReshareUIManager;
-(char)showKeyboardOnAppear;
-(char)appearedOnce;
-(void)setAppearedOnce:(char)arg1 ;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(IGAutocompleteController *)autocompleteController;
-(IGKeyboardInputManager *)keyboardInputManager;
-(float)textViewMinHeight;
-(char)shouldSupportReshare;
-(NSString *)prefillText;
-(void)onSendButtonTapped:(id)arg1 ;
-(UIView*<IGCommentTextViewWithReshareProtocol>)commentTextViewWithReshare;
-(void)onModeSwitchButtonTapped:(id)arg1 ;
-(char)scrolledToBottomOnce;
-(char)autoScrollPaused;
-(char)collectionViewIsAtBottom;
-(IGCommentReshareHelper *)commentReshareHelper;
-(void)updateText:(id)arg1 ;
-(void)resharePost;
-(void)postComment;
-(void)setCommentReshareRecord:(IGCommentReshareRecord *)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)commitAutoCorrectSuggestionsAndUpdateTextForReshare;
-(void)setAutoScrollPaused:(char)arg1 ;
-(IGCommentCellRevealManager *)cellRevealManager;
-(IGCommentReshareRecord *)commentReshareRecord;
-(char)shouldAutoScrollToBottom;
-(void)setScrolledToBottomOnce:(char)arg1 ;
-(id)commentDeleteUndoMessageForNumberOfComments:(int)arg1 ;
-(IGCommentReshareUIManager *)commentReshareUIManager;
-(void)didUpdateCommentThreadManager:(id)arg1 operation:(unsigned)arg2 ;
-(void)didTapCommentLoadItemController:(id)arg1 ;
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
-(void)commentController:(id)arg1 didTapReplyForUser:(id)arg2 ;
-(void)commentController:(id)arg1 didTapURL:(id)arg2 ;
-(void)commentController:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)commentController:(id)arg1 didReportComment:(id)arg2 ;
-(id)initWithFeedItem:(id)arg1 prefillText:(id)arg2 currentUser:(id)arg3 loggingDelegate:(id)arg4 multiAccounts:(char)arg5 shouldSupportReshare:(char)arg6 showKeyboardOnAppear:(char)arg7 ;
-(char)prefersTabBarHidden;
-(id)analyticsExtras;
-(NSString *)placeholderText;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

