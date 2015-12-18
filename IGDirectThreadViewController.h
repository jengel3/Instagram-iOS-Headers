
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGDirectContentUpoadCellDelegate.h>
#import <Instagram/IGDirectContentCellTextLinkDelegate.h>
#import <Instagram/FBKeyboardObserverDelegate.h>
#import <Instagram/IGDirectPendingRequestButtonDelegate.h>
#import <Instagram/IGDirectKeyboardTextViewControllerDelegate.h>
#import <Instagram/IGSeenStampFooterDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGDirectThreadInfoDelegate.h>
#import <Instagram/IGQuickCamViewControllerDelegate.h>
#import <Instagram/IGDirectShareManagerDataSource.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/IGImageViewDelegate.h>
#import <Instagram/IGDirectGroupNamingViewControllerDelegate.h>

@protocol IGDirectThreadViewControllerDelegate, IGDirectPendingThreadViewDelegate;
@class NSNumber, IGDirectThread, NSArray, IGUser, UICollectionView, IGDirectThreadCellFactory, IGDirectThreadCellExpansionAnimator, IGDirectThreadLayout, UIBarButtonItem, IGDirectContent, IGDirectPendingRequestButtons, IGDirectGroupNamingViewController, UIView, IGProfilePictureImageView, UIButton, IGQuickCamViewController, IGDirectShareManager, IGTokenField, FBKeyboardObserver, IGDirectKeyboardTextViewController, UIPanGestureRecognizer, UITapGestureRecognizer, IGAlertBar, NSNotification, NSString;

@interface IGDirectThreadViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGDirectContentUpoadCellDelegate, IGDirectContentCellTextLinkDelegate, FBKeyboardObserverDelegate, IGDirectPendingRequestButtonDelegate, IGDirectKeyboardTextViewControllerDelegate, IGSeenStampFooterDelegate, UIGestureRecognizerDelegate, IGDirectThreadInfoDelegate, IGQuickCamViewControllerDelegate, IGDirectShareManagerDataSource, IGTokenFieldDelegate, IGImageViewDelegate, IGDirectGroupNamingViewControllerDelegate> {

	char _loadingPreviousMessages;
	char _unseenMessageVisible;
	char _isLoadingForFirstTime;
	char _shouldScrollToBottomAfterContentSizeChange;
	char _shouldAnimateScrollingToBottom;
	char _isSpamming;
	int _state;
	id<IGDirectThreadViewControllerDelegate> _threadDelegate;
	id<IGDirectPendingThreadViewDelegate> _pendingDelegate;
	NSNumber* _position;
	IGDirectThread* _thread;
	NSArray* _recipientUsers;
	IGUser* _threadViewer;
	NSArray* _allContent;
	UICollectionView* _collectionView;
	IGDirectThreadCellFactory* _cellFactory;
	IGDirectThreadCellExpansionAnimator* _expansionAnimator;
	IGDirectThreadLayout* _layout;
	float _bottomInsetY;
	UIBarButtonItem* _infoIcon;
	UIBarButtonItem* _nextButton;
	IGDirectContent* _menuControllerItem;
	IGDirectPendingRequestButtons* _pendingRequestButtons;
	IGDirectGroupNamingViewController* _groupNamingVC;
	UIView* _threadInputView;
	UIView* _keyboardView;
	IGProfilePictureImageView* _unseenMessageProfilePicture;
	UIButton* _unseenMessageButton;
	float _unseenMessageWidth;
	float _unseenMessageHeight;
	IGQuickCamViewController* _quickCamViewController;
	IGDirectContent* _lastUnseenContent;
	IGDirectContent* _lastSeenContent;
	IGDirectShareManager* _shareManager;
	IGTokenField* _tokenField;
	float _visibleKeyboardHeight;
	int _keyboardState;
	int _priorKeyboardState;
	FBKeyboardObserver* _keyboardObserver;
	IGDirectKeyboardTextViewController* _textViewController;
	UIPanGestureRecognizer* _timestampPanRecognizer;
	UITapGestureRecognizer* _dismissEmojiGestureRecognizer;
	IGAlertBar* _loadingAlertBar;
	NSNumber* _distanceToBottomToKeep;
	NSNotification* _deferredThreadUpdatedNotification;

}

