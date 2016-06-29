
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
#import <Instagram/IGSelectAlbumDelegate.h>
#import <Instagram/IGDirectReactionDecoratorDelegate.h>
#import <Instagram/IGMediaOverlayViewControllerDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGUIPerfLoggable.h>
#import <Instagram/IGDirectViewControllerProtocol.h>

@protocol IGDirectPendingThreadViewDelegate;
@class UICollectionView, IGCameraNavigationController, IGDirectThread, NSString, NSNumber, IGUserSession, IGDirectMenuController, NSArray, NSMutableArray, IGUser, IGDirectThreadCellFactory, IGDirectThreadCellExpansionAnimator, IGDirectThreadLayout, UIBarButtonItem, IGDirectContent, IGDirectPendingRequestButtons, IGDirectGroupNamingViewController, IGDirectDebuggingViewController, UIView, IGProfilePictureImageView, UIButton, IGQuickCamViewController, IGQuickCamViewController2, IGDirectShareManager, IGTokenField, FBKeyboardObserver, IGDirectKeyboardTextViewController, UIPanGestureRecognizer, IGAlertBar, IGFullScreenTransitioningManager, IGDirectContentExpandableCell, NSNotification, IGDirectUIPerfLogProxy, IGDirectThreadAnalyticsLogger, IGDirectThreadDataTransformer;

@interface IGDirectThreadViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGDirectContentUpoadCellDelegate, IGDirectContentCellTextLinkDelegate, FBKeyboardObserverDelegate, IGDirectPendingRequestButtonDelegate, IGDirectKeyboardTextViewControllerDelegate, IGSeenStampFooterDelegate, UIGestureRecognizerDelegate, IGDirectThreadInfoDelegate, IGQuickCamViewControllerDelegate, IGDirectShareManagerDataSource, IGTokenFieldDelegate, IGImageViewDelegate, IGDirectGroupNamingViewControllerDelegate, IGSelectAlbumDelegate, IGDirectReactionDecoratorDelegate, IGMediaOverlayViewControllerDelegate, IGCameraNavigationControllerDelegate, IGUIPerfLoggable, IGDirectViewControllerProtocol> {

