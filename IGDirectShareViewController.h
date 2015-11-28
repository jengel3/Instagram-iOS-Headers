
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGDirectGrowingMessageTextViewDelegate.h>

@class NSArray, UICollectionView, UIView, IGDynamics1D, UIButton, UILabel, UITextField, IGUserListNetworkDataSource, IGUserListLocalDataSource, IGDirectGrowingMessageTextView, NSSet, IGDirectThread, UITextView, NSString;

@interface IGDirectShareViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, IGUserListNetworkDataSourceDelegate, UIViewControllerTransitioningDelegate, IGDirectGrowingMessageTextViewDelegate> {

	char _loadingResults;
	NSArray* _inbox;
	NSArray* _suggestedUsers;
	UICollectionView* _collectionView;
	UIView* _overlayView;
	IGDynamics1D* _messageSpring;
	UIButton* _bottomButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned _shareState;
	UIButton* _searchButton;
	UIView* _contentContainerView;
	UITextField* _searchBar;
	IGUserListNetworkDataSource* _networkDataSource;
	IGUserListLocalDataSource* _localDataSource;
	NSArray* _searchResults;
	NSArray* _selectedSearchUsers;
	UIView* _topLine;
	IGDirectGrowingMessageTextView* _messageView;
	UIButton* _searchBarClearButton;
	NSSet* _recipientUsers;
	IGDirectThread* _recipientThread;
	UITextView* _warningLabel;
	UIView* _warningLine;
	NSString* _analyticsSession;
	CGRect _keyboardFrame;

}

@property (nonatomic,retain) NSArray * inbox;                                              //@synthesize inbox=_inbox - In the implementation block
@property (nonatomic,retain) NSArray * suggestedUsers;                                     //@synthesize suggestedUsers=_suggestedUsers - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                         //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic,__weak) IGDynamics1D * messageSpring;                          //@synthesize messageSpring=_messageSpring - In the implementation block
@property (nonatomic,retain) UIButton * bottomButton;                                      //@synthesize bottomButton=_bottomButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) unsigned shareState;                                          //@synthesize shareState=_shareState - In the implementation block
@property (nonatomic,retain) UIButton * searchButton;                                      //@synthesize searchButton=_searchButton - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                                //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UITextField * searchBar;                                      //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) IGUserListNetworkDataSource * networkDataSource;              //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (nonatomic,retain) IGUserListLocalDataSource * localDataSource;                  //@synthesize localDataSource=_localDataSource - In the implementation block
@property (nonatomic,retain) NSArray * searchResults;                                      //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSArray * selectedSearchUsers;                                //@synthesize selectedSearchUsers=_selectedSearchUsers - In the implementation block
@property (assign,nonatomic) char loadingResults;                                          //@synthesize loadingResults=_loadingResults - In the implementation block
@property (nonatomic,retain) UIView * topLine;                                             //@synthesize topLine=_topLine - In the implementation block
@property (nonatomic,retain) IGDirectGrowingMessageTextView * messageView;                 //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UIButton * searchBarClearButton;                              //@synthesize searchBarClearButton=_searchBarClearButton - In the implementation block
@property (nonatomic,retain) NSSet * recipientUsers;                                       //@synthesize recipientUsers=_recipientUsers - In the implementation block
@property (nonatomic,retain) IGDirectThread * recipientThread;                             //@synthesize recipientThread=_recipientThread - In the implementation block
@property (nonatomic,retain) UITextView * warningLabel;                                    //@synthesize warningLabel=_warningLabel - In the implementation block
@property (nonatomic,retain) UIView * warningLine;                                         //@synthesize warningLine=_warningLine - In the implementation block
@property (nonatomic,copy) NSString * analyticsSession;                                    //@synthesize analyticsSession=_analyticsSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleSuccessfulResponse:(id)arg1 ;
-(void)setNetworkDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(UIView *)topLine;
-(void)setTopLine:(UIView *)arg1 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)messageViewClearButtonTappedWhileNoText:(id)arg1 ;
-(void)messageView:(id)arg1 didUpdateToHeight:(float)arg2 ;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)warningMessage;
-(void)layoutViewsFirstTime;
-(void)updateViewsFromShareState:(unsigned)arg1 toShareState:(unsigned)arg2 animated:(char)arg3 ;
-(NSSet *)recipientUsers;
-(IGDirectThread *)recipientThread;
-(IGDirectGrowingMessageTextView *)messageView;
-(UIView *)warningLine;
-(UIButton *)searchButton;
-(UIButton *)searchBarClearButton;
-(UIButton *)bottomButton;
-(void)searchBarClearButtonTapped;
-(void)handleNewQueryString:(id)arg1 ;
-(void)setSearchBarClearButtonAlpha:(float)arg1 ;
-(void)onOverlayTapped;
-(void)contentContainerSwipedDown:(id)arg1 ;
-(void)onBottomButtonTapped;
-(void)onSearchButtonTapped;
-(void)handleTotalDeselection;
-(id)shareTitleString;
-(void)updateMessageViewToVisible:(char)arg1 animated:(char)arg2 ;
-(id)subtitleStringForCurrentRecipients;
-(void)handleSend;
-(id)recipientFromSetOfRecipients:(id)arg1 ;
-(IGDynamics1D *)messageSpring;
-(float)bottomOfFrame;
-(void)setMessageSpring:(IGDynamics1D *)arg1 ;
-(void)updateMessageViewToHeight:(float)arg1 toVisible:(char)arg2 animated:(char)arg3 ;
-(char)loadingResults;
-(void)handleFirstSelectionAtIndexPath:(id)arg1 ;
-(void)handleUserSelectionFromSearchAtIndexPath:(id)arg1 ;
-(id)usersAtIndexPath:(id)arg1 ;
-(void)setRecipientUsers:(NSSet *)arg1 ;
-(void)handleAdditionalSingleUserSelectionAtIndexPath:(id)arg1 ;
-(void)setRecipientThread:(IGDirectThread *)arg1 ;
-(NSArray *)selectedSearchUsers;
-(void)setSelectedSearchUsers:(NSArray *)arg1 ;
-(NSArray *)inbox;
-(void)setInbox:(NSArray *)arg1 ;
-(void)greyOutVisibleMultiUserThreads;
-(NSArray *)suggestedUsers;
-(void)setLoadingResults:(char)arg1 ;
-(IGUserListNetworkDataSource *)networkDataSource;
-(void)showView;
-(float)contentContainerContractedViewHeight;
-(id)inboxRecipients;
-(NSString *)analyticsSession;
-(void)setSuggestedUsers:(NSArray *)arg1 ;
-(void)setBottomButton:(UIButton *)arg1 ;
-(void)setSearchButton:(UIButton *)arg1 ;
-(void)setMessageView:(IGDirectGrowingMessageTextView *)arg1 ;
-(void)setSearchBarClearButton:(UIButton *)arg1 ;
-(void)setWarningLine:(UIView *)arg1 ;
-(void)setAnalyticsSession:(NSString *)arg1 ;
-(UIView *)contentContainerView;
-(void)dealloc;
-(id)init;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(int)preferredStatusBarStyle;
-(id)currentText;
-(UILabel *)titleLabel;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UITextField *)searchBar;
-(void)send;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setSearchBar:(UITextField *)arg1 ;
-(UITextView *)warningLabel;
-(void)setWarningLabel:(UITextView *)arg1 ;
-(IGUserListLocalDataSource *)localDataSource;
-(void)setLocalDataSource:(IGUserListLocalDataSource *)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(CGRect)keyboardFrame;
-(unsigned)shareState;
-(void)setShareState:(unsigned)arg1 ;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