@property (assign,nonatomic) int state;                                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectThreadViewControllerDelegate> threadDelegate;              //@synthesize threadDelegate=_threadDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingThreadViewDelegate> pendingDelegate;                //@synthesize pendingDelegate=_pendingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID; 
@property (nonatomic,retain) NSNumber * position;                                                         //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) IGDirectThread * thread;                                                     //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) NSArray * recipientUsers;                                                    //@synthesize recipientUsers=_recipientUsers - In the implementation block
@property (nonatomic,retain) IGUser * threadViewer;                                                       //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) NSArray * allContent;                                                        //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThreadCellFactory * cellFactory;                                     //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) IGDirectThreadCellExpansionAnimator * expansionAnimator;                     //@synthesize expansionAnimator=_expansionAnimator - In the implementation block
@property (nonatomic,retain) IGDirectThreadLayout * layout;                                               //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) float bottomInsetY;                                                          //@synthesize bottomInsetY=_bottomInsetY - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * infoIcon;                                                  //@synthesize infoIcon=_infoIcon - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                                //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGDirectContent * menuControllerItem;                                        //@synthesize menuControllerItem=_menuControllerItem - In the implementation block
@property (assign,nonatomic) char loadingPreviousMessages;                                                //@synthesize loadingPreviousMessages=_loadingPreviousMessages - In the implementation block
@property (nonatomic,retain) IGDirectPendingRequestButtons * pendingRequestButtons;                       //@synthesize pendingRequestButtons=_pendingRequestButtons - In the implementation block
@property (nonatomic,retain) IGDirectGroupNamingViewController * groupNamingVC;                           //@synthesize groupNamingVC=_groupNamingVC - In the implementation block
@property (nonatomic,retain) UIView * threadInputView;                                                    //@synthesize threadInputView=_threadInputView - In the implementation block
@property (nonatomic,retain) UIView * keyboardView;                                                       //@synthesize keyboardView=_keyboardView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * unseenMessageProfilePicture;                     //@synthesize unseenMessageProfilePicture=_unseenMessageProfilePicture - In the implementation block
@property (nonatomic,retain) UIButton * unseenMessageButton;                                              //@synthesize unseenMessageButton=_unseenMessageButton - In the implementation block
@property (assign,nonatomic) float unseenMessageWidth;                                                    //@synthesize unseenMessageWidth=_unseenMessageWidth - In the implementation block
@property (assign,nonatomic) float unseenMessageHeight;                                                   //@synthesize unseenMessageHeight=_unseenMessageHeight - In the implementation block
@property (assign,nonatomic) char unseenMessageVisible;                                                   //@synthesize unseenMessageVisible=_unseenMessageVisible - In the implementation block
@property (nonatomic,retain) IGQuickCamViewController * quickCamViewController;                           //@synthesize quickCamViewController=_quickCamViewController - In the implementation block
@property (nonatomic,retain) IGDirectContent * lastUnseenContent;                                         //@synthesize lastUnseenContent=_lastUnseenContent - In the implementation block
@property (nonatomic,retain) IGDirectContent * lastSeenContent;                                           //@synthesize lastSeenContent=_lastSeenContent - In the implementation block
@property (nonatomic,retain) IGDirectShareManager * shareManager;                                         //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                                                   //@synthesize tokenField=_tokenField - In the implementation block
@property (assign,nonatomic) float visibleKeyboardHeight;                                                 //@synthesize visibleKeyboardHeight=_visibleKeyboardHeight - In the implementation block
@property (assign,nonatomic) int keyboardState;                                                           //@synthesize keyboardState=_keyboardState - In the implementation block
@property (assign,nonatomic) int priorKeyboardState;                                                      //@synthesize priorKeyboardState=_priorKeyboardState - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;                                       //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) IGDirectKeyboardTextViewController * textViewController;                     //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * timestampPanRecognizer;                             //@synthesize timestampPanRecognizer=_timestampPanRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissEmojiGestureRecognizer;                      //@synthesize dismissEmojiGestureRecognizer=_dismissEmojiGestureRecognizer - In the implementation block
@property (nonatomic,retain) IGAlertBar * loadingAlertBar;                                                //@synthesize loadingAlertBar=_loadingAlertBar - In the implementation block
@property (assign,nonatomic) char isLoadingForFirstTime;                                                  //@synthesize isLoadingForFirstTime=_isLoadingForFirstTime - In the implementation block
@property (nonatomic,retain) NSNumber * distanceToBottomToKeep;                                           //@synthesize distanceToBottomToKeep=_distanceToBottomToKeep - In the implementation block
@property (assign,nonatomic) char shouldScrollToBottomAfterContentSizeChange;                             //@synthesize shouldScrollToBottomAfterContentSizeChange=_shouldScrollToBottomAfterContentSizeChange - In the implementation block
@property (assign,nonatomic) char shouldAnimateScrollingToBottom;                                         //@synthesize shouldAnimateScrollingToBottom=_shouldAnimateScrollingToBottom - In the implementation block
@property (nonatomic,retain) NSNotification * deferredThreadUpdatedNotification;                          //@synthesize deferredThreadUpdatedNotification=_deferredThreadUpdatedNotification - In the implementation block
@property (assign,nonatomic) char isSpamming;                                                             //@synthesize isSpamming=_isSpamming - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollToBottomAnimated:(char)arg1 ;
-(char)prefersTabBarHidden;
-(float)textViewHeight;
-(id)initWithThreadID:(id)arg1 ;
-(void)fetchAndLoadThreadWithID:(id)arg1 ;
-(void)setThreadDelegate:(id<IGDirectThreadViewControllerDelegate>)arg1 ;
-(NSArray *)allContent;
-(void)threadUpdated:(id)arg1 ;
-(void)setPendingDelegate:(id<IGDirectPendingThreadViewDelegate>)arg1 ;
-(char)disableNonEdgeNavigationGesture;
-(void)pendingRequestButtonDidDenyThread:(id)arg1 ;
-(void)pendingRequestButtonDidAllowThread:(id)arg1 ;
-(UIEdgeInsets)contentInsetsForManager:(id)arg1 ;
-(id)currentQueryForManager:(id)arg1 ;
-(id)recipientsForManager:(id)arg1 ;
-(char)manager:(id)arg1 wantsToSelectUser:(id)arg2 ;
-(void)quickCamViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)quickCamViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)contentCell:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)directContentUploadCell:(id)arg1 wantsDeleteForContent:(id)arg2 ;
-(void)contentCell:(id)arg1 profilePictureWasTappedWithUser:(id)arg2 ;
-(char)contentCellShouldLongPress:(id)arg1 ;
-(void)contentCellDidLongPress:(id)arg1 ;
-(void)seenStampFooterView:(id)arg1 wantsExpansion:(char)arg2 fromHeight:(float)arg3 toHeight:(float)arg4 ;
-(void)setShareManager:(IGDirectShareManager *)arg1 ;
-(IGDirectShareManager *)shareManager;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(FBKeyboardObserver *)keyboardObserver;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)tokenFieldWillBeginEditing:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(void)didTapCloseButtonForViewControllerDidBeginEditing:(id)arg1 ;
-(void)groupNamingViewControllerDidBeginEditing:(id)arg1 ;
-(void)changeToValidatedThreadName:(id)arg1 groupNamingViewController:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 didTapSendWithText:(id)arg2 ;
-(void)keyboardTextViewControllerDidTapCamera:(id)arg1 ;
-(void)keyboardTextViewControllerDidTapLike:(id)arg1 ;
-(char)keyboardTextViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)keyboardTextViewController:(id)arg1 textViewWillBeginEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 textViewDidBeginEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 textViewDidEndEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2 ;
-(void)keyboardTextViewControllerDidDismissCamera:(id)arg1 ;
-(void)keyboardTextViewControllerDidTapCameraBackButton:(id)arg1 ;
-(void)threadInfoViewController:(id)arg1 didHideThread:(id)arg2 ;
-(void)threadInfoViewController:(id)arg1 didRenameThreadWithID:(id)arg2 toName:(id)arg3 ;
-(void)setAllContent:(NSArray *)arg1 ;
-(void)onCollectionViewScroll:(id)arg1 ;
-(void)initializeThreadComponents;
-(IGUser *)threadViewer;
-(void)setCellFactory:(IGDirectThreadCellFactory *)arg1 ;
-(void)setExpansionAnimator:(IGDirectThreadCellExpansionAnimator *)arg1 ;
-(void)openThreadInfoView;
-(void)setInfoIcon:(UIBarButtonItem *)arg1 ;
-(void)composerNextButtonTapped;
-(void)createAndAddShareManager;
-(void)createAndAddTokenField;
-(void)layoutUnseenMessageButton;
-(void)setLoadingAlertBar:(IGAlertBar *)arg1 ;
-(IGAlertBar *)loadingAlertBar;
-(UITapGestureRecognizer *)dismissEmojiGestureRecognizer;
-(UIPanGestureRecognizer *)timestampPanRecognizer;
-(void)setTextViewController:(IGDirectKeyboardTextViewController *)arg1 ;
-(IGDirectKeyboardTextViewController *)textViewController;
-(void)onInteractivePan:(id)arg1 ;
-(void)setPendingRequestButtons:(IGDirectPendingRequestButtons *)arg1 ;
-(IGDirectPendingRequestButtons *)pendingRequestButtons;
-(float)bottomInsetYWhenKeyboardIsDismissed;
-(void)updateBottomInsetY:(float)arg1 ;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 ;
-(void)sendSeenTimestampForContent:(id)arg1 ;
-(void)updateLocalThread:(id)arg1 ;
-(void)onForeground;
-(char)isSpamming;
-(void)sendSpam;
-(void)setIsSpamming:(char)arg1 ;
-(id)titleForRealtimeToggleButtonForStatus:(unsigned)arg1 ;
-(void)showGroupNamingBar;
-(void)hideGroupNamingBar;
-(void)onDirectPosted:(id)arg1 ;
-(int)decodedImageCacheCostLimit;
-(char)isLoadingForFirstTime;
-(void)updateTopInsets;
-(void)setVisibleKeyboardHeight:(float)arg1 ;
-(IGQuickCamViewController *)quickCamViewController;
-(void)closeQuickCamInBackground;
-(void)setThreadInputView:(UIView *)arg1 ;
-(UIView *)keyboardView;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 showLoadingIndicator:(char)arg4 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)setShouldScrollToBottomAfterContentSizeChange:(char)arg1 ;
-(void)setShouldAnimateScrollingToBottom:(char)arg1 ;
-(char)loadingPreviousMessages;
-(void)setLoadingPreviousMessages:(char)arg1 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 keepVisiblePosition:(char)arg3 ;
-(void)setIsLoadingForFirstTime:(char)arg1 ;
-(void)updateThreadAndTitleWithThreadID:(id)arg1 ;
-(void)setDistanceToBottomToKeep:(NSNumber *)arg1 ;
-(void)updateNewMessageIndicator;
-(NSArray *)recipientUsers;
-(float)offSetYWhenScrolledToBottom;
-(char)updateLastSeenContent;
-(void)setBottomInsetY:(float)arg1 ;
-(void)updateQuickCamViewFrameForBottimInsetY:(float)arg1 ;
-(void)updateCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(IGDirectGroupNamingViewController *)groupNamingVC;
-(IGDirectThreadCellFactory *)cellFactory;
-(IGDirectThreadCellExpansionAnimator *)expansionAnimator;
-(NSNotification *)deferredThreadUpdatedNotification;
-(void)setDeferredThreadUpdatedNotification:(NSNotification *)arg1 ;
-(void)configureSeenStamp:(id)arg1 ;
-(UIButton *)unseenMessageButton;
-(void)setUnseenMessageHeight:(float)arg1 ;
-(void)setUnseenMessageWidth:(float)arg1 ;
-(IGProfilePictureImageView *)unseenMessageProfilePicture;
-(float)unseenMessageWidth;
-(IGDirectContent *)lastSeenContent;
-(char)canSeeLatestContent;
-(void)animateOutProfileBubble;
-(void)setLastUnseenContent:(IGDirectContent *)arg1 ;
-(void)animateInProfileBubbleWithUser:(id)arg1 ;
-(char)unseenMessageVisible;
-(void)setUnseenMessageVisible:(char)arg1 ;
-(float)unseenMessageHeight;
-(void)unseenMessageIndicatorTapped;
-(char)currentThreadUsersMatchTokenField;
-(id)recipientForCurrentState;
-(void)handleSendWithSuccess:(char)arg1 andResponse:(id)arg2 ;
-(void)updateFromSend;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 ;
-(void)showFailToSend;
-(void)setKeyboardView:(UIView *)arg1 ;
-(void)showQuickCam:(char)arg1 ;
-(float)visibleKeyboardHeight;
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setQuickCamViewController:(IGQuickCamViewController *)arg1 ;
-(float)bottomInsetY;
-(void)onQuickCamInteractivePan:(id)arg1 ;
-(void)setPriorKeyboardState:(int)arg1 ;
-(int)priorKeyboardState;
-(char)users:(id)arg1 matchUsersInThread:(id)arg2 ;
-(void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)onInteractivePanGesture:(id)arg1 suggestedTextViewControllerTopY:(float)arg2 shouldCompensateScroll:(char)arg3 ;
-(UIView *)threadInputView;
-(void)finishShowingThreadInputViewIfNeeded:(char)arg1 ;
-(void)finishHidingThreadInputViewIfNeeded:(char)arg1 ;
-(void)reallyFinishHidingThreadInputView;
-(void)sneakinglyEndEditingIfNeeded;
-(void)reallyFinishShowingThreadInputView;
-(void)performDeleteForContent:(id)arg1 ;
-(IGDirectContent *)menuControllerItem;
-(void)setMenuControllerItem:(IGDirectContent *)arg1 ;
-(void)unsend:(id)arg1 ;
-(void)flag:(id)arg1 ;
-(void)reportContent:(id)arg1 ;
-(id<IGDirectThreadViewControllerDelegate>)threadDelegate;
-(id<IGDirectPendingThreadViewDelegate>)pendingDelegate;
-(UIBarButtonItem *)infoIcon;
-(void)updateSeenUsers;
-(id)currentThreadTitle;
-(void)collectionViewDidScrollFromYPosition:(float)arg1 toYPosition:(float)arg2 ;
-(NSNumber *)distanceToBottomToKeep;
-(char)shouldScrollToBottomAfterContentSizeChange;
-(char)shouldAnimateScrollingToBottom;
-(void)loadPreviousMessages;
-(void)setLastSeenContent:(IGDirectContent *)arg1 ;
-(void)setRecipientUsers:(NSArray *)arg1 ;
-(void)composerSetTextViewControllerVisibility;
-(void)composerPreloadThread;
-(void)setGroupNamingVC:(IGDirectGroupNamingViewController *)arg1 ;
-(void)onDismissEmojiTap:(id)arg1 ;
-(void)onTimestampPan:(id)arg1 ;
-(id)initWithUsers:(id)arg1 ;
-(void)messageSpamTapped:(id)arg1 ;
-(void)toggleRealtimeTapped:(id)arg1 ;
-(void)performHideForContent:(id)arg1 ;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)setUnseenMessageProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(void)setUnseenMessageButton:(UIButton *)arg1 ;
-(IGDirectContent *)lastUnseenContent;
-(void)setTimestampPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setDismissEmojiGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)updateTitle;
-(void)dealloc;
-(id)init;
-(int)state;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setPosition:(NSNumber *)arg1 ;
-(char)canBecomeFirstResponder;
-(NSNumber *)position;
-(IGDirectThreadLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)copy:(id)arg1 ;
-(void)setLayout:(IGDirectThreadLayout *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
-(NSString *)threadID;
-(void)needsRefresh;
-(void)updateNextButton;
-(char)prefersNavigationBarHidden;
-(int)keyboardState;
-(void)setKeyboardState:(int)arg1 ;
@end