	char _didComeFromPushNotif;
	char _loadingPreviousMessages;
	char _unseenMessageVisible;
	char _isLoadingForFirstTime;
	char _shouldScrollToBottomAfterContentSizeChange;
	char _shouldAnimateScrollingToBottom;
	UICollectionView* _collectionView;
	IGDirectThread* _thread;
	NSString* _threadID;
	IGCameraNavigationController* _cameraNavigationController;
	int _state;
	id<IGDirectPendingThreadViewDelegate> _pendingDelegate;
	NSNumber* _position;
	IGUserSession* _userSession;
	IGDirectMenuController* _menuController;
	NSArray* _recipientUsers;
	NSMutableArray* _directSaveMediaObservers;
	IGUser* _threadViewer;
	NSArray* _allContent;
	IGDirectThreadCellFactory* _cellFactory;
	IGDirectThreadCellExpansionAnimator* _expansionAnimator;
	IGDirectThreadLayout* _layout;
	float _bottomInsetY;
	UIBarButtonItem* _infoIcon;
	UIBarButtonItem* _nextButton;
	IGDirectContent* _menuControllerItem;
	IGDirectPendingRequestButtons* _pendingRequestButtons;
	IGDirectGroupNamingViewController* _groupNamingVC;
	IGDirectDebuggingViewController* _debuggingVC;
	IGDirectContent* _playingContent;
	UIView* _threadInputView;
	UIView* _keyboardView;
	IGProfilePictureImageView* _unseenMessageProfilePicture;
	UIButton* _unseenMessageButton;
	float _unseenMessageWidth;
	float _unseenMessageHeight;
	IGQuickCamViewController* _quickCamViewController;
	IGQuickCamViewController2* _quickCamViewController2;
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
	IGAlertBar* _loadingAlertBar;
	IGFullScreenTransitioningManager* _mediaOverlayTransitionManager;
	IGDirectContentExpandableCell* _expandedCell;
	NSNumber* _distanceToBottomToKeep;
	NSNotification* _deferredThreadUpdatedNotification;
	IGDirectUIPerfLogProxy* _perfLogProxy;
	IGDirectThreadAnalyticsLogger* _analyticsLogger;
	IGDirectThreadDataTransformer* _threadTransformer;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                 //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGDirectMenuController * menuController;                                       //@synthesize menuController=_menuController - In the implementation block
@property (nonatomic,retain) NSArray * recipientUsers;                                                      //@synthesize recipientUsers=_recipientUsers - In the implementation block
@property (nonatomic,retain) NSMutableArray * directSaveMediaObservers;                                     //@synthesize directSaveMediaObservers=_directSaveMediaObservers - In the implementation block
@property (nonatomic,retain) IGUser * threadViewer;                                                         //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) NSArray * allContent;                                                          //@synthesize allContent=_allContent - In the implementation block
@property (nonatomic,retain) IGDirectThreadCellFactory * cellFactory;                                       //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) IGDirectThreadCellExpansionAnimator * expansionAnimator;                       //@synthesize expansionAnimator=_expansionAnimator - In the implementation block
@property (nonatomic,retain) IGDirectThreadLayout * layout;                                                 //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) float bottomInsetY;                                                            //@synthesize bottomInsetY=_bottomInsetY - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * infoIcon;                                                    //@synthesize infoIcon=_infoIcon - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                                  //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGDirectContent * menuControllerItem;                                          //@synthesize menuControllerItem=_menuControllerItem - In the implementation block
@property (assign,nonatomic) char loadingPreviousMessages;                                                  //@synthesize loadingPreviousMessages=_loadingPreviousMessages - In the implementation block
@property (nonatomic,retain) IGDirectPendingRequestButtons * pendingRequestButtons;                         //@synthesize pendingRequestButtons=_pendingRequestButtons - In the implementation block
@property (nonatomic,retain) IGDirectGroupNamingViewController * groupNamingVC;                             //@synthesize groupNamingVC=_groupNamingVC - In the implementation block
@property (nonatomic,retain) IGDirectDebuggingViewController * debuggingVC;                                 //@synthesize debuggingVC=_debuggingVC - In the implementation block
@property (nonatomic,retain) IGDirectContent * playingContent;                                              //@synthesize playingContent=_playingContent - In the implementation block
@property (nonatomic,retain) UIView * threadInputView;                                                      //@synthesize threadInputView=_threadInputView - In the implementation block
@property (nonatomic,retain) UIView * keyboardView;                                                         //@synthesize keyboardView=_keyboardView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * unseenMessageProfilePicture;                       //@synthesize unseenMessageProfilePicture=_unseenMessageProfilePicture - In the implementation block
@property (nonatomic,retain) UIButton * unseenMessageButton;                                                //@synthesize unseenMessageButton=_unseenMessageButton - In the implementation block
@property (assign,nonatomic) float unseenMessageWidth;                                                      //@synthesize unseenMessageWidth=_unseenMessageWidth - In the implementation block
@property (assign,nonatomic) float unseenMessageHeight;                                                     //@synthesize unseenMessageHeight=_unseenMessageHeight - In the implementation block
@property (assign,nonatomic) char unseenMessageVisible;                                                     //@synthesize unseenMessageVisible=_unseenMessageVisible - In the implementation block
@property (nonatomic,retain) IGQuickCamViewController * quickCamViewController;                             //@synthesize quickCamViewController=_quickCamViewController - In the implementation block
@property (nonatomic,retain) IGQuickCamViewController2 * quickCamViewController2;                           //@synthesize quickCamViewController2=_quickCamViewController2 - In the implementation block
@property (nonatomic,retain) IGDirectContent * lastUnseenContent;                                           //@synthesize lastUnseenContent=_lastUnseenContent - In the implementation block
@property (nonatomic,retain) IGDirectContent * lastSeenContent;                                             //@synthesize lastSeenContent=_lastSeenContent - In the implementation block
@property (nonatomic,retain) IGDirectShareManager * shareManager;                                           //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                                                     //@synthesize tokenField=_tokenField - In the implementation block
@property (assign,nonatomic) float visibleKeyboardHeight;                                                   //@synthesize visibleKeyboardHeight=_visibleKeyboardHeight - In the implementation block
@property (assign,nonatomic) int keyboardState;                                                             //@synthesize keyboardState=_keyboardState - In the implementation block
@property (assign,nonatomic) int priorKeyboardState;                                                        //@synthesize priorKeyboardState=_priorKeyboardState - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;                                         //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) IGDirectKeyboardTextViewController * textViewController;                       //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * timestampPanRecognizer;                               //@synthesize timestampPanRecognizer=_timestampPanRecognizer - In the implementation block
@property (nonatomic,retain) IGAlertBar * loadingAlertBar;                                                  //@synthesize loadingAlertBar=_loadingAlertBar - In the implementation block
@property (assign,nonatomic) char isLoadingForFirstTime;                                                    //@synthesize isLoadingForFirstTime=_isLoadingForFirstTime - In the implementation block
@property (nonatomic,retain) IGFullScreenTransitioningManager * mediaOverlayTransitionManager;              //@synthesize mediaOverlayTransitionManager=_mediaOverlayTransitionManager - In the implementation block
@property (nonatomic,retain) IGDirectContentExpandableCell * expandedCell;                                  //@synthesize expandedCell=_expandedCell - In the implementation block
@property (nonatomic,retain) NSNumber * distanceToBottomToKeep;                                             //@synthesize distanceToBottomToKeep=_distanceToBottomToKeep - In the implementation block
@property (assign,nonatomic) char shouldScrollToBottomAfterContentSizeChange;                               //@synthesize shouldScrollToBottomAfterContentSizeChange=_shouldScrollToBottomAfterContentSizeChange - In the implementation block
@property (assign,nonatomic) char shouldAnimateScrollingToBottom;                                           //@synthesize shouldAnimateScrollingToBottom=_shouldAnimateScrollingToBottom - In the implementation block
@property (nonatomic,retain) NSNotification * deferredThreadUpdatedNotification;                            //@synthesize deferredThreadUpdatedNotification=_deferredThreadUpdatedNotification - In the implementation block
@property (nonatomic,retain) IGDirectUIPerfLogProxy * perfLogProxy;                                         //@synthesize perfLogProxy=_perfLogProxy - In the implementation block
@property (nonatomic,readonly) IGDirectThreadAnalyticsLogger * analyticsLogger;                             //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,retain) IGDirectThreadDataTransformer * threadTransformer;                             //@synthesize threadTransformer=_threadTransformer - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraNavigationController;                     //@synthesize cameraNavigationController=_cameraNavigationController - In the implementation block
@property (assign,nonatomic) int state;                                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingThreadViewDelegate> pendingDelegate;                  //@synthesize pendingDelegate=_pendingDelegate - In the implementation block
@property (nonatomic,retain) NSNumber * position;                                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char didComeFromPushNotif;                                                     //@synthesize didComeFromPushNotif=_didComeFromPushNotif - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UICollectionView * collectionView;                                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThread * thread;                                                       //@synthesize thread=_thread - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID;                                                    //@synthesize threadID=_threadID - In the implementation block
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)scrollToBottomAnimated:(char)arg1 ;
-(void)postToFeed:(id)arg1 ;
-(NSArray *)allContent;
-(id)initWithThreadID:(id)arg1 userSession:(id)arg2 ;
-(IGDirectThreadAnalyticsLogger *)analyticsLogger;
-(IGDirectUIPerfLogProxy *)perfLogProxy;
-(void)threadUpdated:(id)arg1 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(void)setPerfLogProxy:(IGDirectUIPerfLogProxy *)arg1 ;
-(void)setPendingDelegate:(id<IGDirectPendingThreadViewDelegate>)arg1 ;
-(void)pendingRequestButtonDidDenyThread:(id)arg1 ;
-(void)pendingRequestButtonDidAllowThread:(id)arg1 ;
-(UIEdgeInsets)contentInsetsForManager:(id)arg1 ;
-(id)currentQueryForManager:(id)arg1 ;
-(id)recipientsForManager:(id)arg1 ;
-(char)manager:(id)arg1 wantsToSelectUser:(id)arg2 ;
-(void)directContentUploadCell:(id)arg1 wantsRetryForContent:(id)arg2 ;
-(void)directContentUploadCell:(id)arg1 wantsDeleteForContent:(id)arg2 ;
-(void)quickCamViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)quickCamViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)quickCamViewControllerLibraryDidLoad:(id)arg1 ;
-(void)quickCamViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)tokenFieldWillBeginEditing:(id)arg1 ;
-(void)contentCell:(id)arg1 profilePictureWasTappedWithUser:(id)arg2 ;
-(char)contentCellShouldLongPress:(id)arg1 ;
-(void)contentCellDidLongPress:(id)arg1 ;
-(void)contentCell:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)seenStampFooterView:(id)arg1 wantsExpansion:(char)arg2 fromHeight:(float)arg3 toHeight:(float)arg4 ;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(void)didTapCloseButtonForViewControllerDidBeginEditing:(id)arg1 ;
-(void)groupNamingViewControllerDidBeginEditing:(id)arg1 ;
-(void)changeToValidatedThreadName:(id)arg1 groupNamingViewController:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 didTapSendWithText:(id)arg2 ;
-(void)keyboardTextViewControllerDidTapCamera:(id)arg1 ;
-(void)keyboardTextViewControllerDidTapLike:(id)arg1 ;
-(void)keyboardTextViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2 ;
-(char)keyboardTextViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)keyboardTextViewController:(id)arg1 textViewWillBeginEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 textViewDidBeginEditing:(id)arg2 ;
-(void)keyboardTextViewController:(id)arg1 textViewDidEndEditing:(id)arg2 ;
-(void)keyboardTextViewControllerDidDismissCamera:(id)arg1 ;
-(void)keyboardTextViewControllerDidTapCameraBackButton:(id)arg1 ;
-(void)keyboardTextViewController:(id)arg1 showSelectAlbumController:(char)arg2 ;
-(void)unsend:(id)arg1 ;
-(void)flag:(id)arg1 ;
-(void)unlike:(id)arg1 ;
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1 ;
-(IGUser *)threadViewer;
-(NSMutableArray *)directSaveMediaObservers;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)setDirectSaveMediaObservers:(NSMutableArray *)arg1 ;
-(void)didReceiveDoubleTapForContent:(id)arg1 ;
-(void)threadInfoViewController:(id)arg1 didHideThread:(id)arg2 ;
-(void)threadInfoViewController:(id)arg1 didRenameThreadWithID:(id)arg2 toName:(id)arg3 ;
-(void)setAllContent:(NSArray *)arg1 ;
-(char)useFullSizePhotos;
-(void)onCollectionViewScroll:(id)arg1 ;
-(void)setThreadTransformer:(IGDirectThreadDataTransformer *)arg1 ;
-(void)initializeThreadComponents;
-(void)quickCamLibraryAlbumUpdated;
-(IGQuickCamViewController *)quickCamViewController;
-(char)updateLastSeenContent;
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
-(UIPanGestureRecognizer *)timestampPanRecognizer;
-(void)onInteractivePan:(id)arg1 ;
-(void)setPendingRequestButtons:(IGDirectPendingRequestButtons *)arg1 ;
-(IGDirectPendingRequestButtons *)pendingRequestButtons;
-(float)bottomInsetYWhenKeyboardIsDismissed;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 ;
-(void)sendSeenTimestampForContent:(id)arg1 ;
-(void)updateLocalThread:(id)arg1 ;
-(void)onDidBecomeActive;
-(void)didTapOnPushNotification:(id)arg1 ;
-(id)recipientForCurrentState;
-(void)showGroupNamingBar;
-(void)hideGroupNamingBar;
-(void)onDirectPosted:(id)arg1 ;
-(int)decodedImageCacheCostLimit;
-(char)isLoadingForFirstTime;
-(void)updateTopInsets;
-(void)setVisibleKeyboardHeight:(float)arg1 ;
-(void)closeQuickCamInBackground;
-(void)setThreadInputView:(UIView *)arg1 ;
-(char)didComeFromPushNotif;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 shouldAnimateScrollingToBottom:(char)arg3 showLoadingIndicator:(char)arg4 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)setShouldScrollToBottomAfterContentSizeChange:(char)arg1 ;
-(void)setShouldAnimateScrollingToBottom:(char)arg1 ;
-(char)loadingPreviousMessages;
-(void)setLoadingPreviousMessages:(char)arg1 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 keepVisiblePosition:(char)arg3 ;
-(void)setIsLoadingForFirstTime:(char)arg1 ;
-(void)renderThreadWithThreadID:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 keepVisiblePosition:(char)arg3 forceUpdate:(char)arg4 ;
-(void)updateThreadAndTitleWithThreadID:(id)arg1 ;
-(IGDirectThreadDataTransformer *)threadTransformer;
-(void)setDistanceToBottomToKeep:(NSNumber *)arg1 ;
-(void)updateNewMessageIndicator;
-(IGFullScreenTransitioningManager *)mediaOverlayTransitionManager;
-(NSArray *)recipientUsers;
-(float)offSetYWhenScrolledToBottom;
-(void)updateQuickCamViewFrameForBottimInsetY:(float)arg1 ;
-(void)updateCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(IGDirectGroupNamingViewController *)groupNamingVC;
-(void)handleSendWithSuccess:(char)arg1 andResponse:(id)arg2 ;
-(void)updateFromSend;
-(IGDirectThreadCellFactory *)cellFactory;
-(IGDirectContent *)playingContent;
-(id)indexPathForPlayingContent:(id)arg1 ;
-(void)setPlayingContent:(IGDirectContent *)arg1 ;
-(IGDirectThreadCellExpansionAnimator *)expansionAnimator;
-(char)mediaExpandsFullscreen;
-(void)browseContentInOverlay:(id)arg1 sourceCell:(id)arg2 ;
-(char)shouldScrollToBottomAfterContentSizeChange;
-(NSNotification *)deferredThreadUpdatedNotification;
-(void)setDeferredThreadUpdatedNotification:(NSNotification *)arg1 ;
-(void)configureSeenStamp:(id)arg1 ;
-(void)setExpandedCell:(IGDirectContentExpandableCell *)arg1 ;
-(void)setMediaOverlayTransitionManager:(IGFullScreenTransitioningManager *)arg1 ;
-(IGDirectContentExpandableCell *)expandedCell;
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
-(void)sendTextFromTextViewController:(id)arg1 ;
-(void)loadThreadWithID:(id)arg1 performNetworkRefresh:(char)arg2 ;
-(void)showQuickCam:(char)arg1 ;
-(float)visibleKeyboardHeight;
-(IGQuickCamViewController2 *)quickCamViewController2;
-(void)setQuickCamViewController2:(IGQuickCamViewController2 *)arg1 ;
-(void)setQuickCamViewController:(IGQuickCamViewController *)arg1 ;
-(void)onQuickCamInteractivePan:(id)arg1 ;
-(void)setPriorKeyboardState:(int)arg1 ;
-(int)priorKeyboardState;
-(float)textViewHeight;
-(char)users:(id)arg1 matchUsersInThread:(id)arg2 ;
-(void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)onInteractivePanGesture:(id)arg1 suggestedTextViewControllerTopY:(float)arg2 shouldCompensateScroll:(char)arg3 ;
-(UIView *)threadInputView;
-(void)finishShowingThreadInputViewIfNeeded:(char)arg1 ;
-(void)finishHidingThreadInputViewIfNeeded:(char)arg1 ;
-(CGRect)adjustedThreadInputViewFrameForRawFrame:(CGRect)arg1 ;
-(void)reallyFinishHidingThreadInputView;
-(void)reallyFinishShowingThreadInputView;
-(id<IGDirectPendingThreadViewDelegate>)pendingDelegate;
-(UIBarButtonItem *)infoIcon;
-(void)updateSeenUsers;
-(id)currentThreadTitle;
-(void)collectionViewDidScrollFromYPosition:(float)arg1 toYPosition:(float)arg2 ;
-(NSNumber *)distanceToBottomToKeep;
-(char)shouldAnimateScrollingToBottom;
-(void)loadPreviousMessages;
-(void)setLastSeenContent:(IGDirectContent *)arg1 ;
-(void)setRecipientUsers:(NSArray *)arg1 ;
-(void)composerSetTextViewControllerVisibility;
-(void)composerPreloadThread;
-(void)setGroupNamingVC:(IGDirectGroupNamingViewController *)arg1 ;
-(void)dismissOverlayVC;
-(void)onTimestampPan:(id)arg1 ;
-(void)setMenuController:(IGDirectMenuController *)arg1 ;
-(IGDirectContent *)menuControllerItem;
-(void)setMenuControllerItem:(IGDirectContent *)arg1 ;
-(IGDirectDebuggingViewController *)debuggingVC;
-(void)setDebuggingVC:(IGDirectDebuggingViewController *)arg1 ;
-(void)setUnseenMessageProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(void)setUnseenMessageButton:(UIButton *)arg1 ;
-(IGDirectContent *)lastUnseenContent;
-(void)setTimestampPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(char)disableNonEdgeNavigationGesture;
-(IGDirectKeyboardTextViewController *)textViewController;
-(void)setTextViewController:(IGDirectKeyboardTextViewController *)arg1 ;
-(void)setDidComeFromPushNotif:(char)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)updateBottomInsetY:(float)arg1 ;
-(UIView *)keyboardView;
-(float)bottomInsetY;
-(void)setBottomInsetY:(float)arg1 ;
-(void)setKeyboardView:(UIView *)arg1 ;
-(void)sneakinglyEndEditingIfNeeded;
-(FBKeyboardObserver *)keyboardObserver;
-(void)didTapMediaOverlay:(id)arg1 ;
-(void)didEndDraggingMediaOverlay:(id)arg1 mediaCenter:(CGPoint)arg2 ;
-(IGDirectShareManager *)shareManager;
-(void)setShareManager:(IGDirectShareManager *)arg1 ;
-(void)postUpdated:(id)arg1 ;
-(id)initWithUsers:(id)arg1 userSession:(id)arg2 ;
-(void)setCameraNavigationController:(IGCameraNavigationController *)arg1 ;
-(IGCameraNavigationController *)cameraNavigationController;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(IGDirectMenuController *)menuController;
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
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setPosition:(NSNumber *)arg1 ;
-(char)canBecomeFirstResponder;
-(NSNumber *)position;
-(void)viewDidLayoutSubviews;
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
-(void)save:(id)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(IGUserSession *)userSession;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
-(NSString *)threadID;
-(void)updateNextButton;
-(char)prefersNavigationBarHidden;
-(void)refresh;
-(int)keyboardState;
-(void)setKeyboardState:(int)arg1 ;
@end

